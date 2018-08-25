#include "FilterVoice.h"
#include "../Common/ProperiesRegistry.h"
#include "../Common/Toolbox.h"

#include <cmath>
CFilterVoice::CFilterVoice(const std::string & name, IVoiceModuleHost & host, IVoltageController& cutoffEnvelope)
	: CVoiceModuleBase(name, host)
	, mCutoffEnvelope(cutoffEnvelope)
{
	mFilter.Reset(GetSampleRate());
	mCutoffDelay.Reset(GetSampleRate(), 0.1);
}
void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	

	mFilter.SetParams(mCutoffFreq, mQ);
	
	StartSound();
}

void CFilterVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	
	StopSound();
}

void CFilterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;
	

	auto& freqEnvelope = mCutoffEnvelope.GetVoltageBuffer();
	
	while (--samplesCount >= 0) {

		const double freqEnvelopeVal = freqEnvelope.getSample(0, currentSample)*mEnvelopeScale;
		const double currentCutoff = mCutoffFreq + std::abs(mEnvelopeScale > 0 ? mCutoffFreqMax : mCutoffFreqMin - mCutoffFreq)*freqEnvelopeVal;
		const double cutoff = mCutoffDelay.Next(currentCutoff);

		mFilter.SetParams(cutoff, mQ);

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			double res = outputBuffer.getSample(i, currentSample);

			res = mFilter.Next(res);
			outputBuffer.setSample(i, currentSample, res);
		}
		currentSample++;
	}
}

void CFilterVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("CutoffFreq"), new CPropertyDouble01(mCutoffFreq, mCutoffFreqMin, mCutoffFreqMax));
	registry.AddProperty(GetPropName("Q"), new CPropertyDouble01(mQ, 0.6, 5.0));
	registry.AddProperty(GetPropName("EnvelopeScale"), new CPropertyDouble01(mEnvelopeScale, -1.0, 1.0));
}

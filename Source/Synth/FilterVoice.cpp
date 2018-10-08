#include "FilterVoice.h"
#include "../Common/ProperiesRegistry.h"
#include "../Common/Toolbox.h"

#include <cmath>
CFilterVoice::CFilterVoice(const std::string & name, IVoiceModuleHost & host, IVoltageController& cutoffEnvelope)
	: CVoiceModuleBase(name, host)
	, mCutoffEnvelope(cutoffEnvelope)
{
	
	mCutoffDelay.Reset(GetSampleRate(), 0.1);
}
void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	
	for (auto& filter : mFilter) {
		filter.SetParams(mCutoffFreq, mQ);
	}
	
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
	
	if (mFilter.size() < outputBuffer.getNumChannels()) {
		mFilter.resize(outputBuffer.getNumChannels());
		for (auto& filter : mFilter) {
			filter.Reset(GetSampleRate());
			filter.SetParams(mCutoffFreq, mQ);
		}
	}

	
	const float halfRange = mCutoffFreqMax - mCutoffFreqMin;
	while (--samplesCount >= 0) {

		const double freqEnvelopeVal = mCutoffEnvelope.GetValue(currentSample)*mEnvelopeScale;
		const double lfoCutoff = mCutoffLfo->GetValue(currentSample)*halfRange;
		const double currentCutoff = mCutoffFreq 
			+std::abs(mEnvelopeScale > 0 ? mCutoffFreqMax : mCutoffFreqMin - mCutoffFreq)*freqEnvelopeVal
			+lfoCutoff;
		const double cutoff = mCutoffDelay.Next(currentCutoff);


		

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {

			mFilter[i].SetParams(cutoff, mQ);

			double res = outputBuffer.getSample(i, currentSample);

			res = mFilter[i].Next(res);
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

#include "SquareWaveVoice.h"

CSquareWaveVoice::CSquareWaveVoice(const std::string& name, IVoiceModuleHost& host, float freqRate, float volume)
	: CVoiceModuleBase(name, host)
	, mFreqRate(freqRate)
	, mVolume(volume)
{
}

void CSquareWaveVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	auto cyclesPerSecond = mFreqRate * MidiMessage::getMidiNoteInHertz(midiNoteNumber);
	mSamplesPerCycle = GetSampleRate() / cyclesPerSecond;
	mSampleCounter = 0;

	StartSound();
}

void CSquareWaveVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	StopSound();

}

void CSquareWaveVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;


	while (--samplesCount >= 0) {

		mSampleCounter++;
		if (mSampleCounter >= mSamplesPerCycle) {
			mSampleCounter = 0;
		}

		float output = mSampleCounter / mSamplesPerCycle > 0.5 ? mVolume : -mVolume;

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			outputBuffer.addSample(i, currentSample, output);
		}
		currentSample++;
	}
}

void CSquareWaveVoice::InitProperties(CPropertiesRegistry & registry)
{
}

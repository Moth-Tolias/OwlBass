
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "../DSP/DSPDelay.h"

class CSquareWaveVoice : public CVoiceModuleBase
{
public:
	CSquareWaveVoice(const std::string& name, IVoiceModuleHost& host, float freqRate, float volume);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	double mFreqRate = 1;
	double mVolume = 1;
	double mSamplesPerCycle;
	double mSampleCounter = 0;

	CDSPDelay mDelay;

	// Inherited via CVoiceModuleBase
	
};
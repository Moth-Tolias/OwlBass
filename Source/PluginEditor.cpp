/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "Synth/FourierProbeVoice.h"
#include "VSTComponents/OwlUI/IIndicator.h"

//==============================================================================
AdditiveVstAudioProcessorEditor::AdditiveVstAudioProcessorEditor (AdditiveVstAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (1020, 668);


	addAndMakeVisible(mGui);
	mGui.SetListener(this);
	mRegistryListenerHandle = processor.GetPropertiesRegistry().AddListener(*this);
	OnPropertiesFromSynthState();
	
	for (auto element : mGui.getChildren()) {
		IIndicator* indicator = dynamic_cast<IIndicator*>(element);
		if (indicator) {
			indicator->SetPropertiesRegistry(processor.GetPropertiesRegistry());
		}
	}
	//auto voiceForBode = processor.GetModuleByName("FourierProbe");
	//if (voiceForBode) {
	//	mGui.GetBodePlot().SetVoiceModule((CFourierProbeVoice&)*voiceForBode);
	//}
}

AdditiveVstAudioProcessorEditor::~AdditiveVstAudioProcessorEditor()
{
}

//==============================================================================
void AdditiveVstAudioProcessorEditor::paint(Graphics& g)
{


}

void AdditiveVstAudioProcessorEditor::resized()
{
	
}

void AdditiveVstAudioProcessorEditor::OnValueChanged(const std::string & name, float value)
{
	processor.GetPropertiesRegistry().SetProperty(name, value);
}

void AdditiveVstAudioProcessorEditor::OnPropertiesFromSynthState()
{
	for (auto component : mGui.getChildren()) {
		Slider* slider = dynamic_cast<Slider*>(component);
		if (slider && processor.GetPropertiesRegistry().HasProperty(slider->getName().toStdString())) {
			slider->setValue(processor.GetPropertiesRegistry().GetPropertyValueFromReference(slider->getName().toStdString()));
		}
	}
}

void AdditiveVstAudioProcessorEditor::OnLoadPreset(const std::string & filePath)
{
	File file(filePath);
	MemoryBlock state;
	if (file.loadFileAsData(state)) {
		processor.setStateInformation(state.getData(), state.getSize());
	}
}



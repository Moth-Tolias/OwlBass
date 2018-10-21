/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
class CFourierProbeVoice;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class BodePlot  : public Component
{
public:
    //==============================================================================
    BodePlot ();
    ~BodePlot();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void SetVoiceModule(CFourierProbeVoice& voice);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	juce::Path mBodePath;
	CFourierProbeVoice* mFourierProbe = nullptr;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BodePlot)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

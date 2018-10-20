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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MainSynthGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainSynthGui::MainSynthGui ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	setLookAndFeel(&mLookAndFeel);
    //[/Constructor_pre]

    slider2.reset (new Slider ("ADSRVol.Attack"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::LinearVertical);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (677, 257, 40, 148);

    slider3.reset (new Slider ("ADSRVol.Release"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 1, 0);
    slider3->setSliderStyle (Slider::LinearVertical);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (769, 257, 40, 148);

    label.reset (new Label ("new label",
                            TRANS("OSC")));
    addAndMakeVisible (label.get());
    label->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (24, 16, 128, 24);

    label2.reset (new Label ("new label",
                             TRANS("Filter")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (440, 16, 160, 24);

    label3.reset (new Label ("new label",
                             TRANS("Amplifier volume")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (674, 231, 168, 24);

    slider4.reset (new Slider ("OSC1.Volume"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 1, 0);
    slider4->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider4->addListener (this);

    slider4->setBounds (40, 56, 110, 110);

    slider5.reset (new Slider ("OSC2.Volume"));
    addAndMakeVisible (slider5.get());
    slider5->setRange (0, 1, 0);
    slider5->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider5->addListener (this);

    slider5->setBounds (40, 176, 110, 110);

    label4.reset (new Label ("new label",
                             TRANS("main")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font ("Verdana", 14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (8, 48, 56, 24);

    label5.reset (new Label ("new label",
                             TRANS("sub1")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (8, 168, 56, 24);

    slider6.reset (new Slider ("OSC3.Volume"));
    addAndMakeVisible (slider6.get());
    slider6->setRange (0, 1, 0);
    slider6->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider6->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider6->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider6->addListener (this);

    slider6->setBounds (40, 304, 110, 110);

    label6.reset (new Label ("new label",
                             TRANS("sub2")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (8, 296, 56, 24);

    slider7.reset (new Slider ("Filter.CutoffFreq"));
    addAndMakeVisible (slider7.get());
    slider7->setRange (0, 1, 0);
    slider7->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider7->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider7->addListener (this);

    slider7->setBounds (448, 56, 95, 95);

    label7.reset (new Label ("new label",
                             TRANS("cutoff")));
    addAndMakeVisible (label7.get());
    label7->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label7->setBounds (464, 144, 56, 24);

    slider8.reset (new Slider ("Filter.Q"));
    addAndMakeVisible (slider8.get());
    slider8->setRange (0, 1, 0);
    slider8->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider8->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider8->addListener (this);

    slider8->setBounds (571, 56, 95, 95);

    label8.reset (new Label ("new label",
                             TRANS("Q")));
    addAndMakeVisible (label8.get());
    label8->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label8->setBounds (587, 144, 56, 24);

    label9.reset (new Label ("new label",
                             TRANS("Filter cutoff")));
    addAndMakeVisible (label9.get());
    label9->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label9->setBounds (445, 231, 168, 24);

    slider10.reset (new Slider ("ADSRVol.Sustain"));
    addAndMakeVisible (slider10.get());
    slider10->setRange (0, 1, 0);
    slider10->setSliderStyle (Slider::LinearVertical);
    slider10->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider10->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider10->addListener (this);

    slider10->setBounds (723, 257, 40, 148);

    label10.reset (new Label ("new label",
                              TRANS("A")));
    addAndMakeVisible (label10.get());
    label10->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label10->setJustificationType (Justification::centred);
    label10->setEditable (false, false, false);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label10->setBounds (676, 403, 40, 24);

    label12.reset (new Label ("new label",
                              TRANS("S")));
    addAndMakeVisible (label12.get());
    label12->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label12->setJustificationType (Justification::centred);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label12->setBounds (723, 403, 40, 24);

    label13.reset (new Label ("new label",
                              TRANS("R")));
    addAndMakeVisible (label13.get());
    label13->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label13->setJustificationType (Justification::centred);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label13->setBounds (770, 403, 40, 24);

    slider11.reset (new Slider ("ADSRFilter.Attack"));
    addAndMakeVisible (slider11.get());
    slider11->setRange (0, 1, 0);
    slider11->setSliderStyle (Slider::LinearVertical);
    slider11->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider11->addListener (this);

    slider11->setBounds (442, 255, 40, 150);

    slider12.reset (new Slider ("ADSRFilter.Release"));
    addAndMakeVisible (slider12.get());
    slider12->setRange (0, 1, 0);
    slider12->setSliderStyle (Slider::LinearVertical);
    slider12->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider12->addListener (this);

    slider12->setBounds (532, 255, 40, 150);

    slider14.reset (new Slider ("ADSRFilter.Sustain"));
    addAndMakeVisible (slider14.get());
    slider14->setRange (0, 1, 0);
    slider14->setSliderStyle (Slider::LinearVertical);
    slider14->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider14->setColour (Slider::thumbColourId, Colour (0xff328f09));
    slider14->addListener (this);

    slider14->setBounds (487, 255, 40, 150);

    label14.reset (new Label ("new label",
                              TRANS("A")));
    addAndMakeVisible (label14.get());
    label14->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label14->setJustificationType (Justification::centred);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label14->setBounds (442, 401, 40, 24);

    label16.reset (new Label ("new label",
                              TRANS("S")));
    addAndMakeVisible (label16.get());
    label16->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label16->setJustificationType (Justification::centred);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label16->setBounds (487, 401, 40, 24);

    label17.reset (new Label ("new label",
                              TRANS("R")));
    addAndMakeVisible (label17.get());
    label17->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label17->setJustificationType (Justification::centred);
    label17->setEditable (false, false, false);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label17->setBounds (533, 401, 40, 24);

    slider15.reset (new Slider ("OSC1.Divider"));
    addAndMakeVisible (slider15.get());
    slider15->setTooltip (TRANS("switch;"));
    slider15->setRange (1, 4, 1);
    slider15->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider15->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider15->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider15->addListener (this);

    slider15->setBounds (168, 72, 95, 95);

    slider16.reset (new Slider ("OSC2.Divider"));
    addAndMakeVisible (slider16.get());
    slider16->setTooltip (TRANS("switch;"));
    slider16->setRange (1, 4, 1);
    slider16->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider16->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider16->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider16->addListener (this);

    slider16->setBounds (168, 192, 95, 95);

    slider17.reset (new Slider ("OSC3.Divider"));
    addAndMakeVisible (slider17.get());
    slider17->setTooltip (TRANS("switch;"));
    slider17->setRange (1, 4, 1);
    slider17->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider17->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider17->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider17->addListener (this);

    slider17->setBounds (168, 320, 95, 95);

    slider18.reset (new Slider ("OSC1.Waveform"));
    addAndMakeVisible (slider18.get());
    slider18->setTooltip (TRANS("switch;"));
    slider18->setRange (1, 3, 1);
    slider18->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider18->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider18->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider18->addListener (this);

    slider18->setBounds (288, 72, 95, 95);

    slider19.reset (new Slider ("OSC2.Waveform"));
    addAndMakeVisible (slider19.get());
    slider19->setTooltip (TRANS("switch;"));
    slider19->setRange (1, 3, 1);
    slider19->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider19->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider19->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider19->addListener (this);

    slider19->setBounds (288, 192, 95, 95);

    slider20.reset (new Slider ("OSC3.Waveform"));
    addAndMakeVisible (slider20.get());
    slider20->setTooltip (TRANS("switch;"));
    slider20->setRange (1, 3, 1);
    slider20->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider20->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider20->setColour (Slider::thumbColourId, Colours::cornflowerblue);
    slider20->addListener (this);

    slider20->setBounds (288, 320, 95, 95);

    slider9.reset (new Slider ("Filter.EnvelopeScale"));
    addAndMakeVisible (slider9.get());
    slider9->setRange (0, 1, 0);
    slider9->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider9->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider9->addListener (this);

    slider9->setBounds (686, 56, 95, 95);

    label11.reset (new Label ("new label",
                              TRANS("Envelope")));
    addAndMakeVisible (label11.get());
    label11->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label11->setJustificationType (Justification::centred);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label11->setBounds (702, 144, 72, 24);

    slider.reset (new Slider ("Delay.Wet"));
    addAndMakeVisible (slider.get());
    slider->setTooltip (TRANS("effect;"));
    slider->setRange (0, 1, 0);
    slider->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (272, 520, 95, 95);

    label15.reset (new Label ("new label",
                              TRANS("Delay\n")));
    addAndMakeVisible (label15.get());
    label15->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label15->setBounds (288, 496, 168, 24);

    label18.reset (new Label ("new label",
                              TRANS("wet")));
    addAndMakeVisible (label18.get());
    label18->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label18->setJustificationType (Justification::centred);
    label18->setEditable (false, false, false);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label18->setBounds (288, 608, 64, 24);

    slider13.reset (new Slider ("ReferenceOscillator.Detune"));
    addAndMakeVisible (slider13.get());
    slider13->setTooltip (TRANS("effect;"));
    slider13->setRange (0, 1, 0);
    slider13->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider13->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider13->addListener (this);

    slider13->setBounds (136, 520, 95, 95);

    label19.reset (new Label ("new label",
                              TRANS("detune")));
    addAndMakeVisible (label19.get());
    label19->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label19->setJustificationType (Justification::centred);
    label19->setEditable (false, false, false);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label19->setBounds (152, 608, 64, 24);

    slider21.reset (new Slider ("UnisonMixer.Volume"));
    addAndMakeVisible (slider21.get());
    slider21->setTooltip (TRANS("effect;"));
    slider21->setRange (0, 0.5, 0);
    slider21->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider21->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider21->addListener (this);

    slider21->setBounds (24, 520, 95, 95);

    label20.reset (new Label ("new label",
                              TRANS("volume")));
    addAndMakeVisible (label20.get());
    label20->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label20->setJustificationType (Justification::centred);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label20->setBounds (40, 608, 64, 24);

    slider22.reset (new Slider ("Delay.Delay"));
    addAndMakeVisible (slider22.get());
    slider22->setTooltip (TRANS("effect;"));
    slider22->setRange (0, 1, 0);
    slider22->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider22->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider22->addListener (this);

    slider22->setBounds (384, 520, 95, 95);

    label21.reset (new Label ("new label",
                              TRANS("time")));
    addAndMakeVisible (label21.get());
    label21->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label21->setJustificationType (Justification::centred);
    label21->setEditable (false, false, false);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label21->setBounds (400, 608, 64, 24);

    slider23.reset (new Slider ("Delay.Feedback"));
    addAndMakeVisible (slider23.get());
    slider23->setTooltip (TRANS("effect;"));
    slider23->setRange (0, 1, 0);
    slider23->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider23->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider23->addListener (this);

    slider23->setBounds (496, 520, 95, 95);

    label22.reset (new Label ("new label",
                              TRANS("feedback")));
    addAndMakeVisible (label22.get());
    label22->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label22->setJustificationType (Justification::centred);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label22->setBounds (512, 608, 64, 24);

    label23.reset (new Label ("new label",
                              TRANS("Unison")));
    addAndMakeVisible (label23.get());
    label23->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label23->setBounds (16, 496, 168, 24);

    label24.reset (new Label ("new label",
                              TRANS("retrigger")));
    addAndMakeVisible (label24.get());
    label24->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label24->setJustificationType (Justification::centred);
    label24->setEditable (false, false, false);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label24->setBounds (576, 400, 64, 24);

    label25.reset (new Label ("new label",
                              TRANS("Envelopes")));
    addAndMakeVisible (label25.get());
    label25->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label25->setJustificationType (Justification::centredLeft);
    label25->setEditable (false, false, false);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label25->setBounds (440, 187, 160, 32);

    slider25.reset (new Slider ("FilterCutoffLfo.Frequency"));
    addAndMakeVisible (slider25.get());
    slider25->setRange (0, 1, 0);
    slider25->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider25->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider25->addListener (this);

    slider25->setBounds (848, 56, 95, 95);

    slider26.reset (new Slider ("FilterCutoffLfo.Volume"));
    addAndMakeVisible (slider26.get());
    slider26->setRange (0, 1, 0);
    slider26->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider26->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider26->addListener (this);

    slider26->setBounds (848, 168, 95, 95);

    label26.reset (new Label ("new label",
                              TRANS("Filter LFO")));
    addAndMakeVisible (label26.get());
    label26->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label26->setJustificationType (Justification::centredLeft);
    label26->setEditable (false, false, false);
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label26->setBounds (824, 16, 160, 24);

    label27.reset (new Label ("new label",
                              TRANS("Frequency")));
    addAndMakeVisible (label27.get());
    label27->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label27->setJustificationType (Justification::centred);
    label27->setEditable (false, false, false);
    label27->setColour (TextEditor::textColourId, Colours::black);
    label27->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label27->setBounds (856, 144, 72, 24);

    label28.reset (new Label ("new label",
                              TRANS("Amount")));
    addAndMakeVisible (label28.get());
    label28->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label28->setJustificationType (Justification::centred);
    label28->setEditable (false, false, false);
    label28->setColour (TextEditor::textColourId, Colours::black);
    label28->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label28->setBounds (856, 256, 72, 24);

    slider27.reset (new Slider ("Limiter.Volume"));
    addAndMakeVisible (slider27.get());
    slider27->setTooltip (TRANS("effect;"));
    slider27->setRange (0, 1, 0);
    slider27->setSliderStyle (Slider::RotaryHorizontalDrag);
    slider27->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider27->addListener (this);

    slider27->setBounds (656, 520, 95, 95);

    label29.reset (new Label ("new label",
                              TRANS("volume")));
    addAndMakeVisible (label29.get());
    label29->setFont (Font (14.00f, Font::plain).withTypefaceStyle ("Regular"));
    label29->setJustificationType (Justification::centred);
    label29->setEditable (false, false, false);
    label29->setColour (TextEditor::textColourId, Colours::black);
    label29->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label29->setBounds (672, 608, 64, 24);

    label31.reset (new Label ("new label",
                              TRANS("Output")));
    addAndMakeVisible (label31.get());
    label31->setFont (Font (17.00f, Font::plain).withTypefaceStyle ("Regular"));
    label31->setJustificationType (Justification::centredLeft);
    label31->setEditable (false, false, false);
    label31->setColour (TextEditor::textColourId, Colours::black);
    label31->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label31->setBounds (672, 496, 168, 24);

    component.reset (new LevelIndicator());
    addAndMakeVisible (component.get());
    component->setName ("Limiter.LevelChannel0");

    component->setBounds (786, 546, 180, 8);

    component2.reset (new LevelIndicator());
    addAndMakeVisible (component2.get());
    component2->setName ("Limiter.LevelChannel1");

    component2->setBounds (786, 594, 180, 8);

    toggleButton.reset (new ToggleButton ("ADSRFilter.Retrigger"));
    addAndMakeVisible (toggleButton.get());
    toggleButton->setButtonText (String());
    toggleButton->addListener (this);

    toggleButton->setBounds (587, 357, 40, 40);

    openPresetBrowser.reset (new TextButton ("new button"));
    addAndMakeVisible (openPresetBrowser.get());
    openPresetBrowser->setButtonText (TRANS("unknown"));
    openPresetBrowser->addListener (this);
    openPresetBrowser->setColour (TextButton::buttonColourId, Colour (0x00a45c94));
    openPresetBrowser->setColour (TextButton::buttonOnColourId, Colour (0x00181f22));
    openPresetBrowser->setColour (TextButton::textColourOffId, Colour (0xff0d0d0d));
    openPresetBrowser->setColour (TextButton::textColourOnId, Colours::black);

    openPresetBrowser->setBounds (137, 445, 298, 24);

    mBtnPresetNext.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetNext.get());
    mBtnPresetNext->addListener (this);

    mBtnPresetNext->setBounds (560, 448, 88, 24);

    mBtnPresetPrev.reset (new TextButton ("Next"));
    addAndMakeVisible (mBtnPresetPrev.get());
    mBtnPresetPrev->setButtonText (TRANS("Previous"));
    mBtnPresetPrev->addListener (this);

    mBtnPresetPrev->setBounds (462, 448, 88, 24);

    cachedImage_case_main_png_1 = ImageCache::getFromMemory (case_main_png, case_main_pngSize);
    cachedImage_case_effects_png_2 = ImageCache::getFromMemory (case_effects_png, case_effects_pngSize);
    cachedImage_icon_triangle_png_3 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_4 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_5 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_6 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_7 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_8 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_icon_triangle_png_9 = ImageCache::getFromMemory (icon_triangle_png, icon_triangle_pngSize);
    cachedImage_icon_square_png_10 = ImageCache::getFromMemory (icon_square_png, icon_square_pngSize);
    cachedImage_icon_saw_png_11 = ImageCache::getFromMemory (icon_saw_png, icon_saw_pngSize);
    cachedImage_levelIndicator_png_12 = ImageCache::getFromMemory (levelIndicator_png, levelIndicator_pngSize);
    cachedImage_levelIndicator_png_13 = ImageCache::getFromMemory (levelIndicator_png, levelIndicator_pngSize);
    cachedImage_presetsPanel_png_14 = ImageCache::getFromMemory (presetsPanel_png, presetsPanel_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (1000, 640);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainSynthGui::~MainSynthGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	setLookAndFeel(nullptr);
    //[/Destructor_pre]

    slider2 = nullptr;
    slider3 = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    slider6 = nullptr;
    label6 = nullptr;
    slider7 = nullptr;
    label7 = nullptr;
    slider8 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    slider10 = nullptr;
    label10 = nullptr;
    label12 = nullptr;
    label13 = nullptr;
    slider11 = nullptr;
    slider12 = nullptr;
    slider14 = nullptr;
    label14 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    slider15 = nullptr;
    slider16 = nullptr;
    slider17 = nullptr;
    slider18 = nullptr;
    slider19 = nullptr;
    slider20 = nullptr;
    slider9 = nullptr;
    label11 = nullptr;
    slider = nullptr;
    label15 = nullptr;
    label18 = nullptr;
    slider13 = nullptr;
    label19 = nullptr;
    slider21 = nullptr;
    label20 = nullptr;
    slider22 = nullptr;
    label21 = nullptr;
    slider23 = nullptr;
    label22 = nullptr;
    label23 = nullptr;
    label24 = nullptr;
    label25 = nullptr;
    slider25 = nullptr;
    slider26 = nullptr;
    label26 = nullptr;
    label27 = nullptr;
    label28 = nullptr;
    slider27 = nullptr;
    label29 = nullptr;
    label31 = nullptr;
    component = nullptr;
    component2 = nullptr;
    toggleButton = nullptr;
    openPresetBrowser = nullptr;
    mBtnPresetNext = nullptr;
    mBtnPresetPrev = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainSynthGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 0, width = 1000, height = 640;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_case_main_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_case_main_png_1.getWidth(), cachedImage_case_main_png_1.getHeight());
    }

    {
        int x = -36, y = 452, width = 1072, height = 224;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_case_effects_png_2,
                     x, y, width, height,
                     0, 0, cachedImage_case_effects_png_2.getWidth(), cachedImage_case_effects_png_2.getHeight());
    }

    {
        int x = 324, y = 60, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_3,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_3.getWidth(), cachedImage_icon_triangle_png_3.getHeight());
    }

    {
        int x = 364, y = 148, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_4,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_4.getWidth(), cachedImage_icon_square_png_4.getHeight());
    }

    {
        int x = 284, y = 148, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_5,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_5.getWidth(), cachedImage_icon_saw_png_5.getHeight());
    }

    {
        int x = 324, y = 180, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_6,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_6.getWidth(), cachedImage_icon_triangle_png_6.getHeight());
    }

    {
        int x = 364, y = 268, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_7,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_7.getWidth(), cachedImage_icon_square_png_7.getHeight());
    }

    {
        int x = 284, y = 268, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_8,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_8.getWidth(), cachedImage_icon_saw_png_8.getHeight());
    }

    {
        int x = 324, y = 308, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_triangle_png_9,
                     x, y, width, height,
                     0, 0, cachedImage_icon_triangle_png_9.getWidth(), cachedImage_icon_triangle_png_9.getHeight());
    }

    {
        int x = 364, y = 396, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_square_png_10,
                     x, y, width, height,
                     0, 0, cachedImage_icon_square_png_10.getWidth(), cachedImage_icon_square_png_10.getHeight());
    }

    {
        int x = 284, y = 396, width = 20, height = 16;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_icon_saw_png_11,
                     x, y, width, height,
                     0, 0, cachedImage_icon_saw_png_11.getWidth(), cachedImage_icon_saw_png_11.getHeight());
    }

    {
        int x = 180, y = 388, width = 20, height = 30;
        String text (TRANS("1"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 316, width = 20, height = 30;
        String text (TRANS("2"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 316, width = 20, height = 30;
        String text (TRANS("3"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 388, width = 20, height = 30;
        String text (TRANS("4"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 260, width = 20, height = 30;
        String text (TRANS("1"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 188, width = 20, height = 30;
        String text (TRANS("2"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 188, width = 20, height = 30;
        String text (TRANS("3"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 260, width = 20, height = 30;
        String text (TRANS("4"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 140, width = 20, height = 30;
        String text (TRANS("1"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 68, width = 20, height = 30;
        String text (TRANS("2"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 68, width = 20, height = 30;
        String text (TRANS("3"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 236, y = 140, width = 20, height = 30;
        String text (TRANS("4"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 300, y = 20, width = 76, height = 30;
        String text (TRANS("waveform"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 180, y = 20, width = 76, height = 30;
        String text (TRANS("divider"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 780, y = 532, width = 192, height = 28;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_levelIndicator_png_12,
                     x, y, width, height,
                     0, 0, cachedImage_levelIndicator_png_12.getWidth(), cachedImage_levelIndicator_png_12.getHeight());
    }

    {
        int x = 780, y = 580, width = 192, height = 28;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_levelIndicator_png_13,
                     x, y, width, height,
                     0, 0, cachedImage_levelIndicator_png_13.getWidth(), cachedImage_levelIndicator_png_13.getHeight());
    }

    {
        int x = 124, y = 434, width = 324, height = 49;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_presetsPanel_png_14,
                     x, y, width, height,
                     0, 0, cachedImage_presetsPanel_png_14.getWidth(), cachedImage_presetsPanel_png_14.getHeight());
    }

    {
        int x = 12, y = 444, width = 104, height = 30;
        String text (TRANS("Current preset:"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    Justification::centredRight, true);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainSynthGui::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainSynthGui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider2.get())
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3.get())
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4.get())
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5.get())
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..
        //[/UserSliderCode_slider5]
    }
    else if (sliderThatWasMoved == slider6.get())
    {
        //[UserSliderCode_slider6] -- add your slider handling code here..
        //[/UserSliderCode_slider6]
    }
    else if (sliderThatWasMoved == slider7.get())
    {
        //[UserSliderCode_slider7] -- add your slider handling code here..
        //[/UserSliderCode_slider7]
    }
    else if (sliderThatWasMoved == slider8.get())
    {
        //[UserSliderCode_slider8] -- add your slider handling code here..
        //[/UserSliderCode_slider8]
    }
    else if (sliderThatWasMoved == slider10.get())
    {
        //[UserSliderCode_slider10] -- add your slider handling code here..
        //[/UserSliderCode_slider10]
    }
    else if (sliderThatWasMoved == slider11.get())
    {
        //[UserSliderCode_slider11] -- add your slider handling code here..
        //[/UserSliderCode_slider11]
    }
    else if (sliderThatWasMoved == slider12.get())
    {
        //[UserSliderCode_slider12] -- add your slider handling code here..
        //[/UserSliderCode_slider12]
    }
    else if (sliderThatWasMoved == slider14.get())
    {
        //[UserSliderCode_slider14] -- add your slider handling code here..
        //[/UserSliderCode_slider14]
    }
    else if (sliderThatWasMoved == slider15.get())
    {
        //[UserSliderCode_slider15] -- add your slider handling code here..
        //[/UserSliderCode_slider15]
    }
    else if (sliderThatWasMoved == slider16.get())
    {
        //[UserSliderCode_slider16] -- add your slider handling code here..
        //[/UserSliderCode_slider16]
    }
    else if (sliderThatWasMoved == slider17.get())
    {
        //[UserSliderCode_slider17] -- add your slider handling code here..
        //[/UserSliderCode_slider17]
    }
    else if (sliderThatWasMoved == slider18.get())
    {
        //[UserSliderCode_slider18] -- add your slider handling code here..
        //[/UserSliderCode_slider18]
    }
    else if (sliderThatWasMoved == slider19.get())
    {
        //[UserSliderCode_slider19] -- add your slider handling code here..
        //[/UserSliderCode_slider19]
    }
    else if (sliderThatWasMoved == slider20.get())
    {
        //[UserSliderCode_slider20] -- add your slider handling code here..
        //[/UserSliderCode_slider20]
    }
    else if (sliderThatWasMoved == slider9.get())
    {
        //[UserSliderCode_slider9] -- add your slider handling code here..
        //[/UserSliderCode_slider9]
    }
    else if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider13.get())
    {
        //[UserSliderCode_slider13] -- add your slider handling code here..
        //[/UserSliderCode_slider13]
    }
    else if (sliderThatWasMoved == slider21.get())
    {
        //[UserSliderCode_slider21] -- add your slider handling code here..
        //[/UserSliderCode_slider21]
    }
    else if (sliderThatWasMoved == slider22.get())
    {
        //[UserSliderCode_slider22] -- add your slider handling code here..
        //[/UserSliderCode_slider22]
    }
    else if (sliderThatWasMoved == slider23.get())
    {
        //[UserSliderCode_slider23] -- add your slider handling code here..
        //[/UserSliderCode_slider23]
    }
    else if (sliderThatWasMoved == slider25.get())
    {
        //[UserSliderCode_slider25] -- add your slider handling code here..
        //[/UserSliderCode_slider25]
    }
    else if (sliderThatWasMoved == slider26.get())
    {
        //[UserSliderCode_slider26] -- add your slider handling code here..
        //[/UserSliderCode_slider26]
    }
    else if (sliderThatWasMoved == slider27.get())
    {
        //[UserSliderCode_slider27] -- add your slider handling code here..
        //[/UserSliderCode_slider27]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainSynthGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == toggleButton.get())
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
    }
    else if (buttonThatWasClicked == openPresetBrowser.get())
    {
        //[UserButtonCode_openPresetBrowser] -- add your button handler code here..
        //[/UserButtonCode_openPresetBrowser]
    }
    else if (buttonThatWasClicked == mBtnPresetNext.get())
    {
        //[UserButtonCode_mBtnPresetNext] -- add your button handler code here..
        //[/UserButtonCode_mBtnPresetNext]
    }
    else if (buttonThatWasClicked == mBtnPresetPrev.get())
    {
        //[UserButtonCode_mBtnPresetPrev] -- add your button handler code here..
        //[/UserButtonCode_mBtnPresetPrev]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainSynthGui" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1000" initialHeight="640">
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="0 0 1000 640" resource="case_main_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="-36 452 1072 224" resource="case_effects_png" opacity="1.00000000000000000000"
           mode="0"/>
    <GROUP>
      <IMAGE pos="324 60 20 16" resource="icon_triangle_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="364 148 20 16" resource="icon_square_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="284 148 20 16" resource="icon_saw_png" opacity="1.00000000000000000000"
             mode="0"/>
    </GROUP>
    <GROUP>
      <IMAGE pos="324 180 20 16" resource="icon_triangle_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="364 268 20 16" resource="icon_square_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="284 268 20 16" resource="icon_saw_png" opacity="1.00000000000000000000"
             mode="0"/>
    </GROUP>
    <GROUP>
      <IMAGE pos="324 308 20 16" resource="icon_triangle_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="364 396 20 16" resource="icon_square_png" opacity="1.00000000000000000000"
             mode="0"/>
      <IMAGE pos="284 396 20 16" resource="icon_saw_png" opacity="1.00000000000000000000"
             mode="0"/>
    </GROUP>
    <GROUP>
      <TEXT pos="180 388 20 30" fill="solid: ffffffff" hasStroke="0" text="1"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="180 316 20 30" fill="solid: ffffffff" hasStroke="0" text="2"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 316 20 30" fill="solid: ffffffff" hasStroke="0" text="3"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 388 20 30" fill="solid: ffffffff" hasStroke="0" text="4"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
    </GROUP>
    <GROUP>
      <TEXT pos="180 260 20 30" fill="solid: ffffffff" hasStroke="0" text="1"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="180 188 20 30" fill="solid: ffffffff" hasStroke="0" text="2"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 188 20 30" fill="solid: ffffffff" hasStroke="0" text="3"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 260 20 30" fill="solid: ffffffff" hasStroke="0" text="4"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
    </GROUP>
    <GROUP>
      <TEXT pos="180 140 20 30" fill="solid: ffffffff" hasStroke="0" text="1"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="180 68 20 30" fill="solid: ffffffff" hasStroke="0" text="2"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 68 20 30" fill="solid: ffffffff" hasStroke="0" text="3"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
      <TEXT pos="236 140 20 30" fill="solid: ffffffff" hasStroke="0" text="4"
            fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
            bold="0" italic="0" justification="36"/>
    </GROUP>
    <TEXT pos="300 20 76 30" fill="solid: ffffffff" hasStroke="0" text="waveform"
          fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
          bold="0" italic="0" justification="36"/>
    <TEXT pos="180 20 76 30" fill="solid: ffffffff" hasStroke="0" text="divider"
          fontname="Default font" fontsize="16.00000000000000000000" kerning="0.00000000000000000000"
          bold="0" italic="0" justification="36"/>
    <IMAGE pos="780 532 192 28" resource="levelIndicator_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="780 580 192 28" resource="levelIndicator_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="124 434 324 49" resource="presetsPanel_png" opacity="1.00000000000000000000"
           mode="0"/>
    <TEXT pos="12 444 104 30" fill="solid: ffffffff" hasStroke="0" text="Current preset:"
          fontname="Default font" fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
          bold="0" italic="0" justification="34"/>
  </BACKGROUND>
  <SLIDER name="ADSRVol.Attack" id="e686dcf41ff8f723" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="677 257 40 148" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRVol.Release" id="19e4bee93ea59267" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="769 257 40 148" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="cb473a02381fc25e" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 16 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="OSC" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fc97faf8d67fc441" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="440 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="691b291fae04a656" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="674 231 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Amplifier volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="OSC1.Volume" id="64cd19f61a09fafc" memberName="slider4"
          virtualName="Slider" explicitFocusOrder="0" pos="40 56 110 110"
          thumbcol="ff328f09" min="0.00000000000000000000" max="1.00000000000000000000"
          int="0.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Volume" id="5b6363a9393426b5" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="40 176 110 110" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="8b601101dbaa262f" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="8 48 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="main" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Verdana" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="51bdd6e7adc460f1" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="8 168 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sub1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="OSC3.Volume" id="4f70b9dfb7d22046" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="40 304 110 110" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="98130ba7d077c9a8" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="8 296 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sub2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Filter.CutoffFreq" id="b5ddfb611a52b59e" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="448 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="f2561c1e16491f99" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="464 144 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="cutoff" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Filter.Q" id="32ff76d91d4131a8" memberName="slider8" virtualName=""
          explicitFocusOrder="0" pos="571 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="48e7205aa5fa5143" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="587 144 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="f4b91f7fa1d6b033" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="445 231 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter cutoff" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="17.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="ADSRVol.Sustain" id="47081380203247f0" memberName="slider10"
          virtualName="" explicitFocusOrder="0" pos="723 257 40 148" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="5eb3065fc48cd13c" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="676 403 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="efd670deeff2cfc7" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="723 403 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2f0c3fb14ccd3bbd" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="770 403 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="ADSRFilter.Attack" id="b7c6f52502efa9c4" memberName="slider11"
          virtualName="" explicitFocusOrder="0" pos="442 255 40 150" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRFilter.Release" id="a612ede8993ce62a" memberName="slider12"
          virtualName="" explicitFocusOrder="0" pos="532 255 40 150" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="ADSRFilter.Sustain" id="908f631705334540" memberName="slider14"
          virtualName="" explicitFocusOrder="0" pos="487 255 40 150" thumbcol="ff328f09"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="5979d19c19347180" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="442 401 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="A" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2461a2ec3f347fff" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="487 401 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="S" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2661e2cc57cd8376" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="533 401 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="R" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="OSC1.Divider" id="f5dccfd9a2ecb31f" memberName="slider15"
          virtualName="" explicitFocusOrder="0" pos="168 72 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="4.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Divider" id="27fba3479be46b37" memberName="slider16"
          virtualName="" explicitFocusOrder="0" pos="168 192 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="4.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC3.Divider" id="1a27da7fbd80f73" memberName="slider17"
          virtualName="" explicitFocusOrder="0" pos="168 320 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="4.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC1.Waveform" id="93ec2e964f54eaf6" memberName="slider18"
          virtualName="" explicitFocusOrder="0" pos="288 72 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="3.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC2.Waveform" id="a72293c4b71df00c" memberName="slider19"
          virtualName="" explicitFocusOrder="0" pos="288 192 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="3.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="OSC3.Waveform" id="f512996821af000" memberName="slider20"
          virtualName="" explicitFocusOrder="0" pos="288 320 95 95" tooltip="switch;"
          thumbcol="ff6495ed" min="1.00000000000000000000" max="3.00000000000000000000"
          int="1.00000000000000000000" style="RotaryHorizontalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="Filter.EnvelopeScale" id="ca2b8d2bd3d5be06" memberName="slider9"
          virtualName="" explicitFocusOrder="0" pos="686 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="2744ff8c0fec8fa" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="702 144 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Envelope" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Wet" id="f02a07f8a8edc9" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="272 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="7d1d2877a9909ff4" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="288 496 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Delay&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2e9d93e276cf4ffd" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="288 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="wet" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="ReferenceOscillator.Detune" id="179c2467b254d1c1" memberName="slider13"
          virtualName="" explicitFocusOrder="0" pos="136 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="3fd1e9e11b37a09e" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="152 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="detune" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="UnisonMixer.Volume" id="b64e5d44b2af789a" memberName="slider21"
          virtualName="" explicitFocusOrder="0" pos="24 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="0.50000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="2e34fa49a2369321" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="40 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="volume" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Delay" id="fef0c0a17fbbe76b" memberName="slider22"
          virtualName="" explicitFocusOrder="0" pos="384 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="6a484cbc8a86f45b" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="400 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="time" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Delay.Feedback" id="e2542a2a711671ab" memberName="slider23"
          virtualName="" explicitFocusOrder="0" pos="496 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="3c2f6ccb4ec0e07b" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="512 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="feedback" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="829f72051db43315" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="16 496 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Unison" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="255cd420d010ae7b" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="576 400 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="retrigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8bc642808184d889" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="440 187 160 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Envelopes" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <SLIDER name="FilterCutoffLfo.Frequency" id="74ae55c52b8a875e" memberName="slider25"
          virtualName="" explicitFocusOrder="0" pos="848 56 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="FilterCutoffLfo.Volume" id="874163a44515b9" memberName="slider26"
          virtualName="" explicitFocusOrder="0" pos="848 168 95 95" min="0.00000000000000000000"
          max="1.00000000000000000000" int="0.00000000000000000000" style="RotaryHorizontalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <LABEL name="new label" id="9f7aaf74327a8d7e" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="824 16 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Filter LFO" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.50000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9b3c50d74fae9222" memberName="label27" virtualName=""
         explicitFocusOrder="0" pos="856 144 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Frequency" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="88875754444c615a" memberName="label28" virtualName=""
         explicitFocusOrder="0" pos="856 256 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Amount" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <SLIDER name="Limiter.Volume" id="5b9bcdad8c2d7dc8" memberName="slider27"
          virtualName="" explicitFocusOrder="0" pos="656 520 95 95" tooltip="effect;"
          min="0.00000000000000000000" max="1.00000000000000000000" int="0.00000000000000000000"
          style="RotaryHorizontalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="46453cb5d64bc955" memberName="label29" virtualName=""
         explicitFocusOrder="0" pos="672 608 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="volume" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="af11cbbd2c2e2ba0" memberName="label31" virtualName=""
         explicitFocusOrder="0" pos="672 496 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <GENERICCOMPONENT name="Limiter.LevelChannel0" id="3f5e527f49885cf" memberName="component"
                    virtualName="" explicitFocusOrder="0" pos="786 546 180 8" class="LevelIndicator"
                    params=""/>
  <GENERICCOMPONENT name="Limiter.LevelChannel1" id="4df1d334df446ddc" memberName="component2"
                    virtualName="" explicitFocusOrder="0" pos="786 594 180 8" class="LevelIndicator"
                    params=""/>
  <TOGGLEBUTTON name="ADSRFilter.Retrigger" id="4bbf329f139fd5b1" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="587 357 40 40" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="new button" id="86c8cb20f64737f6" memberName="openPresetBrowser"
              virtualName="" explicitFocusOrder="0" pos="137 445 298 24" bgColOff="a45c94"
              bgColOn="181f22" textCol="ff0d0d0d" textColOn="ff000000" buttonText="unknown"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="7f2dcf690d640765" memberName="mBtnPresetNext"
              virtualName="" explicitFocusOrder="0" pos="560 448 88 24" buttonText="Next"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Next" id="731168668bd98da4" memberName="mBtnPresetPrev"
              virtualName="" explicitFocusOrder="0" pos="462 448 88 24" buttonText="Previous"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: icon_triangle_png, 2636, "../../Resources/icon_triangle.png"
static const unsigned char resource_MainSynthGui_icon_triangle_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,77,0,0,0,55,8,6,0,0,0,73,176,199,23,0,0,10,19,73,68,65,84,120,156,237,219,105,
140,93,117,25,6,240,223,157,153,206,116,10,45,20,40,149,157,34,75,217,203,142,2,162,40,75,2,161,178,40,42,46,132,77,212,196,15,198,175,126,85,48,24,18,52,209,15,44,202,34,184,68,69,68,81,20,48,130,5,148,
29,89,101,17,10,180,148,22,186,76,91,6,58,227,135,231,156,156,219,97,218,185,235,80,18,158,228,102,238,189,189,231,252,223,243,156,231,93,255,167,181,209,209,81,147,132,126,172,43,94,239,107,244,76,210,
58,115,112,14,6,38,105,189,78,99,90,253,135,201,32,237,96,92,137,81,204,197,1,147,176,102,39,113,28,62,93,255,69,55,73,171,97,27,124,3,219,99,9,46,196,135,139,215,251,1,95,196,119,241,31,236,47,33,166,
171,164,29,143,111,227,20,44,196,126,152,135,183,240,29,108,219,229,245,219,193,0,246,193,183,176,20,51,240,57,12,99,70,173,75,137,96,10,174,195,33,162,170,199,196,61,151,225,127,216,14,63,192,227,120,
169,27,6,180,137,139,240,49,156,137,159,202,245,188,137,95,97,143,110,221,233,79,73,44,216,21,111,99,11,108,142,87,113,16,126,141,19,176,135,220,197,77,9,123,226,60,156,40,182,31,136,35,241,20,206,199,
67,221,32,173,183,56,249,116,113,191,53,197,247,131,56,26,59,21,198,108,135,125,37,179,110,74,56,87,236,218,10,239,200,117,188,44,73,172,23,15,119,131,180,99,113,140,36,130,26,134,68,77,211,49,19,207,
225,147,120,86,178,210,30,197,247,155,2,230,138,75,246,73,56,89,43,196,205,194,231,139,207,253,157,38,173,134,11,132,164,190,98,145,209,226,251,81,137,13,215,74,221,51,75,200,250,4,142,232,176,29,173,
226,66,236,40,30,50,90,188,182,198,108,140,224,223,24,238,52,105,71,227,227,66,82,15,86,136,91,174,44,12,88,37,137,97,129,196,137,71,36,182,125,196,123,239,166,251,226,52,177,187,38,97,101,180,248,220,
43,201,236,151,116,62,229,159,39,234,233,149,210,162,108,153,70,133,184,231,241,209,186,127,159,94,252,219,225,56,185,195,182,52,139,175,226,67,42,149,173,86,17,56,140,235,177,156,206,146,118,184,212,
102,53,33,101,5,166,138,139,110,134,91,113,131,212,103,39,224,30,113,203,167,113,104,241,58,184,131,246,52,131,3,112,170,216,93,19,155,71,138,87,15,30,149,140,143,206,146,118,129,248,127,159,220,153,119,
10,3,70,138,207,87,225,10,233,12,14,46,126,183,66,98,219,58,236,37,238,81,235,160,77,141,226,107,214,87,217,144,42,145,13,75,28,94,85,254,184,83,164,205,147,186,166,60,231,10,169,170,215,72,208,191,75,
148,181,92,226,194,84,137,125,119,99,111,188,40,21,248,126,82,84,78,38,14,150,208,48,54,150,141,136,242,30,194,239,234,15,232,20,105,231,75,159,217,39,53,216,112,113,238,17,81,220,149,170,248,118,149,
148,29,115,165,224,125,25,91,22,134,206,145,148,223,223,33,187,26,193,215,85,45,93,169,50,42,55,189,166,238,59,116,134,180,125,229,78,245,90,63,150,173,145,204,185,0,183,213,253,254,53,33,174,71,178,237,
189,216,65,250,211,189,164,34,63,209,228,224,8,156,228,221,42,43,179,230,3,184,121,236,65,157,32,237,92,137,7,189,162,178,181,42,149,141,8,65,239,140,57,230,10,153,28,236,40,42,123,78,90,173,97,236,44,
69,239,52,221,199,69,226,33,189,222,29,203,214,74,223,185,102,236,65,237,146,182,39,230,171,50,230,74,85,198,28,148,98,240,214,113,142,123,19,63,42,222,31,133,7,11,227,95,197,110,197,107,126,155,182,77,
132,163,69,209,165,202,86,171,84,214,43,182,255,113,188,3,219,37,237,28,153,149,245,137,154,214,212,189,31,197,213,82,143,141,135,107,37,200,110,35,74,125,74,84,183,70,250,211,83,139,207,221,64,77,84,
182,149,202,43,214,90,191,245,219,160,237,237,144,54,7,103,88,63,150,13,168,84,246,16,254,176,145,227,135,112,153,144,123,132,116,7,51,36,230,237,42,196,157,217,134,125,27,195,177,82,83,246,20,175,213,
66,92,169,178,251,240,231,13,29,220,14,105,95,145,11,235,85,169,108,138,196,181,30,137,7,171,39,56,199,13,146,40,102,96,23,33,110,107,185,1,59,75,144,158,221,134,141,227,161,71,234,178,45,10,219,215,213,
217,89,175,178,225,141,157,160,21,236,32,42,40,85,182,74,165,178,169,82,65,223,212,192,121,222,198,165,133,225,135,226,153,226,60,75,139,53,118,144,233,66,39,113,156,12,9,234,99,25,85,198,252,167,245,
179,253,187,208,42,105,95,22,247,236,145,11,30,146,218,234,109,137,105,215,74,82,104,4,55,225,78,201,150,123,74,82,152,133,55,68,125,199,21,127,59,129,94,233,49,103,20,182,151,30,162,248,188,210,248,217,
126,61,180,66,218,108,156,85,24,208,87,44,212,47,42,27,192,19,234,250,180,6,48,130,139,133,240,121,50,14,239,145,238,97,118,241,250,66,11,118,142,135,227,165,19,217,144,202,238,198,237,19,157,164,21,210,
206,198,238,66,218,136,74,101,195,18,211,174,151,146,162,25,252,85,210,123,191,20,203,247,138,218,150,136,162,143,145,14,162,29,76,145,140,57,189,206,246,50,99,150,173,223,85,197,247,27,69,179,164,109,
35,119,189,79,165,178,41,146,154,251,241,95,252,162,201,115,150,184,68,238,252,254,120,93,92,100,181,36,134,89,178,157,214,14,78,146,218,172,188,230,82,101,229,36,227,78,252,189,145,19,53,75,218,89,210,
234,212,171,108,64,72,27,192,207,229,130,91,193,2,252,166,56,247,129,210,224,207,198,98,41,118,15,19,247,109,5,3,18,203,54,87,197,225,178,152,237,17,207,184,186,248,60,33,154,33,109,75,73,0,83,68,101,
67,170,214,105,64,6,140,55,52,113,190,241,112,137,196,178,185,226,46,171,84,187,89,219,226,75,45,158,247,100,153,14,151,177,172,190,1,239,193,29,18,207,26,66,51,164,125,70,198,56,101,5,189,74,213,50,13,
136,91,46,170,251,125,43,115,177,199,68,173,53,217,51,93,32,100,45,146,49,249,60,113,177,102,48,32,179,190,205,85,117,89,125,198,124,67,122,225,134,55,128,27,37,109,186,168,172,95,165,178,154,168,96,138,
108,248,94,55,230,152,86,119,161,47,21,23,223,93,46,112,105,113,174,65,85,76,237,109,226,124,243,101,170,92,222,196,85,117,239,107,146,132,238,107,198,192,70,73,59,77,70,194,229,239,235,27,243,169,82,
98,44,108,102,225,141,224,57,201,98,228,98,23,72,34,120,69,212,182,183,108,1,54,130,65,153,245,77,83,213,101,245,61,230,235,162,178,166,208,8,105,131,210,50,245,203,29,30,170,51,160,79,46,230,103,205,
46,60,1,46,147,155,176,163,40,249,21,85,198,222,86,18,82,35,143,109,157,46,157,70,25,203,86,170,182,19,107,82,249,63,208,172,113,141,144,118,138,140,132,203,133,235,55,76,6,241,91,188,208,236,194,19,96,
17,126,82,188,63,18,255,18,215,92,36,153,116,119,19,239,94,109,38,179,190,169,98,123,57,235,35,215,177,68,165,232,166,48,17,105,3,197,194,3,114,151,203,218,102,93,113,236,107,210,152,119,3,63,150,186,
111,182,196,212,231,10,59,70,229,145,134,211,108,124,80,121,134,36,142,114,146,177,66,165,50,248,19,30,110,197,176,137,72,59,81,228,93,198,128,55,229,206,173,22,149,221,36,77,118,55,176,12,151,23,239,
143,144,158,116,166,168,109,23,25,31,157,182,129,99,167,75,72,25,80,237,40,173,86,93,199,34,169,203,90,194,198,72,155,34,42,155,166,82,217,58,85,5,189,76,247,84,86,226,42,153,152,108,37,238,249,164,148,
14,195,50,252,156,111,252,65,229,233,178,179,85,78,148,223,80,109,39,142,226,22,121,204,171,37,108,140,180,227,228,14,151,11,47,19,117,149,42,187,69,230,252,221,196,144,60,199,70,98,219,227,162,162,37,
162,182,237,37,41,212,99,11,233,143,167,200,245,173,21,215,44,119,155,22,106,51,113,109,136,180,30,169,203,6,133,176,213,214,31,202,45,213,98,16,109,1,55,74,3,63,93,178,233,35,66,204,42,25,130,158,40,
25,181,196,169,210,81,148,30,177,72,85,212,174,147,221,165,167,219,49,104,67,164,29,37,207,92,148,227,223,197,170,88,54,32,169,186,165,32,218,2,222,194,247,229,130,15,145,11,158,42,202,223,81,146,194,
217,197,111,103,136,107,150,27,36,67,162,202,178,223,124,193,187,139,240,166,177,33,210,206,22,149,149,51,167,149,170,218,108,185,201,83,89,137,155,100,2,49,77,158,103,123,64,166,31,111,170,6,149,179,
101,246,191,147,106,92,245,148,106,56,186,86,246,44,158,111,215,152,241,72,59,72,42,241,181,197,130,47,138,186,134,36,78,252,13,247,183,187,112,147,88,135,239,201,197,31,84,216,84,83,13,42,183,198,55,
165,47,45,203,162,101,210,222,149,109,95,59,99,171,245,48,30,105,243,85,219,112,107,165,26,239,151,38,119,185,206,87,255,141,162,126,80,185,143,244,139,179,164,21,154,35,19,217,253,68,125,131,82,16,79,
151,36,176,84,18,87,71,30,138,30,75,218,110,210,99,46,21,87,120,76,181,61,55,34,35,148,166,154,219,14,227,98,81,210,126,18,224,223,86,13,42,119,146,253,211,119,164,232,94,34,106,124,69,226,96,35,27,61,
13,97,44,105,71,169,234,153,183,84,117,209,235,197,235,6,173,79,47,58,129,123,164,109,235,147,214,238,62,113,207,55,36,131,110,46,69,239,93,197,251,133,66,224,109,146,204,58,130,122,210,102,138,210,150,
138,188,31,21,181,189,38,146,191,203,123,171,178,18,151,136,242,231,138,93,43,138,239,123,165,20,233,145,152,183,92,108,127,70,60,164,99,168,39,109,158,72,123,105,241,247,113,33,237,121,145,250,239,53,
176,233,48,9,120,84,53,168,60,76,234,182,30,137,87,131,226,182,7,200,211,227,139,241,15,21,177,29,65,73,218,76,145,245,34,201,148,15,74,172,120,65,50,207,131,242,152,193,166,130,75,197,214,157,85,155,
213,247,74,232,184,67,92,118,137,16,247,68,167,23,47,73,155,35,228,188,38,217,233,54,81,213,75,197,119,183,219,52,84,86,226,89,201,226,207,10,105,215,72,50,120,90,58,132,27,229,9,164,23,85,227,160,142,
161,167,238,239,51,82,105,223,47,119,105,153,184,234,147,58,80,16,118,1,63,20,87,29,149,237,183,133,146,40,182,145,155,188,72,155,237,210,134,80,206,154,22,11,105,125,82,223,204,146,249,213,203,82,20,
110,74,42,43,241,178,100,210,133,248,172,60,10,177,24,127,17,251,187,162,50,66,82,173,88,120,102,177,80,143,184,234,99,242,0,202,11,221,88,184,67,184,89,50,230,214,82,118,92,46,165,198,84,99,158,147,237,
36,106,163,163,163,229,52,115,7,33,112,11,33,111,157,170,49,222,148,209,175,26,105,55,251,56,68,75,168,255,255,158,229,142,77,57,29,40,159,207,248,0,99,80,146,86,63,59,47,81,110,10,127,128,49,248,63,70,
115,141,185,214,149,104,24,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::icon_triangle_png = (const char*) resource_MainSynthGui_icon_triangle_png;
const int MainSynthGui::icon_triangle_pngSize = 2636;

// JUCER_RESOURCE: icon_square_png, 2597, "../../Resources/icon_square.png"
static const unsigned char resource_MainSynthGui_icon_square_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,84,0,0,0,56,8,6,0,0,0,99,93,223,224,0,0,9,236,73,68,65,84,120,156,237,156,91,
111,36,71,25,134,159,241,140,15,179,94,219,123,242,46,36,104,195,38,1,1,145,64,144,21,1,137,163,56,222,32,110,194,45,82,254,1,63,130,95,192,53,119,112,1,23,92,128,144,16,18,81,144,16,43,36,72,20,16,44,
40,32,129,96,179,75,112,246,224,216,51,182,199,115,200,197,91,239,214,55,181,61,99,103,229,233,89,164,188,82,171,187,171,107,186,171,223,254,78,245,85,213,52,70,163,17,21,88,2,14,129,202,139,239,98,50,
90,19,202,159,7,174,1,251,192,121,96,13,24,132,223,156,2,214,129,149,116,188,148,182,22,176,0,52,211,190,17,246,222,70,225,120,152,206,93,199,240,135,108,132,243,6,176,12,188,14,252,4,184,249,80,111,124,
114,104,2,23,128,55,98,97,73,232,71,128,77,224,235,192,54,208,1,206,166,31,183,128,54,34,242,92,42,63,157,182,101,50,169,174,27,201,44,9,43,201,133,113,242,168,184,182,13,188,8,188,6,236,188,163,87,63,
121,180,17,79,223,6,190,27,47,148,132,126,2,248,56,122,129,13,224,41,224,15,192,25,224,49,68,94,19,189,108,63,29,47,166,7,148,146,106,41,109,166,123,47,132,231,52,138,115,151,85,193,228,175,1,87,129,39,
129,111,2,191,0,126,206,124,204,210,243,232,163,126,0,184,8,236,165,115,90,136,144,139,192,45,68,202,87,128,55,17,129,159,2,254,9,92,34,75,84,27,189,220,25,68,240,106,218,150,211,189,22,201,170,239,13,
68,108,41,165,211,224,235,125,160,135,62,212,229,212,206,23,129,45,178,173,31,30,151,137,19,194,39,17,23,7,192,87,129,183,128,159,129,94,252,18,18,221,31,35,2,159,70,106,253,225,180,61,7,124,14,216,69,
36,174,147,165,177,69,150,70,19,86,165,226,48,89,181,203,122,101,249,62,208,77,229,231,129,47,2,31,69,54,253,14,240,91,224,251,192,221,99,146,241,176,184,140,4,231,175,72,120,190,6,188,4,92,73,109,108,
2,151,91,136,164,103,129,63,34,117,39,53,126,31,73,226,57,224,125,72,245,247,145,68,244,210,205,87,24,87,57,75,228,128,163,85,186,36,182,132,203,109,147,23,16,177,47,35,18,215,128,95,34,9,238,78,184,199,
73,226,42,153,212,39,129,247,144,181,114,13,105,244,11,45,68,202,102,218,174,144,165,173,159,126,240,52,122,185,1,82,247,165,244,114,46,27,166,173,180,145,229,62,30,143,166,28,151,251,1,82,169,1,82,177,
39,210,75,157,7,110,3,191,67,31,121,214,184,8,60,14,124,22,113,178,152,218,56,64,190,230,42,112,197,54,116,41,53,118,21,145,211,33,171,238,227,233,252,26,34,121,29,125,17,123,248,83,100,162,125,191,104,
63,167,145,27,81,69,248,2,210,160,123,200,228,116,144,154,191,146,218,241,107,100,178,154,204,222,142,174,33,71,221,65,194,103,126,6,192,199,144,246,30,56,188,25,146,85,171,151,110,240,12,34,249,52,242,
98,77,36,205,103,83,189,101,244,1,206,144,9,94,65,196,46,50,238,229,171,72,141,251,120,28,37,182,145,158,181,73,14,197,250,192,231,17,193,143,1,175,34,41,157,53,252,46,142,195,135,200,28,62,155,206,159,
1,94,137,132,46,135,31,158,70,33,65,59,149,223,67,146,176,138,68,223,4,250,186,73,140,225,146,49,228,120,222,125,146,212,218,252,12,82,59,94,74,219,85,36,169,229,253,103,137,6,122,87,82,123,46,32,158,
122,200,20,253,201,132,142,16,33,32,50,58,228,151,88,71,33,202,247,82,121,116,18,81,173,203,45,6,230,112,188,151,142,117,134,232,35,126,25,248,13,240,157,116,207,59,200,102,238,166,103,239,83,95,44,218,
64,66,68,122,246,34,18,168,253,84,222,136,132,198,70,217,30,153,212,30,10,75,246,103,223,230,49,236,160,16,233,38,89,229,218,40,234,216,64,230,166,140,38,102,9,119,147,33,127,252,49,219,29,85,62,98,80,
84,46,165,173,46,156,66,166,101,3,153,153,54,34,215,29,138,83,84,199,188,179,194,81,206,180,225,174,231,160,168,52,32,123,206,81,197,245,186,208,66,196,45,145,9,93,33,219,249,101,234,37,180,196,168,56,
30,86,73,232,66,58,111,33,34,221,111,175,187,123,7,250,168,167,194,126,153,236,4,219,136,236,67,234,85,251,169,176,115,233,51,158,229,137,42,63,36,7,240,117,195,29,15,103,186,220,233,112,132,177,129,122,
73,117,72,232,180,158,222,125,73,181,132,14,24,23,95,19,108,34,203,235,117,161,73,14,201,86,200,113,233,90,42,95,79,245,234,32,180,124,255,42,62,26,49,88,126,84,9,117,79,110,49,148,173,166,243,85,114,
71,100,214,152,212,195,27,131,9,141,125,97,219,76,152,191,202,187,123,231,216,119,68,182,167,209,28,204,11,101,244,51,138,132,150,113,168,77,193,144,7,37,184,46,68,50,157,144,137,93,90,231,15,234,66,201,
65,217,129,185,79,104,47,84,142,217,163,67,68,106,29,217,156,42,88,66,35,161,11,228,140,151,201,174,3,85,2,21,57,3,178,202,31,48,174,210,150,80,171,251,60,9,45,19,214,118,76,113,48,112,30,24,81,120,120,
200,132,246,24,15,3,6,100,66,77,234,188,96,66,45,161,78,152,120,95,87,96,95,18,88,230,114,129,252,149,251,161,130,55,159,155,212,121,32,38,91,140,152,18,60,150,231,157,65,155,140,24,187,143,32,143,9,185,
103,84,14,225,198,204,209,60,80,74,36,140,155,128,71,165,219,121,191,204,6,223,198,222,149,172,242,205,162,188,110,148,233,191,242,67,67,253,217,166,50,26,26,51,5,38,20,114,224,60,10,21,45,25,243,180,
161,240,32,121,211,70,87,103,133,105,94,222,24,58,73,218,32,103,236,99,92,21,195,149,121,161,180,147,243,178,157,80,65,32,227,82,59,138,18,186,204,131,211,95,98,15,101,30,152,54,230,84,85,103,150,136,
206,218,231,125,198,85,126,24,109,232,98,197,143,99,184,50,47,76,146,208,178,78,29,24,21,91,204,202,85,18,90,26,93,19,58,207,176,105,18,74,105,153,53,198,84,27,113,226,46,251,253,249,9,113,238,145,195,
167,24,216,207,203,86,69,84,13,246,217,33,213,137,24,143,59,225,238,121,85,99,42,239,134,89,66,203,116,157,7,243,31,85,212,169,238,81,224,134,40,185,29,249,26,120,28,125,68,30,242,136,93,77,75,71,159,
113,212,169,106,85,207,245,179,235,212,30,19,106,62,34,161,30,29,238,199,97,100,75,226,136,60,214,61,137,208,58,137,140,78,177,156,85,82,39,76,90,19,37,147,26,104,206,149,167,91,14,128,158,67,38,19,234,
36,201,30,227,54,163,174,172,248,36,52,138,253,3,73,137,26,48,32,231,60,246,144,70,239,32,59,122,128,56,218,247,215,119,197,30,121,86,134,69,121,200,124,9,173,202,238,148,215,234,192,33,121,162,71,151,
68,96,218,239,165,125,39,78,75,108,132,10,158,138,179,151,246,117,207,24,169,66,41,149,229,126,214,48,129,67,50,129,38,121,39,157,119,29,99,90,213,59,72,124,187,169,114,220,207,26,211,136,169,34,111,84,
113,125,150,232,145,157,80,135,236,103,58,200,150,238,2,219,30,230,112,198,254,0,73,164,165,178,147,110,180,91,67,195,39,37,31,34,153,101,247,143,80,54,107,68,73,244,44,238,61,68,178,231,174,238,182,194,
133,81,186,184,140,12,110,55,221,160,139,150,180,184,241,85,168,51,103,58,175,110,167,5,236,16,241,210,2,254,139,200,236,162,169,150,123,45,178,71,63,36,51,223,165,96,126,202,131,234,72,66,71,251,25,7,
20,125,173,142,143,105,27,186,143,166,119,46,2,255,67,234,222,65,66,55,108,33,53,55,153,29,52,162,120,27,17,109,251,48,205,134,206,242,133,162,186,59,22,190,6,124,1,45,26,128,60,79,179,199,228,185,170,
229,189,170,158,49,13,67,242,108,191,22,146,70,207,4,188,135,56,220,5,150,220,59,234,35,66,111,147,153,183,100,110,51,191,228,136,177,136,214,75,181,128,63,3,159,70,47,232,216,249,75,233,248,28,121,13,
64,156,93,29,151,254,68,210,125,236,56,188,10,78,176,95,74,117,54,208,106,190,14,34,115,11,9,221,5,96,39,206,109,50,161,109,100,27,182,201,118,227,164,199,190,99,128,126,148,185,112,183,248,102,106,227,
38,121,214,93,3,205,30,121,2,145,231,117,169,94,242,227,101,47,30,59,43,23,163,69,66,221,174,104,194,162,35,60,147,218,240,15,224,247,233,89,203,104,145,220,91,192,251,129,59,118,74,222,182,16,161,221,
116,188,203,209,42,255,48,56,110,79,39,118,235,188,0,236,223,169,77,158,44,118,47,149,123,25,208,18,121,101,223,42,89,82,45,165,222,195,248,148,246,56,94,21,143,93,207,235,145,6,192,123,145,154,191,154,
158,255,6,114,84,91,173,208,232,46,146,208,215,209,215,191,69,14,11,102,181,74,109,146,100,58,62,118,12,60,66,246,235,0,169,86,3,248,27,240,25,224,239,104,138,248,38,122,225,53,198,151,250,88,229,227,
232,105,85,87,118,82,194,199,235,164,156,157,95,64,115,254,247,83,217,21,164,205,59,192,237,22,146,196,3,178,122,223,74,55,234,32,34,239,161,133,2,117,194,47,181,141,150,2,122,6,30,104,185,228,6,240,31,
164,214,31,66,139,126,55,200,203,122,74,21,63,202,33,77,202,92,89,90,157,133,115,79,242,27,169,236,185,84,182,132,76,65,191,133,200,234,165,198,223,37,27,235,109,114,88,48,15,66,27,72,99,126,4,124,11,
125,232,221,84,182,159,218,245,38,112,35,213,61,71,158,123,191,68,86,115,19,59,205,243,71,148,101,195,244,172,184,154,239,167,233,218,117,36,144,47,163,15,75,11,145,232,222,210,46,82,151,195,84,241,46,
50,1,243,26,83,26,164,54,44,33,226,236,8,174,35,9,189,129,200,93,33,59,214,131,240,123,231,118,75,103,52,45,227,95,69,178,39,252,190,134,28,211,37,164,17,155,104,221,41,36,205,118,96,223,79,5,91,228,73,
172,118,72,183,152,15,156,151,5,217,201,127,161,197,171,215,145,253,108,35,45,242,148,112,175,22,217,64,171,253,236,144,218,228,101,231,11,197,22,137,173,26,97,53,156,43,246,179,154,169,61,191,66,31,117,
68,210,98,143,35,17,26,103,175,110,207,186,245,142,169,56,89,44,160,21,115,77,164,238,61,228,221,207,35,97,184,136,136,62,139,164,104,29,133,56,27,100,111,95,46,151,156,100,2,168,56,142,179,105,62,136,
248,184,129,156,208,83,104,21,247,15,81,168,73,35,252,137,203,5,228,136,206,145,165,210,163,161,243,204,135,46,32,162,218,168,119,116,145,28,139,122,130,198,58,121,29,127,155,241,117,252,211,122,79,70,
213,121,85,18,166,3,252,5,248,1,137,192,18,145,80,175,75,106,145,231,131,54,138,243,119,113,4,34,161,147,122,44,117,102,146,254,239,241,54,122,204,60,169,153,94,5,181,0,0,0,0,73,69,78,68,174,66,96,130,
0,0};

const char* MainSynthGui::icon_square_png = (const char*) resource_MainSynthGui_icon_square_png;
const int MainSynthGui::icon_square_pngSize = 2597;

// JUCER_RESOURCE: icon_saw_png, 3058, "../../Resources/icon_saw.png"
static const unsigned char resource_MainSynthGui_icon_saw_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,84,0,0,0,56,8,6,0,0,0,99,93,223,224,0,0,11,185,73,68,65,84,120,156,213,220,107,144,
158,103,89,7,240,223,187,231,221,236,210,52,77,147,130,77,10,45,165,158,40,83,116,20,15,131,95,58,21,29,245,11,194,140,56,227,8,56,142,56,30,112,70,177,206,56,34,95,4,42,135,162,180,72,29,161,150,193,
129,138,136,163,83,80,138,21,170,88,42,130,90,64,177,145,52,89,154,83,147,54,73,147,236,102,55,187,235,135,255,125,247,121,186,36,217,211,187,239,110,174,153,119,158,125,158,247,125,159,231,186,255,247,
117,248,95,215,125,191,219,89,88,88,112,137,201,53,56,134,83,27,173,72,145,231,226,96,61,233,219,64,69,86,35,175,199,207,97,6,253,27,172,203,56,126,23,55,181,47,94,74,128,254,30,126,25,159,198,235,112,
197,6,234,210,143,15,226,165,56,142,159,170,111,92,10,128,118,240,86,177,206,255,193,111,226,197,216,142,239,197,96,143,245,185,18,127,132,91,112,24,111,192,243,112,53,118,117,46,129,24,250,110,188,17,
95,145,184,217,135,47,227,57,120,0,119,99,182,71,186,140,224,94,252,36,254,15,79,96,8,247,11,208,119,108,118,11,189,85,192,156,18,75,28,197,60,158,47,201,224,62,189,117,253,223,17,48,167,197,115,174,194,
254,162,207,1,28,220,204,128,190,78,92,125,6,147,2,228,9,12,227,133,216,43,9,97,172,71,250,252,24,126,171,232,113,174,60,247,105,236,198,203,112,4,47,220,172,128,254,4,238,20,229,191,46,174,118,14,151,
225,90,60,130,173,216,134,129,30,232,115,53,110,23,15,121,74,172,243,28,118,136,171,239,197,119,96,108,51,2,250,50,124,72,44,241,127,5,176,179,226,102,215,72,220,218,129,61,152,192,122,39,129,126,188,
11,47,194,201,114,222,39,22,186,19,167,203,231,30,197,248,102,3,244,219,37,232,111,21,192,72,194,57,132,239,20,66,63,134,207,137,149,108,23,224,215,83,126,29,175,146,73,61,43,222,50,93,244,56,81,174,61,
138,45,120,206,102,2,244,185,2,230,46,60,38,64,46,224,113,113,167,251,36,57,157,46,239,77,200,32,214,19,208,31,22,254,187,32,224,141,11,239,220,34,86,58,128,175,150,107,151,97,100,179,0,58,129,143,8,191,
124,92,64,235,147,12,122,131,88,192,14,137,91,179,50,160,45,50,192,161,117,210,105,187,240,205,203,36,110,142,225,140,184,252,81,161,110,131,69,167,43,132,198,13,111,6,64,7,241,1,188,92,50,229,83,229,
218,36,174,19,197,247,227,147,82,51,87,203,156,192,229,214,47,41,189,77,88,196,211,18,94,58,226,234,87,22,61,199,197,221,135,37,68,237,176,73,44,244,61,248,105,1,242,176,40,120,64,170,143,73,169,142,102,
240,13,177,146,65,141,133,110,181,62,53,253,235,241,90,241,134,41,77,118,191,18,95,20,247,63,42,241,180,83,116,217,129,129,94,80,142,139,201,155,165,116,59,133,111,138,226,135,196,125,206,224,223,37,57,
61,32,220,115,72,44,114,84,192,157,211,253,242,249,37,248,131,114,223,99,226,9,53,70,238,17,111,121,66,64,28,44,159,27,149,201,237,108,164,133,190,1,191,47,110,179,183,40,117,84,163,224,253,98,21,119,
139,123,13,11,160,125,229,56,36,22,210,205,49,76,224,189,98,109,79,105,50,122,71,56,241,63,151,243,227,18,110,148,247,134,138,142,243,27,5,232,43,37,224,207,73,194,25,150,1,156,21,87,255,27,201,172,239,
40,159,175,96,14,137,139,15,104,0,237,166,188,69,50,251,25,1,176,79,18,228,21,210,229,58,129,247,139,101,142,20,29,59,69,167,65,204,110,4,160,47,151,214,215,128,16,247,65,25,192,113,92,47,212,105,4,111,
151,216,169,124,102,168,28,59,173,243,110,102,248,87,225,87,100,146,79,137,75,31,23,107,253,87,73,78,127,42,160,86,16,23,90,71,152,238,53,160,223,45,244,104,66,192,236,8,104,135,132,50,125,68,6,242,135,
162,120,149,129,242,170,128,182,207,187,33,215,139,55,12,138,167,140,75,85,52,46,9,114,15,62,37,222,84,227,123,95,75,151,57,161,79,83,189,76,74,187,240,151,66,224,191,81,20,88,144,100,116,19,62,46,177,
243,61,101,16,109,233,215,184,122,167,245,119,55,12,98,184,60,115,183,76,226,160,100,247,185,242,140,207,73,161,113,111,249,252,160,100,254,74,165,250,202,56,102,113,182,87,22,186,21,31,149,210,114,82,
102,184,83,254,126,49,254,190,156,127,80,154,33,139,165,79,6,210,175,25,68,5,121,173,181,252,173,210,73,154,22,80,6,197,189,119,72,220,60,141,59,90,159,175,177,115,88,226,236,188,134,11,159,235,5,160,
195,184,7,63,32,174,221,38,238,47,194,23,100,0,159,192,191,93,224,30,181,33,209,215,58,111,199,177,213,202,143,226,77,2,202,73,77,220,220,46,148,173,178,140,99,173,239,140,105,18,98,109,229,141,10,168,
51,189,112,249,59,165,41,123,76,42,140,97,113,243,221,18,155,38,37,232,255,195,69,238,177,24,208,10,102,199,234,1,253,54,113,245,177,162,219,22,177,198,81,60,41,53,250,131,120,120,209,247,42,160,195,18,
22,148,239,12,233,65,150,127,171,52,138,79,74,141,62,34,86,186,77,102,255,63,165,18,186,247,66,55,40,210,231,217,128,214,132,80,227,215,74,165,182,228,110,16,239,232,23,112,102,4,176,127,44,122,222,115,
158,239,86,234,54,162,1,180,38,200,153,245,4,244,141,18,159,166,176,79,102,241,9,153,217,1,124,182,156,191,127,25,247,234,91,116,92,156,16,86,42,191,138,87,107,250,172,195,146,144,118,10,152,211,18,55,
231,206,243,221,10,104,109,140,84,125,250,173,35,109,122,13,222,41,65,126,143,134,184,207,73,61,252,119,229,189,119,47,243,126,109,32,235,121,5,117,126,133,186,253,160,148,188,11,26,106,116,92,200,251,
87,165,159,240,23,226,81,231,147,129,242,204,126,1,180,79,195,88,214,37,203,223,44,4,184,163,169,130,78,137,107,93,43,212,105,16,183,105,102,120,41,105,3,216,150,149,198,208,109,248,99,97,29,79,137,215,
76,9,72,103,240,37,73,70,15,44,161,203,140,198,59,6,202,61,230,48,213,109,64,95,42,179,59,38,244,167,95,220,231,168,116,220,63,42,22,113,155,149,109,165,169,241,179,2,218,6,119,37,22,250,182,162,99,125,
246,130,128,177,85,122,7,79,138,49,44,37,181,47,90,43,165,41,1,249,76,55,1,189,86,146,203,149,226,230,11,50,107,7,112,35,254,74,50,233,237,18,59,87,34,139,93,190,45,203,181,208,215,74,91,110,86,0,25,213,
196,205,7,203,181,59,37,174,94,76,58,229,51,253,154,122,127,182,188,186,198,67,183,11,152,215,73,123,107,166,60,120,191,16,247,251,196,53,238,146,13,2,43,149,234,218,109,11,109,95,95,74,110,20,198,209,
39,241,114,66,226,231,101,82,181,237,19,30,188,28,221,218,73,105,190,60,127,72,140,103,174,27,60,116,12,31,198,247,72,71,253,100,121,192,99,82,25,61,40,110,255,49,233,190,175,70,46,20,59,23,44,237,242,
227,210,217,218,41,113,115,184,232,163,124,255,243,66,221,254,118,153,186,140,73,236,175,73,105,190,60,99,94,23,44,180,79,172,238,22,113,227,163,69,225,73,217,77,241,223,66,230,63,227,226,129,126,41,57,
159,69,214,227,82,128,190,25,63,162,105,201,245,75,12,189,66,138,137,83,120,223,10,116,25,41,175,202,93,59,154,205,22,115,107,5,244,29,248,89,113,163,67,229,65,143,107,214,93,190,38,228,253,227,107,124,
206,98,122,180,96,121,22,250,74,252,154,111,109,201,237,196,67,194,60,238,42,199,229,74,109,29,182,105,211,96,209,229,220,90,92,254,183,241,27,82,174,237,151,32,127,68,102,107,94,202,201,67,178,0,183,
86,105,91,102,5,112,41,64,175,19,46,60,36,222,83,91,114,91,36,52,61,42,22,250,200,10,117,169,152,117,52,155,212,250,138,30,171,46,61,127,94,40,200,89,9,228,35,66,57,22,132,130,124,82,128,190,125,149,247,
63,159,180,93,189,2,121,33,64,135,36,110,94,35,153,124,72,211,146,27,146,150,220,62,233,191,174,84,218,241,188,174,105,205,40,75,220,171,1,244,199,37,230,204,75,147,120,88,92,230,180,52,60,62,86,30,114,
155,149,87,49,23,147,118,150,175,64,206,93,224,25,111,42,122,214,150,220,144,88,231,14,225,155,139,91,114,43,145,218,97,170,122,244,73,124,158,177,138,90,254,251,101,223,209,136,36,156,90,37,28,149,140,
94,59,238,183,149,235,221,148,90,87,183,93,127,193,183,214,219,55,75,56,170,187,245,198,53,75,192,95,150,206,210,221,69,231,213,200,140,103,179,132,126,1,244,172,21,2,122,189,0,182,77,104,6,153,169,3,
178,244,90,171,160,119,137,251,119,83,218,73,169,13,228,156,103,243,208,231,73,152,25,215,180,228,158,214,244,18,254,75,86,46,191,176,74,61,106,172,172,82,93,126,78,41,8,150,11,232,78,1,236,249,18,204,
103,100,32,251,5,204,79,20,165,223,87,174,117,91,218,177,178,118,201,231,90,127,147,177,188,29,223,37,150,89,105,205,89,1,248,126,105,124,252,249,26,244,24,20,175,172,171,173,231,100,178,135,149,4,181,
28,64,199,165,47,120,147,84,21,39,203,247,246,201,162,219,103,202,205,62,44,219,182,215,67,218,174,221,6,116,174,117,253,151,132,194,77,151,215,136,80,164,171,138,142,83,46,220,146,91,174,212,198,242,
104,57,175,4,127,139,101,2,218,47,11,255,183,8,128,71,202,77,247,201,78,142,47,137,107,125,74,42,142,245,146,5,77,34,152,107,157,207,201,4,223,40,187,228,72,184,153,40,199,109,194,133,15,138,135,93,168,
37,183,92,169,141,228,10,104,45,20,198,20,64,151,226,161,111,193,207,136,27,239,147,218,119,191,196,170,125,210,81,122,68,106,245,245,148,106,145,245,239,10,232,25,9,71,239,44,199,131,50,184,83,154,78,
215,195,248,15,105,28,175,85,6,202,125,219,128,214,157,35,51,92,220,66,127,17,191,80,148,252,90,81,244,155,2,234,180,16,247,125,210,174,91,111,153,215,144,232,26,51,103,101,16,183,202,110,143,218,193,
90,144,68,180,77,60,231,73,252,89,151,244,24,88,116,108,119,236,103,218,111,44,150,87,72,76,58,46,153,241,42,113,151,33,1,246,222,114,131,63,233,146,162,75,73,155,251,85,171,152,145,181,254,221,194,43,
79,8,53,58,32,201,243,1,177,212,187,52,52,103,173,82,91,118,109,169,222,50,205,249,45,244,37,178,145,107,22,255,36,1,247,128,4,245,171,37,65,45,72,108,237,165,44,174,148,70,101,195,86,93,223,191,92,38,
253,114,169,222,246,200,82,203,106,218,133,23,146,126,97,13,85,151,74,231,206,42,188,123,49,160,187,164,161,208,145,152,179,69,92,233,152,16,247,59,196,170,239,212,187,31,91,209,108,108,168,60,112,30,
47,16,143,169,251,219,15,23,157,58,178,65,225,81,221,143,237,117,169,100,49,160,211,206,3,232,118,137,69,131,66,124,251,37,131,78,10,101,170,117,249,221,122,255,75,224,154,12,234,74,231,88,121,213,173,
227,51,146,44,119,73,56,58,161,59,77,153,197,82,249,102,221,83,117,68,51,201,207,74,74,99,210,157,25,21,174,121,74,102,162,254,184,234,189,154,221,29,237,93,20,189,146,218,33,175,189,199,237,26,82,61,
33,187,138,95,32,46,126,72,42,186,245,152,244,186,67,132,120,196,231,5,228,186,31,234,153,55,199,100,87,217,100,81,112,86,50,248,205,50,227,147,18,147,14,175,131,146,203,145,170,103,109,68,204,139,139,
141,200,42,229,229,226,226,159,21,35,56,223,254,168,110,200,136,128,122,86,146,245,105,153,236,103,86,1,218,139,95,95,23,16,167,100,125,122,55,254,165,117,253,160,141,147,62,81,250,72,209,229,73,25,216,
105,205,70,133,123,196,58,215,178,50,176,148,212,137,156,151,230,74,191,76,224,49,153,216,103,98,211,241,162,228,13,229,205,171,101,6,14,10,161,94,143,250,124,37,210,209,108,72,120,76,72,252,156,128,185,
93,58,96,79,88,125,211,99,185,114,84,10,153,237,154,223,157,214,21,211,135,104,118,65,204,73,166,172,193,245,43,154,202,104,165,75,190,235,33,39,53,155,184,206,148,215,23,101,96,127,45,86,178,71,247,91,
134,139,101,175,116,173,190,175,28,107,131,104,91,253,192,128,166,113,59,95,222,28,208,172,92,110,6,48,73,85,246,67,162,223,180,184,246,81,153,248,135,36,41,28,233,129,30,149,192,79,138,103,63,44,60,247,
152,210,190,171,255,128,96,45,219,2,123,37,175,150,255,224,112,78,243,251,249,189,194,53,143,232,157,254,3,210,203,152,16,70,52,181,248,77,61,84,102,45,114,88,6,64,214,172,102,37,187,247,154,121,156,115,
145,156,114,41,252,139,140,42,163,154,53,241,141,100,28,23,149,255,7,63,70,123,176,84,162,0,121,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::icon_saw_png = (const char*) resource_MainSynthGui_icon_saw_png;
const int MainSynthGui::icon_saw_pngSize = 3058;

// JUCER_RESOURCE: case_main_png, 65490, "../../Resources/case_main.png"
static const unsigned char resource_MainSynthGui_case_main_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,244,0,0,1,119,8,6,0,0,0,83,242,185,252,0,0,32,0,73,68,65,84,120,156,236,189,75,
186,36,171,206,44,8,249,221,238,157,64,141,163,90,53,133,154,255,16,106,4,183,255,83,141,112,192,100,50,9,240,240,88,143,220,169,115,114,47,127,128,16,32,100,146,28,247,168,255,207,255,253,255,254,127,
165,148,255,93,254,67,84,197,181,6,247,26,252,229,242,243,90,45,173,180,82,235,188,219,218,235,46,94,155,247,74,169,138,169,106,100,147,144,157,191,186,102,24,245,81,178,192,243,132,125,239,103,107,190,
72,43,112,175,218,242,178,29,117,223,136,89,93,255,55,68,244,50,139,186,253,124,103,122,148,190,180,18,207,4,151,87,164,244,144,239,241,177,234,67,84,239,93,90,169,8,202,160,174,225,245,213,24,71,227,
155,213,81,124,117,223,55,102,163,145,220,213,220,10,117,238,50,7,179,252,85,192,148,219,25,196,149,221,104,165,180,90,74,109,246,214,249,132,191,26,179,213,44,3,213,215,72,23,93,31,162,115,110,42,180,
45,211,222,42,91,107,174,181,117,199,51,125,85,235,247,169,181,243,65,250,63,255,171,148,242,127,125,183,20,95,69,74,225,148,14,85,250,59,38,23,21,165,94,128,210,154,4,112,172,104,64,137,139,46,80,39,
91,147,118,173,79,70,10,232,144,151,228,137,0,187,208,92,101,184,42,241,64,195,213,176,226,138,144,81,153,227,22,13,147,90,116,53,40,175,108,98,47,219,68,221,38,234,238,80,11,254,70,115,153,233,165,42,
159,201,149,201,121,210,7,229,40,168,118,179,246,121,92,79,228,81,124,20,191,200,217,81,203,77,59,63,182,164,156,171,58,239,14,25,174,53,141,237,85,234,232,112,90,89,46,33,32,226,143,25,43,44,23,121,67,
93,190,171,12,45,33,67,185,14,84,81,198,66,94,54,246,33,239,29,111,184,151,3,38,108,87,106,245,246,22,207,13,144,87,49,176,212,28,158,179,109,136,156,80,33,230,79,162,255,253,191,74,41,255,167,252,135,
34,244,200,155,70,82,139,122,148,151,209,247,75,169,94,10,23,180,153,185,131,9,173,20,167,129,89,202,64,192,200,82,230,66,49,205,119,199,35,114,191,203,92,31,224,215,140,131,40,58,239,134,174,93,141,254,
169,157,45,44,70,221,28,245,85,95,231,186,171,5,200,199,217,226,125,138,148,209,80,101,148,76,253,26,242,89,141,151,138,216,34,245,75,245,189,172,245,73,57,84,92,111,103,92,51,7,34,146,57,226,17,245,35,
146,45,114,0,236,253,249,95,52,3,102,13,24,249,154,185,63,156,211,174,255,173,56,115,226,130,75,88,163,13,215,107,187,218,226,9,192,78,113,39,176,188,40,186,38,4,252,55,86,74,166,88,32,95,150,185,99,112,
31,199,106,64,95,5,28,171,204,217,195,114,202,143,250,161,244,127,254,215,119,75,240,85,196,19,161,156,194,12,228,75,226,29,182,214,0,212,139,213,152,40,180,16,66,237,123,126,194,169,200,74,177,28,43,
180,4,65,134,209,40,218,249,237,247,13,152,131,91,93,75,7,114,181,136,208,64,88,153,119,12,49,119,143,143,213,185,34,229,165,71,199,44,79,63,231,113,80,141,140,97,193,168,170,31,67,35,236,100,149,2,60,
57,106,9,58,131,115,239,248,245,246,58,15,60,134,54,187,172,93,167,157,62,193,169,57,230,242,158,165,169,167,230,55,115,6,238,64,73,230,236,102,114,168,101,140,117,114,153,170,171,107,150,24,12,182,113,
16,24,212,169,110,41,4,238,84,0,215,172,185,23,120,118,134,143,104,91,19,167,230,95,204,86,235,205,220,95,217,33,174,88,202,21,133,191,206,57,253,158,166,228,187,253,222,108,78,57,121,153,14,253,20,250,
243,221,2,124,5,69,96,192,24,203,127,251,113,244,76,38,76,181,99,3,134,81,46,99,10,202,131,193,129,143,136,197,35,237,132,83,142,12,84,83,108,120,58,120,191,198,2,254,138,38,153,216,200,227,191,66,199,
220,45,197,135,143,83,170,179,47,40,39,94,115,215,175,127,21,11,84,28,135,9,126,78,144,213,128,68,157,194,249,138,60,155,38,202,247,99,53,56,217,0,51,31,135,214,112,188,42,3,229,122,122,186,20,24,47,28,
51,24,219,94,118,252,163,250,220,188,34,229,76,48,69,221,143,134,36,154,18,244,223,43,157,71,50,205,243,190,94,106,169,48,160,163,207,205,214,101,249,218,117,19,101,236,152,215,212,92,70,157,161,114,209,
248,42,63,1,251,162,156,115,164,229,250,140,116,54,57,238,145,121,127,4,58,174,149,98,141,90,173,33,187,72,94,44,119,162,127,223,69,127,125,132,142,11,161,138,191,43,26,139,147,192,219,40,78,173,203,231,
206,158,161,191,220,229,181,74,183,175,54,3,104,86,157,35,96,104,151,241,104,173,152,72,155,7,111,14,65,133,255,106,182,217,117,94,84,145,225,88,121,250,204,195,44,60,184,96,248,35,224,246,62,177,16,171,
177,227,243,200,114,175,44,134,24,227,240,62,119,48,2,241,93,185,162,62,174,172,48,47,162,136,191,146,153,249,71,50,70,168,64,160,94,26,232,164,224,181,187,38,51,167,81,221,219,209,115,5,254,204,155,239,
119,104,239,119,58,88,99,153,63,229,178,61,181,184,108,16,174,217,161,34,80,198,60,10,83,158,71,95,19,112,159,215,210,202,217,65,219,208,168,84,54,166,166,252,238,90,236,34,119,155,85,155,112,88,170,179,
213,102,89,137,64,109,181,108,89,188,104,57,124,7,253,245,128,206,58,203,246,113,53,33,10,200,231,243,242,102,141,202,168,68,76,189,43,235,138,119,89,253,213,53,177,145,91,90,155,64,35,17,212,251,173,
145,194,10,229,180,215,98,199,36,38,133,23,120,174,142,241,66,79,25,71,247,71,35,17,179,29,39,136,235,237,148,143,6,44,48,164,174,46,234,78,11,234,50,223,82,116,63,35,175,42,66,156,21,88,243,245,76,231,
148,92,167,142,81,52,214,56,30,217,28,39,60,28,240,119,176,92,136,140,226,121,96,139,235,236,56,16,106,138,199,80,143,77,96,179,206,203,49,181,3,158,61,78,238,89,17,3,248,220,166,24,203,113,169,205,250,
138,148,45,107,226,78,191,187,4,195,160,128,21,113,158,181,210,157,158,9,230,195,118,99,93,145,125,85,203,45,163,159,2,230,165,252,229,128,174,240,180,147,194,55,99,63,130,215,33,240,58,42,208,17,40,8,
89,236,241,154,73,184,240,20,243,90,198,51,183,118,93,139,94,27,251,83,95,175,227,97,239,86,118,82,201,182,227,181,58,91,127,93,232,199,75,71,37,51,230,170,140,106,184,208,125,5,62,145,12,11,197,66,195,
185,228,165,72,237,218,205,24,84,24,117,86,144,74,51,130,3,62,206,185,253,72,46,125,127,72,180,161,143,163,126,228,1,98,217,235,158,227,159,57,53,124,63,115,44,196,208,142,75,56,68,48,175,60,116,153,127,
20,137,151,93,199,38,178,153,55,247,71,74,89,213,136,201,56,47,59,1,1,52,129,25,174,97,91,210,22,253,8,109,129,97,100,128,130,123,117,108,252,232,206,132,110,101,216,246,146,99,2,202,25,45,149,159,0,234,
127,53,160,119,82,0,19,217,156,104,82,178,247,31,151,141,111,211,94,97,99,139,147,42,195,115,239,197,209,51,191,174,241,6,182,215,223,58,235,39,188,179,118,85,25,35,50,200,21,70,135,106,133,69,141,101,
150,84,77,126,230,28,68,228,12,135,40,12,151,66,21,169,86,156,188,205,121,211,26,13,59,103,214,144,171,58,112,143,193,62,104,86,206,113,181,135,17,126,70,117,172,136,77,223,235,164,152,103,136,24,89,85,
158,219,12,37,51,135,160,31,10,71,193,69,195,200,23,202,245,227,157,141,103,12,234,222,241,143,205,128,5,162,106,203,66,74,98,100,229,232,28,143,97,31,154,23,144,218,108,230,32,38,255,106,237,122,67,157,
108,59,91,59,176,115,176,146,222,187,215,221,58,171,214,182,213,131,69,248,9,160,254,87,3,186,90,155,17,94,152,53,79,171,179,191,142,102,158,33,103,6,96,39,250,34,234,10,158,41,133,193,144,68,179,204,
59,178,194,216,244,246,152,29,119,229,142,162,74,167,9,172,142,28,150,204,144,174,60,177,213,121,231,33,239,163,96,55,38,237,38,101,221,81,190,13,151,223,153,11,129,57,143,211,169,108,254,254,98,188,21,
72,70,168,226,125,25,115,219,17,47,126,213,230,202,178,115,155,43,100,21,206,80,197,19,209,68,230,28,23,186,207,235,85,13,73,95,245,179,141,230,222,90,233,12,6,239,171,176,25,178,166,101,31,109,138,62,
229,212,1,222,107,72,168,95,41,152,195,95,114,82,100,113,204,194,194,70,162,83,171,112,103,173,62,73,127,53,160,151,18,175,71,127,47,255,242,219,220,197,220,181,31,152,220,2,112,27,57,169,133,235,22,61,
51,0,10,69,64,35,82,39,144,115,155,202,64,88,57,3,185,68,219,149,181,90,81,102,44,185,33,60,14,193,153,37,20,167,233,0,177,54,88,177,50,226,113,88,169,67,118,63,154,230,0,23,210,107,39,247,223,169,163,
166,76,233,70,164,71,17,191,149,131,187,37,165,185,141,86,189,245,112,21,208,201,215,117,95,120,68,193,248,120,229,12,40,49,88,78,104,79,233,160,90,6,92,6,203,225,177,22,121,218,31,252,62,68,47,208,20,
51,166,160,31,166,79,36,103,60,167,145,182,28,128,57,223,167,241,110,48,223,209,30,41,110,55,83,1,85,246,187,232,175,3,244,72,247,250,64,171,107,19,52,253,84,88,128,143,61,60,39,196,130,16,204,149,10,
27,79,87,85,166,69,196,128,138,81,186,133,113,37,71,30,200,176,76,242,56,178,62,145,220,60,81,43,235,46,27,58,163,21,200,236,2,204,138,255,174,28,143,209,26,245,190,148,50,231,99,117,222,41,118,188,99,
103,51,42,167,74,244,20,236,11,176,170,41,97,120,142,91,77,43,13,11,219,22,122,178,10,4,2,3,198,223,13,80,0,29,173,101,229,184,51,217,177,158,32,255,234,191,119,120,150,118,48,2,254,166,157,13,95,236,
245,223,29,103,218,148,9,58,105,237,227,202,206,55,188,49,118,194,103,230,44,58,15,229,252,16,253,117,128,94,74,60,240,81,80,136,15,146,26,238,130,164,119,66,106,183,0,236,25,32,115,92,120,37,154,196,
154,46,192,72,86,85,56,76,169,195,115,161,19,69,90,226,170,18,110,229,186,70,161,22,51,221,240,150,118,64,151,207,179,49,216,5,152,213,61,11,22,216,50,72,69,15,166,213,171,178,145,167,161,236,188,236,
19,220,116,155,184,144,154,173,210,212,73,52,136,161,55,20,185,210,175,107,213,85,138,105,103,30,50,128,202,36,193,186,172,27,161,116,168,155,184,190,141,0,47,180,90,62,189,81,247,178,8,88,57,240,77,28,
139,102,86,160,178,23,120,3,216,153,90,129,152,221,225,96,143,140,156,146,136,230,173,104,246,124,155,70,127,153,122,1,225,5,33,120,243,51,245,241,33,26,124,245,45,22,59,108,246,164,206,187,244,87,2,186,
208,127,243,151,175,55,64,197,122,157,207,215,181,218,101,28,197,180,68,30,118,74,234,11,75,112,23,21,94,44,4,92,40,230,51,172,181,23,241,209,56,251,27,234,158,151,178,232,190,40,185,50,132,9,67,40,203,
28,55,201,100,227,179,129,125,196,215,95,215,83,84,253,233,194,5,31,198,139,64,180,149,82,234,181,33,103,152,129,4,160,93,71,34,43,208,231,155,101,11,172,178,139,92,176,76,213,183,26,220,227,243,84,215,
175,53,226,49,222,50,27,176,206,14,130,82,208,204,161,232,75,54,216,93,150,3,148,191,158,249,168,209,48,251,150,171,45,224,168,237,121,35,74,16,17,48,56,149,85,192,9,60,86,96,30,250,219,116,173,5,53,250,
116,184,253,59,236,61,145,205,168,165,140,79,21,199,56,31,143,122,234,34,70,158,91,31,159,32,136,224,212,187,15,238,246,72,77,217,158,75,123,143,254,58,64,87,74,171,236,95,247,188,138,250,30,48,144,219,
141,25,45,68,90,203,221,33,84,133,20,112,25,150,145,71,82,138,13,20,0,216,255,16,111,110,103,69,21,14,66,239,57,112,50,92,195,142,241,90,130,29,99,18,81,92,54,64,99,49,240,21,129,57,225,102,230,78,12,
246,112,178,170,240,95,26,21,87,19,20,88,93,55,188,74,63,34,203,129,199,171,144,1,22,76,83,114,37,128,36,69,231,126,87,171,107,146,196,52,245,11,174,91,156,46,119,125,222,51,159,153,175,178,35,238,113,
43,174,65,193,65,57,109,153,48,17,120,245,42,112,93,249,82,138,157,106,110,178,169,36,222,245,223,14,234,21,120,116,112,15,156,18,243,45,137,5,176,171,237,115,202,198,187,27,74,119,233,184,85,241,121,
88,198,5,241,238,58,116,101,214,163,102,89,164,79,208,95,1,232,56,103,106,174,162,107,5,210,40,234,53,134,94,193,121,153,170,97,226,175,165,180,164,130,146,136,244,46,205,235,19,171,155,232,23,217,132,
16,115,213,10,81,222,182,171,159,67,108,228,104,172,176,38,226,52,34,195,220,123,139,5,41,9,152,35,192,193,181,166,116,129,58,145,130,48,159,147,50,184,119,216,51,171,27,45,128,72,62,174,219,79,149,5,
143,172,122,116,79,201,67,101,164,190,11,153,27,223,235,215,46,222,156,225,215,227,13,55,51,131,238,42,175,87,165,26,94,230,160,244,93,1,145,228,48,46,181,61,196,93,33,28,235,16,129,232,202,22,97,63,122,
89,107,14,170,121,37,14,219,88,92,114,13,100,192,174,190,200,158,250,171,217,186,99,179,112,121,156,47,204,158,246,101,180,132,63,2,3,187,224,35,223,139,151,163,243,55,31,166,191,234,91,238,60,153,153,
93,115,145,56,60,39,121,241,106,241,108,100,70,174,216,73,67,47,32,242,212,42,22,67,13,161,25,87,96,174,218,101,69,81,74,62,192,66,173,44,188,199,114,56,11,85,197,63,205,146,217,103,101,164,48,125,33,
245,21,63,206,83,6,126,133,173,40,242,56,88,161,20,175,72,134,128,198,88,92,245,42,116,213,176,163,115,85,175,154,10,73,131,253,80,245,175,18,11,28,122,197,7,39,83,57,19,60,217,145,146,246,107,66,239,
93,25,92,39,60,23,209,220,240,120,194,245,174,74,246,124,254,46,129,93,44,145,158,251,129,143,112,67,13,145,230,128,53,72,49,178,10,43,253,45,186,7,56,247,145,109,233,199,81,124,83,199,127,175,191,245,
250,44,54,59,170,204,91,13,107,245,101,133,200,206,18,70,56,176,36,210,29,254,246,136,47,95,221,99,38,53,46,253,122,52,45,79,210,95,17,161,71,182,193,0,38,18,68,226,209,100,57,184,12,163,81,172,195,138,
95,195,123,253,34,219,58,183,145,196,138,172,101,19,50,44,49,88,209,202,16,140,251,213,241,141,100,201,206,249,206,200,100,85,226,157,78,38,68,109,157,21,175,102,229,225,240,241,166,245,53,236,200,64,
134,145,199,6,101,6,40,59,223,31,227,117,187,199,215,15,26,39,213,113,25,145,218,175,193,32,166,250,197,74,173,218,22,32,223,138,47,27,69,250,174,175,46,178,135,10,188,176,64,121,149,104,209,208,97,51,
81,242,192,60,6,148,186,186,136,146,213,57,240,192,31,132,201,158,109,71,115,227,76,24,166,56,65,182,241,133,186,42,214,14,233,65,169,69,110,151,152,151,230,166,203,149,79,232,24,36,11,42,250,237,245,
113,12,191,184,201,213,213,113,100,151,159,162,191,2,208,59,153,181,86,132,146,148,110,252,231,238,69,243,141,95,74,181,27,38,199,150,90,87,168,120,160,22,82,96,108,106,128,196,139,181,153,123,133,89,
158,168,87,66,129,5,128,225,241,222,16,9,47,134,110,243,169,1,108,101,237,34,99,174,156,163,68,200,147,126,236,24,233,59,148,183,191,99,2,52,4,216,22,190,158,118,176,95,169,184,43,7,198,31,159,199,183,
180,18,92,87,225,20,159,119,156,222,81,6,161,135,198,57,73,245,61,10,38,244,223,163,53,134,188,85,251,25,144,33,254,94,231,249,134,53,75,74,206,249,225,172,41,219,112,224,27,213,237,115,208,196,50,14,
128,125,118,205,235,127,42,183,2,8,154,207,161,22,34,93,128,247,250,174,120,101,86,119,85,242,93,250,107,0,125,211,102,143,1,52,138,2,160,46,1,220,121,230,154,55,122,139,170,205,248,194,60,231,157,161,
195,241,112,109,104,86,238,92,129,223,194,43,245,45,172,97,34,103,81,221,24,98,164,86,75,153,63,10,3,11,185,223,79,101,198,191,13,154,16,118,244,46,80,231,101,148,107,179,203,233,78,251,239,246,226,9,
183,227,132,212,120,188,103,194,14,253,52,87,121,72,212,143,35,163,206,199,153,16,160,163,67,143,163,122,202,35,25,109,199,99,19,245,55,114,11,36,88,96,244,30,57,241,248,23,250,82,169,142,50,39,141,254,
42,249,175,23,128,71,41,51,12,228,112,152,32,167,59,76,232,112,73,234,54,171,133,178,24,82,1,12,219,224,110,159,137,27,254,76,171,250,153,109,133,55,81,28,245,4,184,255,53,128,222,73,6,151,157,232,213,
180,81,199,124,72,160,172,189,215,3,114,38,94,89,163,50,129,188,22,186,95,235,178,121,5,234,174,176,44,64,247,170,189,137,124,247,0,177,202,195,136,159,19,77,25,147,77,126,36,186,43,190,63,109,251,37,
231,152,188,161,32,71,237,60,75,193,102,221,167,91,217,188,118,151,34,243,24,211,114,182,200,217,28,156,217,34,239,58,198,172,199,129,167,249,194,248,26,135,120,7,175,232,81,224,171,75,27,57,168,116,16,
112,152,234,205,94,90,141,190,247,115,230,23,56,75,105,242,151,223,218,117,162,191,181,81,140,243,239,219,211,146,185,171,193,124,152,57,238,115,228,156,176,142,250,211,219,80,63,201,106,252,56,33,139,
151,242,30,253,122,64,87,115,193,30,17,222,47,144,94,151,169,246,82,228,68,158,75,35,238,4,6,65,167,246,192,249,40,249,196,59,31,33,26,20,101,36,74,49,171,229,220,115,172,102,17,186,118,225,216,69,46,
221,235,173,69,46,88,99,232,138,30,221,124,122,62,1,131,231,220,87,17,5,222,103,144,117,155,209,128,79,180,97,136,239,71,31,31,98,121,88,78,122,245,182,244,104,197,213,43,215,252,44,12,44,183,245,140,
51,241,142,51,165,50,43,27,156,221,130,179,28,249,117,45,115,95,205,69,95,31,74,68,213,48,44,136,215,124,228,178,115,83,146,204,75,236,187,149,160,177,102,231,63,179,25,42,90,109,195,142,180,33,142,211,
195,40,204,93,180,199,119,21,102,135,2,170,243,113,249,149,107,112,31,167,129,244,59,75,129,127,115,41,239,209,175,7,116,158,156,172,156,122,231,156,255,206,194,197,107,102,106,47,206,193,188,123,159,
101,94,18,17,159,173,22,245,173,86,81,40,211,92,16,10,111,113,228,172,199,214,174,164,166,42,236,8,94,189,120,153,178,71,103,95,65,221,192,184,29,186,116,77,253,82,21,242,120,21,130,57,163,58,165,144,
190,136,118,120,171,71,55,166,67,77,169,46,27,71,213,15,183,121,90,88,35,225,255,121,163,43,28,16,69,145,211,193,78,141,50,236,207,101,21,86,206,128,50,0,121,227,110,189,208,92,201,177,65,229,79,64,203,
44,59,99,170,234,156,127,183,24,227,232,84,67,120,165,130,109,207,166,240,252,7,195,196,166,213,171,217,76,148,227,220,219,143,103,137,246,74,49,159,196,141,92,156,254,227,208,97,192,194,131,210,111,10,
21,224,77,213,252,33,154,14,234,138,101,129,107,79,90,179,95,15,232,76,17,246,190,140,212,252,149,161,108,50,36,248,221,53,34,168,16,180,56,181,7,103,33,61,90,120,166,238,202,147,17,86,38,235,146,102,
87,73,153,193,128,168,10,201,53,221,239,172,27,31,0,112,26,255,97,8,84,4,85,166,65,113,21,232,180,27,161,118,181,209,104,2,107,45,99,135,247,48,82,189,14,222,103,3,2,128,173,148,66,102,76,251,120,3,47,
99,240,200,193,96,190,149,234,184,118,0,84,250,179,206,208,233,193,246,96,156,240,92,253,229,99,62,239,109,119,7,73,241,52,114,31,173,229,169,153,179,58,43,71,12,33,17,55,190,16,58,196,137,143,97,193,
155,0,169,77,123,214,186,50,145,136,170,25,217,3,222,132,179,107,107,10,140,127,51,127,162,226,228,39,216,202,184,174,162,12,7,58,19,209,140,240,143,180,110,1,234,170,0,53,134,24,211,21,111,87,75,234,
65,89,69,191,26,208,25,244,210,201,129,231,231,243,146,24,54,116,29,201,120,197,56,31,66,96,46,168,83,80,255,141,247,116,98,35,128,137,250,0,21,240,114,174,212,212,113,2,163,208,190,81,147,251,144,124,
31,188,179,180,242,88,91,189,59,32,167,1,33,4,80,180,99,151,17,117,192,64,224,226,238,101,150,147,116,96,108,12,44,197,14,187,154,215,94,93,232,150,1,115,230,149,240,83,158,21,202,227,234,195,177,210,
33,44,175,210,244,131,63,204,137,201,52,16,95,94,15,67,116,148,65,128,72,197,235,166,241,226,55,79,178,190,136,46,235,158,172,244,54,54,207,216,7,148,89,214,226,102,120,112,174,107,232,100,249,175,38,
105,89,216,156,248,59,193,224,50,235,90,194,73,99,147,20,129,252,52,137,147,145,1,245,21,131,82,228,206,252,87,251,182,31,178,76,52,157,206,190,117,155,141,136,142,6,229,42,211,154,155,87,53,76,94,214,
51,250,213,128,222,73,216,98,61,73,215,64,171,185,50,153,37,53,242,212,70,25,127,3,48,239,5,9,196,155,173,108,36,148,114,237,240,102,49,12,160,228,166,40,6,243,170,199,64,187,189,14,188,246,96,121,93,
202,116,17,1,24,68,49,169,57,20,21,214,149,117,156,44,168,115,186,210,1,87,165,182,168,33,185,232,12,80,216,129,100,112,105,112,189,155,24,252,189,250,105,151,237,254,96,211,87,144,53,51,4,22,216,175,
103,128,116,221,76,117,181,50,12,176,24,28,105,223,111,245,109,163,129,28,170,43,192,210,128,40,1,92,63,48,96,64,250,169,230,157,65,27,157,52,59,71,210,14,203,244,254,189,231,255,171,213,61,103,128,151,
114,84,35,45,88,172,78,216,201,133,73,68,197,15,216,121,41,97,50,149,166,57,143,171,152,177,30,107,47,168,198,102,109,140,74,107,38,97,96,222,8,18,54,8,251,161,204,174,128,98,87,70,84,50,215,135,56,244,
40,215,84,165,212,59,222,139,204,247,93,250,43,0,189,20,111,140,220,160,208,243,243,82,250,36,92,134,83,1,22,49,217,89,195,217,100,32,168,244,117,84,175,5,102,48,24,142,29,224,170,14,114,33,180,190,192,
7,89,8,187,89,6,168,116,69,85,139,36,64,139,119,1,60,114,44,106,241,62,73,239,154,17,75,128,129,3,234,75,246,113,253,58,55,96,216,141,5,200,99,162,249,62,87,8,18,197,31,179,1,169,240,95,223,199,90,236,
80,219,31,170,169,97,57,26,147,128,184,206,212,43,47,213,138,175,159,39,255,22,134,210,45,55,86,60,198,112,221,214,157,32,247,154,51,111,134,187,174,226,135,105,156,145,14,22,175,113,206,168,158,89,106,
176,110,87,155,12,247,159,245,239,140,118,94,66,150,84,246,128,239,69,157,19,237,226,28,197,18,53,59,249,220,30,201,196,54,46,34,83,189,218,23,209,150,89,148,141,70,48,5,31,22,227,1,32,197,238,143,180,
80,39,195,13,215,109,150,202,236,135,106,122,135,126,45,160,115,71,215,64,186,128,28,70,83,106,75,15,168,231,153,2,48,205,92,173,108,14,83,49,52,194,43,109,8,192,60,54,220,24,29,78,86,165,131,123,212,
94,175,29,14,237,30,204,247,146,209,51,208,17,73,183,216,123,190,54,151,78,163,35,44,115,7,226,6,215,248,81,76,7,106,51,212,213,247,36,3,65,195,190,236,45,198,93,128,222,29,209,93,249,118,101,168,65,153,
172,237,8,87,24,83,34,35,246,58,158,103,54,195,2,144,143,78,64,37,125,175,109,56,210,120,29,191,127,16,173,39,174,135,117,21,169,117,192,27,33,207,72,1,188,214,40,182,57,199,109,245,53,86,58,200,21,183,
144,114,119,163,79,66,179,5,24,84,113,14,175,107,145,141,138,157,171,254,219,13,22,216,165,163,213,197,66,91,226,248,111,194,102,102,7,219,133,49,181,200,183,14,94,109,199,239,170,203,242,201,189,136,
126,45,160,151,162,177,140,85,126,220,135,8,221,123,77,196,196,24,14,61,205,238,87,216,250,245,192,237,26,77,116,32,7,208,85,253,194,246,205,129,2,117,146,44,226,21,150,235,58,198,96,167,59,190,80,178,
61,21,228,5,22,237,146,110,88,182,179,103,79,25,228,31,38,169,78,195,164,192,66,141,49,235,211,89,143,226,178,167,139,242,111,161,59,78,202,157,177,226,249,179,115,168,191,227,48,214,53,60,198,40,165,
77,160,167,58,242,109,134,164,108,169,211,25,232,106,25,246,173,129,243,144,98,138,114,171,242,80,195,172,103,85,133,88,58,151,129,83,138,81,27,238,106,41,238,69,245,216,152,142,113,203,128,157,237,122,
171,211,10,135,160,206,78,132,148,185,95,139,4,20,252,34,163,82,139,219,112,221,156,145,139,41,91,35,59,78,218,175,254,113,22,101,136,149,238,242,247,120,13,128,247,74,98,36,227,65,244,133,3,22,6,204,
57,194,88,121,163,142,241,42,212,38,133,169,37,146,171,218,155,188,138,1,48,199,174,227,132,87,75,238,142,230,136,151,185,13,139,17,187,137,99,50,186,78,11,106,238,138,198,246,95,199,43,59,150,1,78,210,
155,7,105,213,66,77,254,241,125,230,169,202,102,109,103,101,119,100,253,126,202,122,20,223,7,219,48,86,101,29,255,27,250,93,85,141,220,200,26,125,110,22,176,76,57,88,27,67,54,161,227,154,148,94,196,119,
43,242,86,232,214,50,179,88,173,96,97,185,228,142,82,203,203,222,212,58,229,211,128,59,171,76,118,182,13,222,79,227,24,4,118,62,58,11,11,119,27,25,8,41,127,75,29,30,245,246,199,7,202,198,241,241,166,100,
165,148,95,26,161,103,248,198,101,70,74,149,119,68,245,191,73,180,155,69,230,225,66,102,161,0,196,70,116,78,13,70,14,115,250,251,220,166,29,255,26,154,52,223,24,50,176,23,212,104,40,106,166,64,123,75,
128,159,199,99,90,188,82,25,92,216,150,225,235,205,209,90,106,105,85,207,184,130,161,204,145,222,145,125,143,158,0,185,187,60,86,238,136,186,183,2,245,172,108,116,109,135,92,190,140,142,185,141,157,88,
228,121,82,210,205,123,21,238,85,177,62,172,87,60,214,47,129,75,95,11,165,88,224,194,0,216,204,64,180,176,195,33,98,201,93,204,237,74,53,230,121,85,49,50,161,233,224,206,45,68,179,217,76,24,16,86,53,242,
228,171,24,63,238,21,182,241,186,208,224,90,209,147,90,193,38,9,222,44,144,194,27,211,125,161,222,173,203,223,111,93,81,187,201,20,151,120,106,163,89,92,173,142,95,9,232,81,231,120,112,94,10,249,66,146,
9,32,23,64,32,90,38,160,190,109,94,2,231,96,120,139,195,0,160,97,72,20,149,13,70,232,178,85,119,219,117,197,109,239,246,13,118,5,236,202,170,135,35,55,232,232,132,32,96,143,166,96,124,204,235,89,213,222,
243,59,175,235,184,190,150,98,71,82,35,49,29,103,203,234,7,208,247,225,221,27,116,226,124,68,215,20,69,142,193,18,245,82,58,149,182,223,233,96,111,50,81,0,50,227,17,80,157,31,55,25,146,130,26,178,207,
141,143,1,6,16,25,68,206,122,170,28,180,0,220,105,109,246,95,90,27,215,16,228,175,206,25,59,75,252,24,239,204,93,254,69,56,188,221,206,52,192,86,125,9,205,31,42,82,12,209,97,200,132,89,250,78,2,220,103,
166,192,238,122,47,165,76,80,23,175,179,41,58,177,68,191,50,229,222,199,79,123,210,47,50,14,217,229,25,141,221,237,232,17,40,87,168,120,165,236,87,67,92,69,193,136,215,44,152,71,210,174,77,213,152,241,
6,173,240,90,111,33,31,208,108,65,124,133,174,131,185,231,26,115,102,193,199,152,183,50,210,139,99,158,184,115,134,229,252,237,105,222,155,176,104,249,128,120,164,107,112,172,202,63,208,228,170,92,38,
18,27,14,165,244,138,135,186,199,3,26,221,83,237,43,185,87,125,250,40,69,29,81,215,162,1,120,191,229,236,90,191,99,159,212,115,74,255,85,217,56,191,215,127,198,95,0,57,204,224,246,186,166,181,101,247,
242,49,24,169,111,228,141,246,66,118,190,119,96,222,140,86,156,187,219,141,132,42,124,29,171,38,35,91,252,167,84,0,212,69,69,193,59,26,29,141,9,158,95,191,86,175,11,161,24,224,153,101,162,86,58,207,232,
87,70,232,165,120,236,236,215,198,223,107,70,221,175,225,244,18,141,43,204,227,8,116,165,2,41,160,234,222,236,117,44,95,187,10,218,112,239,85,134,149,226,95,96,155,253,168,246,189,119,2,4,245,20,66,75,
170,201,25,32,184,46,154,131,177,213,207,33,213,116,220,167,51,147,123,196,150,5,86,129,226,137,69,136,92,112,30,64,149,214,81,247,120,32,21,15,212,51,230,133,127,177,124,70,110,178,111,156,227,245,136,
63,31,223,166,168,225,71,152,167,173,249,169,168,174,107,47,27,214,10,110,212,234,224,238,222,72,129,202,104,71,48,74,93,75,53,90,240,119,251,122,22,186,214,184,112,45,5,115,248,145,218,84,188,59,223,
251,74,215,66,127,203,37,178,251,40,90,133,10,46,90,199,174,86,203,195,243,159,119,118,181,98,100,54,200,89,224,79,140,247,231,232,125,231,187,50,29,202,217,200,180,244,87,1,250,142,45,232,247,102,222,
200,167,60,92,97,50,100,188,184,154,107,61,16,142,149,164,205,186,60,1,17,8,59,94,14,237,166,28,177,173,157,87,178,5,29,247,104,13,124,234,245,144,33,54,24,157,138,5,2,238,103,48,251,12,220,167,118,123,
5,206,202,27,81,101,201,208,54,188,134,50,68,43,56,83,114,165,35,141,110,71,242,71,206,44,83,228,12,70,78,3,215,139,64,126,37,83,196,23,175,43,121,50,71,135,219,151,180,51,40,76,247,157,0,238,46,251,90,
211,144,64,201,218,230,61,248,120,185,243,207,132,56,145,45,152,67,228,7,157,109,76,67,97,185,19,88,161,21,174,37,91,112,192,30,13,35,2,36,21,227,42,147,119,189,30,87,52,219,239,8,189,211,105,180,55,205,
25,117,202,165,248,65,7,221,7,104,220,123,147,190,47,59,38,160,211,175,74,185,227,248,167,118,132,223,45,190,6,175,117,77,176,171,70,187,125,64,217,128,142,186,192,139,159,15,103,246,36,156,74,105,91,
54,12,77,173,35,202,31,59,199,185,191,69,201,148,27,179,122,253,71,189,241,215,204,65,153,158,231,213,176,122,125,236,140,42,252,123,131,5,11,193,44,213,121,41,75,253,40,53,150,204,189,245,3,93,233,99,
234,248,211,185,25,251,133,28,40,72,133,118,176,251,227,253,95,82,130,10,199,179,97,226,143,6,123,133,97,104,141,148,65,85,192,128,134,123,197,43,48,154,174,189,168,237,59,248,237,136,25,222,103,172,84,
209,115,197,100,125,117,115,168,140,100,215,131,142,177,230,141,19,169,187,179,69,222,192,59,228,112,40,79,114,96,135,176,193,160,191,253,138,249,129,44,118,40,129,119,54,202,178,165,90,237,90,12,132,
201,45,205,98,62,213,92,208,245,185,33,18,126,24,172,120,88,194,107,204,146,150,138,161,95,21,161,119,90,5,8,165,20,153,106,175,209,104,4,110,208,212,167,68,25,5,143,250,106,246,82,160,106,110,171,121,
14,211,236,137,108,69,93,22,207,232,77,71,174,74,222,14,38,6,168,206,254,68,98,213,82,174,44,27,182,63,121,221,183,151,155,53,163,121,116,3,93,112,82,195,102,70,177,102,235,140,113,168,246,184,180,226,
119,10,131,17,141,112,107,136,123,253,103,196,94,164,55,166,11,181,148,190,235,159,167,109,92,135,193,96,144,48,70,254,106,117,94,176,111,19,188,230,149,246,40,215,50,203,52,207,183,95,192,126,155,161,
225,185,242,202,232,143,85,189,104,93,240,61,197,191,22,223,190,18,86,213,93,57,49,78,224,104,65,111,51,146,92,249,202,107,108,155,213,75,56,198,53,204,155,221,70,10,63,20,201,91,217,74,183,93,224,64,
99,87,107,185,126,235,221,90,7,221,100,125,109,28,84,78,163,88,171,42,80,73,44,154,182,221,253,47,84,208,9,131,10,43,213,242,52,250,221,137,231,226,186,208,10,100,142,251,2,130,177,89,153,178,136,126,
13,160,179,81,204,58,104,63,237,106,185,240,183,118,21,147,173,229,198,133,128,71,43,104,48,99,219,99,174,51,218,27,190,213,53,89,125,161,23,176,248,155,175,18,82,19,52,128,163,141,111,5,192,28,128,203,
98,163,255,116,109,153,85,54,97,249,0,246,177,49,5,208,124,190,178,161,100,200,199,174,226,58,135,191,175,197,249,252,114,126,93,111,142,109,19,232,54,69,54,198,194,53,204,240,139,229,248,154,30,43,253,
9,149,21,217,58,236,6,84,42,51,13,101,77,222,134,16,6,149,203,214,238,128,12,55,194,125,78,183,148,190,134,219,188,150,89,106,86,192,208,171,128,235,74,104,165,75,153,1,58,194,230,172,3,170,241,125,142,
99,254,72,31,199,26,86,227,82,38,168,163,158,71,45,181,241,95,186,83,161,154,48,84,13,111,214,110,72,108,168,100,205,95,87,134,54,111,98,103,217,105,163,98,120,121,250,25,160,75,232,199,22,24,131,13,218,
250,0,13,201,84,71,91,213,94,188,26,239,187,222,149,195,163,52,38,50,105,191,6,208,121,62,51,208,24,216,216,83,26,151,54,187,119,192,3,64,94,17,234,25,242,24,6,103,8,84,237,61,213,156,178,193,102,182,
44,15,101,242,157,135,77,141,69,96,110,35,58,95,30,65,172,148,50,119,218,14,80,175,166,73,13,62,17,109,12,56,23,201,180,187,95,139,148,129,120,214,82,108,244,98,170,51,140,245,126,51,220,177,136,10,166,
51,170,7,101,191,134,78,100,81,70,231,172,45,28,103,114,10,25,253,179,54,204,13,208,234,254,188,249,4,116,51,199,48,107,95,1,230,110,125,199,108,37,212,110,109,56,27,186,251,114,156,120,35,157,217,111,
177,28,47,187,248,148,31,149,86,67,143,25,106,168,37,141,194,180,222,13,44,4,235,153,219,86,114,140,248,250,98,155,125,153,239,196,103,203,250,140,254,149,129,31,12,60,155,142,250,119,240,14,233,215,0,
58,146,26,104,211,73,64,160,25,145,95,37,34,47,91,240,151,55,249,114,103,219,163,183,1,128,54,145,29,249,14,67,73,217,157,188,250,161,196,156,125,157,0,226,188,238,90,236,35,6,41,252,188,57,156,67,225,
250,97,58,13,151,94,45,225,232,36,109,222,44,30,44,100,89,30,188,111,244,137,140,135,60,206,109,245,220,75,223,133,233,125,218,41,203,58,112,140,17,11,158,239,150,187,7,230,145,193,125,151,108,126,129,
49,164,140,118,155,137,254,11,148,27,246,62,178,21,43,15,134,209,37,177,53,166,220,146,225,86,225,160,118,183,21,214,125,117,203,168,205,53,211,199,192,61,167,39,238,149,110,244,101,214,108,49,233,232,
188,214,40,122,24,40,51,216,155,10,178,162,141,66,155,217,252,208,43,158,125,103,192,255,12,33,168,2,56,250,241,2,136,126,171,77,52,136,52,250,116,82,184,31,0,0,32,0,73,68,65,84,61,247,116,241,55,222,
149,233,83,240,192,77,181,242,203,0,61,50,108,60,183,165,148,130,207,206,167,39,4,21,240,111,208,134,42,16,173,99,149,197,103,16,23,107,193,42,41,254,133,247,19,37,118,97,142,75,232,84,21,50,65,109,115,
36,203,217,117,111,106,156,25,221,7,129,156,174,191,158,203,21,187,144,97,21,178,227,243,20,157,128,234,29,0,86,246,69,29,255,4,202,12,40,150,137,12,172,138,74,62,209,199,234,142,181,17,64,159,15,13,118,
119,6,97,143,185,151,147,45,47,240,76,191,44,118,132,215,187,11,36,227,80,109,71,75,51,89,184,82,138,11,6,204,151,30,179,112,20,100,50,103,200,15,198,200,218,90,114,174,204,85,8,110,240,27,241,66,129,
212,23,224,164,29,165,62,99,61,51,60,65,83,212,149,227,169,171,151,151,201,143,136,27,1,123,102,189,248,222,175,217,229,174,58,199,222,202,107,225,204,15,227,227,64,153,231,230,29,253,69,27,43,195,132,
60,240,227,41,182,144,127,202,228,203,4,231,98,246,28,110,227,59,97,56,8,112,205,47,123,237,219,245,5,202,209,200,76,71,215,241,55,242,14,61,177,96,73,255,50,166,24,29,224,226,234,11,177,155,230,113,207,
238,0,206,153,199,146,175,142,79,76,168,143,59,162,1,152,29,213,223,198,175,139,127,101,241,215,30,55,113,77,181,211,194,50,179,127,241,120,212,81,134,251,18,213,203,34,171,239,32,212,168,113,94,231,157,
81,238,2,187,90,72,103,59,0,178,213,199,99,53,24,219,157,142,116,33,46,205,228,244,173,150,249,171,132,101,218,130,252,55,70,172,78,56,9,149,218,99,255,71,161,157,53,59,12,128,181,125,253,46,85,87,113,
207,171,234,101,41,42,218,20,81,88,216,212,41,126,117,197,67,162,121,158,206,162,238,239,203,121,1,29,83,247,137,237,175,138,208,217,177,229,49,71,194,111,231,246,243,149,43,181,109,168,9,64,225,117,208,
151,243,144,240,52,139,61,240,232,163,84,123,53,12,172,12,88,65,192,182,94,34,106,145,153,118,199,111,25,57,89,52,109,90,161,104,2,47,205,28,143,46,168,82,133,119,112,231,116,198,109,238,72,195,234,16,
233,128,141,36,240,10,41,195,22,69,229,212,245,83,158,209,223,29,254,59,114,41,190,165,196,253,143,248,171,113,211,112,222,76,185,125,119,42,83,179,247,8,141,172,237,51,46,71,92,144,233,55,1,148,96,74,
232,204,176,4,242,237,244,214,154,30,92,235,109,102,22,48,138,5,128,83,209,250,76,194,139,148,254,142,68,221,175,32,123,102,135,196,190,105,161,10,174,218,178,118,206,134,231,195,254,16,127,254,184,205,
4,245,69,175,188,55,241,26,167,102,129,189,81,102,153,163,117,36,133,17,191,38,66,143,192,220,156,83,62,200,252,92,42,46,8,2,64,77,12,39,190,193,241,14,39,217,184,136,173,82,144,210,117,146,42,165,0,154,
52,224,165,206,1,97,180,3,117,95,11,182,26,14,57,167,117,59,102,204,89,185,105,76,90,255,123,13,238,116,146,252,123,177,119,41,131,144,46,108,115,189,103,64,218,1,195,255,10,221,237,191,26,211,104,188,
163,50,124,239,69,173,96,134,225,158,140,167,53,244,250,171,195,128,191,206,64,139,5,226,237,238,182,78,186,174,101,144,13,78,66,155,51,215,155,103,131,246,42,11,170,173,5,17,18,160,163,226,178,24,185,
77,25,48,23,20,193,183,113,176,136,239,35,203,11,215,85,225,176,201,42,142,138,28,63,174,38,127,153,141,142,187,56,222,153,176,44,127,5,160,103,131,143,145,177,122,37,77,166,218,55,93,116,167,8,2,5,134,
30,86,91,227,160,25,112,10,108,79,157,113,96,199,164,153,187,194,152,16,86,86,58,86,218,49,76,206,46,5,43,89,217,144,197,128,188,128,27,147,229,185,20,217,93,127,207,10,164,193,58,55,34,239,211,73,108,
248,126,28,249,223,162,149,179,213,215,195,142,211,48,233,104,13,167,247,121,49,212,169,239,35,240,232,120,70,168,193,201,9,37,20,174,229,16,187,207,215,83,43,211,161,230,251,227,91,242,204,0,80,44,11,
110,20,208,142,155,61,19,64,246,208,227,64,45,38,26,25,209,175,149,133,219,98,211,135,111,92,140,13,206,149,228,66,167,35,236,149,37,215,127,149,81,224,34,34,40,237,197,217,172,114,191,126,5,160,243,56,
226,121,52,182,248,187,231,225,38,142,197,196,200,177,239,60,25,16,23,236,213,179,96,229,98,197,34,81,250,74,216,35,37,10,42,118,248,12,172,150,215,71,31,178,246,37,231,0,204,21,169,133,112,173,197,215,
2,68,103,232,125,96,181,99,145,27,237,175,163,147,182,243,249,56,189,190,219,250,167,93,154,73,187,80,249,142,99,179,235,86,71,102,50,115,18,158,38,0,250,254,95,88,227,108,127,164,40,74,116,41,246,153,
19,59,147,190,162,92,163,127,253,26,1,41,175,105,204,12,26,177,192,184,55,83,200,182,61,249,82,116,133,142,15,137,187,202,124,116,231,224,21,28,90,182,12,64,190,39,37,185,226,26,178,99,213,94,109,207,
159,87,189,110,209,135,102,86,252,107,249,37,128,222,73,57,161,175,147,26,122,53,195,211,227,127,225,168,111,44,90,94,52,77,223,118,178,18,152,43,208,137,29,21,250,161,21,200,123,89,113,132,242,167,253,
157,96,26,255,148,2,202,184,48,0,78,70,50,70,0,224,214,132,217,86,162,214,215,180,99,172,162,16,231,57,98,123,170,32,67,185,25,238,222,229,244,96,16,210,165,13,97,8,234,24,254,149,228,169,116,76,66,113,
155,200,11,235,152,126,80,187,49,237,102,129,222,1,209,119,64,184,47,26,53,83,126,230,78,180,39,26,83,15,90,180,193,19,39,12,65,20,69,98,96,221,22,76,175,23,223,219,142,212,94,57,248,245,54,245,90,104,
129,30,153,43,134,87,11,34,97,61,74,227,111,180,27,78,148,102,226,215,207,234,85,95,190,178,7,211,113,91,191,106,177,31,251,169,116,179,148,137,99,156,117,38,86,40,249,143,7,244,200,48,26,93,141,126,128,
133,39,35,75,89,101,50,224,98,1,214,99,39,184,120,214,225,228,16,139,171,218,255,4,170,129,207,144,125,229,83,117,26,187,218,75,41,106,13,4,181,66,233,148,125,171,120,29,21,183,118,35,165,160,108,77,126,
201,41,56,203,106,175,194,27,77,89,233,72,63,213,56,184,241,238,54,186,130,253,170,83,218,177,37,164,217,236,10,59,168,120,222,72,216,97,44,217,128,80,161,177,52,48,101,217,202,120,127,219,216,22,94,15,
84,6,199,5,101,118,142,70,213,117,120,183,248,248,27,139,255,33,82,156,201,170,111,30,43,92,40,65,141,72,134,87,185,254,209,156,43,85,95,161,132,202,192,117,219,179,179,68,68,155,209,253,46,139,225,75,
29,27,58,155,180,225,70,179,82,141,46,191,88,187,186,75,85,15,118,157,199,145,60,83,252,102,152,119,145,156,93,111,65,251,73,43,78,14,196,148,190,246,97,51,92,19,233,101,142,214,177,165,31,15,232,220,
29,181,156,76,7,241,99,50,10,192,51,155,46,72,22,107,74,89,237,139,82,102,90,185,253,96,129,105,123,251,242,29,199,119,128,89,209,138,80,52,234,0,238,176,157,78,16,74,204,125,57,32,209,31,22,117,62,27,
231,22,50,243,21,17,15,92,116,188,170,23,148,32,91,210,23,179,169,205,64,19,117,75,204,111,191,238,140,58,34,29,129,158,187,239,70,114,106,93,165,243,222,129,214,230,235,86,99,158,186,215,80,224,43,109,
245,218,95,80,95,25,27,52,102,12,20,198,71,197,185,23,125,55,131,0,145,207,80,157,46,46,24,188,114,93,199,157,213,168,251,52,100,118,52,170,184,6,60,23,102,247,128,34,71,209,30,55,115,221,182,186,147,
78,157,247,95,35,134,154,128,243,52,204,94,163,177,140,252,144,144,226,245,98,123,118,173,235,168,120,151,71,178,242,54,1,117,97,200,141,19,218,59,90,212,168,7,198,189,230,183,92,251,96,173,120,159,64,
227,131,170,186,182,17,104,9,99,223,216,27,31,215,141,171,145,210,175,120,109,45,3,46,188,54,63,243,26,48,136,152,56,142,98,96,89,41,84,180,173,216,15,75,57,11,180,82,224,195,13,193,212,99,189,209,110,
157,31,120,112,109,11,181,98,224,184,234,142,31,216,128,90,177,2,46,198,2,120,71,245,163,192,112,205,54,67,133,236,190,230,173,106,195,208,142,155,149,110,154,232,184,215,172,13,248,244,115,252,24,174,
111,217,204,25,156,224,115,51,238,147,87,17,152,49,57,176,202,68,137,186,206,16,121,211,90,225,235,34,30,130,106,113,142,76,233,195,118,61,49,29,136,130,38,215,102,211,108,255,166,151,220,51,19,221,192,
178,102,140,15,10,193,48,184,177,170,197,126,42,20,111,3,203,145,9,145,125,81,87,179,243,222,15,85,174,137,243,62,98,123,20,189,38,103,65,30,154,199,1,136,150,141,238,40,21,142,37,156,62,3,188,90,10,209,
107,195,174,246,230,218,172,155,189,230,102,91,65,6,118,173,245,49,48,87,212,15,168,67,32,182,194,147,185,6,166,83,25,237,199,226,81,74,160,98,94,36,92,152,182,165,132,145,57,99,28,143,215,143,5,116,53,
177,187,230,123,188,199,87,54,82,241,217,13,28,248,235,188,131,49,71,18,161,186,71,104,6,171,206,155,189,82,228,47,95,8,48,207,228,54,58,33,228,205,199,51,113,52,2,158,51,234,154,159,69,172,37,111,7,89,
52,211,64,102,226,214,154,208,231,199,112,233,246,0,28,37,253,140,172,223,236,229,251,160,219,1,181,0,130,209,49,210,198,72,239,61,247,112,148,253,56,138,111,99,159,175,118,65,116,137,248,174,129,23,144,
99,173,13,77,58,11,32,85,159,139,107,2,106,181,78,145,217,252,169,166,131,78,107,41,198,161,27,235,167,140,38,76,70,110,13,190,130,153,92,9,122,140,118,90,80,181,150,210,128,61,51,235,131,129,94,54,31,
223,68,48,197,223,54,111,84,188,3,57,155,165,121,220,127,95,2,202,71,254,82,41,18,97,221,252,112,25,7,160,186,238,60,246,51,110,190,145,225,48,0,57,168,223,101,35,57,184,113,104,206,254,22,201,188,198,
77,163,132,63,54,229,30,56,86,238,250,184,15,169,246,113,124,33,240,248,82,211,174,27,124,81,197,17,131,195,86,138,249,146,26,46,85,252,27,45,211,42,180,193,148,69,111,193,234,199,26,204,251,21,229,199,
116,3,88,178,148,80,0,193,184,158,201,13,29,207,104,75,231,95,232,40,38,255,197,50,110,240,156,48,157,107,56,53,48,40,104,173,113,112,77,84,201,131,174,199,38,87,171,248,213,157,119,233,254,8,125,154,
238,75,230,127,127,171,4,70,177,207,197,165,117,144,147,231,47,67,54,40,223,96,46,199,254,5,133,48,117,234,117,87,11,92,87,102,157,135,203,101,119,28,184,127,53,248,151,215,82,228,86,35,172,213,166,88,
179,255,233,154,141,156,16,95,45,181,50,129,153,241,82,95,50,161,45,103,70,129,147,56,55,240,209,141,96,224,44,222,96,120,81,141,158,184,61,10,112,184,222,88,28,52,140,227,94,203,208,95,245,203,161,222,
197,152,211,248,99,1,93,17,101,40,70,10,162,152,197,11,3,208,23,100,132,25,97,43,84,236,106,152,163,61,111,122,132,174,12,15,160,80,250,47,213,104,226,209,210,95,5,98,150,94,233,187,108,25,184,160,60,
205,94,66,140,83,213,138,114,19,78,35,108,165,166,204,203,123,227,99,163,21,115,230,40,13,116,193,62,138,240,158,222,106,81,6,195,27,210,167,129,247,171,128,253,157,118,118,235,218,85,49,204,169,41,227,
181,96,213,234,212,235,234,20,154,51,43,221,144,78,30,232,192,99,81,101,215,165,102,47,211,35,39,235,134,121,237,184,205,179,191,209,110,150,209,52,47,67,185,238,19,160,134,163,110,159,213,166,204,134,
21,12,40,10,71,1,129,142,229,45,133,38,199,223,78,132,180,252,131,66,149,202,117,255,130,212,168,148,250,2,212,163,173,202,2,212,26,153,164,104,211,53,138,208,255,253,88,64,71,97,163,251,124,220,55,95,
73,138,0,201,115,209,141,148,23,32,219,212,91,2,144,44,160,1,145,133,17,26,31,79,238,178,71,41,72,193,71,120,216,106,172,114,18,165,82,38,9,210,167,109,168,25,214,209,152,53,186,30,184,75,177,11,179,213,
126,78,136,222,249,49,210,3,215,175,6,232,119,249,125,42,3,240,100,59,187,117,119,52,233,79,114,79,213,22,90,67,69,252,218,239,186,211,10,62,2,152,247,91,133,8,23,235,212,34,1,98,127,133,100,86,15,203,
204,198,69,8,18,144,77,69,132,208,206,203,66,100,42,109,65,127,181,87,124,1,77,247,128,112,129,210,63,98,19,69,160,78,142,142,174,181,233,178,253,24,189,126,74,126,178,104,150,7,143,89,153,153,190,182,
163,215,27,243,66,76,140,236,66,153,212,168,247,107,63,22,208,51,66,149,199,45,254,134,88,97,74,57,183,72,203,242,9,68,139,186,100,19,10,127,152,114,62,187,5,229,171,109,128,178,246,211,196,165,102,160,
171,244,218,177,1,73,156,32,49,142,181,84,136,140,119,225,72,149,227,137,9,12,4,92,30,135,206,73,154,133,57,222,126,253,55,176,28,63,128,190,10,144,127,3,169,177,200,92,190,251,99,183,112,170,225,216,
186,121,254,145,82,83,155,25,250,250,232,198,10,151,52,181,148,237,23,88,19,167,14,162,186,177,13,232,235,25,215,88,152,134,146,134,142,61,0,224,11,45,143,99,224,53,218,117,160,166,121,226,105,227,13,
127,148,173,245,71,36,31,182,77,73,201,121,105,254,158,197,171,205,162,9,120,52,248,175,106,215,245,39,152,182,169,95,26,103,208,162,253,248,8,189,20,107,238,209,185,146,49,28,63,59,191,42,152,73,175,
230,79,113,55,174,22,248,126,159,196,1,59,23,162,188,254,135,187,157,5,127,234,4,171,124,81,101,75,121,185,127,53,219,247,89,237,33,53,222,140,114,173,76,4,105,52,87,112,199,184,136,117,49,205,140,235,
4,0,94,10,56,12,112,157,230,161,20,120,86,106,188,37,140,60,234,184,114,10,230,63,15,250,255,209,215,145,133,241,82,216,238,76,164,230,205,120,93,175,93,228,92,167,154,26,93,38,19,165,55,190,122,9,172,
28,113,31,86,28,26,172,103,195,13,141,71,100,120,149,39,147,146,117,184,91,41,114,175,82,196,179,194,65,29,175,58,0,66,52,95,62,116,250,8,132,189,125,153,60,46,104,53,78,137,217,72,137,114,201,206,28,
90,147,193,251,114,15,232,1,126,228,212,254,56,64,71,15,41,27,18,249,177,21,193,160,226,87,250,47,242,11,51,57,191,38,40,250,108,42,226,53,122,75,200,202,126,70,48,3,232,139,195,80,74,5,67,1,48,33,30,
95,26,183,255,236,238,226,201,3,207,62,67,45,165,191,44,162,54,42,233,43,106,73,249,148,137,122,120,209,68,245,87,42,93,205,153,88,244,111,66,242,191,200,249,31,33,161,94,121,163,141,143,113,184,34,92,
199,253,62,221,134,117,231,245,42,134,143,245,44,75,230,29,33,33,86,90,59,178,182,55,240,94,121,214,100,36,82,124,113,84,55,252,27,152,59,29,39,72,238,115,72,122,158,179,129,108,211,136,217,163,171,54,
218,15,132,135,32,233,105,125,153,89,31,157,0,1,27,130,211,130,196,52,26,95,161,218,159,29,198,111,236,247,170,63,14,208,153,194,249,29,95,155,0,3,223,119,59,121,188,72,249,211,116,81,59,190,89,171,44,
94,186,58,139,4,231,67,5,109,67,181,22,126,111,116,75,49,146,126,234,167,252,194,181,100,129,92,208,94,7,183,213,62,121,61,107,156,130,154,75,173,94,139,164,71,38,214,76,85,24,192,90,120,190,126,27,85,
214,89,89,6,255,209,254,9,186,142,247,237,113,63,231,251,188,102,168,225,98,121,201,103,120,65,155,70,199,137,215,127,145,86,143,163,94,106,109,215,202,120,37,10,192,253,122,234,150,164,230,117,220,173,
203,110,32,230,37,187,153,55,210,65,211,76,8,234,129,109,236,252,241,130,11,219,185,186,231,55,116,176,117,115,5,3,85,57,63,130,78,75,211,237,110,57,19,214,62,143,122,140,57,21,218,186,46,44,179,132,110,
44,1,151,174,12,52,47,53,118,56,126,212,123,232,10,83,170,56,238,231,253,147,175,246,25,3,24,170,150,232,219,224,131,51,65,31,65,161,73,239,10,152,45,35,98,110,189,184,113,153,167,182,247,188,93,255,191,
222,169,21,15,108,156,124,202,225,168,204,59,34,113,143,16,117,64,111,141,220,151,140,16,184,23,174,189,91,196,125,81,174,114,53,223,76,21,71,165,129,159,201,10,120,45,111,248,76,177,121,181,234,122,143,
186,25,237,2,243,39,242,146,166,132,65,85,177,114,28,216,182,41,39,56,145,86,95,51,231,195,166,154,103,186,210,58,21,200,9,35,139,249,222,56,174,185,102,50,97,242,99,47,193,245,223,65,194,243,225,124,
33,234,206,245,87,217,16,107,131,244,252,104,180,58,25,188,249,69,137,82,202,124,143,93,9,18,82,214,230,117,15,186,203,102,143,231,91,127,188,9,214,96,96,110,164,107,81,187,189,133,251,141,116,117,94,
134,246,161,153,102,217,105,154,216,178,28,127,146,191,103,51,240,83,176,21,23,30,245,241,71,69,232,172,126,133,206,167,109,84,211,3,96,67,10,177,167,116,175,33,231,104,195,4,252,230,90,50,61,108,203,
71,84,111,141,177,175,132,101,212,206,246,184,43,38,98,42,201,7,13,20,167,112,161,90,121,114,158,231,80,95,75,177,73,149,107,156,94,11,5,17,30,103,225,123,193,124,70,174,133,54,206,118,48,183,99,198,147,
104,193,17,61,240,126,41,235,39,154,151,203,180,57,116,107,3,176,39,64,170,247,49,42,29,87,168,27,3,14,183,53,29,131,23,31,219,93,152,191,218,199,174,59,9,88,170,27,171,62,174,117,240,154,89,6,72,105,
95,3,143,25,136,56,147,160,29,140,159,67,85,252,235,215,219,144,191,21,28,159,89,172,175,161,184,107,161,197,160,182,178,186,215,124,244,203,50,186,138,216,196,33,149,137,93,217,6,205,248,38,93,242,85,
221,159,158,163,185,57,195,3,92,159,164,23,117,92,118,236,102,77,187,79,107,20,194,230,154,173,65,201,242,164,51,243,184,231,113,221,112,211,243,95,108,246,71,1,186,2,241,82,132,73,17,95,206,105,165,239,
99,110,86,25,142,90,173,78,169,252,158,58,63,136,230,126,102,135,139,253,53,102,75,83,96,222,31,48,189,112,170,201,11,160,226,225,10,16,2,65,92,127,81,41,163,25,194,213,136,199,83,168,74,227,134,11,117,
26,169,201,63,78,47,238,92,125,159,134,45,168,22,88,108,171,166,55,9,98,68,206,144,183,36,30,152,148,17,152,19,231,1,152,140,176,202,135,203,246,119,203,240,61,252,135,70,75,149,83,124,33,246,9,199,175,
153,191,147,27,135,97,49,192,179,35,49,202,124,74,129,30,33,92,129,248,234,28,244,158,76,22,46,35,222,24,26,162,206,137,68,12,128,216,176,196,171,120,128,173,155,240,98,60,29,251,50,65,94,218,224,106,
175,141,75,32,132,136,210,157,52,108,67,177,188,103,49,112,102,198,234,80,150,213,127,52,200,239,51,197,227,206,95,243,155,223,233,199,182,166,35,207,214,246,71,1,58,82,163,191,165,88,225,21,153,221,237,
221,191,89,230,231,230,44,140,146,52,235,168,43,168,70,184,60,76,149,30,157,11,13,210,17,61,230,89,34,121,73,171,3,190,231,78,140,190,93,151,163,141,188,216,135,180,215,42,94,102,106,120,136,22,65,129,
84,90,253,152,94,198,15,35,64,4,110,126,44,146,71,184,235,93,5,119,145,227,9,196,249,42,212,146,38,115,163,60,214,139,156,19,252,107,129,105,26,216,200,252,94,229,218,140,114,219,101,57,39,80,150,98,162,
249,226,157,128,167,104,159,93,163,51,155,182,237,0,223,1,109,62,246,152,127,227,25,97,7,124,103,238,208,250,145,51,180,149,64,203,218,184,250,132,246,224,18,107,103,188,108,153,110,168,103,76,174,39,
113,160,230,148,0,131,193,166,36,182,207,194,57,251,157,187,237,18,45,194,126,224,51,115,249,102,118,243,209,251,143,2,244,19,227,28,125,163,157,163,201,181,33,157,131,60,60,61,84,42,103,107,70,30,64,
203,221,230,242,80,30,66,38,77,247,185,50,5,146,141,94,183,213,222,91,79,130,15,104,5,14,43,185,57,161,196,254,120,163,101,99,133,250,248,127,14,120,198,20,130,209,246,91,19,185,253,19,99,247,143,190,
142,120,133,244,255,10,167,0,253,224,90,166,179,86,173,41,180,153,12,1,0,98,223,131,219,176,184,73,251,118,206,247,211,131,3,233,103,237,206,200,196,170,102,234,100,82,237,160,178,5,245,106,47,37,49,9,
174,53,197,255,117,159,63,71,219,55,188,249,37,56,251,109,184,142,40,191,131,58,121,57,69,172,248,158,169,169,32,225,98,94,103,164,62,55,243,58,254,46,179,128,180,86,156,225,52,65,32,169,112,15,251,255,
163,0,189,138,99,30,168,174,172,182,30,128,129,140,248,178,214,2,13,4,47,109,126,89,208,3,38,123,72,120,221,158,217,20,205,144,161,214,210,31,206,187,197,1,156,216,105,224,94,116,197,214,106,130,139,191,
216,174,35,207,75,128,57,246,17,144,173,61,205,81,187,47,148,10,227,88,63,9,221,36,197,101,196,231,151,227,252,198,171,39,247,6,124,7,41,55,100,171,222,193,60,220,221,169,254,53,163,23,181,194,143,48,
178,227,105,7,102,21,216,192,88,250,24,180,9,150,109,238,155,248,218,244,125,212,15,127,205,238,85,208,174,144,182,182,123,237,207,175,192,137,34,142,93,206,127,218,113,18,250,213,16,25,193,42,142,38,
62,180,210,237,141,182,239,245,106,207,100,60,58,47,246,61,4,96,187,224,41,234,154,52,45,59,46,29,149,185,236,216,11,143,154,115,44,187,35,243,163,0,29,125,205,40,110,122,77,20,253,2,13,228,76,230,19,
142,85,190,6,253,214,106,47,87,61,228,125,10,57,102,107,243,230,235,94,7,15,131,161,184,8,224,200,252,114,140,45,51,85,49,86,0,84,174,53,161,144,197,142,205,24,170,221,248,129,23,74,95,34,166,165,233,
24,117,227,26,121,38,15,144,15,170,102,39,237,243,46,251,250,214,151,185,23,11,0,29,110,146,139,2,135,55,98,202,184,126,212,57,131,149,174,57,163,87,74,41,13,30,114,116,126,36,39,202,163,204,190,233,15,
245,143,229,254,217,164,16,40,235,177,221,112,55,238,222,140,218,159,161,58,54,65,150,82,198,239,107,107,76,84,125,61,95,143,48,26,152,108,75,34,245,168,253,41,99,183,36,253,189,235,85,85,254,77,71,124,
140,50,21,60,207,83,212,171,172,203,57,198,241,30,241,171,201,194,152,151,180,67,165,132,169,102,74,218,245,157,89,249,253,15,192,194,31,3,232,170,107,56,150,62,226,133,186,114,226,247,159,105,142,215,
196,216,155,237,206,103,157,229,204,51,57,18,73,165,90,10,212,165,75,88,181,244,188,141,95,102,22,40,153,73,199,72,101,142,28,169,134,135,7,122,98,133,120,180,189,179,210,224,214,4,16,174,243,140,229,
155,184,113,141,161,99,75,238,246,87,80,213,249,141,70,32,139,247,135,30,116,22,253,122,107,165,162,87,142,250,126,129,178,254,252,113,143,56,253,160,12,23,178,59,1,148,182,104,92,15,158,215,245,123,6,
176,107,45,21,202,32,223,238,36,20,184,199,206,75,104,100,15,174,127,29,121,203,61,190,80,9,87,121,151,125,41,74,55,31,150,108,240,175,35,3,213,215,4,187,39,94,20,135,130,123,109,70,232,149,157,135,188,
196,149,200,110,153,11,124,52,247,194,52,123,195,84,238,218,215,131,178,10,32,90,161,104,22,96,234,19,150,177,23,113,46,131,38,118,20,187,109,67,125,51,207,71,95,235,236,199,0,58,83,184,152,131,21,209,
247,17,239,2,147,223,78,0,247,26,164,108,2,201,28,68,176,215,120,105,200,52,218,60,67,57,184,76,24,215,147,222,219,140,123,145,121,127,150,173,189,148,201,229,13,153,115,174,10,0,172,217,165,211,172,151,
244,14,1,40,66,171,215,209,53,114,97,170,245,70,115,139,235,149,228,169,165,148,10,0,217,129,175,142,95,116,176,6,104,234,208,5,166,227,205,141,82,10,47,92,0,216,81,134,65,25,120,99,91,163,13,148,215,
188,228,59,53,160,159,59,71,1,219,26,159,90,38,217,152,119,173,211,0,13,15,20,158,125,6,89,4,99,68,209,65,114,243,159,59,6,95,65,83,30,64,208,32,188,195,97,18,190,214,187,146,20,3,88,0,106,61,123,152,
15,18,22,64,235,178,172,8,54,177,119,176,216,191,69,157,199,60,241,247,23,156,233,0,209,248,33,161,149,182,209,85,148,20,175,86,115,193,4,103,117,242,243,22,25,118,189,195,92,186,29,239,162,119,43,122,
109,122,107,2,58,252,152,181,159,150,114,231,238,161,161,67,240,228,223,135,197,52,35,146,2,89,186,59,142,107,159,193,112,140,103,90,54,82,235,241,142,104,65,93,75,126,18,4,12,242,74,165,229,29,12,129,
131,186,78,90,22,230,26,164,161,144,75,115,168,164,169,226,8,75,15,116,95,240,222,39,63,227,175,142,173,151,200,62,255,149,180,198,182,240,111,22,99,36,221,65,241,82,16,212,15,158,123,188,86,145,31,124,
185,165,17,136,214,17,134,205,58,195,129,96,25,161,253,238,209,143,104,123,22,156,253,3,195,209,203,217,71,93,112,159,94,37,197,29,184,227,30,57,8,214,174,59,171,229,34,16,46,135,227,132,25,6,156,63,52,
196,166,94,221,117,253,79,41,70,175,1,174,13,187,225,81,239,233,40,190,191,241,99,30,65,137,54,170,59,99,248,202,35,119,220,203,100,54,204,37,118,53,106,189,243,24,61,168,130,141,12,143,173,206,22,131,
15,185,133,224,240,107,137,201,163,100,157,210,162,127,188,104,99,205,153,215,192,107,46,95,25,229,106,237,206,229,48,255,24,64,47,69,15,98,120,220,250,55,131,218,21,252,221,121,118,69,173,209,88,79,253,
159,169,246,116,146,5,88,174,168,214,104,153,116,37,137,87,222,109,147,100,186,188,250,245,239,160,113,244,156,241,22,158,172,221,212,99,98,48,159,70,106,110,113,185,207,119,48,181,252,19,227,63,70,163,
131,21,167,193,130,232,19,169,113,121,149,30,231,104,152,234,178,215,62,140,25,182,143,192,90,38,72,219,14,205,17,70,32,238,125,180,0,105,191,219,197,242,25,80,173,117,124,187,124,184,94,221,225,161,62,
161,35,131,240,141,237,112,102,129,157,31,238,191,235,163,248,202,150,43,249,54,178,206,17,208,25,37,188,223,141,179,109,254,145,132,86,4,34,215,227,128,145,142,31,118,69,81,14,230,92,118,238,1,55,130,
132,18,198,119,146,246,4,115,180,56,163,215,93,53,164,164,232,96,67,237,74,133,174,107,58,0,131,128,66,137,43,187,176,49,142,181,235,58,92,170,181,84,218,67,54,164,104,237,103,1,122,39,132,140,140,198,
71,100,234,60,30,207,185,239,44,4,194,31,31,227,122,35,96,142,251,130,168,83,189,192,119,211,133,91,49,209,66,43,70,61,70,121,149,110,138,127,139,173,75,29,140,160,182,94,186,108,232,81,122,247,163,139,
214,219,246,31,61,57,35,54,104,211,249,185,70,213,89,187,189,182,92,186,150,254,42,144,49,70,130,34,241,10,215,7,112,66,68,93,161,108,131,127,60,67,61,114,102,32,53,178,93,237,12,192,237,252,225,89,58,
166,195,71,250,190,78,144,54,27,224,32,83,212,160,13,28,43,51,22,208,247,161,227,17,234,112,14,18,198,21,65,185,130,12,72,29,148,95,50,52,147,141,104,112,191,143,27,142,243,24,179,102,204,180,91,103,253,
26,206,137,210,42,5,199,119,41,7,105,31,193,243,35,157,251,164,65,25,129,200,91,141,59,237,10,123,23,41,216,22,55,52,2,48,54,18,93,173,46,205,30,67,118,12,144,62,235,221,180,227,125,109,106,241,57,229,
111,76,181,48,195,213,205,195,158,67,211,198,59,124,150,126,228,166,184,82,200,144,4,101,164,98,183,82,122,180,238,210,20,105,75,16,1,171,42,205,14,57,47,106,23,127,66,224,128,166,88,149,139,180,90,26,
11,10,72,246,215,152,40,8,221,173,116,164,73,153,194,14,96,215,149,113,114,45,154,195,5,27,182,60,3,57,21,84,237,147,208,135,104,41,153,249,198,148,57,243,130,232,178,225,117,4,86,228,223,35,108,78,99,
119,94,244,232,104,0,63,166,201,35,121,49,139,192,128,86,250,130,7,16,7,26,64,70,14,136,113,92,176,239,212,191,134,117,200,3,107,4,190,21,254,105,25,175,117,213,29,149,222,94,22,77,43,135,68,148,199,177,
226,180,63,206,147,25,15,161,112,74,246,103,200,190,177,48,123,57,53,226,253,136,93,89,48,28,203,121,98,231,201,64,148,45,232,238,247,43,4,114,188,224,100,63,54,129,13,111,144,40,221,162,187,71,164,224,
32,253,207,80,22,219,127,222,212,200,139,46,210,225,198,71,214,255,16,150,62,245,72,116,209,90,230,47,135,146,172,72,63,2,208,151,64,9,132,207,13,198,196,1,131,17,181,223,36,246,86,199,181,82,76,60,60,
202,85,48,190,197,79,143,20,101,40,72,44,168,154,46,103,95,67,101,200,7,96,53,198,49,191,62,226,144,254,180,54,103,22,187,105,238,250,251,188,214,120,77,67,119,43,82,225,205,98,24,41,22,138,244,166,32,
83,158,2,230,21,162,95,127,189,184,73,114,99,44,54,153,85,0,68,222,57,62,100,81,78,201,117,157,159,31,143,168,182,71,226,148,1,50,109,19,200,179,83,80,16,172,69,230,98,212,41,197,142,201,136,172,197,88,
212,203,236,86,235,236,42,135,0,235,32,159,200,20,162,115,97,28,174,254,23,247,8,116,62,213,126,195,129,255,14,135,77,201,32,156,36,188,246,126,100,237,184,187,172,213,51,188,231,110,240,158,9,67,0,243,
48,134,20,89,18,97,47,185,89,87,52,110,135,71,218,68,234,11,154,102,170,103,114,250,63,226,137,160,222,237,116,83,142,129,106,1,198,172,118,187,144,149,70,75,28,79,100,171,253,113,30,243,240,117,126,4,
160,103,243,17,170,208,240,204,95,134,244,222,150,168,38,15,177,241,190,252,229,237,86,198,79,27,150,82,92,42,7,159,128,27,223,175,161,1,9,140,109,119,84,172,109,117,32,39,133,94,128,233,196,221,19,107,
64,222,124,191,52,100,122,13,70,107,247,54,102,160,189,228,37,166,174,74,30,116,140,35,81,233,122,7,63,3,70,149,158,211,190,14,94,127,160,126,163,186,147,192,217,132,127,35,130,102,224,160,212,189,145,
29,28,9,115,141,193,158,142,185,14,83,6,48,6,128,71,198,192,182,169,254,97,255,72,73,77,95,198,8,93,198,41,202,6,116,103,100,212,239,117,10,174,17,159,249,234,101,91,177,206,5,246,155,125,207,2,188,113,
12,184,190,123,253,142,156,164,158,25,28,142,68,191,31,109,2,60,166,87,239,102,64,3,119,222,6,245,222,39,27,180,244,91,54,80,13,173,85,137,122,200,225,128,187,120,83,236,233,8,250,155,243,183,61,224,42,
233,192,235,196,197,215,197,232,214,134,124,92,68,234,216,27,132,99,214,31,39,207,87,168,173,12,63,2,208,145,120,16,140,247,222,137,116,2,62,194,55,34,188,29,50,209,189,177,238,180,96,22,73,147,193,102,
20,155,198,199,251,94,175,171,195,219,163,110,25,51,34,148,254,182,146,0,88,174,129,156,161,113,254,117,17,15,149,233,222,253,125,33,175,177,107,52,56,91,213,201,172,32,64,195,223,86,202,124,173,172,120,
208,24,146,64,132,56,140,57,166,157,177,205,205,124,104,69,240,251,129,228,95,7,59,102,16,242,149,25,136,40,251,64,247,251,124,168,102,236,90,180,206,132,50,232,88,135,239,53,50,240,202,248,35,224,207,
236,200,235,190,114,4,163,55,113,238,80,29,134,99,92,25,231,239,168,212,124,44,3,203,0,148,159,199,146,101,240,110,47,222,197,208,6,108,95,175,226,153,59,30,150,151,181,97,42,10,174,5,71,6,174,215,49,
85,165,217,20,68,104,109,140,120,109,254,241,174,77,50,1,242,150,9,19,226,186,165,59,154,215,155,72,162,104,191,244,99,126,15,221,45,190,162,23,19,111,215,159,158,244,137,54,11,132,108,203,33,53,114,153,
169,104,126,190,86,139,119,120,245,171,58,60,40,254,112,159,106,111,119,181,179,157,37,1,15,190,21,179,232,167,145,188,111,77,102,58,119,254,70,246,29,227,100,126,204,160,120,208,198,94,101,1,130,217,
49,141,252,74,49,186,7,21,206,133,253,71,103,164,82,219,215,245,113,60,138,174,129,187,148,130,74,236,158,171,23,99,91,96,205,183,102,206,199,113,160,107,236,136,188,79,214,121,46,165,209,154,92,131,131,
228,106,50,36,116,19,108,99,173,165,244,12,99,96,13,183,218,87,32,233,111,108,212,230,193,30,252,0,240,77,152,196,191,124,88,221,58,87,172,250,126,52,101,175,45,176,79,129,208,78,142,196,21,52,61,31,93,
238,205,151,179,50,204,175,254,144,215,214,162,57,84,131,167,94,221,121,221,111,182,96,74,103,10,31,1,65,151,155,117,202,155,152,2,119,237,145,134,78,93,253,89,216,176,178,236,240,102,165,28,169,246,131,
241,84,89,230,254,124,232,100,87,188,52,238,66,26,54,238,210,241,130,84,56,110,134,26,251,52,40,170,252,169,209,245,127,142,222,156,7,53,151,102,45,171,140,194,6,79,228,147,57,142,174,238,142,208,162,
150,93,55,125,15,193,45,102,70,18,120,17,225,117,245,90,26,126,181,179,53,203,98,93,168,31,46,200,126,61,238,132,145,129,23,191,137,215,4,94,40,167,206,177,242,191,141,129,34,49,54,121,151,192,54,197,
96,222,153,156,77,211,108,188,150,215,235,107,230,113,86,251,33,175,173,41,56,200,32,2,193,189,148,171,115,171,188,9,145,1,206,160,78,198,74,202,87,237,61,195,186,206,59,214,95,100,126,149,47,188,174,
86,228,155,47,152,232,114,20,183,104,72,214,3,227,203,238,131,112,41,110,253,128,81,61,83,237,200,91,238,60,251,53,222,105,141,18,187,247,157,149,183,33,34,192,127,244,247,17,130,183,2,110,220,129,206,
14,62,27,213,126,189,80,57,230,53,206,147,123,39,244,234,67,1,7,228,29,96,175,131,31,60,105,146,229,60,101,214,123,110,170,29,171,126,139,5,143,153,152,35,81,23,131,174,85,125,213,18,59,31,141,120,59,
192,15,248,182,34,108,231,105,34,165,94,129,107,123,253,109,197,127,168,233,71,0,186,34,158,136,72,209,251,235,106,251,92,241,111,217,12,48,247,38,159,175,169,201,27,125,170,65,57,226,179,42,179,148,177,
242,201,249,10,71,156,179,222,255,27,48,215,222,51,94,23,139,224,70,240,72,193,116,100,26,104,115,239,199,210,79,151,239,191,67,102,83,96,41,165,191,98,167,226,84,149,254,151,159,232,45,214,1,125,67,186,
240,202,61,21,191,156,99,17,96,212,138,173,121,219,146,53,183,255,136,52,179,189,208,122,141,236,65,244,168,102,98,140,106,194,130,179,13,178,92,22,176,152,219,121,44,228,145,0,0,32,0,73,68,65,84,24,94,
78,74,167,245,134,77,14,130,173,111,5,244,157,110,112,52,206,245,240,215,213,214,192,222,99,227,188,92,181,243,103,239,209,223,86,202,235,167,57,203,84,144,27,142,23,69,242,192,27,228,121,221,62,156,124,
242,42,14,98,233,41,78,131,49,25,233,246,125,78,35,114,232,231,229,204,120,201,5,73,199,81,180,110,100,120,29,168,155,91,114,124,47,189,107,232,79,233,55,140,201,15,32,12,131,41,36,110,165,20,245,124,
246,85,116,99,124,223,202,14,77,32,110,180,118,239,242,114,233,227,69,196,126,212,92,218,201,1,189,91,108,162,128,223,61,2,169,115,140,84,121,117,214,3,26,180,215,42,91,216,168,252,83,212,55,199,141,125,
1,213,186,15,223,10,232,59,105,245,82,252,4,105,160,61,133,42,127,109,103,224,93,250,134,83,9,227,98,162,163,228,205,27,37,83,249,161,119,232,152,87,45,188,44,94,224,139,138,127,202,212,187,247,12,242,
153,52,119,244,164,167,66,255,61,239,254,46,250,111,142,187,2,20,245,174,127,248,77,123,164,32,125,207,237,101,119,187,193,127,47,253,222,129,196,6,59,35,224,48,37,79,96,156,236,228,13,249,250,200,246,
72,59,122,124,24,97,72,127,218,23,75,13,50,178,99,116,32,111,54,246,71,221,134,182,205,142,247,203,201,248,113,41,119,215,185,26,188,3,14,255,43,165,148,86,147,79,80,186,84,144,46,119,203,131,21,117,56,
5,99,238,81,4,110,143,231,106,97,15,240,22,85,223,243,205,106,182,52,122,230,231,34,152,87,68,44,143,53,195,200,249,114,92,120,243,27,62,31,255,245,160,190,167,215,207,210,187,25,129,175,206,40,252,32,
130,148,124,203,174,93,148,5,47,142,245,77,145,250,14,248,183,64,29,90,31,209,122,225,153,142,98,228,152,235,59,183,79,72,101,246,74,169,227,167,210,79,131,200,2,65,142,183,73,213,92,71,108,137,156,142,
45,234,227,222,102,164,222,74,187,250,240,67,118,185,35,185,142,6,187,16,95,101,33,245,208,178,1,201,141,75,244,28,197,183,56,21,216,164,218,193,107,197,191,28,49,178,40,168,250,236,100,116,111,216,42,
225,185,97,199,231,58,123,181,240,235,92,197,100,32,232,155,33,219,132,139,255,105,26,243,209,224,83,171,98,83,219,207,163,19,185,162,53,32,204,130,137,6,227,54,222,25,149,83,147,189,199,241,239,164,116,
131,221,78,125,58,103,208,217,117,155,230,219,27,87,219,245,238,186,156,179,207,143,209,86,206,250,150,179,194,202,229,140,145,170,7,58,159,216,241,59,143,66,29,83,178,245,81,179,174,173,154,156,186,192,
43,33,82,128,158,129,121,97,210,15,217,229,30,145,234,228,4,205,30,211,86,115,126,171,29,88,25,203,212,72,157,170,85,101,147,43,112,141,190,12,167,203,175,123,181,86,133,168,132,246,18,167,177,105,40,
192,205,116,187,201,60,188,9,5,178,38,108,110,219,253,184,203,207,32,157,119,210,228,157,189,180,20,60,210,24,127,11,124,216,165,204,84,169,125,6,103,231,9,55,126,205,177,157,94,236,188,175,1,106,119,
42,126,203,140,61,73,209,142,122,14,6,118,31,55,109,54,58,219,46,19,223,119,31,55,18,179,241,10,219,168,218,120,46,247,244,150,32,121,141,150,1,15,62,220,114,32,22,229,119,86,228,142,219,204,43,204,208,
249,83,138,50,118,187,211,43,182,223,242,97,153,93,207,50,54,92,24,163,156,169,245,59,3,218,74,49,233,153,90,102,148,190,106,103,76,40,120,120,16,252,46,105,123,189,29,24,209,176,219,112,115,70,189,71,
82,88,122,40,237,29,173,243,31,157,82,119,3,61,47,224,59,239,211,162,214,96,110,200,56,170,15,220,132,205,87,210,187,235,205,16,202,155,214,104,142,49,162,188,254,195,63,52,51,100,175,83,182,215,231,5,
234,240,14,219,37,175,223,12,57,127,134,181,215,175,87,187,209,198,201,147,183,91,118,237,205,79,162,187,145,248,9,255,225,180,195,223,183,120,61,36,83,169,36,79,176,126,78,9,131,63,180,189,24,179,68,
182,124,53,31,59,18,97,224,168,219,218,235,27,175,161,158,114,111,229,27,0,61,18,25,175,71,199,157,120,33,107,35,145,73,192,252,162,59,222,223,116,114,109,32,242,168,83,103,241,12,204,181,119,190,9,90,
32,32,64,199,17,167,202,157,60,218,209,254,170,99,128,227,128,118,22,143,109,236,243,180,90,102,47,253,235,199,221,24,137,95,86,171,253,177,5,70,19,185,127,31,198,241,135,125,103,155,200,143,96,78,157,
34,5,230,35,210,9,222,36,200,28,176,177,22,174,129,106,173,188,126,180,134,61,96,100,73,222,180,25,247,241,249,180,50,157,23,248,110,197,59,25,189,167,201,124,153,240,146,51,182,73,15,181,121,205,87,109,
126,36,118,33,211,124,46,23,42,105,251,181,41,83,159,153,27,184,109,230,149,157,2,34,182,173,89,66,222,217,178,250,178,145,253,135,169,78,196,148,101,13,152,220,163,94,243,203,83,238,145,200,161,67,22,
208,187,6,233,132,34,0,62,201,240,162,55,188,67,251,177,71,126,57,122,95,49,139,0,199,253,134,87,246,104,164,225,174,65,59,77,131,239,120,190,95,189,123,221,27,87,56,26,105,76,8,120,43,233,35,221,219,
109,111,103,173,236,242,186,67,219,35,124,54,197,121,91,215,66,121,233,79,21,5,84,165,235,180,150,242,135,7,186,207,197,149,45,232,175,253,96,145,67,9,63,71,32,59,110,160,251,180,235,193,254,229,49,16,
7,149,234,248,239,161,179,232,14,152,197,65,128,145,92,51,54,253,206,88,67,225,183,30,47,13,63,97,127,172,186,46,51,253,184,103,232,44,162,242,30,221,6,178,187,249,162,74,198,186,194,49,201,192,105,153,
40,17,168,234,207,200,196,242,244,37,224,222,169,253,168,197,172,29,45,201,93,58,141,222,122,157,103,77,145,154,251,207,147,143,166,231,179,233,175,150,101,159,42,253,189,67,95,29,195,102,17,252,46,69,
145,109,165,181,209,191,78,24,127,176,138,117,237,123,34,122,247,17,155,211,250,235,6,240,207,237,141,175,88,169,149,34,192,241,28,212,77,141,205,225,223,251,216,140,102,153,101,22,92,166,83,116,135,101,
94,217,96,45,219,94,71,249,43,113,157,126,4,160,171,101,19,57,103,239,120,172,110,104,155,60,148,105,106,117,101,215,143,152,50,199,239,67,70,20,131,24,93,131,129,137,160,116,181,164,56,40,42,226,124,
85,191,148,43,74,135,29,181,143,209,107,119,215,178,253,103,154,226,141,101,47,238,127,96,64,194,0,98,83,158,175,112,7,158,128,161,79,203,153,25,82,44,115,34,71,100,172,75,241,14,3,3,230,120,181,172,194,
253,82,45,184,214,83,137,30,160,27,160,126,146,233,171,59,19,177,224,162,18,114,119,226,243,102,79,195,114,91,60,146,82,198,86,158,62,118,194,147,230,177,41,76,175,167,60,207,117,106,188,192,93,127,200,
107,107,231,250,163,127,11,118,77,247,77,194,187,241,38,71,231,20,80,63,74,17,148,198,89,133,185,0,188,147,178,47,33,86,125,34,120,93,1,102,214,254,167,40,90,176,177,87,191,199,235,73,122,34,55,242,149,
177,233,14,255,119,83,207,91,143,244,192,113,227,191,50,34,3,103,239,203,178,53,220,214,99,237,230,25,139,61,22,213,253,160,75,41,229,134,165,222,3,228,188,118,118,205,110,60,93,217,225,204,167,112,153,
160,67,249,110,247,177,194,55,88,250,255,126,202,143,179,40,226,5,152,14,212,77,37,68,190,235,120,124,213,172,78,176,52,184,131,74,148,41,249,180,33,155,253,18,197,190,39,65,88,202,52,10,207,24,154,175,
122,29,109,140,117,245,17,220,25,159,239,167,59,207,222,119,246,46,172,232,19,125,255,9,227,185,69,155,111,29,60,69,239,164,225,55,152,223,230,123,167,158,6,224,85,194,122,179,181,171,136,199,16,8,98,
224,126,148,164,152,56,225,199,102,3,41,204,89,244,88,232,152,4,131,31,11,232,165,120,79,230,105,229,189,27,201,156,24,70,117,77,41,77,236,181,109,36,115,229,134,148,55,210,71,69,167,206,118,120,252,224,
199,202,131,94,114,218,8,172,127,105,240,93,19,249,132,158,102,155,226,78,162,217,70,231,59,188,179,72,246,171,50,14,95,153,29,120,140,62,5,174,101,145,169,122,244,183,214,177,161,155,159,139,173,117,
216,1,93,213,195,234,50,53,158,198,7,123,160,190,178,162,227,120,209,225,104,141,240,30,171,52,226,7,39,67,222,127,67,147,126,28,160,71,139,249,221,197,18,237,246,30,188,69,180,205,103,149,142,117,59,
158,191,58,231,73,215,6,246,112,177,38,131,180,26,63,223,210,115,81,246,41,165,63,164,242,0,239,6,199,179,189,217,214,83,128,124,82,246,84,215,183,158,215,21,111,96,86,58,199,169,72,54,84,171,246,34,25,
86,50,242,249,19,48,181,149,102,127,146,132,190,62,253,253,5,255,68,236,147,107,180,222,243,23,46,4,142,117,122,158,101,209,42,6,62,222,70,47,68,184,177,138,199,90,89,0,46,10,18,109,188,219,29,182,167,
103,239,199,1,122,4,122,239,47,200,132,195,98,84,85,132,115,144,237,73,22,181,184,94,241,240,72,131,211,122,241,243,243,231,232,81,163,249,65,67,37,63,199,9,199,159,52,254,234,81,82,100,176,251,189,40,
186,230,251,88,15,255,98,74,113,85,63,142,26,180,220,43,176,198,118,212,90,86,125,203,28,225,172,46,94,103,7,68,141,243,167,230,153,159,169,127,22,114,193,49,253,64,91,110,3,225,77,62,58,96,200,238,219,
50,39,118,87,113,208,243,61,95,20,83,107,43,150,70,223,203,177,74,143,227,211,58,248,227,0,189,148,184,179,50,162,216,54,252,59,9,160,125,218,73,63,102,41,245,200,8,223,146,203,231,225,182,43,185,170,
97,170,108,131,227,3,32,92,75,121,224,55,161,129,159,216,232,164,232,233,133,149,1,227,10,112,148,110,68,215,42,157,51,88,175,244,110,37,35,214,83,198,142,71,52,3,249,29,103,1,207,35,71,68,101,16,184,
141,221,76,25,182,243,52,205,13,117,126,135,252,142,78,238,16,102,155,218,213,86,41,239,1,187,155,15,120,156,112,43,96,127,168,108,13,5,136,109,59,59,2,170,100,230,108,236,91,82,155,13,99,231,202,29,195,
133,39,117,239,71,2,250,10,236,190,154,216,139,243,158,112,188,136,94,215,154,171,167,12,225,190,52,171,202,121,4,154,85,125,41,219,217,136,247,221,190,143,208,195,207,34,119,63,145,154,242,56,44,155,
149,87,32,187,210,9,165,119,120,47,2,85,4,245,93,135,49,146,165,95,139,34,234,40,211,160,50,0,39,14,251,206,61,213,14,203,150,209,87,101,103,92,187,245,228,11,151,251,252,212,47,186,157,144,198,204,123,
235,135,245,226,156,203,59,81,250,161,29,131,127,209,186,145,188,175,130,89,164,175,214,198,210,121,217,32,182,107,63,18,208,59,49,136,62,73,59,169,66,85,126,183,142,157,200,189,5,102,21,232,238,2,210,
245,182,251,249,149,22,13,200,164,41,31,114,14,198,226,76,58,181,211,82,22,9,246,99,142,96,163,40,55,2,143,200,0,48,136,71,14,64,4,236,220,14,203,172,248,68,217,165,200,137,88,25,109,229,200,162,193,84,
242,113,230,65,221,59,89,187,236,224,224,61,110,47,226,241,27,232,228,151,220,62,77,209,39,126,161,196,226,190,40,21,41,76,24,165,91,224,85,209,184,212,135,122,150,185,233,95,200,236,60,120,253,103,50,
10,145,182,203,178,109,251,209,128,30,121,249,167,20,129,220,87,40,61,27,166,230,238,76,74,127,1,118,163,145,253,234,91,126,231,30,167,3,229,139,121,60,63,19,227,85,183,197,59,194,59,122,21,69,149,74,
47,51,143,28,143,149,17,57,1,23,21,13,100,117,179,76,0,215,197,243,8,172,35,71,91,157,51,160,70,253,69,89,149,188,202,177,225,40,74,57,15,138,135,234,203,106,206,50,167,254,174,125,250,216,43,153,31,120,
55,190,150,27,162,46,51,110,187,46,245,115,246,122,207,105,187,27,80,237,215,12,245,169,117,94,107,78,223,22,161,103,70,36,90,120,43,3,244,46,181,5,115,52,104,119,228,121,97,221,250,189,197,40,106,11,
56,134,20,213,221,150,247,198,138,125,39,162,31,6,53,249,205,251,91,124,205,87,124,246,5,92,129,117,216,158,168,167,116,90,181,163,234,115,89,5,110,89,116,173,34,209,34,174,113,180,172,174,103,89,133,
76,230,12,56,179,54,84,127,50,218,145,135,219,138,238,101,109,178,115,195,114,190,163,179,163,238,135,28,219,39,31,135,181,59,81,199,59,95,96,27,215,240,237,148,147,154,59,118,59,136,210,3,94,213,156,
121,153,118,109,71,252,106,95,231,115,110,92,191,12,208,35,209,184,243,106,193,133,64,245,132,162,58,230,53,188,61,22,174,41,162,189,199,227,172,66,149,135,111,147,31,191,167,189,246,251,252,90,209,6,
231,201,244,102,219,212,145,40,77,22,1,70,100,0,20,72,102,247,85,20,202,192,183,2,84,118,130,25,32,85,36,155,201,200,188,89,126,5,102,17,104,243,249,31,33,99,212,15,150,135,101,92,129,249,10,164,249,58,
143,213,174,115,182,239,144,199,100,126,119,254,3,244,212,71,104,106,109,183,99,215,12,80,145,86,217,159,187,99,252,178,55,7,78,224,97,71,21,86,249,117,23,59,29,190,238,158,0,168,51,95,158,114,223,29,
163,45,64,124,224,129,239,106,253,40,15,94,138,146,212,245,247,125,163,59,147,46,169,162,17,242,245,206,70,232,208,147,94,185,152,139,150,158,50,94,106,247,48,182,179,43,79,246,55,139,238,162,118,222,
73,11,103,14,67,4,160,220,118,166,179,44,131,50,158,74,182,157,117,201,142,17,59,14,153,195,130,242,102,227,59,234,45,126,254,51,114,12,34,176,200,168,209,63,150,119,117,109,139,174,95,71,249,200,231,
100,31,121,190,126,241,56,222,56,219,70,195,39,24,192,109,191,59,34,81,54,37,251,189,140,211,57,220,93,163,208,4,31,222,166,111,251,249,212,72,120,101,236,162,178,111,121,106,9,223,72,174,221,251,13,46,
42,227,162,228,121,39,109,247,174,91,115,58,22,175,74,111,170,223,131,96,254,46,41,144,82,105,96,158,227,40,146,95,233,45,222,219,1,199,213,90,137,162,200,12,176,239,80,19,71,253,44,115,26,20,152,102,
107,97,229,28,153,246,40,242,140,28,165,108,156,217,217,80,153,0,37,151,202,112,68,247,163,50,94,24,120,69,172,221,141,134,3,214,165,175,151,251,92,107,41,211,49,184,201,70,143,195,154,153,153,151,176,
248,26,174,87,186,96,108,118,173,11,253,209,1,196,169,77,126,42,43,249,109,155,226,34,47,157,61,251,44,34,184,99,204,119,61,103,101,16,78,150,66,247,133,217,232,175,162,186,61,137,212,37,175,88,39,158,
240,177,23,250,93,219,225,81,134,141,207,52,226,223,172,76,63,86,231,43,62,177,111,175,175,103,128,31,69,171,25,41,131,195,109,40,135,35,146,33,146,105,2,180,7,81,6,239,172,255,171,54,86,245,34,167,159,
235,102,50,238,56,22,59,243,173,214,52,2,113,228,44,102,100,94,181,124,240,53,78,14,52,222,226,113,245,124,159,207,165,57,7,54,59,154,207,123,150,167,202,67,46,177,202,30,237,52,241,142,101,84,89,137,
131,166,59,160,127,175,113,62,49,148,239,82,206,115,222,13,23,180,0,209,213,2,143,40,94,232,251,243,113,102,144,98,105,78,124,163,39,211,129,159,152,99,230,205,243,19,69,98,92,55,154,199,8,80,118,9,219,
103,64,186,27,233,103,122,176,115,237,14,49,136,191,67,145,195,161,206,51,121,118,235,101,206,20,131,191,154,155,180,141,224,253,242,157,249,108,69,56,170,15,125,132,134,121,190,231,42,84,224,243,166,
40,165,20,149,3,137,211,227,124,240,12,69,143,78,182,231,93,212,213,101,239,59,53,113,193,87,201,31,243,218,218,42,45,125,151,118,140,245,46,31,63,177,13,254,107,175,238,166,104,248,82,77,165,179,92,35,
35,179,34,103,248,106,32,87,82,239,127,30,138,208,63,225,74,162,49,229,39,172,170,151,25,152,224,181,12,228,223,161,157,217,94,149,201,228,202,228,127,199,153,86,17,211,42,74,222,145,241,174,78,156,70,
194,81,251,17,223,8,216,163,71,47,174,204,98,205,68,0,86,202,251,96,46,191,197,80,205,159,187,156,223,94,195,89,32,19,185,69,30,250,125,25,93,243,250,43,250,206,181,86,243,30,181,193,1,196,78,157,167,
232,75,1,125,37,56,14,218,59,11,123,213,234,0,220,133,64,202,96,169,18,202,56,197,117,239,38,85,168,100,189,231,4,185,40,112,19,204,103,249,249,107,74,119,168,22,101,156,206,51,18,187,6,174,191,238,162,
82,105,106,222,118,140,243,29,82,134,3,219,203,156,64,37,191,42,195,60,249,94,84,103,247,94,230,12,176,209,83,231,209,227,39,30,135,34,238,69,243,181,162,16,32,233,60,75,181,178,190,224,121,8,194,98,3,
90,171,94,23,123,219,59,128,255,98,123,47,59,230,234,180,54,64,254,61,61,95,201,34,236,157,148,95,187,84,126,222,137,223,161,253,66,14,126,173,156,253,52,234,234,222,137,243,159,57,148,39,244,199,179,
249,92,250,125,249,236,232,250,187,211,185,119,127,179,122,119,128,119,162,36,174,151,215,209,14,198,49,221,168,116,98,236,179,38,219,197,237,214,12,200,157,182,251,156,100,74,210,200,181,190,223,202,
43,98,25,125,7,195,118,7,52,78,72,57,12,89,106,113,23,144,20,127,5,192,42,150,137,214,91,118,47,107,183,159,47,83,166,162,46,174,187,200,42,69,101,184,13,6,96,213,166,2,238,200,185,138,156,28,118,98,148,
220,170,125,28,35,103,111,2,112,95,233,248,54,125,248,53,57,104,136,206,51,215,53,95,183,179,204,234,203,155,209,216,173,251,42,237,227,209,243,200,89,111,219,182,86,91,62,203,88,172,232,199,164,220,145,
62,231,82,64,27,231,115,164,184,200,43,47,167,113,238,142,220,113,32,238,74,112,66,218,32,29,122,183,173,25,0,188,47,203,155,179,188,145,190,84,198,84,70,66,193,171,110,167,32,171,120,152,118,225,184,
22,15,0,187,209,128,2,55,5,38,145,44,18,64,22,237,68,227,121,135,23,94,99,249,163,54,177,124,52,150,204,27,255,41,153,88,174,200,217,81,142,176,42,23,141,17,235,91,56,207,168,135,253,56,169,123,18,1,50,
33,80,221,3,245,41,215,89,253,215,104,197,85,154,59,179,243,187,147,87,210,204,179,185,143,202,112,89,173,47,58,108,187,27,38,87,113,180,75,127,226,68,216,215,19,27,135,119,129,93,253,70,208,240,138,29,
243,200,44,101,114,232,20,205,73,180,114,70,192,185,242,196,183,113,228,169,22,181,5,198,151,205,122,90,224,227,20,117,81,58,230,81,202,229,20,44,205,100,76,237,122,87,55,184,105,254,154,232,169,181,215,
238,252,205,207,109,174,199,203,3,115,6,0,8,94,38,91,80,180,190,163,222,168,72,78,57,2,17,64,97,253,44,2,149,17,138,144,93,25,184,126,159,215,240,142,33,101,90,25,214,149,173,216,113,108,212,245,44,50,
207,156,57,30,223,193,251,210,55,28,7,211,134,208,83,115,59,211,83,184,119,103,45,182,82,244,179,245,109,14,82,148,237,250,143,33,77,117,7,37,154,169,157,85,175,184,40,135,57,26,253,200,225,214,37,214,
116,50,82,127,180,137,248,62,122,50,58,191,27,5,42,111,187,245,3,215,66,236,81,234,79,94,196,151,242,55,30,87,142,70,62,119,153,177,62,26,117,248,152,204,169,95,222,63,211,116,186,248,231,79,77,162,83,
49,105,188,230,67,114,178,1,109,100,88,89,190,8,172,148,33,102,48,137,64,153,129,71,253,85,229,85,61,166,168,109,172,203,206,131,106,15,255,114,125,190,23,201,17,201,139,206,136,106,135,29,27,150,61,147,
43,234,47,203,196,114,173,248,71,227,174,198,88,25,252,193,147,28,207,134,215,137,111,189,174,71,186,23,201,243,246,163,71,136,210,239,112,26,25,187,237,148,231,42,84,243,110,147,173,81,225,191,119,168,
202,67,110,207,87,203,210,252,86,102,252,26,157,94,123,190,225,110,86,245,232,236,219,103,241,218,218,147,144,122,70,108,108,223,117,47,170,89,110,116,36,153,55,87,54,150,65,251,94,220,254,121,31,184,
70,100,126,116,105,13,88,90,77,94,107,89,193,148,167,86,138,51,68,71,116,25,142,86,95,18,10,8,142,219,190,126,18,178,151,87,17,206,56,13,64,219,236,124,111,100,30,224,49,66,52,231,10,76,162,114,177,227,
164,103,147,249,70,0,188,27,137,70,247,20,120,229,142,158,175,207,224,28,141,129,170,199,109,115,249,200,241,137,0,86,181,207,145,114,214,55,190,143,237,238,244,75,201,103,0,191,235,226,245,94,250,180,
61,30,148,218,117,221,56,57,160,151,229,226,211,72,87,251,218,56,221,44,183,182,94,107,194,182,91,105,11,71,93,184,95,174,124,14,153,124,69,219,185,188,150,186,202,238,131,118,162,218,66,66,207,83,151,
141,57,156,244,62,34,120,134,254,46,124,62,67,159,118,45,162,197,170,192,28,101,216,81,141,70,151,121,129,103,116,52,250,7,11,97,197,125,215,223,125,68,59,218,181,12,201,80,109,85,133,93,185,198,112,117,
67,70,159,0,53,17,223,112,8,74,145,233,118,113,45,138,140,144,47,71,129,209,34,102,227,137,229,152,79,68,138,7,222,139,156,2,213,23,5,118,187,160,142,247,34,64,91,1,98,4,156,202,28,51,12,68,128,28,205,
81,116,174,100,195,185,136,130,11,228,177,154,239,113,12,186,229,230,89,236,62,55,237,92,239,180,183,235,152,229,31,191,125,126,184,166,140,211,64,237,238,174,245,10,242,244,183,101,180,163,16,105,151,
122,12,120,6,131,213,28,100,218,180,75,202,117,152,127,149,115,170,218,139,237,190,210,46,203,255,46,213,90,251,51,116,165,186,94,200,119,105,199,235,253,36,197,96,94,10,78,85,100,12,61,183,216,219,187,
227,135,197,247,116,204,230,221,143,117,11,92,35,242,71,165,4,125,1,159,128,49,70,14,21,174,109,181,90,236,119,218,95,141,207,122,253,249,99,107,195,216,73,112,67,163,215,249,138,182,249,120,5,74,17,144,
85,113,175,82,57,213,38,202,143,252,213,88,133,206,139,144,89,107,143,47,143,231,220,7,252,171,238,49,223,82,244,88,41,153,178,113,103,231,67,201,27,25,207,104,76,120,142,34,82,115,135,237,240,28,241,
156,115,89,197,223,93,19,27,227,186,195,138,206,129,113,112,175,235,187,193,131,161,139,247,112,106,251,215,233,142,83,249,117,56,213,181,174,96,217,247,177,95,223,251,216,237,28,225,216,118,100,124,170,
57,92,89,51,109,233,115,202,177,46,231,165,28,197,221,214,33,66,95,249,154,159,161,59,173,158,43,219,238,148,60,215,95,205,41,115,41,50,21,200,224,79,199,9,214,41,17,237,202,119,193,99,243,51,74,99,180,
187,67,20,1,12,222,213,171,183,92,88,201,142,122,39,133,114,52,198,51,62,125,143,65,12,121,35,32,68,78,222,174,17,141,234,43,254,69,148,229,250,170,30,3,174,2,96,252,155,149,87,78,2,203,146,105,101,228,
68,96,31,248,24,229,136,180,60,115,180,34,39,72,221,143,104,53,78,60,46,153,115,134,215,220,235,68,252,157,118,212,83,245,131,51,232,176,38,128,91,169,252,14,189,156,8,94,35,135,193,156,202,158,25,169,
148,203,147,5,48,222,229,178,22,35,114,201,90,89,243,207,244,96,106,73,229,235,53,211,33,127,53,115,54,179,214,109,249,149,227,98,233,143,85,245,195,73,60,164,157,5,133,229,238,194,235,171,62,123,126,
59,189,155,192,239,12,146,19,38,223,53,158,64,162,187,180,231,185,121,32,156,109,120,5,92,143,157,138,133,212,117,162,195,73,169,165,204,8,160,239,110,23,6,43,98,221,74,25,223,198,110,165,216,180,99,255,
196,38,142,9,189,95,206,233,121,211,222,194,232,69,119,163,200,140,245,38,114,20,84,217,213,223,8,196,149,19,146,157,119,126,93,211,217,244,69,188,139,184,174,64,119,229,236,40,199,132,101,141,244,128,
143,35,128,207,64,93,201,205,188,35,135,2,101,102,144,199,123,74,55,20,64,203,207,195,194,94,145,1,238,61,229,142,199,40,47,68,235,5,215,199,38,25,235,209,178,89,8,136,219,222,206,224,189,70,111,215,247,
88,218,140,218,255,19,105,64,198,201,115,180,186,90,199,127,183,122,71,224,111,235,4,28,194,113,216,159,77,114,28,239,66,232,30,161,235,176,106,233,29,215,34,82,233,120,50,60,164,174,84,34,34,239,18,216,
59,113,157,204,191,239,60,35,143,53,87,208,168,207,190,190,6,243,215,58,209,6,40,163,94,111,94,168,19,220,75,34,53,238,188,133,103,228,181,214,177,49,72,206,165,0,236,8,116,34,179,21,233,230,112,40,232,
62,3,64,230,30,43,96,83,252,34,0,100,153,25,120,236,241,76,95,162,227,167,12,11,235,58,203,207,253,67,138,214,20,131,27,203,175,128,51,114,72,249,152,101,216,117,4,250,57,207,101,164,15,81,59,120,79,57,
66,138,164,94,117,61,167,116,250,75,32,0,201,254,184,169,127,12,102,84,175,230,71,146,42,58,184,39,107,181,181,107,48,234,172,123,242,75,111,91,136,172,103,219,190,8,139,119,149,91,37,27,63,188,190,67,
205,233,1,218,104,205,89,219,78,207,3,57,196,156,184,236,110,111,254,20,185,108,63,67,187,202,207,229,239,180,49,207,180,209,210,53,119,135,205,78,143,49,206,75,22,119,199,120,61,63,241,93,6,186,215,130,
153,177,108,174,136,125,145,215,82,202,217,23,121,186,129,41,206,192,100,78,93,45,197,69,207,163,54,110,96,115,233,124,172,64,215,42,231,108,52,56,157,144,210,24,6,234,204,163,103,0,101,144,232,111,73,
188,120,196,78,144,237,75,7,237,118,213,202,220,91,123,198,128,203,245,26,253,203,0,111,7,224,162,122,74,211,35,39,139,235,149,226,231,128,121,70,178,97,255,35,192,142,172,101,228,148,241,56,25,64,30,
23,39,144,26,167,25,244,124,236,23,185,214,84,165,50,184,94,230,91,33,155,4,175,162,98,31,142,72,60,66,91,83,183,65,122,37,174,249,188,234,155,114,117,222,219,150,198,20,153,171,49,176,64,129,110,250,
149,142,186,215,207,87,210,196,101,246,70,21,62,253,186,50,63,207,210,167,90,177,106,21,248,121,225,216,180,112,193,114,57,102,98,175,216,51,171,158,145,226,71,66,217,88,194,114,169,69,201,226,235,239,
92,93,148,91,123,68,190,238,101,88,94,182,168,71,31,27,203,180,167,22,225,159,145,167,71,233,4,238,232,8,96,74,83,189,99,203,0,198,6,92,17,47,182,74,215,51,19,194,32,169,192,176,133,186,97,107,169,168,
83,155,27,59,105,218,120,250,136,160,129,118,41,82,96,172,198,143,215,18,142,19,59,49,138,191,170,207,188,123,13,13,192,149,70,67,247,40,114,100,120,36,35,89,217,105,88,57,3,88,207,57,113,248,54,70,244,
156,189,20,183,54,248,13,16,254,9,214,136,164,190,247,215,231,196,186,185,79,188,74,236,168,123,157,222,217,32,247,114,121,253,186,83,179,160,37,138,175,6,0,94,197,181,132,99,108,91,98,132,137,86,233,
206,92,252,177,131,172,133,122,151,88,121,119,202,135,247,142,54,196,245,101,141,103,89,171,250,43,65,43,202,205,4,158,71,62,95,21,42,141,156,173,170,158,80,220,7,105,78,116,209,254,236,251,240,61,87,
220,157,219,162,5,162,234,162,183,143,27,128,196,7,57,172,152,205,68,47,209,199,50,50,223,100,183,135,153,145,86,160,208,204,189,233,104,206,89,176,235,176,149,153,67,65,45,174,112,63,150,124,150,154,
17,76,180,10,148,206,183,33,35,151,170,84,106,202,187,62,182,206,108,108,176,125,132,59,219,179,99,138,253,196,54,244,23,32,148,150,183,162,156,129,124,69,43,103,132,157,141,85,25,38,94,47,131,215,149,
66,31,63,138,84,138,89,135,184,62,194,71,98,73,250,61,213,247,96,175,75,74,105,170,223,143,202,216,176,123,11,118,86,246,61,178,107,218,49,86,101,206,238,238,134,73,57,23,141,18,123,8,74,63,206,114,60,
125,219,116,194,249,142,20,222,248,216,201,230,99,197,65,155,68,85,49,2,230,222,246,198,224,87,60,92,245,248,50,17,142,165,53,99,105,35,130,231,206,115,170,49,14,7,207,228,22,195,181,164,86,166,161,194,
72,163,149,114,125,74,147,249,11,131,16,236,108,87,134,119,71,30,117,206,192,163,162,58,60,98,141,180,191,4,199,198,71,73,182,243,99,176,236,160,243,93,15,95,168,249,89,20,223,255,182,160,151,145,225,
68,222,218,109,245,235,197,58,5,145,81,139,156,19,53,27,179,188,210,10,159,251,178,82,101,110,17,75,167,128,60,154,17,231,92,210,110,246,87,3,243,61,244,134,17,188,112,176,49,221,126,231,43,114,253,195,
53,111,33,65,184,11,63,214,149,216,98,174,251,160,87,249,202,177,216,131,72,37,177,226,158,91,218,136,243,25,42,70,235,7,233,207,190,89,187,79,42,154,121,154,236,50,95,68,156,11,114,230,202,9,238,205,
170,138,21,34,206,43,85,95,221,241,75,33,26,219,232,227,179,170,206,194,35,61,121,13,166,255,29,207,184,79,28,171,82,74,243,169,118,203,251,50,102,230,149,52,0,37,218,117,155,181,187,211,43,5,83,118,206,
149,113,64,55,141,205,127,7,150,104,169,43,169,216,121,227,117,203,171,140,65,186,71,221,218,81,96,115,197,241,121,190,122,119,204,162,7,119,148,108,199,88,173,219,232,238,201,78,170,221,174,216,222,250,
228,210,104,132,155,25,161,82,212,72,127,216,146,210,171,109,125,86,240,125,244,90,42,60,234,210,107,40,102,31,219,181,109,30,151,156,113,171,214,29,158,189,56,251,164,204,180,99,42,159,178,114,142,103,
207,90,161,162,227,170,118,61,35,202,28,182,220,205,221,191,185,51,31,20,161,223,3,192,21,125,134,235,110,123,59,198,198,2,130,83,3,193,34,139,163,226,210,25,248,230,70,220,26,232,19,170,242,244,232,233,
216,13,227,208,155,82,144,147,55,85,229,241,107,138,102,196,210,229,154,247,103,36,63,12,29,201,178,43,199,218,37,35,177,228,189,187,166,125,109,72,116,186,29,151,59,234,116,212,115,78,75,103,210,103,
241,8,142,180,141,85,231,127,87,14,246,238,88,101,99,19,201,177,114,178,185,5,206,212,89,227,255,250,103,215,98,148,15,96,41,81,58,150,52,114,179,204,206,115,60,47,101,68,211,175,203,245,250,128,82,155,
247,74,60,226,82,70,136,172,39,191,115,106,165,152,221,247,121,201,252,217,240,174,252,231,24,179,231,160,162,27,29,217,19,123,94,195,66,90,198,29,124,218,39,250,113,150,207,208,71,189,214,101,203,212,
186,27,159,88,186,120,2,228,244,37,192,223,244,205,45,186,234,198,122,34,41,4,236,214,227,180,189,89,233,17,64,45,229,86,10,175,243,56,126,149,166,148,235,13,183,254,233,203,102,235,7,188,120,35,92,20,
155,101,51,114,2,59,222,121,200,90,221,35,159,98,86,128,200,224,237,97,194,186,143,220,126,164,1,25,120,231,125,96,51,136,145,111,102,184,115,7,220,203,173,207,231,120,100,80,166,221,98,212,6,251,108,
223,143,81,28,0,196,173,178,132,254,152,67,170,90,94,209,86,45,197,232,186,57,167,157,237,238,77,146,197,134,184,140,26,100,1,78,136,157,2,81,194,157,141,199,25,162,120,180,78,105,68,88,136,69,237,72,
26,190,115,103,83,224,73,158,33,191,227,105,45,205,159,51,134,191,145,78,12,233,110,41,31,191,68,70,100,222,91,165,142,238,72,166,219,123,253,13,22,99,61,83,57,134,148,83,50,198,110,115,135,251,172,196,
142,7,25,40,120,167,61,142,53,247,224,117,183,127,170,29,203,107,21,171,157,80,196,75,197,120,93,22,4,163,119,114,17,47,110,26,248,116,172,18,173,10,43,79,172,179,90,166,72,47,79,102,16,101,220,113,215,
180,12,244,211,41,134,111,166,127,187,20,58,60,117,2,165,123,156,196,107,138,95,247,60,73,185,19,143,170,248,31,80,11,29,130,70,71,251,31,124,189,33,197,173,90,113,237,26,79,84,16,209,169,85,243,148,52,
76,240,107,107,247,39,238,171,104,63,66,60,246,43,77,45,19,239,108,178,178,209,208,34,94,115,23,246,1,123,79,142,156,183,149,41,111,99,128,214,225,14,247,81,127,243,203,85,38,213,142,239,186,47,49,73,
184,75,34,85,120,186,152,112,38,21,112,227,138,217,119,4,223,165,181,158,76,208,140,0,143,99,65,205,39,110,79,197,70,106,87,249,14,112,70,116,110,222,189,91,129,219,216,120,182,78,214,21,130,143,214,170,
174,35,89,36,25,187,96,158,60,159,235,10,103,168,56,42,231,15,55,209,71,103,110,209,113,86,237,26,165,205,117,63,234,5,160,190,155,253,208,86,238,144,140,217,121,205,152,95,73,183,103,207,212,254,20,218,
254,249,28,235,239,164,187,230,251,69,198,228,73,86,62,109,20,221,79,83,67,135,114,157,221,207,83,143,236,35,71,229,238,120,150,198,33,202,62,254,34,229,97,195,73,203,97,195,192,212,214,220,51,188,21,
248,42,176,70,104,204,226,55,205,37,3,206,21,69,166,45,50,111,170,175,145,148,253,69,45,149,199,56,115,44,17,206,108,244,189,210,154,204,76,239,105,28,247,88,189,163,226,63,146,138,181,167,19,242,196,
219,214,43,224,193,217,59,105,237,40,242,55,107,77,71,234,43,96,55,239,182,7,114,164,212,247,176,164,235,52,14,41,88,188,254,62,250,153,243,252,62,229,227,30,219,202,72,66,118,179,63,213,15,218,20,247,
143,58,85,119,240,19,41,22,110,181,157,101,167,91,70,169,111,108,136,195,227,101,132,208,212,102,164,82,66,135,35,177,142,61,66,80,241,230,105,191,249,26,243,176,163,146,71,180,251,20,131,241,14,223,232,
221,134,248,126,206,239,36,206,122,191,220,93,83,135,122,178,195,99,62,206,241,63,188,123,87,75,114,201,118,175,231,205,174,219,125,173,181,0,88,22,239,164,155,95,55,172,117,123,52,144,199,158,173,192,
144,98,63,154,143,160,212,93,95,10,173,29,10,123,63,202,88,197,160,189,75,31,140,208,191,143,62,209,169,213,52,173,235,61,235,61,101,82,196,178,62,53,50,148,73,168,153,135,168,175,188,107,94,99,238,40,
151,239,239,242,249,111,180,182,240,67,27,139,118,85,117,100,27,45,231,82,118,96,227,105,31,252,60,213,103,235,190,147,49,216,161,187,137,197,85,217,19,30,124,252,73,218,107,71,193,194,93,238,253,195,
51,203,186,155,206,247,74,46,243,163,72,91,28,47,190,125,67,234,246,151,230,178,92,226,42,215,136,229,158,38,110,55,159,205,10,255,101,46,71,178,85,108,221,222,88,241,249,86,64,255,236,210,187,199,125,
103,240,159,4,127,159,220,122,130,171,167,181,97,201,210,72,27,17,118,66,187,159,144,124,4,32,233,117,157,59,70,128,225,129,33,231,29,71,231,115,180,235,186,124,74,242,119,179,19,123,113,236,147,31,35,
236,206,65,29,0,0,32,0,73,68,65,84,237,28,247,101,137,169,21,171,23,187,209,230,78,249,90,236,250,125,29,63,55,14,187,189,61,3,165,149,243,17,3,95,212,206,249,172,60,51,70,50,11,23,178,222,77,208,175,
233,142,107,240,173,128,254,229,180,49,178,167,131,239,83,243,103,57,130,79,197,75,79,38,127,223,1,243,23,147,5,84,159,164,243,3,89,240,247,162,75,209,169,241,29,71,44,115,4,126,30,136,191,67,207,105,
222,87,62,149,122,247,243,51,138,227,30,173,179,104,172,123,59,121,131,157,188,132,201,12,141,236,211,251,227,176,204,141,192,230,210,91,115,188,76,217,239,198,239,126,109,111,113,252,136,98,190,103,213,
159,155,53,77,127,21,160,223,159,191,39,103,254,206,148,45,218,63,252,37,35,233,229,166,233,246,207,153,228,199,57,47,222,63,87,145,129,50,42,171,116,122,86,246,119,82,214,227,247,232,239,114,116,118,
105,231,161,213,254,181,29,7,114,234,241,215,104,36,239,74,56,78,29,19,159,245,157,106,254,68,37,183,101,216,77,234,45,238,219,246,86,189,17,15,227,32,133,94,213,141,37,237,143,250,175,1,244,173,119,152,
125,173,77,238,129,191,43,171,239,15,238,62,207,205,231,197,15,208,233,118,14,243,238,235,29,162,239,58,127,220,248,223,144,117,149,236,85,105,247,223,71,255,77,216,125,142,246,199,143,179,60,28,177,11,
147,191,228,99,82,243,181,216,31,45,250,16,245,231,224,1,236,62,212,2,210,251,15,221,206,180,124,229,30,157,245,180,231,78,28,173,178,244,135,148,241,249,53,128,254,89,10,158,72,221,178,129,103,209,244,
30,237,250,244,121,141,93,50,233,62,120,175,245,22,5,175,143,125,130,134,145,163,103,246,187,169,246,157,180,232,215,193,226,239,117,29,254,235,132,207,211,163,172,216,157,71,123,85,28,31,49,88,144,212,
109,145,237,58,89,3,119,156,14,213,63,222,71,144,213,213,39,7,141,15,82,59,156,142,36,144,151,158,217,119,165,233,175,2,244,39,76,160,25,172,199,108,234,13,37,48,183,247,5,57,111,201,47,147,187,198,71,
166,13,63,28,69,168,246,179,22,213,189,236,57,230,14,207,207,208,191,136,250,55,19,71,231,10,216,179,25,142,128,211,56,158,39,217,168,141,162,58,33,249,158,230,175,179,123,103,252,191,118,85,156,191,182,
183,35,225,22,191,164,208,191,8,189,148,237,89,57,5,196,166,46,62,74,53,114,157,143,128,22,159,131,49,159,167,200,57,2,135,95,139,250,74,58,201,121,252,68,249,255,209,207,38,6,238,83,29,90,57,165,127,
143,78,202,61,228,242,23,145,75,249,250,125,64,231,153,148,135,130,175,100,130,255,51,17,250,93,37,255,142,228,230,209,147,248,96,175,72,222,95,31,117,235,54,115,73,222,122,93,109,171,133,103,168,63,235,
59,217,179,108,158,75,10,106,27,101,254,209,63,218,37,116,172,251,121,41,177,110,45,51,77,219,239,121,223,163,119,54,194,61,213,254,60,222,223,78,246,9,121,179,237,84,119,109,195,157,231,253,43,250,21,
128,190,3,42,183,158,43,221,160,207,109,16,57,165,35,151,224,118,234,248,157,13,113,106,78,62,9,140,119,158,75,102,245,254,61,197,254,71,79,144,124,20,5,127,51,61,203,214,203,167,193,156,29,144,175,164,
86,238,103,251,191,82,222,109,135,231,174,113,50,45,173,89,45,1,253,183,68,38,95,37,231,34,158,253,64,131,147,231,237,12,4,136,117,156,250,123,224,25,248,87,238,18,127,114,3,219,239,223,217,254,143,126,
2,113,150,231,100,111,198,93,176,255,41,116,119,237,212,114,235,133,149,219,109,190,35,231,22,137,190,156,181,249,80,132,254,95,52,102,173,148,210,110,117,124,161,129,89,222,102,131,158,88,252,223,245,
120,225,171,219,221,241,156,119,82,244,127,215,243,202,127,244,213,244,41,189,31,58,249,129,77,167,188,118,222,114,234,151,117,253,125,124,142,46,175,151,124,237,218,141,205,207,140,207,39,108,192,83,
111,34,33,57,64,255,173,198,235,254,180,221,121,178,188,230,245,216,50,219,152,144,101,145,249,24,254,215,206,111,70,181,148,82,90,252,27,109,203,186,201,189,191,113,188,254,209,215,82,45,231,78,237,142,
163,249,138,98,159,215,208,239,14,226,118,30,129,101,227,233,119,15,29,182,182,119,233,140,231,237,82,154,162,94,57,64,207,6,227,19,202,243,20,61,41,89,60,208,111,38,115,238,8,185,209,100,6,214,21,10,
124,245,236,125,233,166,178,122,254,19,139,171,140,198,207,213,246,127,244,91,136,117,104,87,175,118,178,75,165,148,143,126,96,230,187,244,127,39,242,222,15,195,118,71,50,162,115,158,39,179,193,219,26,
223,181,93,139,148,59,237,44,252,194,119,138,223,167,207,202,186,111,240,161,212,135,68,242,187,102,237,115,247,239,154,181,175,220,168,24,165,225,34,135,34,155,59,220,16,244,29,143,11,254,209,223,69,
188,135,228,52,82,223,74,45,63,72,234,241,220,119,61,170,139,104,187,239,203,130,207,245,108,218,154,253,7,230,92,182,134,39,123,116,99,151,251,207,140,91,210,190,247,8,245,205,141,9,50,229,147,48,104,
199,45,132,76,18,73,212,70,48,253,110,231,138,207,211,244,85,25,29,254,60,165,50,68,119,54,203,253,139,210,255,209,211,212,232,56,138,224,241,149,177,40,243,52,30,53,61,188,206,184,189,183,215,193,141,
64,80,239,249,185,17,205,174,140,244,129,44,49,127,123,168,94,38,140,3,138,37,128,44,234,91,218,2,244,196,135,248,50,122,66,101,51,189,250,74,195,125,52,130,135,195,205,17,192,120,214,118,198,230,49,250,
146,205,120,205,47,15,54,156,72,153,145,84,117,254,129,250,63,250,4,225,218,68,0,199,251,43,71,245,147,239,162,27,103,248,141,236,236,115,207,138,247,145,232,94,34,123,135,23,81,187,247,8,229,116,76,118,
235,111,1,186,77,224,170,227,207,17,255,44,230,211,244,54,224,36,195,16,241,124,127,228,246,57,40,67,177,203,231,221,71,44,245,195,31,190,232,100,122,209,55,199,17,200,171,212,59,167,234,121,172,254,165,
218,255,209,83,180,163,83,88,230,68,7,159,182,196,42,34,255,96,140,43,169,175,75,101,130,62,133,60,119,251,200,245,86,143,243,182,219,12,211,244,105,132,174,110,173,174,125,217,86,167,103,232,6,232,110,
179,217,205,229,190,185,159,46,34,61,83,235,148,207,118,3,111,208,87,107,71,107,173,180,203,137,80,159,157,101,173,141,12,232,47,211,238,127,244,11,40,74,95,179,179,189,10,153,190,66,39,93,202,253,3,105,
253,93,57,178,148,123,70,70,218,141,87,231,218,102,164,45,170,198,50,36,143,120,87,143,49,90,82,32,219,135,241,71,207,147,74,72,70,201,220,95,64,161,152,103,242,47,75,215,189,114,219,173,194,240,71,138,
189,211,86,92,38,121,186,254,192,212,158,120,174,239,82,107,77,26,70,165,177,89,215,254,129,248,63,250,20,169,76,25,71,226,152,49,42,112,28,93,187,253,245,149,5,153,117,243,182,49,184,103,17,35,76,219,
145,198,148,217,24,34,247,237,248,221,46,75,208,110,131,103,216,222,162,137,168,238,170,43,127,230,100,169,199,238,145,63,241,117,64,222,61,195,29,15,113,107,163,65,90,239,25,218,225,183,183,161,99,175,
31,187,155,87,12,224,53,119,197,242,124,112,80,190,12,36,23,63,6,195,145,183,50,150,165,252,26,55,245,31,253,82,98,208,142,202,200,103,230,95,68,238,121,254,119,189,225,212,244,105,44,77,110,3,182,26,
217,169,157,126,121,236,146,33,97,147,182,144,116,114,53,11,240,12,253,142,23,245,121,83,61,158,161,111,126,207,253,108,106,154,126,190,92,177,68,84,115,187,145,132,22,125,98,101,22,237,116,249,173,1,
104,230,8,159,21,143,150,43,55,240,240,211,58,0,215,175,120,38,61,120,55,223,247,29,169,119,55,157,252,163,127,244,14,169,148,123,118,189,20,177,118,71,161,246,76,42,141,72,61,6,248,142,204,85,29,255,
177,180,27,192,88,70,121,1,203,235,192,26,108,96,133,42,187,245,236,220,57,51,117,217,6,0,186,26,38,132,3,209,194,15,49,123,145,116,120,79,167,70,2,111,78,164,186,215,19,160,210,224,111,142,79,181,146,
237,172,221,202,18,236,42,209,158,64,112,156,171,214,126,201,135,169,250,209,207,210,91,47,191,166,57,99,250,47,245,254,143,62,74,173,141,127,93,251,6,112,247,172,100,217,123,60,244,180,21,230,188,236,
119,88,249,40,212,232,107,121,202,69,153,69,60,111,215,127,54,211,141,62,77,111,115,122,89,74,94,62,78,225,50,50,32,139,71,248,14,218,254,241,211,166,158,52,126,223,212,158,164,218,79,159,141,134,245,
164,87,88,23,69,124,100,24,251,220,187,35,121,62,222,217,104,181,50,149,202,167,220,169,229,27,223,96,118,237,125,213,123,232,226,28,163,154,40,34,26,127,63,252,38,197,63,250,71,72,47,255,191,206,127,
87,104,49,192,156,126,144,73,101,29,107,121,173,209,214,228,103,76,30,147,243,43,178,107,142,130,52,59,30,79,185,180,93,174,246,63,75,210,165,246,17,69,101,135,29,55,153,66,191,106,138,137,190,84,195,
96,73,22,188,150,82,202,31,47,244,202,47,104,244,239,179,180,51,29,56,152,17,56,235,193,124,81,8,246,34,82,87,32,161,90,246,16,113,119,73,228,243,161,251,16,43,155,31,135,231,231,112,120,208,125,199,249,
227,45,168,70,201,8,98,234,189,9,15,187,87,139,216,61,39,217,63,250,71,134,6,32,211,181,82,180,35,157,233,226,167,244,52,14,69,78,107,191,206,143,159,12,52,111,131,179,22,82,58,105,188,219,141,44,28,15,
175,225,93,17,194,231,21,2,121,38,150,116,215,45,99,245,199,66,212,78,144,95,75,107,42,138,255,16,109,78,70,7,17,217,217,112,4,212,11,94,147,159,186,153,74,163,116,65,180,167,35,248,136,161,5,42,94,106,
218,145,129,86,26,181,210,101,172,158,127,46,199,206,53,43,181,138,44,62,65,3,192,241,221,115,76,189,215,224,217,147,72,181,171,227,127,244,143,158,38,180,85,181,232,108,22,103,154,250,181,81,255,131,
209,121,111,227,94,45,149,51,91,181,2,101,40,14,202,107,251,85,219,204,233,105,47,116,172,189,139,43,19,77,57,220,86,101,241,97,139,46,131,92,107,137,191,136,217,41,216,20,167,162,240,85,176,255,60,185,
220,64,144,194,181,82,246,39,43,109,222,12,7,234,229,245,220,112,30,53,224,215,169,80,26,176,25,88,222,73,107,123,176,247,173,85,183,32,246,219,143,84,39,204,133,216,218,95,252,222,234,72,99,246,246,185,
128,50,126,181,150,210,244,252,255,139,208,255,209,87,81,43,165,252,233,155,72,33,155,164,214,244,87,172,42,180,44,221,81,222,91,207,166,38,221,59,204,133,85,230,4,25,55,83,107,70,174,46,200,60,72,185,
143,247,208,101,29,182,17,215,204,64,126,159,179,46,59,159,212,146,159,136,149,195,230,195,181,40,197,255,231,44,210,142,98,175,207,144,235,91,16,173,91,184,153,222,204,74,206,48,238,76,60,47,110,79,73,
98,71,180,21,183,185,45,229,225,91,29,41,236,169,113,133,231,193,243,156,206,131,245,88,227,118,246,104,111,254,249,43,113,175,113,253,160,222,76,11,52,219,228,84,187,248,68,108,9,190,3,255,47,66,255,
71,95,70,232,108,110,236,164,170,193,245,167,168,242,223,183,127,209,109,95,86,236,150,5,73,11,149,89,88,81,203,201,240,244,148,37,243,243,238,148,177,30,253,181,53,229,117,249,248,92,240,120,157,177,
221,118,111,145,175,3,125,67,176,41,238,242,131,112,64,137,217,120,188,240,69,239,36,238,182,19,199,237,65,125,59,135,222,160,135,169,246,68,75,228,45,152,244,107,140,165,167,23,86,157,173,214,230,75,
182,208,15,36,32,3,158,115,72,49,6,56,153,207,117,249,158,226,30,189,251,146,104,189,206,118,58,144,227,123,233,21,58,175,34,14,216,89,252,143,254,209,151,211,216,241,126,157,246,107,87,22,137,95,199,
252,228,55,220,145,194,199,85,33,169,156,194,142,164,45,62,172,254,134,181,221,236,4,21,151,153,204,178,180,238,168,135,235,213,151,81,252,60,246,86,190,16,136,33,228,150,183,188,99,17,205,201,159,82,
170,209,23,176,121,215,177,13,240,231,103,0,51,182,207,208,157,180,173,2,49,39,234,106,166,23,184,29,223,86,160,128,40,122,1,157,213,210,128,8,250,7,27,171,54,232,11,58,133,2,173,247,67,217,130,227,232,
18,250,196,139,204,71,3,207,243,82,164,90,62,227,8,218,169,172,22,184,123,251,120,172,222,221,61,124,159,247,107,220,217,175,163,159,234,196,252,109,227,156,82,127,211,66,126,47,180,78,96,47,101,56,164,
159,154,183,153,209,155,112,185,215,150,77,58,219,191,217,198,56,176,92,170,76,179,101,248,166,203,69,74,60,141,26,7,187,54,14,251,120,167,240,59,46,134,27,174,43,217,221,192,183,105,36,183,191,111,243,
6,25,253,41,197,219,192,126,141,37,153,229,120,178,62,67,8,0,25,184,123,213,161,145,227,188,6,148,227,91,140,181,182,217,100,215,118,109,78,1,34,223,205,110,72,139,102,177,47,222,201,130,161,187,93,49,
186,93,112,194,117,12,233,100,30,177,149,253,37,94,10,58,129,31,160,203,89,72,119,181,99,219,61,178,49,47,232,159,233,241,79,5,192,187,244,83,129,243,111,27,231,144,186,254,113,22,73,148,107,224,32,143,
203,79,139,67,231,19,231,222,108,73,6,9,2,229,170,58,180,129,229,188,218,179,129,205,149,158,109,138,244,166,16,46,253,248,155,41,234,249,69,85,43,79,20,101,31,46,100,77,229,170,96,239,179,182,74,41,229,
207,203,248,229,12,237,223,250,137,143,19,165,212,74,174,76,66,66,240,50,139,57,94,81,222,181,25,129,123,221,172,62,205,211,103,16,188,4,91,119,149,229,104,165,212,86,170,9,32,149,23,204,50,146,199,39,
189,200,5,152,15,167,227,70,54,70,164,9,63,77,35,27,80,166,174,180,46,11,125,18,214,68,32,155,50,254,103,192,229,31,125,29,129,254,29,189,102,25,252,146,224,227,212,29,136,43,227,150,59,229,145,141,184,
224,86,98,234,26,72,108,189,136,127,117,160,56,74,86,183,234,165,12,210,93,0,175,192,245,142,147,124,201,89,78,115,175,187,100,113,189,140,174,51,177,158,254,112,145,104,206,102,182,231,208,184,191,67,
160,76,71,213,208,171,169,48,167,125,198,154,45,59,143,139,119,22,1,164,83,73,6,0,198,82,9,151,219,55,136,13,119,39,160,42,63,214,79,176,228,20,138,180,154,67,230,134,42,191,168,219,163,139,90,199,248,
125,124,223,5,62,43,234,50,224,51,245,174,71,120,253,63,156,102,255,219,232,55,58,92,21,156,77,116,175,71,6,9,29,99,124,92,68,78,234,39,116,147,157,138,117,134,173,206,104,120,114,41,189,71,238,199,79,
176,94,54,123,46,24,241,111,10,177,93,180,246,48,177,177,70,78,58,28,206,150,112,174,240,241,135,105,107,229,124,120,10,163,115,106,226,26,197,101,111,254,176,77,155,118,113,53,8,190,11,143,19,165,160,
86,146,168,171,245,250,79,195,203,215,69,252,244,235,88,24,9,0,162,42,233,15,180,152,18,197,21,118,67,150,140,157,17,152,75,123,175,179,186,179,162,125,8,221,72,64,181,232,5,161,211,95,138,251,199,55,
182,195,243,111,110,202,45,194,235,175,113,46,54,244,235,46,253,70,144,249,173,244,27,29,46,27,241,85,227,8,203,236,17,189,218,246,73,170,0,90,252,198,74,92,169,31,8,128,116,64,140,5,192,198,129,105,243,
221,156,54,199,186,13,24,100,92,118,157,235,135,29,152,245,70,64,215,10,25,248,51,237,234,129,223,202,66,214,33,59,137,210,239,155,241,180,88,21,73,245,167,148,200,150,93,0,101,130,153,10,206,73,26,23,
62,74,13,140,182,188,79,231,206,103,195,40,95,42,9,244,2,64,151,31,99,27,165,76,50,57,22,94,188,55,103,197,139,166,220,107,52,195,150,254,236,33,68,209,206,187,229,230,50,149,3,213,9,13,200,98,238,191,
96,231,248,203,105,128,8,60,123,54,14,70,202,68,239,170,44,209,29,45,255,141,32,243,143,190,137,90,195,112,120,2,123,180,201,179,181,1,180,59,235,235,116,13,182,82,74,235,111,171,180,86,218,86,54,11,243,
12,125,93,37,134,210,180,118,89,47,96,17,5,77,124,69,243,91,151,154,178,94,242,154,200,174,192,193,122,244,172,239,48,237,158,193,157,157,248,73,152,220,204,66,51,141,77,113,142,119,189,128,208,4,48,173,
68,229,127,10,169,78,142,136,12,116,75,199,116,88,9,251,153,36,58,150,99,209,172,94,184,84,65,194,183,186,195,113,246,98,245,250,47,64,248,90,176,141,185,115,27,34,229,194,218,163,254,14,235,39,65,125,
78,83,16,217,148,82,112,103,176,3,115,81,62,245,131,254,209,63,122,138,140,211,11,89,164,126,15,119,180,247,13,113,180,235,125,247,151,40,143,229,186,156,134,82,138,222,125,31,87,30,173,230,46,125,11,
142,119,120,71,45,116,71,162,112,138,110,205,122,212,233,54,196,59,16,198,214,44,153,21,28,10,39,66,19,151,71,113,140,75,10,218,250,188,221,63,222,166,113,116,203,199,95,140,230,160,84,59,52,177,179,255,
15,88,245,2,181,192,189,9,136,174,233,50,242,20,155,173,42,255,145,163,68,190,159,80,83,110,7,67,55,101,24,240,76,56,170,209,60,187,38,156,195,113,224,245,194,115,193,14,160,79,107,77,143,198,141,51,195,
70,135,192,221,125,32,227,50,140,42,250,248,47,1,248,15,246,207,183,40,113,139,127,20,69,54,166,148,107,173,224,179,114,32,147,121,2,144,239,245,63,145,130,231,117,210,248,154,163,8,0,179,58,122,230,204,
16,204,197,45,107,219,51,17,25,151,114,217,209,85,134,64,88,241,58,239,73,33,5,77,30,30,87,16,62,163,224,75,143,150,200,124,4,244,167,59,122,83,95,108,250,3,223,168,152,247,195,254,60,74,171,84,187,166,
87,167,77,170,163,223,81,153,8,5,136,88,71,93,228,178,176,129,196,71,202,115,201,226,180,108,229,95,64,40,61,222,147,147,4,253,234,174,28,38,172,152,179,119,36,52,3,240,154,63,148,118,103,67,134,27,140,
174,11,174,124,151,173,246,242,112,254,95,38,158,155,223,54,30,94,255,191,134,118,199,9,65,219,241,32,3,27,245,131,163,184,10,127,63,49,95,211,206,183,17,157,231,142,67,151,31,173,204,206,204,248,94,84,
60,157,33,113,9,70,240,250,175,181,110,198,7,88,227,224,172,99,217,186,147,198,215,192,212,206,102,250,88,84,23,105,123,177,232,243,227,100,243,231,230,196,61,212,112,41,247,158,106,71,166,120,207,234,
223,103,151,145,81,226,27,30,68,237,3,154,86,21,55,163,160,20,111,59,133,139,152,76,94,129,163,153,200,53,39,218,60,70,163,35,5,93,234,249,186,89,40,91,11,77,21,179,170,27,145,3,216,79,147,138,206,139,
53,41,242,99,28,213,143,211,127,157,158,92,213,155,90,246,43,105,87,246,165,78,65,64,192,192,61,139,180,97,128,17,204,63,53,126,85,69,115,59,245,74,41,195,110,181,121,45,151,115,174,210,216,249,177,206,
1,199,227,42,108,168,11,91,167,174,218,175,116,79,32,48,238,194,56,169,115,210,42,216,25,150,176,139,78,224,143,204,236,92,99,31,80,134,245,108,255,9,236,160,73,123,68,143,37,63,78,183,0,1,246,60,86,188,
82,164,195,216,232,239,184,238,195,89,87,103,202,25,92,199,27,181,185,137,79,9,68,230,207,190,42,95,98,109,52,118,26,101,102,117,42,174,97,148,12,78,1,85,134,232,247,83,64,233,140,94,41,46,218,145,190,
125,160,208,191,25,96,158,162,39,199,96,53,239,255,117,7,234,101,167,108,166,173,95,115,64,8,169,246,47,1,245,173,200,92,147,181,191,7,153,132,48,136,210,25,183,14,228,120,191,59,19,35,128,10,204,21,95,
170,165,208,199,101,148,3,113,77,23,131,34,130,176,168,203,134,208,66,145,239,116,148,156,94,141,225,31,200,60,206,74,213,70,227,220,208,151,129,59,60,72,217,223,248,129,255,45,215,198,190,58,11,84,174,
163,249,98,81,238,110,159,79,115,211,141,9,251,154,135,166,11,35,242,26,213,182,134,32,164,116,229,123,206,182,168,207,52,208,129,108,110,68,200,221,48,129,33,122,154,198,198,157,215,201,140,120,68,132,
177,11,236,183,101,121,148,219,103,249,70,60,127,26,200,42,121,190,82,198,157,182,238,150,153,81,159,95,113,29,216,149,51,31,209,211,217,21,179,182,190,128,6,24,131,93,173,65,16,244,178,209,12,159,243,
102,157,133,142,219,159,23,60,3,116,86,204,53,119,14,184,211,255,110,76,16,98,87,196,63,162,241,243,169,252,174,60,6,59,55,179,47,111,17,238,228,124,165,44,118,187,4,187,190,91,217,114,4,74,161,249,9,
60,58,196,110,124,189,130,25,216,116,74,27,123,50,206,161,93,151,220,25,9,153,57,42,60,140,99,164,92,229,14,194,246,67,66,211,179,200,166,195,142,101,252,155,227,79,17,166,210,249,88,201,96,8,12,22,26,
210,187,106,254,63,55,235,173,232,116,220,142,117,228,77,250,164,143,175,120,223,109,111,167,30,207,253,83,99,153,150,169,246,163,33,195,1,134,61,31,141,34,249,232,195,52,79,17,58,226,141,55,148,134,53,
78,72,140,8,129,247,176,227,42,138,205,120,97,132,126,32,141,179,107,96,255,92,239,192,211,80,209,254,120,16,64,65,159,178,47,211,177,155,172,235,197,31,159,177,175,186,243,135,47,32,176,187,172,66,112,
252,9,194,93,156,47,32,89,43,75,131,127,12,42,81,36,45,241,141,156,27,246,81,141,23,183,187,146,229,140,4,125,226,178,77,221,206,199,131,61,205,38,21,175,11,70,87,193,121,115,175,176,221,164,175,248,133,
62,236,13,31,23,56,118,128,79,215,55,29,105,73,63,45,186,253,42,250,45,253,222,145,243,171,157,161,23,67,207,17,215,57,190,41,242,135,94,107,123,71,95,83,145,232,253,247,117,27,184,130,138,23,202,35,162,
59,26,28,174,11,127,2,86,43,50,123,167,54,43,187,136,62,195,138,82,186,167,225,72,54,7,6,105,233,124,225,176,199,183,36,13,64,231,215,215,212,183,12,6,211,97,232,63,183,140,71,167,215,187,218,76,29,99,
196,39,19,207,120,16,56,14,0,188,47,239,212,151,27,71,232,73,46,196,131,125,13,166,249,116,137,36,238,229,148,120,222,119,30,223,53,16,102,62,61,118,203,54,170,58,38,231,46,195,103,25,81,125,208,3,236,
17,12,95,203,202,115,153,119,165,251,110,64,59,93,248,79,211,110,4,241,213,100,87,201,125,10,35,170,135,232,101,83,102,4,62,248,131,157,225,239,40,28,226,213,49,85,126,101,120,103,13,179,221,226,112,59,
171,86,250,90,166,235,102,176,213,200,207,113,147,116,103,178,84,24,45,248,202,168,94,181,207,209,4,53,225,157,133,89,247,228,135,114,77,202,221,240,35,96,215,66,127,193,242,237,30,232,134,50,241,226,
93,234,65,121,13,214,206,220,33,139,30,253,58,143,46,171,116,121,115,184,233,34,172,134,110,106,34,92,54,34,228,43,39,123,31,2,23,147,28,60,159,106,255,110,8,155,244,178,33,250,3,59,106,209,116,227,169,
34,117,164,147,30,126,39,144,237,234,239,167,101,40,229,179,114,220,1,213,213,242,220,165,47,153,95,218,103,130,224,205,193,74,131,227,79,141,249,89,159,69,96,64,131,191,149,249,232,118,10,22,107,51,168,
30,7,32,114,28,78,3,207,93,69,238,248,216,124,63,67,158,250,212,4,77,124,241,212,81,118,31,150,81,27,226,240,90,31,240,143,167,220,139,245,68,239,124,13,137,13,181,81,20,104,167,242,133,96,82,165,23,69,
0,231,242,9,129,179,170,37,230,91,249,32,163,231,214,232,14,167,219,217,243,221,37,51,28,93,47,110,204,253,167,83,238,60,109,203,192,0,119,224,87,237,3,255,180,104,51,26,193,19,103,244,93,62,119,232,41,
190,60,31,187,243,243,157,206,206,150,140,129,51,202,124,148,179,186,211,198,45,61,190,187,195,157,2,122,243,252,56,70,220,64,134,82,122,138,58,138,203,95,227,230,101,108,124,182,217,141,97,118,69,121,
39,7,120,85,91,195,84,237,156,173,76,233,124,15,221,255,204,119,68,243,91,238,213,27,252,204,6,243,38,186,167,9,191,234,117,178,32,199,32,245,250,32,163,242,164,156,7,68,17,180,242,144,140,195,40,102,
69,203,91,207,86,86,43,165,52,253,235,58,169,71,90,202,43,231,192,153,0,104,126,39,161,128,30,162,43,255,97,11,121,170,86,206,145,11,248,96,148,163,218,188,163,206,95,9,22,239,44,183,165,131,243,38,127,
164,104,62,190,139,190,179,253,208,145,162,231,87,153,140,168,179,25,184,237,200,176,75,231,99,166,237,155,177,39,27,76,71,208,176,33,244,114,205,178,151,180,195,19,203,108,14,130,247,85,40,188,2,16,241,
93,171,30,123,90,15,98,109,208,182,35,210,120,109,173,22,31,125,243,177,19,240,131,212,119,88,223,54,178,215,70,184,232,29,116,4,234,49,33,148,30,194,189,116,134,255,85,142,191,40,152,234,44,165,80,214,
29,152,109,184,111,5,192,223,12,164,92,131,205,252,41,225,25,89,33,231,105,223,152,148,147,180,246,59,234,149,69,162,28,229,180,50,245,172,54,255,197,184,239,140,236,126,51,69,234,241,55,143,231,206,146,
48,142,38,60,203,84,107,67,57,96,25,62,157,180,223,41,117,2,110,24,121,39,3,25,38,205,146,236,15,158,186,112,216,179,127,253,21,22,240,164,179,92,143,216,133,206,112,157,192,107,249,139,15,197,108,5,125,
243,70,237,209,121,87,19,207,66,210,220,229,222,74,152,110,87,116,242,74,216,29,186,225,40,249,242,245,37,227,112,74,224,166,116,218,224,30,58,58,78,158,11,224,134,19,80,77,117,55,233,242,248,1,234,223,
14,146,147,141,206,88,57,207,166,160,18,190,60,197,18,12,218,123,244,68,244,36,157,174,132,183,188,39,116,121,215,72,238,246,225,187,35,213,136,190,10,104,127,106,255,239,82,136,61,11,178,182,191,46,77,
4,3,57,94,59,161,211,204,201,153,94,52,183,132,238,100,112,239,101,19,86,136,73,6,122,87,128,203,182,135,50,65,179,110,227,56,148,49,56,177,234,32,216,88,252,126,202,238,184,204,47,197,137,201,96,96,199,
104,253,117,254,193,37,122,165,204,239,56,13,178,198,193,160,140,189,104,74,41,202,156,160,168,251,206,73,192,137,223,17,128,93,242,128,127,220,159,106,203,85,251,87,115,139,197,232,143,100,220,141,3,
250,138,215,214,74,9,156,170,162,199,108,172,47,144,237,118,70,232,193,114,95,77,127,27,208,126,5,177,109,62,157,219,145,33,188,140,41,103,12,145,148,227,240,21,115,118,214,198,4,77,124,69,182,103,57,
183,161,162,250,242,175,49,57,115,184,43,23,216,104,127,4,124,173,20,250,100,156,102,81,189,141,117,37,43,176,34,6,74,36,121,13,198,115,165,103,127,80,16,149,94,231,84,59,238,122,255,164,145,30,191,60,
116,147,134,87,203,169,84,145,153,225,185,80,205,54,154,36,63,127,77,177,119,64,120,52,98,82,14,148,121,143,91,158,125,210,99,60,13,78,177,27,225,110,76,249,87,3,153,106,79,173,237,113,173,217,79,106,
70,60,126,10,253,3,224,239,167,12,116,79,234,175,244,236,52,170,254,118,194,108,222,117,92,193,238,45,33,227,50,112,195,230,180,53,144,45,157,156,186,103,120,101,145,85,154,79,84,90,241,177,78,91,243,
101,6,198,54,131,179,59,115,255,135,5,192,221,238,10,216,213,123,234,31,163,90,75,83,94,70,64,108,168,59,232,181,210,130,209,176,3,213,230,165,173,209,179,59,190,23,3,82,15,198,140,203,85,127,152,137,
135,73,129,158,58,55,25,150,180,177,25,145,143,84,251,85,108,248,45,135,115,223,29,43,156,195,167,213,103,55,129,176,50,196,159,136,128,158,54,194,209,216,253,120,99,255,6,125,101,223,190,194,180,57,167,
50,48,14,106,185,125,82,190,119,178,14,195,72,32,2,31,122,36,152,21,52,246,216,183,228,214,170,180,1,167,29,234,140,249,7,52,84,117,180,169,6,151,125,212,168,178,44,238,76,24,159,211,183,138,254,96,58,
85,237,114,103,96,183,207,216,63,183,204,92,244,191,137,134,184,0,220,35,1,199,162,201,249,230,238,113,236,157,165,144,220,101,16,40,218,220,150,50,217,92,85,110,209,3,32,159,58,95,166,255,160,80,245,
64,30,205,248,131,25,29,213,220,226,220,222,188,156,59,218,136,249,174,196,42,186,248,212,170,249,105,217,133,119,251,201,107,51,178,205,59,199,39,180,146,251,134,79,43,152,192,111,154,7,27,227,148,60,
135,246,125,139,80,111,222,227,77,113,231,21,76,96,112,177,226,191,107,34,48,202,77,171,52,250,183,65,213,29,60,83,118,200,147,241,227,192,169,205,95,89,75,146,2,131,254,116,15,0,3,168,232,149,52,181,
11,254,211,116,146,214,87,30,154,251,162,29,58,39,69,191,46,178,12,186,17,232,119,196,11,148,41,7,24,22,102,221,68,196,119,108,226,59,89,44,188,248,68,182,230,14,125,34,2,142,104,183,13,51,44,180,73,233,
93,57,119,28,141,167,233,211,14,195,110,59,239,246,51,203,166,156,30,63,73,239,0,31,131,208,233,99,203,79,128,185,203,22,148,114,1,201,33,25,219,234,109,210,105,134,114,96,19,203,22,84,9,65,254,100,136,
119,193,159,26,10,155,88,70,7,62,202,27,144,21,56,64,153,104,127,92,155,148,70,80,155,227,122,153,79,166,221,199,107,107,7,232,161,188,23,243,227,34,110,236,40,246,190,6,17,149,175,243,12,231,98,71,211,
238,140,83,224,138,237,140,70,247,240,26,9,191,83,183,247,157,199,0,249,190,187,81,241,73,181,57,93,171,209,245,250,21,222,233,135,232,171,36,255,174,17,90,205,241,137,92,95,213,135,72,230,105,107,196,
207,163,62,212,198,9,201,246,31,90,11,38,162,12,59,123,47,96,99,10,37,62,77,91,245,8,121,101,123,33,50,49,111,61,65,89,228,163,154,151,34,97,196,83,195,75,33,189,158,161,83,41,126,117,77,149,249,137,20,
117,188,226,195,96,114,221,156,158,93,0,232,163,3,114,63,29,175,15,146,104,58,58,31,85,112,14,91,94,214,49,108,240,119,163,173,29,66,167,224,221,232,102,117,141,105,55,137,98,190,142,245,1,128,207,34,
206,119,104,167,127,79,169,234,50,224,56,164,237,185,185,193,67,141,247,147,105,248,76,174,173,185,125,243,235,92,31,115,78,20,0,108,213,43,54,84,38,132,219,150,151,148,172,155,111,181,211,93,137,192,
44,94,31,243,56,104,187,66,29,12,102,185,28,245,233,68,31,166,121,21,217,99,24,199,254,139,122,187,186,251,71,217,46,117,62,95,85,195,232,252,115,136,54,190,18,119,160,88,233,156,73,80,20,105,37,145,127,
146,3,15,62,66,56,233,189,172,200,3,157,44,198,154,207,185,45,123,149,175,144,101,57,249,100,235,72,181,99,253,139,241,211,209,196,169,246,60,105,140,179,114,245,174,65,91,208,174,51,246,46,221,117,124,
118,202,61,225,60,236,26,193,147,50,59,114,40,185,118,121,71,250,123,16,248,133,109,127,42,123,245,22,221,112,52,12,150,84,192,137,180,83,186,157,138,252,70,64,178,47,211,104,242,149,126,219,174,55,141,
106,219,154,12,133,1,230,18,7,83,46,96,100,176,133,127,101,218,227,221,108,142,251,249,84,4,238,82,8,76,190,48,231,214,90,187,62,10,115,54,137,170,243,71,155,209,56,51,65,127,143,136,43,37,145,182,172,
219,39,85,220,142,34,221,1,198,236,252,31,120,200,21,148,14,199,114,126,73,247,76,17,234,85,57,25,142,219,244,180,1,28,191,104,245,48,223,119,232,52,178,167,192,232,136,100,132,35,232,237,232,244,128,
62,9,114,39,188,79,214,225,170,110,207,2,153,245,181,201,235,14,237,240,157,115,127,79,138,30,76,12,48,199,134,55,7,122,224,79,42,225,33,29,226,249,86,61,6,134,168,172,16,25,223,43,231,178,13,142,199,
47,141,210,43,181,25,205,79,191,66,80,194,175,171,225,23,228,84,153,79,209,233,135,107,24,143,251,135,105,204,183,205,13,203,10,255,157,7,184,63,64,165,58,186,162,142,103,212,46,154,15,4,242,92,226,91,
111,141,175,85,128,225,229,237,120,156,189,109,112,38,198,194,20,217,139,125,105,142,215,182,171,127,122,239,78,244,84,107,149,159,129,253,78,122,39,178,191,219,143,85,189,200,57,123,34,130,71,126,39,
244,105,147,20,217,238,93,71,213,154,158,234,174,125,82,254,35,157,57,112,254,163,70,122,86,175,131,59,63,99,206,136,223,170,234,12,35,71,35,148,245,198,194,153,188,170,201,84,102,21,162,102,28,212,144,
247,247,178,173,182,182,203,104,92,192,190,59,31,127,20,120,71,228,211,243,159,93,66,239,238,112,47,165,59,5,47,215,167,185,244,79,28,111,154,175,29,113,25,112,130,92,74,197,49,10,132,204,198,142,110,
41,133,73,127,35,119,124,234,110,15,196,93,219,215,56,161,98,26,131,253,147,208,110,147,50,145,173,74,199,243,242,85,81,251,211,237,124,133,220,89,160,178,11,90,225,82,57,148,225,46,157,100,62,178,250,
81,185,26,28,255,20,26,206,251,27,143,155,118,94,77,179,36,0,13,254,222,125,163,10,35,93,209,76,92,103,76,162,119,234,67,232,35,59,155,225,137,23,133,74,27,60,126,205,8,254,234,232,138,70,202,221,189,
178,141,2,110,187,64,207,17,166,219,119,128,93,6,195,36,248,242,81,138,67,46,33,215,82,18,93,65,63,195,94,196,151,144,37,240,37,19,224,193,69,213,29,142,3,193,199,235,137,87,61,206,96,156,82,45,54,219,
114,10,48,119,181,236,78,244,211,74,9,7,235,19,218,126,50,22,119,129,249,43,193,67,201,136,170,159,201,242,100,230,70,149,61,5,108,214,159,157,246,182,245,236,7,189,85,129,152,55,230,233,78,36,112,5,132,
184,127,231,24,136,33,51,232,4,212,167,50,184,145,89,69,33,203,137,120,149,79,208,233,16,140,156,84,162,31,50,23,216,249,213,98,178,133,59,51,242,135,247,255,168,47,194,229,175,169,125,70,49,13,0,28,190,
186,86,10,165,41,92,100,222,47,103,233,8,44,103,47,227,199,120,198,53,81,22,249,248,231,248,85,79,38,86,4,101,140,50,16,138,70,119,41,251,178,75,67,129,200,9,105,61,203,113,104,122,95,142,193,250,71,40,
158,162,119,120,191,243,57,99,237,153,183,212,153,81,173,61,54,54,155,147,126,103,5,71,117,34,61,149,254,236,13,25,238,68,241,144,116,186,77,152,129,200,250,168,174,143,107,95,249,1,15,213,126,114,207,
207,207,61,25,85,36,122,58,246,195,238,212,121,252,10,44,234,150,100,46,58,79,132,8,65,119,51,248,67,127,129,37,192,136,159,237,241,78,19,131,255,129,77,26,191,135,174,234,224,174,246,94,14,239,129,168,
31,163,93,3,27,41,57,8,95,68,0,0,32,0,73,68,65,84,207,128,17,233,157,5,67,26,128,245,255,223,222,219,45,73,174,242,192,162,48,177,238,118,236,247,127,169,253,58,231,246,227,92,148,129,84,42,37,192,229,
238,169,94,171,53,49,93,46,12,146,0,161,63,176,107,242,4,55,137,246,174,176,237,9,121,18,133,175,90,85,207,251,174,30,193,232,190,227,234,252,86,83,235,107,21,211,223,80,123,167,239,62,64,144,198,185,
218,31,24,90,184,112,233,189,52,5,88,138,159,224,187,153,173,155,176,114,86,56,83,35,219,211,253,29,7,40,42,127,87,126,118,156,173,213,247,201,76,27,65,198,142,51,116,135,183,71,219,220,25,188,234,117,
224,218,255,183,132,204,147,124,110,176,34,166,8,199,30,41,7,86,191,213,28,89,191,93,93,145,109,20,155,31,205,148,97,226,114,96,14,206,244,252,201,116,128,54,224,196,233,96,138,89,126,111,57,25,37,120,
227,109,74,227,183,100,83,43,91,225,47,33,144,88,175,171,86,230,193,145,58,239,163,114,148,94,162,249,154,140,207,88,5,247,84,109,207,77,12,35,28,242,224,121,9,51,13,87,225,203,193,75,107,5,180,230,43,
12,119,225,174,161,121,91,145,211,128,53,113,189,63,2,26,180,136,197,156,171,192,33,162,173,248,13,241,110,110,133,236,26,214,213,253,232,128,207,144,246,106,87,200,73,20,30,241,112,103,142,182,163,192,
0,188,186,236,154,189,233,251,229,76,166,158,112,86,80,166,28,190,227,76,21,153,51,12,40,160,99,91,250,15,160,185,11,121,87,151,160,18,78,201,1,87,131,225,30,197,46,24,235,65,93,221,159,191,148,21,51,
25,175,72,251,196,254,109,237,161,171,251,150,178,50,62,239,249,253,248,158,227,173,250,130,250,235,124,251,251,113,30,103,110,58,61,159,164,104,174,30,67,30,127,96,49,224,10,189,188,196,239,131,169,57,
117,181,156,252,144,99,119,242,14,130,200,119,62,153,149,239,140,212,171,120,217,7,207,255,152,251,235,17,55,245,154,76,151,106,79,112,26,218,140,167,236,25,241,11,65,39,38,235,51,174,134,109,4,93,131,
58,48,252,195,121,22,180,230,151,102,202,204,24,22,63,54,200,59,223,59,49,242,91,16,100,4,212,154,47,139,50,135,58,104,151,198,24,139,123,79,65,151,133,187,209,236,10,119,105,132,251,234,244,148,132,189,
89,140,117,95,71,186,42,89,221,32,236,167,193,148,95,114,197,189,129,148,234,86,85,40,120,82,14,215,106,90,194,231,208,51,152,58,47,209,252,15,192,248,217,184,3,163,222,204,117,51,44,197,206,86,119,179,
98,188,35,253,193,244,208,11,84,52,216,81,74,190,69,16,47,190,88,25,191,214,79,179,47,102,216,149,246,62,108,21,148,79,143,206,13,149,115,184,163,140,31,85,224,43,58,106,127,137,78,189,76,71,174,142,79,
231,206,86,251,27,215,89,31,212,98,197,57,63,142,149,110,30,234,67,3,26,69,152,220,23,149,57,80,14,14,222,27,180,46,122,145,35,131,116,13,143,76,111,1,202,217,146,47,218,0,254,84,123,254,225,158,21,24,
7,103,60,187,85,165,188,156,226,123,10,84,32,244,186,184,255,232,38,70,232,72,72,187,153,177,172,142,45,223,234,167,201,32,222,129,167,189,164,106,47,85,56,43,109,129,235,71,100,32,42,12,192,58,80,236,
240,71,13,84,38,239,3,177,44,95,249,158,251,112,250,82,153,78,29,63,215,64,254,184,32,23,41,84,253,50,177,243,37,144,247,176,13,163,202,35,27,184,15,166,194,94,170,198,155,147,6,23,51,26,133,155,210,153,
91,80,233,118,178,148,114,242,198,167,239,4,231,16,226,34,32,199,112,213,123,140,126,43,92,203,158,147,17,53,134,124,99,13,168,26,81,43,140,138,157,49,110,254,101,78,161,194,199,50,54,80,149,94,169,44,
198,1,219,102,124,170,168,63,219,83,100,99,207,115,213,86,138,237,85,73,58,13,61,123,195,248,139,168,155,29,241,62,117,12,152,214,19,48,245,154,237,105,219,162,20,244,26,6,123,236,120,166,17,246,226,14,
198,89,65,53,118,141,194,249,24,136,108,93,252,31,16,200,139,154,111,223,127,244,171,202,6,57,216,56,98,223,144,119,112,123,232,25,1,95,166,26,75,159,253,24,76,103,238,158,60,102,231,135,208,40,63,153,
109,213,156,44,53,16,88,53,136,108,34,102,6,15,25,216,37,23,199,227,123,144,215,212,99,193,66,89,199,159,115,103,203,74,198,106,188,190,23,12,127,252,48,44,93,163,177,82,209,159,49,56,116,170,212,148,
95,245,141,124,163,161,13,82,249,142,119,113,114,85,25,66,252,94,209,193,48,142,139,197,227,174,5,78,52,180,196,172,54,116,9,94,196,169,158,191,237,50,201,219,25,232,154,155,248,143,183,58,180,39,46,239,
227,60,224,125,171,208,155,228,73,225,109,215,248,126,130,204,91,83,161,194,133,204,237,78,180,92,163,181,1,70,57,119,221,44,99,134,246,112,176,2,125,189,130,170,144,78,158,12,111,104,219,164,29,240,159,
238,73,49,225,232,240,65,234,144,85,114,128,240,100,127,234,120,92,32,127,156,101,135,160,6,36,251,140,216,158,190,203,253,132,170,242,147,99,91,69,63,171,217,236,220,43,94,44,214,234,4,100,147,201,201,
151,196,31,244,248,165,17,173,176,165,110,107,211,2,222,239,202,182,103,70,125,238,43,215,210,99,184,79,121,209,170,225,162,181,80,1,101,123,225,195,80,162,97,12,156,130,114,29,14,115,7,240,200,113,192,
251,81,122,26,39,217,141,102,179,175,23,101,158,7,141,174,52,225,16,14,174,39,52,176,142,124,41,178,47,198,73,18,103,10,20,54,76,249,123,71,167,217,108,7,214,141,248,131,186,56,191,133,235,131,243,96,
250,221,230,233,116,197,107,127,179,160,163,125,205,137,139,178,186,97,255,56,240,60,173,185,116,17,146,185,52,107,195,45,40,189,238,185,164,187,86,43,23,3,201,123,59,176,55,222,28,204,105,22,189,230,
189,84,109,142,123,87,127,182,151,86,156,184,173,131,30,59,70,47,112,123,232,25,168,192,101,50,214,135,241,89,97,189,243,24,145,138,72,228,141,184,80,214,11,107,206,176,53,231,8,156,0,158,176,16,234,185,
160,170,117,179,179,7,101,228,183,78,69,205,17,146,62,63,145,195,244,102,169,55,127,223,150,27,24,189,226,243,27,61,18,203,162,187,254,121,237,149,14,19,17,24,4,153,150,197,239,209,35,39,140,198,48,81,
109,84,74,81,97,250,130,31,48,254,13,35,209,30,177,194,152,48,62,142,90,153,255,110,160,27,224,194,3,136,198,97,136,12,115,155,245,177,189,151,45,97,220,123,221,204,41,42,205,102,59,58,78,142,170,155,
118,174,148,225,55,91,24,89,255,254,18,176,27,88,75,34,31,6,188,150,197,20,121,131,90,205,146,48,148,25,143,220,2,94,112,211,232,83,154,167,13,112,186,181,170,123,213,19,131,126,159,105,69,95,91,172,38,
87,59,235,206,31,113,168,55,4,43,235,195,47,46,182,43,173,216,41,253,251,144,171,224,179,3,42,113,93,43,118,178,94,245,95,66,234,245,194,70,11,97,223,253,120,33,233,205,251,121,28,77,200,186,10,232,113,
86,33,212,83,9,236,195,144,136,161,192,209,59,252,156,136,101,40,7,74,99,183,82,166,178,87,145,29,58,158,38,101,251,82,232,124,74,188,27,69,28,147,87,211,106,112,225,40,59,67,132,6,66,69,182,180,176,209,
33,233,253,67,101,216,163,220,10,56,71,100,139,52,2,62,144,231,200,160,58,101,3,99,197,14,132,217,62,104,77,138,73,195,140,72,230,28,245,104,58,59,128,87,94,184,228,57,130,62,22,23,31,6,79,128,215,140,
87,231,255,131,140,249,171,63,165,224,232,119,227,187,14,162,56,148,245,250,5,45,131,182,8,201,186,239,246,52,8,44,12,93,111,110,137,159,168,47,250,60,196,160,70,122,87,234,61,170,211,226,154,91,48,196,
153,90,235,254,123,88,238,161,43,130,150,68,52,41,239,41,233,59,207,161,123,211,52,111,52,137,162,79,193,142,139,69,147,68,142,218,26,216,247,90,60,151,221,160,94,183,125,142,155,136,203,203,148,115,37,
73,110,58,96,140,31,13,187,193,95,205,183,12,185,190,59,144,178,152,126,142,178,43,5,12,32,70,126,165,148,30,113,183,238,37,9,3,239,12,32,26,169,222,174,27,2,198,95,166,17,235,70,150,241,15,218,208,206,
57,1,148,82,67,167,130,35,228,241,115,197,112,31,105,114,31,12,79,34,82,213,190,99,181,253,225,180,187,28,11,161,198,219,220,168,201,151,108,255,129,141,121,216,111,180,237,89,20,152,39,222,6,64,199,203,
204,21,206,129,112,34,26,181,159,143,224,150,153,161,136,120,254,22,0,125,87,138,209,73,181,212,114,244,115,163,132,214,58,253,147,218,114,174,8,34,253,35,137,6,223,70,219,128,176,148,175,225,224,216,
34,101,83,68,235,113,131,73,90,189,25,195,204,114,208,218,53,60,199,112,43,229,238,7,25,69,248,25,81,189,243,234,215,176,86,235,50,26,213,176,179,163,122,224,202,26,76,26,24,95,73,5,102,163,153,154,41,
215,101,189,4,188,223,102,74,40,85,24,83,242,92,165,181,44,145,45,10,6,100,90,232,179,140,57,2,70,222,21,141,0,24,204,110,196,188,171,66,114,140,198,149,35,232,43,146,239,134,131,141,29,27,178,121,171,
206,79,52,88,28,49,195,222,56,17,38,158,39,77,142,62,121,93,202,108,0,24,203,145,9,232,52,120,255,155,241,245,235,201,196,11,15,237,235,143,168,79,56,22,35,251,209,236,158,59,58,49,3,7,71,218,56,215,60,
78,4,136,187,247,81,57,51,152,138,255,187,134,188,20,43,61,245,21,236,148,98,157,148,37,151,40,41,115,70,184,52,107,165,116,151,169,11,186,184,93,142,134,231,106,72,129,41,113,244,67,82,10,107,206,215,
238,12,74,12,27,42,110,216,147,209,145,153,201,219,113,136,142,12,186,114,72,39,27,134,139,19,180,75,184,243,166,56,254,110,223,227,102,176,219,22,205,223,157,197,121,191,186,112,40,227,207,248,226,168,
66,21,122,234,94,132,21,10,177,119,27,206,31,27,144,152,165,90,202,149,53,232,99,186,231,200,77,5,216,141,75,45,33,209,15,1,117,114,187,67,55,26,77,24,129,41,179,96,100,32,149,59,157,35,107,144,140,154,
164,189,235,110,232,43,24,237,97,24,209,185,128,186,221,168,141,215,142,42,71,2,248,43,88,7,211,238,13,206,16,112,138,89,56,223,200,151,148,142,30,237,214,105,8,106,169,211,48,66,91,28,107,118,32,176,
223,206,204,4,25,5,126,191,5,175,73,28,35,228,193,204,157,80,132,60,126,42,197,175,182,82,190,23,130,7,189,112,25,47,153,99,61,223,199,202,150,242,181,198,97,161,149,41,26,189,164,187,114,231,99,150,27,
231,42,107,121,179,137,67,50,164,1,134,173,152,22,19,219,192,89,213,152,36,206,76,241,122,103,87,51,30,25,244,129,60,196,190,242,110,190,14,112,96,189,1,122,121,120,187,156,105,129,244,173,185,183,185,
75,99,167,252,85,34,184,117,174,229,108,187,227,161,89,122,164,176,150,243,86,109,81,84,179,34,71,76,51,6,219,53,26,185,150,16,253,32,192,148,169,233,65,55,122,34,141,61,70,22,12,200,48,140,5,22,47,40,
123,87,142,215,202,72,176,81,5,3,172,14,174,201,71,189,208,168,35,223,149,36,181,1,175,136,167,103,48,202,40,152,153,129,62,46,173,153,177,176,125,215,74,187,34,158,98,157,33,76,161,35,143,209,30,55,102,
57,24,88,137,26,103,73,56,4,38,11,1,153,155,33,27,232,24,93,245,63,1,180,38,43,192,223,206,58,52,163,237,218,28,104,2,119,107,12,217,66,29,41,110,155,185,168,71,99,158,213,236,61,116,207,140,8,39,198,
225,147,221,93,56,52,194,94,236,88,215,109,131,126,102,196,159,16,92,232,208,70,202,61,51,166,206,187,186,197,197,94,165,22,148,227,253,45,39,56,0,107,226,123,137,84,79,87,61,222,167,60,163,195,215,165,
20,216,98,187,225,51,143,52,40,240,211,165,248,147,1,162,61,247,104,90,1,35,189,99,132,197,245,72,215,130,225,195,58,236,181,115,106,183,27,16,76,109,155,199,169,192,192,143,161,239,89,3,194,225,50,2,
157,135,129,111,246,103,168,117,112,28,112,76,48,141,141,134,222,56,26,48,62,24,213,98,10,94,189,188,6,233,152,232,250,234,7,102,24,120,75,192,68,207,56,111,34,170,238,188,143,109,21,118,220,58,61,236,
99,153,43,115,46,151,207,113,88,167,30,169,36,110,119,214,97,119,206,8,67,157,115,227,205,211,26,234,100,50,163,58,235,19,237,225,29,132,92,79,19,61,117,178,174,191,203,53,179,26,27,250,220,169,185,75,
127,203,160,199,186,182,138,207,19,47,47,131,27,198,34,188,3,11,247,144,206,116,20,236,180,111,113,16,84,157,56,119,126,176,100,138,89,102,100,53,216,159,104,141,183,76,206,176,234,54,235,182,60,130,118,
241,221,36,255,93,144,68,111,40,85,35,181,253,250,50,140,7,206,159,51,58,36,151,242,185,103,48,160,195,80,245,91,29,47,242,115,225,229,23,200,184,131,95,61,186,4,28,166,207,144,114,55,231,4,208,177,17,
96,52,3,26,111,149,50,135,109,4,28,159,113,144,13,202,27,226,128,58,136,115,176,79,217,20,115,144,176,189,214,94,19,99,98,135,224,53,6,102,140,11,105,2,206,152,4,99,241,57,96,159,115,126,77,65,149,242,
145,225,224,158,90,195,253,186,237,156,154,195,60,99,25,249,234,189,54,146,247,160,169,206,218,174,232,92,18,208,217,154,202,220,209,199,91,30,171,182,37,56,47,119,96,203,160,7,122,7,107,208,245,190,146,
223,129,147,83,238,186,61,124,137,88,226,198,110,146,122,191,170,171,198,70,210,215,178,152,206,236,23,40,242,240,190,82,40,47,129,241,30,242,154,86,70,111,42,244,45,132,26,134,254,197,21,159,10,216,103,
128,136,184,141,194,234,202,159,210,187,8,188,127,91,202,140,238,27,24,79,67,179,205,61,229,146,24,251,209,164,116,185,180,242,134,215,198,177,162,168,220,60,126,22,13,69,199,223,163,85,232,219,224,9,
28,130,113,135,35,89,118,76,56,21,223,235,96,166,129,198,104,24,108,224,161,65,185,139,230,197,102,239,216,46,0,175,215,28,6,4,156,133,250,235,156,149,143,7,175,129,206,56,247,46,139,153,46,81,67,227,
200,169,54,83,79,97,108,238,155,212,79,11,102,44,191,190,178,119,91,230,213,174,46,212,85,124,255,87,134,124,53,79,199,135,226,152,188,254,30,251,37,119,224,228,148,187,172,121,121,227,90,134,252,226,
150,223,5,216,94,38,125,173,22,225,25,169,21,35,81,175,81,91,157,219,95,172,159,207,226,126,86,102,56,218,93,17,178,165,105,225,12,254,117,64,149,210,141,183,121,236,171,160,97,39,229,142,123,171,96,60,
95,13,233,109,98,148,242,53,206,130,106,15,188,160,17,31,188,246,168,22,232,225,253,200,73,224,169,225,189,120,196,55,82,251,100,120,59,94,140,228,165,236,131,83,224,250,133,124,171,84,56,100,34,184,143,
163,127,208,15,30,31,35,185,112,143,231,160,150,50,183,14,148,227,149,24,243,79,148,104,115,154,189,193,56,110,181,70,9,184,2,135,186,99,200,141,251,187,172,61,208,167,250,77,5,51,174,56,224,134,156,106,
143,37,160,208,30,152,212,24,65,63,213,31,243,16,195,173,67,113,22,84,252,119,48,97,223,0,147,155,181,151,247,165,12,92,192,254,230,206,100,221,231,114,231,77,123,154,3,84,118,206,100,155,38,67,229,237,
81,185,34,243,122,165,174,126,2,72,201,193,8,24,35,220,158,35,161,104,17,247,203,11,182,193,178,132,62,158,32,71,117,150,173,54,51,135,188,207,61,190,55,235,48,0,111,76,27,203,152,14,7,69,124,226,125,
220,227,116,123,79,247,10,186,189,30,62,230,231,156,19,149,213,128,114,229,228,56,177,3,199,7,179,37,238,113,196,96,158,28,15,31,14,67,46,174,19,174,53,112,184,44,236,69,143,224,179,139,26,251,11,62,180,
229,7,60,197,173,94,179,61,95,66,157,99,138,44,156,239,205,137,66,243,20,231,122,13,228,108,129,241,216,160,251,137,234,67,161,162,242,207,210,214,185,217,218,5,27,105,55,81,238,191,101,60,173,232,219,
40,240,94,31,48,98,81,247,181,73,48,223,234,164,63,130,105,215,54,94,22,99,209,52,59,102,19,79,55,238,159,37,51,59,160,140,151,59,121,254,42,92,227,226,116,114,55,120,188,207,94,230,152,170,61,119,233,
140,185,189,161,134,31,150,215,162,103,130,103,56,59,53,222,141,97,166,17,42,48,192,135,241,152,79,101,132,125,145,141,186,28,63,100,160,93,251,132,87,115,47,57,63,240,241,208,218,88,196,102,247,33,26,
103,141,196,126,94,130,54,198,182,61,177,146,95,72,111,253,156,205,98,173,117,247,229,228,196,192,94,249,190,230,247,45,249,205,237,231,88,31,136,208,153,228,39,123,169,135,130,33,187,82,197,213,25,7,
119,70,136,35,228,32,209,148,148,92,229,55,61,94,220,238,246,244,117,137,194,138,10,190,235,21,10,129,86,12,126,44,184,103,142,233,190,251,222,211,212,37,118,214,212,62,120,199,101,162,198,45,5,230,121,
101,55,220,237,255,11,163,188,194,141,188,15,55,143,182,10,240,16,150,163,11,253,49,90,5,82,194,14,87,177,227,203,115,97,206,40,32,143,1,223,253,94,118,72,76,58,39,63,1,250,216,24,207,188,93,145,122,166,
159,88,11,77,104,84,188,138,120,21,92,89,127,151,254,62,125,58,201,187,190,121,173,150,212,34,14,77,235,247,52,149,136,206,175,95,176,153,127,207,225,13,131,190,67,240,115,148,115,156,222,77,120,140,154,
188,1,94,201,175,198,8,148,75,130,135,33,20,227,48,21,182,15,121,28,190,110,219,87,44,122,243,243,140,195,167,254,90,122,14,221,96,40,227,151,125,231,252,134,130,44,157,27,26,83,186,150,206,4,209,191,
110,112,197,133,35,87,140,161,205,64,157,88,239,237,75,210,71,215,134,29,39,217,78,156,230,95,192,238,42,232,89,5,135,243,39,69,236,66,64,54,252,194,18,73,41,238,161,223,29,133,238,95,40,121,221,205,76,
222,137,109,173,105,95,213,57,12,232,78,148,217,3,246,230,13,131,254,125,106,247,228,244,104,172,224,218,45,150,119,154,156,162,189,27,217,223,169,187,151,174,74,18,141,213,94,26,220,166,227,184,156,243,
17,81,138,99,70,234,205,253,134,245,79,0,62,25,174,140,246,252,190,158,147,187,81,241,170,221,10,246,220,75,42,19,81,108,180,102,163,44,68,34,129,186,126,34,35,38,240,220,160,63,240,46,232,98,189,44,178,
255,120,160,173,150,179,104,58,24,65,181,158,119,42,110,221,185,49,55,27,54,163,175,149,233,172,238,112,173,3,172,148,200,46,140,249,216,223,10,96,56,126,151,251,153,204,62,227,177,190,187,80,230,143,
196,63,177,224,120,106,245,253,149,226,56,29,25,21,33,133,17,221,184,242,198,117,111,40,155,188,236,95,115,163,113,214,187,74,200,86,163,251,83,96,225,210,188,217,62,118,157,88,209,252,173,152,81,173,
217,108,175,191,223,223,73,101,46,13,254,205,123,255,21,224,224,188,210,255,119,112,238,165,162,247,140,237,186,197,123,26,29,215,74,154,33,75,112,80,174,104,171,113,136,239,129,197,250,230,99,107,25,
188,191,203,112,7,116,242,237,28,226,177,221,73,243,172,133,128,204,236,54,79,103,254,237,173,227,36,219,105,220,189,247,18,44,0,66,218,177,167,222,85,203,79,137,120,190,8,238,68,203,119,234,124,5,68,
145,120,118,206,96,251,165,38,111,164,182,223,205,96,40,124,63,10,90,252,66,160,189,168,51,72,185,151,92,63,217,68,117,156,182,159,117,239,104,72,108,176,191,122,206,82,238,17,150,147,251,153,22,247,143,
172,157,192,189,148,251,118,148,247,41,226,126,174,214,238,37,134,206,96,181,8,184,110,22,221,60,7,250,103,108,92,102,224,33,226,141,46,16,247,127,219,156,255,108,8,163,157,7,156,52,126,10,224,168,109,
121,86,174,126,166,140,218,151,253,236,27,242,61,173,24,5,56,171,211,49,184,5,176,171,96,222,205,40,172,11,159,9,77,107,242,237,73,248,115,11,245,118,163,135,196,253,205,55,197,29,147,59,172,127,154,226,
84,41,175,59,176,246,134,251,247,211,72,221,47,61,231,76,44,181,192,126,214,193,93,155,147,221,63,83,101,254,194,247,192,143,217,183,254,4,128,189,243,190,214,246,84,235,158,33,198,218,190,69,207,190,
236,205,23,230,106,20,46,190,186,171,67,119,12,173,226,120,151,158,170,183,116,108,232,254,73,223,254,252,132,229,176,219,161,60,205,189,159,200,224,168,241,4,216,88,251,10,94,24,159,78,157,174,182,29,
238,156,100,125,58,85,169,168,116,231,166,149,82,250,51,44,191,250,250,23,126,225,62,140,23,7,1,96,100,94,218,206,186,126,98,207,251,76,131,160,182,206,54,57,77,95,14,193,181,173,49,150,10,127,99,122,
239,152,249,16,233,81,223,110,165,220,191,91,201,62,146,166,187,113,128,98,183,254,147,251,212,247,219,125,237,246,134,244,186,83,146,251,74,0,182,209,137,232,189,51,0,191,240,11,191,80,74,127,113,204,
235,169,146,55,247,164,19,232,78,248,179,102,225,30,182,27,135,202,103,187,132,100,115,127,21,173,189,200,58,126,11,220,251,35,248,224,139,101,126,8,108,140,89,117,23,57,146,230,139,226,230,226,153,221,
147,172,215,119,236,237,175,240,13,67,220,50,231,110,127,103,110,221,250,121,117,241,11,191,240,175,135,235,17,146,232,172,206,157,232,150,117,149,125,243,99,134,115,177,134,143,110,233,116,252,157,189,
238,59,91,158,39,153,222,179,177,133,23,39,221,164,121,203,160,159,63,190,246,25,80,199,31,15,103,251,36,226,206,246,44,251,87,101,126,197,80,166,219,15,91,188,198,149,144,255,39,223,165,129,145,186,223,
219,130,146,159,40,124,191,240,11,127,3,162,23,8,5,223,151,232,232,59,26,160,119,14,143,157,158,67,138,224,233,243,72,239,182,209,123,232,49,190,44,192,217,129,219,41,247,239,124,41,210,187,63,75,184,
227,137,186,83,220,171,6,101,10,241,42,93,243,9,96,250,183,197,235,186,82,62,43,235,57,139,22,177,75,193,143,84,192,213,226,39,189,145,235,23,126,225,11,224,110,106,25,219,63,98,68,225,137,148,213,1,181,
187,103,161,106,122,215,222,25,231,111,22,32,245,253,6,47,187,192,54,103,47,128,251,175,164,220,111,68,100,225,132,29,224,90,213,92,77,210,119,236,41,237,239,140,189,238,189,115,136,164,195,30,142,39,
206,61,248,130,223,83,205,191,240,11,139,149,78,7,111,251,251,209,75,137,215,238,237,200,90,52,252,218,205,191,213,193,180,61,140,239,156,143,218,81,65,185,83,162,93,155,93,39,35,131,31,97,208,159,74,
135,228,30,162,111,17,159,203,244,187,187,239,239,195,124,173,161,234,199,203,118,179,15,57,46,140,158,87,184,246,8,161,119,31,9,246,175,41,255,133,95,88,195,43,99,56,29,120,222,231,126,114,29,213,224,
218,130,77,251,63,13,142,238,166,50,62,211,217,147,251,247,243,131,95,167,201,110,27,244,159,24,40,181,82,194,116,237,187,123,23,231,14,4,183,63,19,147,157,218,54,165,182,215,147,221,244,214,78,141,59,
190,116,100,216,61,206,179,123,191,240,11,255,37,104,165,140,55,239,69,7,173,206,176,121,28,104,3,222,217,63,103,56,125,248,75,101,242,118,96,167,218,93,51,126,103,172,159,24,191,219,135,226,62,125,27,
51,20,226,131,253,149,184,102,117,184,213,120,156,236,205,156,254,198,216,106,191,106,69,53,154,63,207,197,58,213,191,118,134,206,185,228,192,31,247,162,86,191,202,245,11,191,240,95,134,108,61,190,187,
39,140,215,104,196,223,89,123,126,57,127,197,174,246,49,19,91,28,68,65,203,19,227,124,7,190,33,229,254,119,212,44,10,218,187,131,20,165,199,155,47,250,86,248,170,199,45,118,91,153,40,122,153,118,191,55,
64,168,52,144,222,234,23,183,126,225,23,254,147,96,222,178,120,21,81,149,59,65,128,117,168,47,50,117,7,215,215,173,209,187,186,93,114,20,32,90,101,25,31,216,109,124,183,137,129,219,167,220,191,95,151,
190,115,4,226,9,44,8,107,49,74,107,136,193,219,77,185,191,115,112,2,105,136,23,72,45,168,41,124,115,81,245,133,254,4,236,140,196,222,222,221,47,252,194,127,8,132,49,71,56,63,16,27,212,172,118,111,254,
157,167,93,86,58,99,197,235,115,102,104,127,43,118,91,247,252,5,197,116,63,66,223,102,246,179,212,237,83,30,29,227,121,63,225,178,209,70,252,26,213,110,138,188,20,159,214,127,111,135,92,225,95,53,57,59,
32,167,174,125,138,111,142,201,110,196,254,89,18,249,11,191,240,16,212,121,240,181,27,218,40,0,120,119,13,60,21,36,221,221,50,60,111,123,206,195,238,185,42,110,31,31,166,62,131,59,56,110,27,244,125,98,
207,248,80,79,69,127,15,113,243,141,158,227,207,1,86,24,223,97,56,95,114,113,150,126,95,41,182,95,131,255,11,63,2,156,119,223,164,161,149,143,94,29,35,247,240,213,235,100,87,199,158,30,228,237,240,4,255,
42,209,201,101,119,233,220,217,82,248,166,83,238,239,155,183,59,131,242,213,2,247,55,21,255,110,234,253,253,145,95,251,226,102,97,213,89,246,85,71,215,252,65,71,184,60,244,252,78,246,23,255,139,78,218,
47,124,32,52,184,104,182,88,101,14,159,146,91,133,251,109,29,88,249,235,57,183,239,246,47,106,255,118,223,222,96,236,124,123,228,5,63,226,57,244,79,128,123,94,238,41,188,189,187,229,96,37,148,103,246,
111,189,167,174,24,139,14,21,222,133,245,182,3,87,56,27,215,47,91,224,191,240,11,143,192,149,145,186,222,24,243,252,1,81,157,218,238,235,187,181,168,166,198,149,102,235,0,193,29,99,158,225,203,192,61,
102,39,207,53,229,237,239,192,238,43,109,238,142,196,55,236,161,99,229,103,14,182,189,211,230,110,164,255,83,163,179,167,182,24,222,169,249,157,99,247,218,199,191,40,210,123,172,127,15,210,253,194,79,
129,149,172,14,57,23,191,162,246,158,108,39,7,235,142,23,242,92,127,187,251,209,95,175,43,172,78,200,32,26,3,255,72,116,142,109,171,79,11,135,108,119,78,239,27,244,118,71,205,63,121,20,67,131,58,160,176,
139,225,116,223,195,225,22,200,159,141,69,3,34,174,230,223,117,63,152,197,167,247,211,143,112,245,72,102,177,191,184,203,227,73,157,239,62,103,18,241,241,125,240,83,221,222,239,129,147,249,8,55,186,64,
142,209,80,170,103,195,239,57,176,213,93,117,39,225,44,125,127,39,117,238,127,137,242,29,124,219,88,78,222,107,81,231,56,172,156,167,147,152,127,149,21,220,237,253,91,41,247,254,232,194,102,205,119,72,
1,158,28,222,241,248,236,190,116,131,107,237,40,176,3,160,94,214,114,190,136,23,110,133,248,249,213,61,188,29,227,221,121,56,108,39,210,114,241,131,33,239,237,123,75,108,240,171,118,21,140,122,185,238,
169,95,161,218,225,98,199,53,109,244,249,24,188,121,62,224,235,225,105,23,226,171,123,240,189,35,116,170,155,92,125,122,71,251,78,155,53,45,205,21,175,135,214,226,217,125,231,208,215,170,68,81,9,215,234,
221,223,252,88,118,96,53,122,187,15,238,205,167,16,162,58,217,147,9,59,240,150,65,223,255,213,53,101,18,207,88,253,234,71,20,74,97,142,170,41,92,45,198,86,88,158,118,150,171,162,120,238,180,172,90,121,
103,132,226,249,237,169,184,169,0,155,234,237,142,9,189,71,79,69,38,13,140,121,43,101,87,112,67,232,78,195,51,176,201,75,231,249,211,94,170,163,82,191,183,216,227,70,236,54,39,72,3,130,187,170,246,111,
192,138,186,185,223,251,119,32,183,79,102,237,178,213,186,50,204,251,142,64,150,196,206,249,223,29,21,105,133,218,185,78,21,88,222,130,44,235,114,194,207,35,135,226,242,197,251,140,95,247,238,144,237,
165,46,188,153,126,207,55,203,49,112,235,181,255,93,202,230,27,97,82,108,249,75,108,118,71,122,99,36,19,86,247,14,202,221,83,184,72,150,175,119,177,110,81,22,202,53,74,221,235,253,56,209,231,29,75,88,
235,242,39,133,183,233,109,192,210,21,199,119,65,247,151,155,64,35,237,124,40,41,244,153,188,230,61,101,205,87,133,21,158,70,178,239,56,145,223,224,68,113,95,225,251,43,35,234,245,206,94,254,115,165,135,
231,74,145,242,91,189,108,107,89,247,193,91,200,27,245,245,110,246,240,36,255,27,213,83,125,150,82,123,131,69,182,1,187,90,141,245,213,14,233,183,13,58,70,233,154,160,94,204,167,240,142,47,237,38,60,153,
149,22,8,245,125,35,16,180,140,165,124,77,77,217,1,89,188,229,34,188,238,31,69,233,108,34,227,154,165,20,217,157,39,84,227,137,76,152,69,209,211,239,230,184,110,108,8,186,18,109,88,151,1,234,40,3,38,87,
129,220,163,9,6,235,157,116,123,239,155,196,29,120,93,205,94,98,141,129,69,241,164,156,156,170,21,124,106,166,135,99,48,157,5,118,1,194,246,204,67,147,220,15,12,169,28,189,155,9,233,114,177,139,103,108,
13,89,121,138,122,80,74,52,14,146,153,219,181,250,91,225,208,200,104,201,217,55,175,167,63,72,133,20,206,169,229,184,238,172,174,200,121,143,104,220,133,19,222,30,125,108,109,143,113,52,88,167,83,113,
111,234,124,132,26,67,37,113,201,56,69,97,58,245,186,222,130,234,47,245,222,75,196,189,94,134,14,249,146,137,115,81,205,91,236,57,10,92,251,164,46,70,57,28,85,206,202,214,208,59,158,195,95,182,105,249,
125,70,179,170,48,240,205,239,183,228,39,251,53,165,26,205,163,143,42,216,40,69,206,203,235,102,204,233,238,214,146,110,39,72,69,13,186,97,12,231,163,59,10,132,140,158,146,216,163,19,220,186,104,203,140,
10,56,145,188,118,95,183,52,253,192,5,219,0,212,88,198,101,141,155,172,253,189,91,92,249,131,179,247,220,146,230,74,84,205,181,94,137,178,106,81,144,150,73,47,59,28,59,178,254,174,209,239,240,190,65,63,
230,228,13,159,104,254,57,6,157,158,59,161,27,220,43,153,183,234,27,219,222,71,145,220,206,226,176,24,194,40,74,96,242,106,172,189,254,53,191,84,214,144,47,18,14,46,215,88,15,21,206,38,224,184,79,190,
230,243,188,236,152,113,100,212,186,97,143,126,200,192,68,146,22,182,163,51,167,229,170,189,174,245,117,192,111,167,237,130,102,139,250,145,69,243,4,181,144,161,234,109,241,16,226,102,223,165,203,153,
245,149,82,209,238,126,41,194,89,17,235,77,141,121,239,211,117,221,215,198,80,227,242,204,128,230,213,41,88,60,203,81,235,48,248,13,238,163,147,126,14,43,227,182,143,253,108,213,29,229,39,169,206,90,215,
229,53,106,32,43,125,165,215,129,131,115,60,241,104,245,67,181,89,13,61,70,145,230,90,111,224,190,3,47,110,222,55,232,71,202,26,107,238,69,120,53,252,178,81,159,40,206,47,217,192,106,111,46,35,109,140,
48,185,251,21,196,213,25,220,185,138,9,99,31,155,196,147,120,83,2,94,20,26,125,191,179,139,21,243,137,11,232,44,115,201,253,127,223,127,77,221,131,75,137,182,82,202,255,122,196,164,210,239,221,80,113,
10,57,50,48,13,148,136,138,250,50,3,30,69,135,194,208,42,113,72,135,187,53,155,202,70,254,147,104,190,178,145,230,122,189,237,42,131,49,190,6,70,89,101,69,176,126,167,17,141,41,209,119,217,39,140,140,
113,12,2,168,70,120,132,227,68,103,26,112,60,81,118,26,242,134,99,121,221,195,254,241,170,122,111,5,120,83,102,239,105,232,253,222,119,194,181,108,174,104,53,210,59,145,105,142,40,229,99,51,29,24,175,
169,108,137,214,248,56,175,93,103,182,210,28,71,4,239,91,232,67,120,233,204,111,76,185,163,218,57,140,144,205,23,140,135,133,199,189,129,115,39,93,98,126,153,172,230,75,162,215,174,165,186,74,188,40,13,
215,195,170,231,41,193,221,91,209,114,234,145,69,102,118,237,204,228,189,69,220,43,184,103,146,119,90,221,91,49,210,80,16,182,76,161,160,2,30,223,35,238,250,35,134,61,210,203,12,184,105,220,172,193,82,
124,211,61,190,175,234,55,54,42,39,176,97,240,37,80,63,28,90,65,71,187,212,148,13,120,149,152,250,131,222,138,6,214,19,41,111,228,165,215,173,61,139,195,78,75,112,48,50,59,75,208,13,126,24,210,108,158,
193,208,112,50,183,201,188,28,47,175,88,39,199,235,121,206,180,230,186,199,201,19,148,25,93,143,86,55,194,57,23,236,36,168,53,133,179,86,93,43,13,223,105,219,191,225,148,123,216,138,62,239,192,61,191,
53,163,136,147,59,140,91,232,169,162,159,118,45,120,171,93,74,36,76,59,158,235,188,23,155,152,72,56,61,150,38,239,99,244,98,77,68,68,119,135,90,80,243,104,170,27,253,207,234,236,243,115,42,109,184,176,
87,156,188,46,46,101,29,25,124,17,17,202,232,80,24,117,172,219,250,203,114,208,72,71,120,46,186,53,120,135,65,189,82,191,161,147,18,225,239,188,168,242,43,165,108,34,102,202,64,84,216,66,104,128,15,179,
7,169,114,169,179,95,120,112,81,109,39,24,30,177,47,204,27,110,27,8,114,200,127,24,213,147,243,102,230,135,34,119,37,193,253,255,123,81,57,98,99,9,222,89,219,187,181,74,89,115,10,193,209,245,199,199,191,
112,31,218,85,186,151,184,207,68,175,209,247,160,118,211,220,79,90,205,148,121,108,158,50,99,226,62,60,11,118,84,30,49,232,153,195,174,189,39,20,178,187,98,27,183,219,195,184,231,215,121,225,200,56,210,
24,124,189,244,182,243,74,101,229,214,92,205,88,216,237,59,152,124,27,40,105,241,66,136,33,118,0,156,48,139,106,231,209,59,203,79,19,215,239,1,43,92,30,179,90,94,138,218,40,94,74,211,179,34,119,245,46,
163,224,246,161,121,239,188,224,215,203,145,235,169,222,78,127,209,206,148,19,253,126,93,201,184,53,106,131,70,23,141,57,207,64,129,235,70,117,37,63,69,207,28,183,15,113,148,50,182,3,234,44,48,134,189,
146,193,54,243,73,243,102,32,224,125,165,220,221,201,254,230,247,92,85,127,21,141,61,136,116,143,14,33,86,112,150,196,217,61,175,14,78,215,139,202,104,107,199,101,161,55,183,96,167,118,50,239,33,86,212,
12,190,101,246,109,151,43,77,119,117,231,69,235,203,35,116,205,8,26,128,83,31,48,242,109,139,171,145,225,137,158,130,157,237,27,148,103,211,208,49,69,135,36,234,192,16,243,21,249,136,120,79,198,86,33,
214,157,49,80,88,91,120,39,2,236,181,242,79,227,218,81,29,15,17,199,169,25,56,6,149,102,139,64,25,248,126,221,191,171,232,194,28,180,27,55,103,164,141,142,128,138,152,179,136,220,69,166,128,135,247,104,
145,111,118,42,140,227,129,169,125,114,24,26,126,229,173,8,108,163,162,96,39,120,150,55,195,203,21,172,5,83,85,0,0,32,0,73,68,65,84,201,183,142,47,48,192,67,10,21,61,172,71,231,7,148,67,54,15,196,205,
241,113,125,43,175,51,23,99,206,104,12,250,152,191,31,105,239,0,202,61,75,224,141,245,176,116,186,237,186,207,40,188,106,162,243,219,160,212,227,71,93,127,111,37,35,111,150,142,5,187,14,176,53,95,189,
106,207,189,243,200,38,204,17,111,240,125,209,143,141,20,119,94,99,206,245,63,75,76,59,112,36,177,247,197,251,53,240,239,69,97,43,207,218,222,123,81,228,9,183,245,118,61,65,189,36,98,188,92,107,135,243,
8,112,97,251,254,184,17,29,21,78,104,42,229,17,59,77,103,221,81,149,119,100,224,108,204,238,75,85,18,31,241,30,239,70,219,110,100,95,55,167,113,112,7,175,34,124,100,164,186,49,26,145,124,17,74,44,136,
64,9,241,72,163,191,210,229,190,126,55,192,13,182,29,90,207,36,52,219,192,237,143,10,99,221,121,111,189,125,223,203,6,167,198,241,10,217,11,103,212,123,57,103,87,128,7,124,121,75,189,248,199,123,99,47,
188,227,131,232,123,172,130,44,234,15,224,29,249,43,131,99,252,196,89,217,199,174,68,171,107,14,62,131,95,83,99,101,53,118,117,252,33,143,104,130,231,241,92,87,83,77,90,218,53,213,247,169,83,115,222,243,
18,213,118,142,248,245,116,68,233,89,180,236,188,252,19,240,194,242,216,161,56,246,148,149,231,108,191,85,248,127,134,255,9,200,39,39,230,158,107,77,207,179,11,96,19,214,49,54,222,10,253,20,229,220,56,
122,99,111,75,177,132,143,151,100,226,218,10,46,234,93,101,96,121,141,60,216,70,255,77,225,22,13,101,254,106,241,88,35,99,254,180,36,229,112,199,13,227,54,115,156,246,61,121,51,26,144,22,15,113,19,142,
193,47,103,2,48,250,4,156,102,22,216,232,241,86,132,160,203,25,14,44,155,172,76,94,112,255,221,212,163,173,1,149,153,144,252,80,38,162,66,59,247,168,96,131,163,81,156,190,47,127,3,148,246,189,199,85,38,
98,56,106,254,180,247,30,111,115,156,219,133,103,66,151,152,52,222,119,17,65,90,41,47,13,80,84,35,209,189,46,235,149,157,247,109,230,239,49,121,6,236,106,121,36,66,95,69,153,58,54,141,90,122,60,177,67,
112,31,198,15,118,16,29,244,38,187,15,23,199,232,147,39,195,163,168,154,197,150,53,93,24,201,72,38,108,241,173,213,104,77,127,85,197,238,231,99,141,201,180,212,37,184,252,159,179,61,59,196,200,230,4,235,
0,17,69,248,77,25,122,23,86,174,82,238,116,238,195,46,30,53,130,187,207,208,187,90,194,8,102,180,148,225,47,229,181,78,217,216,43,190,216,97,97,71,102,178,209,92,155,136,7,203,190,231,109,5,114,60,15,
219,156,1,234,198,27,88,90,214,210,174,23,225,74,5,220,204,104,155,135,118,55,223,22,175,212,149,81,143,44,71,236,50,204,126,49,179,181,11,200,184,119,103,158,50,173,115,127,238,103,171,63,79,248,14,173,
197,170,212,147,84,119,238,14,205,221,182,186,85,228,120,172,23,225,244,230,198,156,7,244,132,239,7,84,88,189,88,53,37,249,32,143,119,242,228,185,68,124,241,98,178,227,250,154,219,221,49,86,82,144,183,
126,102,246,52,93,251,137,25,33,167,198,191,28,190,135,202,123,192,163,242,14,207,74,154,239,140,58,74,99,228,92,100,188,154,213,33,182,21,92,22,224,0,55,195,42,23,180,131,103,221,195,70,255,85,203,3,
103,149,80,197,60,170,88,51,31,157,25,20,205,4,125,95,127,122,220,91,248,77,207,92,13,200,163,235,167,238,238,204,42,229,56,49,43,51,90,7,56,140,225,207,93,159,59,142,162,135,107,188,90,41,127,30,139,
82,154,53,236,74,157,90,6,106,120,151,208,218,239,174,215,95,21,101,209,177,134,197,104,87,35,164,92,217,103,2,108,169,175,55,241,212,240,110,220,78,45,181,87,73,239,19,222,175,230,19,190,181,246,58,27,
100,48,126,141,105,26,231,175,110,163,103,137,235,215,28,223,69,109,190,223,228,198,82,242,12,176,227,248,111,129,157,153,218,237,247,29,163,27,42,231,77,154,247,160,210,231,138,234,130,155,75,228,35,
247,64,86,62,238,33,104,208,102,203,244,184,87,115,119,39,254,223,47,159,247,243,247,114,68,119,230,248,175,220,37,213,58,210,249,171,31,89,218,131,57,94,207,189,88,166,154,143,80,252,144,129,55,200,200,
111,103,62,215,14,173,117,18,196,38,127,51,33,179,39,58,205,242,240,23,112,95,25,165,61,53,148,187,73,25,175,179,87,47,71,230,116,228,94,248,189,131,179,158,247,231,148,162,138,40,250,119,181,25,129,179,
146,241,251,117,106,251,105,204,119,221,148,119,85,204,39,56,17,79,141,229,89,182,241,46,236,98,196,200,115,149,91,88,192,173,234,103,141,186,214,123,5,122,58,108,192,186,104,108,247,41,40,136,214,254,
235,94,244,3,92,25,238,121,102,96,101,206,177,173,202,8,82,205,205,45,173,53,157,23,60,102,208,107,41,199,207,46,234,235,156,134,199,209,146,251,49,197,61,106,89,212,61,75,191,42,137,203,238,202,105,244,
160,77,153,118,181,124,52,207,238,5,142,68,206,137,53,135,107,161,118,220,244,200,161,189,51,150,216,82,109,114,84,113,29,181,95,69,3,223,31,221,71,240,156,191,255,61,237,223,225,247,59,28,135,175,153,
217,200,41,87,14,101,38,159,62,9,124,194,66,228,26,120,158,178,48,202,214,86,97,136,114,150,121,117,225,174,54,143,206,190,187,163,52,83,156,209,136,241,230,97,232,250,5,217,21,234,229,14,64,22,161,239,
203,247,28,211,231,78,185,39,125,124,106,81,180,82,204,179,175,223,145,84,220,227,93,120,124,178,161,126,99,92,219,36,20,25,99,77,65,113,136,87,109,212,70,145,227,17,237,233,178,151,39,185,55,214,222,
85,216,139,204,141,233,191,154,212,187,97,230,146,7,86,25,74,189,85,40,143,212,204,202,216,191,7,159,16,237,126,37,60,17,159,252,60,96,39,55,115,40,87,206,240,193,40,128,8,179,203,144,211,239,161,13,155,
94,11,248,210,149,90,10,188,110,64,157,102,183,180,88,63,229,78,134,191,236,109,56,153,174,140,60,103,1,188,107,127,106,234,223,128,236,241,211,101,99,223,143,199,83,238,123,100,159,2,237,241,101,96,226,
52,49,152,86,20,84,43,205,197,94,205,132,167,209,80,121,144,76,129,150,161,235,134,30,141,147,244,33,59,28,40,232,43,161,95,211,141,85,136,52,187,15,137,204,26,141,162,158,69,71,92,22,69,93,140,59,139,
198,114,142,114,122,171,89,89,57,33,251,152,126,225,14,240,188,115,116,173,220,234,72,126,184,236,128,131,101,51,212,124,153,35,156,149,191,172,121,107,86,91,240,6,151,194,112,39,231,224,235,70,155,4,
253,215,243,52,93,25,16,53,198,191,138,209,173,77,138,94,187,29,149,237,131,213,67,173,60,252,123,232,29,41,126,198,53,222,36,64,176,171,243,141,105,140,126,88,161,112,188,70,110,109,130,91,27,225,136,
131,117,113,70,65,183,183,81,38,171,14,38,165,22,143,167,50,71,161,239,169,175,251,233,233,217,165,221,142,28,3,120,17,215,109,104,91,228,50,163,92,138,222,66,200,54,58,248,94,118,31,235,168,255,17,142,
66,247,21,68,78,97,212,223,93,181,26,57,45,39,240,105,206,195,59,253,121,199,105,122,119,28,207,32,139,154,173,148,191,230,56,215,177,126,53,115,137,90,53,237,186,82,111,174,136,115,19,218,76,43,88,185,
188,217,198,227,83,144,141,219,221,88,197,190,111,178,14,189,248,156,65,191,16,174,147,194,11,4,239,145,63,108,116,98,150,246,224,164,223,46,237,46,184,105,174,246,110,20,182,11,218,64,200,157,167,134,
139,52,127,71,84,198,217,60,101,218,151,243,162,71,205,127,79,13,187,243,168,1,182,39,40,219,41,140,20,113,194,80,74,195,186,143,57,158,120,79,80,27,4,230,55,114,241,18,103,49,197,31,241,177,139,143,113,
238,180,83,116,78,219,236,240,113,66,3,199,245,100,93,240,92,220,137,79,19,118,174,235,126,30,37,115,61,145,31,245,122,151,216,85,156,125,239,169,118,219,96,253,142,56,189,255,29,193,29,103,9,202,154,
45,153,60,233,245,183,114,10,204,29,184,165,28,148,125,76,43,160,188,247,245,245,153,87,191,122,252,223,140,224,244,116,100,111,117,230,128,40,117,218,65,238,136,101,13,202,233,100,122,79,215,61,64,49,
190,122,194,11,86,76,13,63,38,232,167,119,211,163,12,201,222,28,240,102,198,109,161,70,178,172,176,214,29,222,68,126,7,149,26,155,172,222,201,40,172,140,233,14,221,93,58,172,126,145,207,88,189,107,60,
25,63,152,49,224,45,37,237,192,232,57,97,26,202,124,156,24,204,56,166,140,203,118,231,30,225,78,27,194,208,174,158,85,194,210,244,40,104,14,230,220,158,72,100,165,249,171,165,209,211,49,205,204,172,138,
138,217,181,213,188,54,121,137,156,176,188,237,72,94,138,114,231,149,200,119,225,118,186,145,179,37,19,207,35,47,150,209,168,191,7,222,58,245,127,78,237,176,118,236,3,151,34,20,82,128,94,21,175,211,95,
62,162,88,153,143,44,6,49,109,155,186,119,207,52,91,179,153,113,160,219,54,226,103,240,249,158,127,104,224,12,213,29,194,187,198,229,187,129,141,247,190,138,215,120,34,20,153,65,107,69,201,198,42,170,
242,109,119,204,90,198,215,59,117,190,30,198,139,204,138,143,18,215,28,122,7,234,116,21,154,25,172,246,94,156,127,176,110,4,222,63,131,88,78,213,85,76,68,244,26,126,209,112,254,95,201,156,253,182,235,
250,238,130,218,252,120,60,229,174,189,175,206,192,215,65,69,183,244,22,28,114,71,186,39,18,165,104,44,176,86,174,102,190,86,81,168,133,174,28,144,80,32,219,20,34,84,1,126,137,230,60,168,235,247,28,3,
48,242,109,126,30,193,67,145,253,179,160,36,234,254,6,215,95,51,68,143,103,242,246,250,33,126,227,78,214,90,97,209,29,248,2,103,235,198,244,160,179,189,151,135,232,6,215,187,71,187,185,54,95,212,150,188,
179,166,80,188,54,223,32,188,25,133,2,246,59,228,27,21,219,17,175,77,185,147,89,7,171,251,251,52,100,88,159,121,83,92,205,141,83,234,207,140,138,239,40,152,179,29,24,11,235,68,116,214,20,23,64,255,63,
177,174,227,232,93,130,49,31,42,92,214,75,99,181,167,211,13,51,167,196,43,213,197,62,142,31,5,27,101,193,178,60,152,30,155,234,191,47,23,78,133,31,26,248,213,62,253,247,67,164,178,78,152,249,142,72,255,
51,162,86,132,117,175,119,199,69,245,45,119,223,111,65,165,203,100,72,251,146,15,13,98,220,234,186,242,239,219,184,147,195,80,251,244,29,162,64,79,57,19,190,49,44,90,21,68,143,255,172,169,4,167,59,129,
58,181,219,117,33,91,162,123,191,26,58,143,143,158,114,103,35,190,211,157,59,169,81,117,40,234,206,30,250,11,87,110,42,89,68,118,210,39,211,163,139,189,213,29,60,251,49,187,50,234,190,32,178,101,222,44,
172,199,146,113,249,157,196,249,176,70,43,77,162,84,162,63,241,52,26,123,207,249,201,140,171,215,18,227,61,197,87,42,155,79,233,239,111,183,125,207,16,252,123,38,251,89,202,42,234,186,183,141,247,117,
35,162,228,117,56,210,215,66,60,115,233,124,26,28,215,198,74,180,249,93,232,173,149,240,167,116,189,94,152,127,163,228,254,42,136,242,5,24,227,43,135,68,99,220,178,79,17,217,77,140,95,163,38,226,49,123,
102,15,61,137,122,222,139,177,98,120,228,21,184,183,32,239,13,10,115,88,255,242,228,158,24,151,45,28,11,123,239,133,118,55,141,53,163,116,101,44,39,222,189,201,194,197,207,123,109,117,124,218,200,226,
46,240,99,112,198,73,20,14,227,151,193,59,129,225,254,237,227,122,43,248,107,203,79,193,27,157,250,168,126,4,96,210,190,205,150,159,66,45,120,38,93,103,233,206,156,3,125,29,225,228,244,122,104,31,154,
187,8,42,251,236,108,198,191,210,79,202,5,120,21,89,119,111,39,176,203,232,189,3,53,249,134,240,231,124,10,119,137,218,116,45,207,197,247,253,200,202,247,194,86,68,95,211,175,4,249,220,164,142,67,66,96,
101,168,209,139,86,10,192,93,95,94,186,246,104,23,110,93,51,31,110,209,179,132,234,87,42,62,227,58,134,191,250,217,149,170,50,250,111,144,141,154,158,46,143,221,213,19,38,36,215,2,241,113,208,88,96,30,
130,71,131,133,141,113,220,30,234,135,98,175,82,124,84,206,101,220,166,141,191,241,243,232,177,177,212,54,160,151,251,248,186,108,206,41,70,250,239,64,60,176,145,86,113,52,91,114,239,27,225,207,99,44,
92,40,140,209,46,118,66,141,55,151,141,200,6,232,131,13,55,37,126,225,234,222,245,198,178,29,29,110,97,76,211,141,110,8,199,149,10,175,2,114,120,101,219,12,239,170,45,71,190,27,184,120,144,88,110,84,181,
215,216,98,196,94,175,191,207,89,34,19,189,119,198,240,187,98,236,16,178,168,38,228,11,175,183,6,120,131,15,229,141,239,48,240,213,208,252,122,232,115,113,106,120,191,247,137,152,11,54,120,28,6,141,163,
111,209,247,115,120,33,210,79,150,239,173,207,104,13,246,117,174,156,124,174,111,99,221,100,88,156,206,74,24,203,110,181,101,141,45,120,199,50,126,157,184,181,240,219,51,123,232,245,234,120,179,19,184,
54,104,111,144,20,136,239,238,163,47,105,209,247,213,190,187,187,102,235,182,51,211,74,176,151,77,165,151,99,65,184,225,236,37,207,166,211,180,102,250,158,125,7,84,80,86,30,154,169,189,59,12,93,150,148,
183,220,241,218,31,94,124,32,116,222,4,76,221,227,129,59,62,231,129,34,208,13,146,50,84,59,145,114,232,24,39,226,255,168,49,123,104,153,237,242,196,107,189,222,228,161,227,145,198,50,10,197,30,4,231,8,
42,89,9,156,225,27,212,6,6,53,84,45,40,143,240,120,29,168,245,70,19,101,204,79,10,67,63,41,47,206,23,56,190,16,143,224,249,14,124,69,170,253,189,95,89,139,137,61,99,208,41,156,226,73,205,246,125,154,146,
240,29,146,193,4,223,129,48,226,185,129,149,29,26,68,60,158,207,132,27,209,123,126,239,208,221,54,147,192,36,235,52,109,31,226,167,8,112,91,69,145,16,36,225,106,237,158,40,211,156,69,18,243,63,190,90,
214,210,178,63,34,241,172,22,119,70,25,21,116,43,227,192,238,224,0,238,97,103,77,58,153,202,121,223,223,157,3,160,242,82,146,104,86,173,199,96,72,158,62,245,159,70,216,164,83,30,167,91,15,179,18,55,129,
29,61,67,162,190,171,111,34,217,198,239,49,222,152,214,11,71,100,116,34,158,185,118,228,132,71,20,77,195,148,193,247,205,234,109,222,194,58,182,214,87,6,179,25,60,246,166,184,241,252,99,21,202,188,250,
235,214,174,186,44,225,79,241,115,19,91,164,100,162,253,165,136,174,66,147,241,35,101,216,116,194,246,136,251,183,228,109,52,128,150,42,242,73,81,76,45,155,121,253,81,31,156,23,223,94,56,163,119,9,108,
167,157,137,46,59,85,179,188,65,249,51,135,18,87,144,57,106,67,169,68,10,50,241,98,178,72,30,251,221,215,153,210,205,125,216,249,217,101,164,193,235,193,61,93,82,117,189,8,80,79,164,176,187,120,111,170,
12,167,31,66,79,124,129,7,250,142,125,219,154,211,55,129,101,91,249,64,59,142,112,136,63,136,114,149,31,164,244,145,213,86,209,61,170,82,225,203,83,230,160,21,183,238,250,103,168,5,90,147,107,245,144,
236,163,208,245,22,3,202,219,179,175,126,21,74,165,22,189,224,223,61,120,226,20,77,137,162,203,247,33,20,192,64,9,168,250,59,122,66,233,232,42,26,42,65,177,139,137,94,133,235,112,232,229,182,175,211,124,
13,246,210,13,63,160,4,250,27,173,90,225,57,204,85,194,10,148,226,18,9,17,9,172,12,87,63,67,241,20,60,185,224,51,199,33,50,34,141,42,58,135,43,105,203,184,211,122,213,203,177,50,132,163,186,48,144,76,
211,56,18,157,135,141,246,250,236,141,85,138,104,83,16,103,100,176,243,172,227,147,48,17,43,217,70,195,218,168,142,98,105,87,39,153,152,34,104,171,116,71,119,159,87,186,185,169,66,65,115,5,222,109,0,130,
17,158,197,32,44,53,1,203,238,170,190,104,179,11,145,195,141,242,246,232,155,226,74,181,202,180,153,155,207,130,83,2,230,222,249,136,97,155,168,53,27,77,121,67,224,48,222,185,84,40,187,252,238,213,171,
170,174,107,10,204,176,242,10,154,100,222,126,165,255,158,31,80,148,194,203,71,158,230,207,27,54,186,3,53,55,135,140,29,13,199,79,241,50,59,247,228,155,185,182,255,25,235,191,11,30,53,74,237,26,53,97,
248,164,129,229,242,54,203,216,129,232,251,210,44,27,108,112,21,45,51,147,92,95,224,84,215,223,3,126,107,8,37,48,80,43,229,127,88,87,84,96,151,252,181,238,124,100,138,52,163,232,63,226,59,171,171,249,
94,97,61,207,172,197,91,4,49,38,239,152,136,10,165,132,182,45,229,241,208,30,90,92,179,177,10,138,31,51,232,124,72,162,147,118,66,160,22,214,248,126,54,85,145,66,80,63,139,186,143,211,199,103,119,176,
177,83,248,26,155,181,0,73,239,53,40,56,89,80,178,129,16,202,166,139,133,35,171,23,107,100,238,36,233,96,254,74,153,145,124,255,91,75,51,47,175,216,153,98,228,163,207,71,164,0,21,186,40,99,129,14,19,206,
169,55,252,191,240,4,252,119,70,210,158,70,175,227,251,132,35,221,20,89,102,85,177,235,111,165,128,200,9,207,116,21,231,253,182,245,90,192,150,253,186,43,9,160,155,130,38,163,88,5,99,45,31,115,46,68,190,
86,43,191,181,248,108,66,4,145,222,85,240,220,143,179,212,61,76,126,223,124,79,57,239,66,115,71,73,207,218,42,103,32,66,183,115,160,133,61,189,120,194,19,99,191,239,222,174,129,23,185,57,154,189,38,97,
35,3,124,31,220,68,153,45,244,177,192,27,41,0,52,214,1,211,173,226,8,82,196,178,24,139,181,223,63,105,179,83,130,17,189,114,82,173,18,182,229,222,141,80,238,14,214,245,156,105,167,33,235,197,47,252,36,
96,195,221,138,118,254,35,35,195,145,228,144,101,105,172,208,212,190,60,234,214,10,252,160,138,221,114,144,120,139,191,135,223,241,8,109,164,218,77,121,115,23,105,36,163,112,238,74,126,148,69,12,121,99,
58,27,132,190,32,33,29,2,243,243,200,187,220,89,41,143,147,182,229,107,59,199,206,65,55,200,173,222,83,108,59,145,253,137,183,132,181,166,167,154,239,208,174,49,54,195,200,90,189,139,187,210,115,111,178,
10,167,167,53,198,188,36,219,194,194,202,171,180,104,247,63,20,174,104,63,118,69,54,114,88,250,181,234,183,26,19,195,11,213,89,71,247,214,96,243,227,125,88,222,232,187,221,30,176,56,181,241,111,68,119,
182,141,225,116,61,253,215,29,139,62,166,236,228,205,121,199,121,99,153,155,24,116,121,161,58,137,237,115,229,91,153,173,190,198,172,170,217,32,225,251,19,181,51,117,216,131,8,32,98,61,108,73,55,108,96,
165,245,93,132,44,116,146,14,69,253,78,246,152,183,65,50,120,36,229,222,39,191,243,90,235,203,227,227,84,251,168,75,101,2,219,45,168,151,96,124,213,123,221,87,55,56,18,199,242,29,142,250,91,152,100,93,
99,77,146,149,230,217,114,223,162,162,29,38,209,195,181,202,197,190,225,121,39,53,24,46,208,11,209,120,243,28,142,177,115,237,201,240,5,81,73,255,204,12,190,186,21,41,205,72,241,70,247,148,145,127,57,
12,13,174,103,187,74,223,87,192,209,157,165,229,95,44,210,235,204,118,246,220,0,247,28,203,216,105,64,131,229,157,5,230,83,170,244,77,216,107,123,63,139,193,253,142,36,194,211,243,142,149,197,105,31,163,
212,114,193,58,35,163,156,142,0,53,30,117,43,207,223,165,167,47,1,28,235,174,108,56,225,197,206,134,250,65,167,253,17,108,171,10,225,173,12,215,137,132,169,173,130,157,246,220,239,176,222,155,7,47,118,
230,163,148,135,78,185,203,199,98,80,67,21,80,180,80,174,157,149,125,99,204,39,101,249,241,39,98,225,12,54,159,197,113,39,202,9,228,98,53,140,219,138,168,204,121,1,155,96,90,29,127,39,186,222,168,139,
149,110,230,197,215,97,37,195,53,44,251,125,49,104,190,122,91,22,149,8,111,55,230,59,41,176,74,89,153,214,234,44,171,47,21,134,114,186,253,248,148,232,195,206,61,28,23,101,172,75,217,147,205,149,99,164,
164,128,199,121,69,103,85,215,103,24,58,21,123,29,213,243,243,221,224,142,86,85,92,138,142,71,199,177,50,128,200,151,95,11,185,209,100,122,22,143,150,112,53,23,60,182,149,202,87,78,219,82,137,183,171,
78,141,250,211,204,178,14,101,241,90,27,74,62,149,108,216,181,170,70,87,227,8,59,16,10,233,61,3,157,67,128,169,77,99,142,243,230,106,39,252,174,12,239,29,195,62,2,229,141,17,120,38,66,39,37,153,145,125,
250,71,85,244,163,41,77,30,110,123,155,214,245,153,202,30,185,118,43,79,175,47,70,79,69,40,106,199,128,21,246,200,80,166,75,66,226,140,57,142,162,72,143,116,46,14,110,203,215,138,154,91,24,48,182,134,
135,234,101,170,209,95,19,5,215,114,109,205,236,201,98,246,72,146,50,224,174,189,184,110,226,191,170,179,106,95,74,28,221,69,252,164,206,17,225,229,72,139,231,79,25,6,133,179,150,88,86,56,83,192,206,172,
250,206,125,225,49,80,178,153,241,80,68,189,232,59,243,176,83,222,129,231,90,205,93,106,68,2,162,243,209,61,164,240,186,174,165,152,253,113,68,165,142,164,240,186,228,185,181,216,27,125,95,216,102,102,
34,122,134,48,41,202,237,62,104,186,67,187,169,214,84,72,171,59,71,64,100,41,87,111,25,62,189,162,85,31,159,123,108,173,250,239,171,20,103,135,119,31,3,177,143,148,180,75,200,87,190,82,132,75,120,8,7,
244,95,109,253,87,167,24,112,95,132,141,70,137,23,71,58,86,193,61,59,18,187,99,226,45,87,102,36,180,129,154,203,30,15,207,177,242,86,10,153,249,142,140,123,255,143,227,82,175,63,248,252,59,254,126,92,
223,154,41,165,159,56,213,106,148,105,114,70,40,52,226,205,126,122,204,65,187,224,123,196,161,114,8,34,60,74,241,70,124,41,3,195,109,35,195,164,12,127,198,79,161,186,17,79,17,206,200,192,103,253,90,71,
141,254,126,230,60,112,155,104,94,182,234,16,98,149,249,196,61,238,46,191,54,67,37,148,63,150,210,122,81,235,173,127,87,215,122,215,95,227,11,111,150,198,72,67,99,206,217,12,13,201,130,84,12,136,113,213,
25,142,3,212,2,237,119,195,115,111,138,43,101,140,200,24,24,246,12,73,33,242,11,31,238,56,49,217,59,221,239,226,124,181,213,39,222,131,218,165,64,206,43,139,92,140,50,82,12,182,82,74,237,217,133,234,218,
184,186,197,226,80,10,181,20,37,172,80,83,173,192,129,187,56,252,140,33,50,192,60,14,255,43,115,123,34,90,160,220,62,171,195,227,50,12,120,210,104,240,220,231,170,246,91,237,26,202,230,152,155,202,175,
154,239,97,164,214,157,9,81,33,243,23,27,12,232,234,197,73,234,94,91,84,204,28,134,85,221,44,154,92,181,141,238,57,103,181,216,136,60,90,71,170,139,17,191,234,254,170,191,138,86,214,70,173,137,136,150,
234,151,113,70,105,193,218,239,173,180,90,203,216,178,184,4,249,133,39,217,130,8,140,149,130,200,89,138,106,241,90,116,107,50,67,177,128,126,166,104,103,190,51,124,78,118,5,66,213,239,212,56,55,255,117,
213,165,123,251,232,188,42,114,120,44,66,239,30,22,71,74,99,112,72,73,241,245,157,83,202,92,127,92,15,205,246,60,132,74,76,132,108,145,96,56,47,63,240,76,35,154,97,234,253,154,243,117,207,147,26,235,213,
236,170,227,60,43,7,162,82,139,249,83,140,67,108,92,180,174,28,33,197,158,138,156,220,75,73,10,25,200,170,157,133,33,131,221,168,22,144,205,90,202,56,84,100,152,105,242,69,38,10,244,246,144,239,167,244,
35,147,41,235,70,161,245,47,9,15,120,175,143,149,124,178,128,228,168,207,211,46,100,79,43,112,25,222,67,186,166,92,224,80,101,140,191,20,223,102,151,175,254,37,91,167,92,94,129,200,234,25,232,113,196,
67,220,181,42,172,175,151,58,12,247,88,51,213,78,224,248,173,0,158,215,26,143,151,210,83,184,174,236,56,98,190,45,94,251,206,252,96,167,183,82,87,7,210,70,3,125,244,164,139,25,99,79,221,60,210,167,6,72,
127,125,16,108,16,177,130,231,12,122,153,202,79,237,59,102,209,138,197,113,170,58,4,141,107,165,220,221,183,216,137,206,15,117,110,120,159,141,15,126,102,39,40,141,81,199,213,223,21,122,194,195,28,97,
161,117,177,82,229,86,26,177,82,192,252,29,209,53,89,99,194,42,42,143,234,27,155,221,44,251,61,122,175,240,29,153,227,39,29,217,24,88,231,244,106,80,175,55,218,141,235,23,82,62,37,254,122,236,228,149,
22,173,102,227,178,24,231,32,124,169,7,116,174,209,144,25,39,97,105,112,44,205,225,167,8,229,100,94,169,122,25,181,219,1,70,202,19,65,160,63,54,209,142,250,39,172,166,117,153,31,52,214,56,246,64,155,133,
20,199,206,56,146,93,24,43,158,233,120,13,124,45,180,85,101,45,188,113,28,204,97,79,34,63,178,86,194,121,104,244,159,219,163,26,64,39,156,134,194,225,115,21,34,15,34,0,245,67,39,10,173,108,155,202,138,
55,252,209,186,225,128,164,82,161,138,182,239,44,143,61,64,25,200,225,81,131,190,179,253,204,233,37,181,223,120,234,239,160,49,175,102,181,124,205,16,71,46,7,27,16,110,211,57,234,215,151,239,229,162,199,
8,66,163,110,168,0,15,11,28,210,168,135,196,174,255,193,51,254,108,248,216,0,115,223,173,19,48,85,151,114,10,74,241,179,169,148,81,198,23,183,153,198,25,22,43,43,160,171,114,163,255,61,194,47,229,114,
98,123,191,43,220,175,192,123,245,129,137,227,168,226,126,254,53,42,151,163,240,98,239,85,86,107,51,47,216,169,117,158,78,168,40,128,64,163,14,220,98,82,217,248,8,141,92,107,44,123,82,129,194,122,140,
228,89,189,159,61,186,167,121,179,134,50,116,2,54,84,0,202,130,194,97,30,199,69,30,133,243,193,75,121,172,117,231,28,219,55,134,117,167,175,225,194,5,100,56,7,198,49,198,234,205,211,231,181,168,134,197,
56,25,14,236,218,228,136,28,215,159,113,122,11,85,84,43,85,26,223,124,194,188,120,54,34,58,161,150,85,223,60,85,214,51,252,48,210,93,184,251,58,242,190,110,249,41,158,8,200,160,63,111,0,251,226,142,140,
253,83,167,222,245,98,100,145,251,6,232,253,244,69,178,234,136,24,177,17,122,130,101,227,180,190,34,150,8,162,91,120,165,249,133,196,43,191,22,48,230,205,222,163,102,184,240,217,232,186,5,99,218,98,58,
94,47,109,165,84,212,44,171,89,207,22,55,26,6,198,239,120,141,187,111,202,141,131,7,5,221,16,141,209,188,174,101,22,171,92,163,129,6,175,112,255,230,188,116,197,225,50,93,181,12,135,161,43,138,151,131,
194,174,20,100,26,106,129,123,19,103,100,176,121,141,191,250,213,37,76,25,19,47,115,179,222,188,23,110,81,0,31,21,6,197,108,225,145,209,197,121,118,6,209,114,163,207,231,192,56,218,58,157,56,244,180,143,
23,142,173,234,7,241,95,234,228,13,249,51,60,183,92,30,163,112,134,215,13,223,179,178,53,255,162,190,104,212,150,239,201,117,193,58,74,170,155,102,120,216,49,196,40,84,76,215,138,10,175,5,111,172,35,135,
167,20,82,125,60,119,43,46,55,50,190,10,248,73,156,108,171,174,195,115,191,182,70,208,7,204,120,183,205,126,114,221,89,190,55,157,11,14,74,143,107,238,96,90,77,130,90,48,230,153,116,22,224,58,123,229,
101,162,149,113,184,37,105,167,249,44,20,97,130,120,110,180,183,122,153,106,178,116,27,36,145,26,52,172,75,90,200,46,43,22,219,102,206,161,194,24,56,230,114,110,152,23,230,94,207,167,114,126,174,186,205,
215,83,107,172,49,163,245,170,91,109,27,55,237,13,238,171,33,38,197,223,196,180,117,227,54,104,116,89,16,10,109,244,21,12,224,232,215,197,208,88,154,96,65,86,10,103,202,213,228,147,157,184,10,109,205,
61,64,50,235,92,163,98,104,215,137,75,88,3,236,167,115,0,144,31,184,104,65,31,45,143,246,73,122,251,233,95,18,229,12,33,140,53,110,87,142,122,253,190,181,76,114,89,82,21,73,187,4,101,94,110,245,27,2,216,
224,201,245,231,150,105,96,121,4,205,16,5,215,192,14,54,186,39,219,249,187,115,171,43,110,105,198,204,208,114,218,59,181,49,181,214,27,17,186,157,221,104,219,154,129,34,244,72,69,174,129,15,181,241,94,
58,167,197,77,68,84,45,142,59,16,69,254,53,141,203,114,88,77,66,136,89,240,162,22,130,53,238,205,45,32,224,36,53,159,163,13,47,36,32,224,157,8,59,219,243,191,170,201,132,176,35,205,87,111,105,113,106,
60,153,196,139,35,123,140,142,83,244,216,23,238,91,191,198,62,86,170,19,26,98,106,167,240,114,253,10,141,40,131,110,238,85,252,36,66,21,144,141,84,43,25,218,126,97,100,16,140,40,27,103,30,11,99,240,196,
32,52,170,203,99,133,188,200,101,114,49,161,238,143,173,139,11,129,193,5,117,148,145,239,202,173,71,222,109,16,104,211,193,49,247,168,83,120,41,28,144,126,119,140,43,57,74,3,63,242,90,230,24,178,113,31,
237,64,223,149,66,198,28,120,51,219,51,52,191,187,90,140,105,219,158,169,114,18,84,194,197,245,67,67,110,152,76,148,128,131,252,199,80,28,87,102,192,52,206,26,223,242,89,26,170,139,227,109,120,9,38,32,
154,151,247,222,14,87,183,182,161,24,130,61,244,27,6,176,21,233,161,239,236,171,47,17,159,212,198,69,219,122,170,50,49,82,9,244,8,253,228,0,68,184,7,20,40,86,22,26,227,56,26,137,180,73,104,39,244,108,
173,58,209,76,178,5,176,242,180,223,154,151,250,82,172,6,234,247,18,154,217,26,71,227,27,46,72,195,81,43,60,234,74,143,43,165,168,148,242,142,152,174,134,82,205,45,59,21,136,71,41,72,180,83,173,149,25,
177,211,48,35,178,110,196,141,51,81,68,219,64,127,99,234,223,41,53,53,239,37,41,131,142,140,115,6,128,183,95,132,79,183,84,107,212,59,111,134,141,126,15,12,127,239,39,110,9,52,40,131,229,52,202,209,184,
143,179,18,64,71,170,144,86,236,113,18,228,175,205,251,227,59,124,58,71,131,218,97,117,49,77,211,97,131,122,106,201,105,185,23,135,54,137,70,182,246,80,182,221,141,222,26,7,144,59,66,189,86,91,50,75,16,
227,30,87,161,1,45,232,40,106,138,45,252,226,245,59,174,107,134,204,126,172,129,181,196,30,252,185,211,40,34,47,247,133,160,156,61,142,110,180,140,199,46,240,236,240,231,218,140,69,125,191,111,115,63,
82,107,172,62,145,222,184,182,89,1,121,161,98,143,227,18,110,82,72,12,161,71,200,72,177,180,138,91,128,207,123,197,201,241,148,8,137,185,185,30,247,200,121,136,188,117,229,185,79,138,253,175,82,79,102,
121,11,69,215,224,175,231,145,141,178,231,88,67,166,136,133,184,74,218,17,168,40,204,24,15,230,21,100,15,121,224,117,235,30,123,66,35,211,166,115,48,20,59,212,199,118,124,64,107,16,23,211,50,140,125,3,
131,12,237,195,125,243,2,58,166,0,159,216,209,54,13,239,168,211,38,61,196,235,50,9,125,76,6,49,203,247,144,35,33,20,106,249,169,117,182,227,107,75,135,63,105,23,46,77,113,159,245,151,148,169,197,245,44,
64,65,18,200,5,96,255,85,85,105,11,96,226,20,159,213,221,245,4,112,107,35,162,219,20,114,141,78,180,111,230,243,14,160,221,225,51,55,17,220,60,20,23,43,109,181,71,206,247,58,83,198,115,175,182,158,157,
230,157,184,9,219,206,38,115,223,237,30,204,3,68,135,19,67,194,140,206,75,84,125,86,20,198,116,40,138,105,106,149,65,108,56,108,70,171,52,51,93,145,1,241,139,107,206,179,123,103,189,66,130,139,160,182,
184,78,99,227,106,253,101,212,157,167,179,135,203,125,74,42,203,107,172,2,144,38,183,101,105,84,202,40,82,168,43,5,188,235,200,244,54,202,56,168,107,165,180,177,44,114,88,74,240,157,237,114,72,23,12,52,
71,216,3,55,232,131,86,64,63,148,249,29,125,197,174,26,208,129,112,78,7,225,238,124,241,163,140,227,158,152,152,161,130,90,113,78,138,145,15,224,55,146,211,76,54,216,168,68,198,45,187,207,122,96,226,243,
199,76,113,222,120,5,176,108,71,114,39,59,82,105,176,83,99,232,15,189,134,180,140,231,73,247,137,100,74,218,181,111,174,24,231,116,216,36,24,148,147,76,237,224,231,102,106,122,146,186,180,99,221,211,131,
127,44,249,93,136,252,77,207,208,238,35,108,227,251,161,221,220,195,123,31,233,203,225,168,199,120,56,61,61,20,1,68,20,153,231,44,159,82,224,126,21,156,5,97,130,121,49,144,129,141,140,58,95,79,163,22,
48,97,104,64,227,65,51,155,88,187,180,237,218,157,127,241,133,26,17,239,108,44,180,146,53,79,247,150,249,20,129,237,136,117,154,106,233,14,135,82,0,72,219,187,98,205,220,199,107,229,64,113,31,35,5,204,
184,162,114,53,159,145,220,69,242,192,247,85,123,20,53,133,131,191,103,145,102,102,84,148,33,138,248,197,239,82,113,139,250,134,80,209,243,166,32,115,186,34,218,88,111,101,168,163,113,210,116,249,140,
201,60,228,134,180,123,251,108,126,67,45,111,60,163,29,189,136,156,248,57,8,155,12,37,215,150,74,81,5,56,227,198,245,191,149,216,48,63,96,122,128,230,61,67,142,92,72,62,23,76,254,201,151,71,78,80,222,
109,246,122,117,58,175,65,221,122,177,240,206,89,2,79,175,206,211,163,15,165,63,238,33,208,94,61,220,54,101,142,83,90,89,172,232,43,223,97,228,67,155,147,81,111,249,140,90,197,147,30,153,11,24,47,118,
241,187,13,225,90,220,175,71,72,180,254,120,99,228,86,70,74,158,13,41,155,111,86,252,234,78,22,133,189,254,179,26,174,230,190,226,143,7,77,25,122,172,55,21,113,19,119,153,127,95,166,169,122,218,81,29,
172,27,65,230,36,172,140,62,43,121,165,244,119,29,136,97,15,2,250,89,123,37,95,216,175,149,193,85,180,144,159,8,119,159,91,77,203,71,183,173,188,94,171,204,251,209,202,96,175,156,185,190,30,226,126,53,
40,108,69,86,148,66,243,226,36,114,112,152,167,214,111,86,160,137,117,152,62,240,157,249,26,91,58,67,76,172,218,128,76,245,230,237,148,251,235,68,252,43,67,80,225,28,216,158,93,252,147,248,168,204,34,
213,211,215,252,168,218,168,209,60,67,184,143,85,97,148,213,233,220,45,160,142,191,107,196,248,73,88,49,0,0,32,0,73,68,65,84,59,202,21,14,181,80,94,229,44,133,254,58,242,154,75,105,214,216,178,5,7,3,19,
41,86,201,118,43,214,211,173,83,9,68,224,13,81,108,254,44,143,2,49,123,53,165,57,39,99,34,244,230,12,31,7,82,138,129,223,105,29,25,189,72,193,43,199,202,227,235,156,168,127,179,213,124,111,189,77,123,
34,166,238,4,96,223,144,170,229,119,154,241,216,24,251,222,204,62,181,50,223,4,238,251,220,177,42,121,66,57,83,83,171,198,149,13,74,52,230,157,55,166,211,219,70,26,42,118,144,252,61,79,79,215,239,247,
180,132,43,99,224,49,43,199,147,91,76,121,176,237,154,105,133,178,130,102,122,150,253,143,100,37,234,103,228,16,117,186,254,110,176,158,67,74,68,144,10,213,83,41,145,49,183,232,189,162,116,233,232,241,
109,174,35,36,98,182,123,218,28,43,233,168,53,114,8,88,136,19,222,39,178,118,243,81,181,2,1,105,189,240,104,123,26,1,164,220,35,99,141,223,163,56,3,84,2,26,104,250,84,207,165,247,166,184,135,54,59,165,
44,67,60,72,173,216,78,219,189,249,250,214,99,113,47,124,185,167,33,5,84,200,254,124,6,114,165,104,154,121,132,73,77,145,63,249,142,42,172,141,49,149,76,146,213,82,203,84,41,87,52,166,202,128,57,136,180,
177,233,83,179,131,21,40,134,110,178,173,42,228,81,240,166,222,70,56,190,127,43,182,51,37,111,235,226,136,216,191,189,221,255,70,157,6,145,213,44,99,21,219,219,71,188,122,157,211,220,188,97,111,121,229,
206,145,138,141,189,222,243,180,14,64,165,123,86,62,236,95,111,72,186,59,162,226,79,139,151,103,152,151,72,180,100,138,248,142,253,227,114,236,35,227,168,80,19,235,178,3,81,105,140,248,26,107,163,4,224,
183,126,143,229,168,243,129,252,232,121,199,186,86,122,107,232,46,181,98,31,31,16,82,159,170,100,219,155,73,47,134,134,184,198,105,75,98,201,181,240,235,91,45,208,222,5,150,27,163,14,91,129,108,238,130,
217,168,15,144,34,62,205,234,190,34,243,30,145,183,27,244,219,234,213,175,184,52,246,177,103,41,2,140,212,221,65,184,86,132,209,213,234,34,164,77,120,167,131,208,32,98,151,18,152,227,5,207,46,162,107,
77,136,184,83,109,105,132,208,202,112,211,211,0,235,144,15,109,89,98,151,26,224,110,247,212,119,127,211,135,226,45,128,96,249,151,226,150,11,220,205,172,97,103,23,93,227,177,103,214,5,6,20,12,187,21,3,
167,141,243,170,225,202,254,130,29,171,27,28,173,72,153,239,72,32,143,64,212,85,166,105,135,134,49,88,167,192,151,249,205,16,116,38,208,12,40,28,74,77,22,211,206,247,154,51,13,182,255,86,27,86,51,242,
243,27,43,250,10,35,195,105,223,137,181,26,158,113,174,144,42,247,180,115,166,53,25,175,29,53,34,60,51,147,30,174,190,86,230,105,15,235,248,218,43,139,137,177,199,43,41,130,172,174,117,50,106,193,177,
159,156,138,86,28,84,245,203,133,41,80,146,129,43,86,6,62,253,47,79,144,11,126,88,106,120,70,136,88,153,246,64,165,205,13,160,255,98,108,72,36,13,49,220,58,72,221,217,24,252,150,195,76,117,197,61,116,
229,183,239,248,184,154,34,238,101,171,116,187,50,250,58,0,62,27,20,126,59,41,211,227,235,19,104,153,167,194,124,96,59,119,113,221,39,201,142,215,73,179,252,139,6,44,230,243,202,154,167,97,216,135,238,
4,131,137,20,155,31,249,200,181,242,67,110,99,83,86,222,147,25,193,124,116,111,240,220,224,62,244,143,221,239,190,124,205,177,127,142,164,148,122,183,106,67,43,31,101,6,247,37,181,193,255,72,185,177,145,
236,159,28,133,50,62,255,223,171,49,78,252,247,222,244,108,1,187,8,170,164,136,43,118,34,152,3,123,223,114,31,241,105,71,96,150,245,200,146,221,9,61,51,222,121,178,189,103,247,45,30,57,59,115,141,120,
180,109,48,19,99,69,218,182,34,247,116,240,203,178,17,233,7,177,202,29,94,109,134,212,34,227,126,10,66,132,194,235,137,54,170,43,94,153,131,249,164,130,137,82,12,98,37,51,222,65,183,149,141,100,8,157,
45,29,116,94,148,187,139,250,162,241,206,89,43,126,243,33,15,247,230,30,186,97,41,168,150,105,92,223,1,245,24,90,180,15,80,47,70,229,1,186,176,3,121,207,156,128,213,82,106,173,142,175,59,80,235,181,79,
147,140,174,188,131,155,51,151,208,116,25,94,205,211,88,144,215,226,137,250,128,10,55,139,68,148,240,143,149,213,87,215,53,49,74,13,148,226,23,67,54,109,175,232,216,42,117,203,51,241,193,136,71,103,72,
225,12,94,161,145,73,13,94,13,59,137,230,201,168,158,205,81,226,24,95,181,106,208,178,200,235,94,39,83,200,234,126,164,130,51,69,159,137,55,227,195,81,66,3,144,65,54,126,104,234,184,14,231,5,216,229,195,
17,246,6,144,103,192,186,23,255,43,170,87,72,151,147,216,179,76,213,10,204,25,149,199,146,193,188,51,14,134,156,142,5,237,126,50,15,149,238,195,76,183,235,123,235,245,152,83,97,13,67,198,236,12,249,252,
143,150,133,20,218,248,51,26,91,85,219,141,221,52,122,173,247,7,234,217,128,82,83,31,221,1,114,172,27,121,205,103,107,228,61,211,210,192,14,38,115,144,180,47,101,28,138,83,192,26,85,221,67,100,57,245,
40,213,62,210,28,194,232,123,140,172,237,5,157,126,247,154,157,33,80,16,169,189,243,194,25,244,194,50,175,79,46,82,10,123,205,235,63,91,204,17,46,79,233,177,193,66,67,37,101,235,147,122,229,41,115,86,
133,145,175,149,140,50,12,188,228,45,208,190,59,46,102,165,213,112,250,213,64,87,209,161,158,186,55,251,243,213,10,164,235,151,82,199,47,162,243,47,209,49,253,227,104,118,50,139,172,163,2,169,166,102,
51,152,119,141,172,229,65,113,232,203,149,35,198,189,139,140,72,246,189,247,133,175,17,175,18,63,254,222,138,231,39,146,195,70,255,185,92,225,203,120,98,156,189,78,196,195,174,70,81,243,97,249,194,249,
199,67,160,188,17,209,160,118,128,165,149,151,188,227,136,142,106,205,14,12,51,25,13,232,104,242,218,94,224,113,227,235,200,8,26,238,107,41,234,65,127,117,154,93,174,57,90,88,24,40,114,75,94,87,161,28,
18,211,153,236,189,42,220,59,8,103,81,84,107,255,182,60,162,121,51,121,108,45,90,22,107,63,196,158,50,183,131,170,250,155,189,50,214,50,156,197,129,196,3,124,234,83,239,239,249,83,217,219,227,114,190,
160,70,165,30,45,26,191,250,242,90,132,210,137,187,36,110,170,3,62,243,141,171,69,68,223,236,176,3,115,255,3,103,36,99,147,141,84,17,215,146,128,195,12,252,177,70,102,13,171,128,61,150,161,21,175,114,
124,172,98,212,71,54,174,251,102,85,177,12,49,83,222,165,177,18,107,247,127,49,30,237,89,140,215,39,30,85,234,101,147,142,29,255,86,138,185,239,199,84,237,101,218,214,168,55,84,180,105,251,155,25,164,
200,65,136,140,95,230,0,175,174,163,250,17,205,12,191,170,31,138,22,220,223,211,34,44,215,221,8,90,97,198,45,170,201,79,149,115,96,92,11,214,149,106,141,160,34,44,112,205,107,158,217,5,174,109,149,41,
119,106,220,240,191,195,133,251,203,173,130,195,109,249,149,182,98,224,20,25,51,236,119,45,46,112,11,29,204,192,99,84,123,231,17,244,62,221,61,221,222,137,207,95,65,36,252,169,160,205,155,226,213,175,
126,137,19,234,37,210,82,202,72,121,240,255,81,155,24,108,208,198,143,135,234,77,220,195,126,222,171,4,180,95,117,156,57,219,134,213,43,97,151,28,178,0,45,52,131,159,129,249,56,67,69,28,84,103,238,55,
78,35,17,226,87,90,19,62,107,5,73,47,197,62,10,146,224,5,181,99,202,173,41,99,67,53,149,154,85,101,1,53,54,248,69,16,45,80,222,13,187,59,63,112,125,31,162,15,117,230,70,95,25,134,126,236,151,160,75,221,
241,244,15,96,196,124,224,232,244,158,78,39,108,174,129,10,109,162,89,68,71,2,7,133,239,251,52,115,12,254,238,116,52,236,108,86,135,117,246,196,227,219,95,119,220,211,57,74,214,98,225,8,33,23,76,207,202,
83,84,127,242,173,184,244,114,220,251,171,251,87,93,75,230,86,41,3,63,198,211,193,244,242,100,222,109,219,13,36,167,255,198,243,193,37,22,147,168,163,196,97,119,72,86,78,147,66,249,191,206,234,48,182,
77,154,27,158,145,90,88,206,2,230,42,220,75,12,50,175,14,83,88,215,171,195,145,174,177,126,93,67,27,7,183,189,157,34,30,23,120,130,148,59,11,153,2,171,224,83,50,145,30,166,17,118,251,235,102,164,153,214,
166,58,106,48,79,195,176,191,255,8,219,216,95,14,58,87,233,211,54,109,182,75,125,210,186,93,216,144,37,124,225,64,41,208,95,229,113,195,215,90,250,57,97,187,170,123,95,200,142,0,46,84,34,141,60,89,189,
64,180,170,10,250,83,172,68,161,67,210,75,42,92,143,104,166,21,115,61,171,208,224,176,190,85,214,194,40,22,49,9,40,84,227,165,230,56,0,23,130,86,138,61,157,89,225,62,106,52,28,83,156,184,26,180,239,31,
204,91,102,192,148,59,245,42,247,198,198,150,87,228,39,53,111,108,132,122,174,1,65,243,225,85,116,131,218,118,129,52,195,59,114,143,14,43,75,18,226,87,19,143,245,53,103,189,212,142,87,231,179,59,57,86,
218,173,217,70,243,135,60,136,197,106,100,183,235,9,178,192,227,187,17,10,219,166,163,103,54,240,251,104,62,11,124,246,105,94,219,147,8,126,132,162,53,62,234,182,151,209,50,226,141,141,26,117,63,80,100,
230,220,141,21,145,23,202,74,186,140,120,148,12,134,55,215,186,235,133,163,149,39,82,238,202,128,171,136,221,195,171,69,112,40,206,11,115,222,45,148,20,171,72,51,70,240,153,63,214,163,230,121,192,65,131,
148,158,156,50,32,207,74,220,244,167,223,191,55,1,13,8,100,175,18,140,176,71,233,34,165,114,50,46,28,109,212,79,117,226,236,41,221,126,195,71,53,101,80,54,251,82,252,121,57,68,102,112,107,111,101,15,43,
41,176,49,169,69,175,185,241,247,120,121,191,254,6,14,102,220,112,13,174,223,240,221,106,30,40,87,189,104,211,1,96,222,70,58,201,174,27,199,4,158,226,231,147,148,216,188,245,40,174,203,101,155,101,215,
94,234,136,81,209,110,192,90,232,166,170,145,225,64,197,140,188,233,97,157,235,117,180,110,60,144,60,95,141,174,180,4,52,115,63,54,48,44,109,81,205,10,127,109,41,214,197,151,15,91,103,66,97,123,141,231,
213,198,144,4,175,189,207,37,118,175,175,175,114,205,23,63,190,137,78,100,166,142,81,1,133,78,254,171,130,119,181,172,226,92,45,161,212,144,55,173,31,1,189,209,125,30,179,118,49,35,194,72,47,226,105,5,
39,169,118,83,231,166,49,199,45,97,117,152,124,253,30,247,41,60,127,98,19,146,74,130,65,162,239,95,24,106,113,105,116,217,239,234,203,123,71,52,230,13,152,186,13,132,107,175,233,46,188,14,49,172,77,240,
182,145,230,97,95,224,124,217,16,86,26,154,48,207,100,87,239,146,141,190,87,143,60,205,155,19,83,189,150,124,171,35,43,221,13,137,218,143,85,252,227,181,82,171,81,123,197,90,25,148,163,22,87,185,49,130,
182,75,37,186,102,96,255,146,25,43,101,42,110,201,121,17,203,167,77,227,61,24,235,117,65,161,35,211,181,92,139,140,152,235,101,153,29,109,192,4,103,13,134,131,210,13,76,177,13,187,65,50,231,82,192,139,
68,156,253,125,7,189,12,141,153,233,127,129,62,195,60,73,103,64,225,16,139,199,244,151,37,13,127,119,154,38,19,156,163,137,155,250,55,234,131,86,198,185,27,195,215,96,124,97,62,145,236,56,223,1,243,142,
188,99,243,72,222,50,43,38,157,77,155,175,67,113,84,181,109,203,88,175,161,91,63,12,50,58,165,52,109,81,24,208,93,177,81,39,8,158,186,253,88,166,229,163,27,225,24,173,112,205,160,106,67,101,75,80,219,
209,184,20,157,184,133,156,153,23,203,224,202,207,124,174,74,117,177,60,102,18,203,75,177,227,230,148,56,73,14,250,215,158,23,117,15,138,65,208,135,131,208,215,147,112,34,238,192,206,75,4,180,12,245,5,
92,70,87,140,94,214,50,94,212,109,147,228,100,131,228,4,195,175,126,245,211,35,189,174,137,50,132,50,121,5,21,144,116,28,194,88,71,251,151,126,218,219,153,2,181,73,92,122,221,198,119,88,42,26,244,194,
183,176,131,163,235,138,213,212,232,115,18,179,157,200,218,132,33,13,220,151,243,40,70,176,65,165,10,149,71,20,215,175,81,33,82,221,241,189,216,246,253,123,195,207,136,151,171,77,43,197,159,79,112,29,
185,234,95,29,37,91,55,23,68,212,28,141,4,56,27,188,157,213,171,214,82,92,52,220,136,199,75,70,103,223,251,152,17,15,230,154,38,170,194,231,16,196,174,112,154,229,169,143,83,4,168,138,163,106,74,54,165,
2,105,84,133,115,105,49,31,202,241,142,192,175,178,82,76,6,138,76,70,51,3,130,124,204,239,173,127,143,88,28,12,121,253,146,249,55,165,20,227,175,242,189,29,24,205,223,248,85,181,158,205,193,99,74,47,157,
186,203,211,20,144,127,214,211,3,152,19,117,202,229,198,96,131,17,87,39,218,141,49,107,190,109,27,85,86,244,53,48,125,52,234,179,95,119,39,196,62,198,118,252,186,191,235,239,240,98,155,120,133,42,177,
199,198,206,46,203,126,210,178,12,1,49,122,163,235,46,80,36,115,177,162,63,204,44,76,38,248,119,164,9,9,176,234,231,107,188,26,17,132,33,114,11,213,181,154,245,222,46,214,121,109,212,235,127,57,51,1,28,
186,113,64,23,22,41,54,170,107,122,67,204,96,221,208,64,88,70,244,119,100,100,245,169,240,58,239,89,148,171,101,207,209,228,224,171,27,99,48,98,204,127,41,211,152,185,58,162,188,27,69,195,99,179,215,188,
126,149,16,97,132,204,140,185,177,104,179,138,193,209,239,213,201,3,243,142,253,140,240,43,195,139,253,227,118,74,224,221,53,75,101,79,159,247,191,182,207,234,76,250,106,237,112,189,188,45,140,207,120,
6,57,198,108,247,235,113,245,52,162,23,204,157,241,17,52,29,53,236,21,46,178,55,194,173,198,5,95,243,122,255,173,112,168,23,139,11,130,115,180,254,102,242,98,25,150,234,181,218,188,88,36,142,189,33,143,
78,190,15,89,38,163,111,49,178,6,218,48,198,125,226,137,7,164,241,46,12,99,158,32,11,245,45,14,175,97,114,222,102,121,86,215,192,204,16,218,177,182,144,56,41,16,116,8,152,87,219,232,85,179,149,254,86,
177,0,34,131,95,237,3,89,189,99,109,252,93,163,67,222,106,177,221,81,182,106,133,115,246,200,26,117,191,51,58,91,120,195,143,234,168,209,127,104,209,212,192,76,14,122,38,196,208,230,201,247,77,245,255,
66,117,248,187,215,165,57,168,233,97,143,139,105,177,250,96,60,56,113,241,208,120,26,60,241,25,127,104,220,185,157,26,51,101,72,209,193,136,214,17,242,193,170,137,5,84,169,86,30,35,181,40,225,166,205,
39,177,73,109,132,190,203,247,90,209,213,162,135,87,13,75,105,101,100,222,94,132,160,85,176,191,57,19,40,126,192,173,1,183,43,8,171,98,111,149,88,113,127,144,54,251,146,68,72,182,139,160,159,108,191,103,
204,33,85,223,187,151,173,219,77,248,199,183,194,129,86,215,189,142,50,172,182,61,219,55,21,188,138,128,109,217,198,210,65,126,2,88,208,125,125,191,255,218,62,99,204,185,51,130,99,107,60,122,25,68,120,
52,164,70,39,45,88,68,163,244,178,161,211,231,173,236,61,9,14,95,188,241,220,251,6,232,73,15,175,173,212,224,199,100,218,52,76,142,255,122,13,200,171,65,107,32,87,202,217,139,58,78,220,42,29,234,216,34,
136,148,195,140,124,248,199,55,52,38,75,139,34,119,104,105,223,73,135,243,54,235,178,170,70,76,253,91,163,54,99,76,21,83,174,172,149,240,33,215,12,135,90,126,145,97,142,240,242,178,85,109,107,137,39,134,
239,43,60,145,192,68,198,24,239,49,127,138,87,225,200,152,32,36,27,51,32,194,217,160,215,53,175,50,59,200,86,198,155,24,170,89,182,26,134,19,205,231,140,241,117,186,59,197,97,196,44,182,84,198,241,8,230,
209,190,34,53,223,198,115,58,151,117,232,32,213,92,187,172,63,19,223,29,99,14,120,186,142,7,153,107,244,61,6,22,254,90,254,73,72,137,107,101,138,84,155,106,152,229,107,78,129,27,227,122,161,103,227,30,
27,178,140,31,141,99,120,106,80,222,186,114,59,18,109,164,1,6,51,49,234,163,126,200,231,52,169,3,234,228,217,41,157,4,111,43,165,84,216,36,234,130,34,199,20,22,28,10,55,154,11,252,241,77,52,109,88,99,
112,159,41,95,94,216,163,188,79,254,245,29,93,234,90,7,118,70,185,3,145,94,6,46,12,43,12,153,77,153,229,145,209,85,206,192,188,86,174,31,59,48,17,79,117,224,229,135,198,16,47,56,117,134,59,142,220,108,
239,217,176,40,142,199,220,147,129,122,41,166,228,23,248,134,38,245,188,217,237,9,49,66,76,203,149,195,157,192,160,166,188,133,142,134,88,124,134,63,28,187,106,230,193,143,37,214,69,3,61,219,57,166,73,
46,118,76,137,146,219,83,13,55,244,82,189,90,143,206,76,195,219,111,25,2,151,163,51,214,134,113,28,187,70,121,93,71,61,198,66,84,17,205,77,174,5,55,62,225,156,198,46,65,54,190,163,171,183,31,85,163,181,
150,155,139,5,76,60,96,208,119,68,68,185,203,145,136,145,74,1,67,98,88,81,70,29,41,94,101,179,195,90,249,28,27,99,176,29,157,206,45,60,200,65,247,82,175,189,132,157,168,95,143,58,41,137,38,84,234,38,155,
211,252,130,218,230,113,86,99,143,30,241,52,211,78,157,207,170,94,65,13,229,220,46,53,53,50,25,158,6,226,235,29,28,231,146,10,50,103,157,128,70,227,123,103,230,184,205,194,4,45,87,10,171,236,200,25,80,
229,209,53,210,205,234,232,50,107,88,230,124,77,55,44,122,42,189,140,251,5,90,105,138,19,35,115,108,35,80,43,49,42,235,97,121,97,206,84,255,120,204,181,11,162,93,185,206,183,25,37,33,110,17,207,60,134,
253,187,55,230,222,120,40,89,179,115,196,220,158,201,94,68,35,3,51,202,70,105,152,130,34,207,77,80,179,254,173,149,82,254,8,179,109,100,139,153,174,179,230,120,43,236,198,214,166,167,63,157,187,183,223,
63,130,60,92,215,55,177,140,171,225,164,92,252,141,243,164,41,175,104,119,251,247,134,6,125,37,38,172,74,86,117,129,217,82,92,84,40,13,120,179,151,166,63,145,242,223,52,234,70,205,144,70,222,75,241,239,
65,187,16,246,199,217,50,163,158,25,134,161,32,70,58,203,58,71,99,58,106,140,203,174,179,107,1,245,53,88,113,181,8,1,234,11,179,82,193,104,50,163,113,175,102,167,144,77,15,252,42,233,169,121,110,194,140,
35,59,124,32,203,64,43,120,82,186,93,157,193,167,164,248,106,185,86,114,182,98,127,68,220,231,81,185,187,252,17,239,157,250,74,22,236,156,234,215,120,106,124,62,82,172,116,207,182,243,106,28,37,7,249,
67,99,168,48,88,119,97,184,227,131,127,109,200,61,166,72,14,172,161,182,63,41,84,161,142,213,58,205,124,50,30,230,219,242,195,215,145,211,18,67,180,246,119,64,57,71,238,198,181,88,199,24,188,44,171,68,
192,125,224,49,83,142,97,19,101,136,119,208,188,202,183,141,40,243,118,25,203,46,40,209,111,113,164,216,161,205,59,198,156,179,215,47,157,12,232,183,149,133,173,148,164,220,185,81,21,159,253,94,204,197,
42,42,71,236,189,121,180,159,240,78,90,98,208,96,154,157,115,67,227,174,202,7,100,23,179,89,132,190,154,175,87,116,171,95,247,57,102,226,18,6,181,13,26,59,11,221,196,174,212,95,177,83,43,138,213,194,156,
165,202,17,236,42,219,202,81,181,183,181,231,31,106,73,84,46,151,194,54,157,7,83,129,14,38,58,53,151,224,237,24,252,149,100,212,224,58,106,203,171,39,154,21,92,125,140,115,85,166,100,65,213,193,178,213,
10,143,148,50,66,44,227,77,226,220,229,177,99,96,126,60,21,252,100,199,2,241,225,155,8,153,195,24,127,4,171,113,136,250,236,215,146,114,74,214,114,149,57,18,3,183,59,37,22,48,116,17,116,198,150,244,52,
135,216,59,135,240,100,63,47,197,214,74,127,148,171,105,5,183,66,76,11,7,249,223,123,128,150,80,182,121,46,233,253,31,97,209,246,108,12,119,219,145,55,95,227,143,168,165,200,67,227,157,229,227,197,210,
9,156,48,220,156,85,149,58,249,13,112,81,40,185,244,243,128,156,163,126,78,8,102,42,122,13,33,131,94,124,83,157,42,44,232,8,237,226,30,107,164,231,180,27,212,104,176,126,186,39,59,153,177,211,223,58,87,
205,208,152,102,81,237,83,178,217,152,170,182,111,173,12,89,88,105,181,168,163,106,32,107,243,91,120,83,19,13,156,227,204,125,107,99,222,26,252,27,227,67,179,193,236,158,0,178,188,227,0,84,250,175,238,
103,248,51,122,171,62,237,27,236,156,47,118,90,240,58,186,167,248,58,29,243,200,192,241,255,12,50,99,185,114,4,87,243,217,241,71,243,179,162,209,229,117,124,111,13,78,150,195,189,17,85,217,229,159,34,
230,14,192,122,141,36,163,82,35,51,215,13,214,121,163,177,175,246,180,1,158,235,71,8,217,174,128,155,204,209,201,19,53,242,254,131,7,225,240,97,128,81,190,228,35,190,123,16,161,175,202,35,95,121,186,71,
67,72,171,239,148,1,154,37,179,85,35,188,154,83,48,115,76,248,252,158,253,77,26,13,126,121,167,134,199,111,38,221,178,26,101,74,187,143,63,48,150,155,78,15,207,206,88,124,252,214,173,10,53,250,62,62,120,
236,136,8,157,37,107,224,49,22,199,215,103,50,71,179,214,140,188,174,50,122,151,181,27,77,228,105,167,227,44,95,165,190,178,50,83,59,1,87,23,226,107,144,255,87,236,35,129,47,124,224,16,184,7,73,75,161,
221,13,55,159,155,211,182,52,22,171,178,168,125,100,228,86,134,67,181,101,253,201,198,121,186,122,179,189,208,185,70,188,20,62,214,60,217,125,197,55,130,162,157,225,136,28,147,172,76,221,95,205,199,174,
56,207,111,117,42,75,168,208,207,177,12,164,13,218,212,226,222,60,76,24,167,83,143,237,66,176,167,17,94,37,224,96,20,171,239,43,94,116,214,209,121,8,140,39,203,145,33,112,85,224,173,201,59,81,185,161,
121,233,243,55,205,249,235,47,143,65,195,187,247,97,211,160,51,176,249,81,230,200,139,227,206,161,56,174,219,207,98,184,136,109,201,151,94,14,209,201,123,93,182,171,106,53,52,116,189,22,39,223,213,232,
121,179,55,79,20,183,82,174,180,12,28,120,3,3,143,6,95,225,215,60,204,90,175,181,84,11,254,62,47,122,210,221,121,224,76,11,106,104,205,191,86,230,184,175,27,248,243,158,79,48,244,124,46,34,58,96,105,22,
120,123,41,27,52,208,149,235,151,98,16,217,215,4,188,162,159,153,222,215,68,27,40,89,211,35,16,242,110,228,45,31,181,224,7,80,145,6,109,224,21,101,167,176,107,148,178,242,200,161,200,28,141,157,246,17,
253,213,253,21,236,58,64,95,5,210,33,81,58,195,165,202,235,52,126,163,220,174,101,101,200,67,239,73,234,200,76,175,226,201,252,70,253,104,158,37,229,49,245,110,14,53,176,247,56,154,41,0,157,83,59,193,
190,254,222,180,148,61,64,123,39,221,174,130,216,113,32,174,204,105,206,209,231,180,111,26,244,82,180,201,137,24,16,218,29,107,52,251,57,244,24,42,79,212,149,161,198,218,27,104,52,118,235,69,251,132,122,
156,202,123,23,83,212,19,43,230,115,127,125,248,11,64,195,101,31,22,184,61,253,254,92,120,25,58,163,212,215,190,126,56,126,164,12,204,34,173,214,88,57,7,34,248,22,113,108,14,56,161,114,43,125,188,129,
119,97,1,89,209,153,190,240,96,145,51,208,63,13,142,213,198,87,164,19,33,215,102,69,188,65,187,201,168,119,148,16,239,229,30,225,43,85,75,41,246,68,16,182,156,120,205,3,83,205,255,34,161,173,61,65,185,
209,108,156,42,149,49,68,247,158,89,125,231,176,67,55,51,113,120,31,193,24,183,58,199,186,183,120,77,117,104,85,175,5,206,142,99,179,130,163,8,178,252,147,92,79,135,210,207,218,235,74,45,0,219,83,150,
44,200,234,251,234,195,193,157,178,215,205,255,206,222,123,4,125,9,12,31,186,149,208,8,239,88,48,247,67,45,111,165,219,65,195,193,96,53,26,218,61,203,234,181,121,107,183,13,122,164,82,140,139,85,204,20,
215,169,239,34,79,132,203,187,64,84,184,30,229,247,24,159,28,183,57,249,184,30,92,157,46,21,15,169,149,221,223,82,223,2,208,146,56,174,67,48,104,253,181,234,155,102,104,39,178,174,123,234,76,189,151,66,
8,112,130,202,180,37,130,200,75,151,241,36,162,97,49,148,139,151,175,215,167,30,65,225,8,208,252,190,228,112,242,234,15,8,22,59,229,123,254,197,172,107,218,183,188,61,105,65,116,54,29,91,225,132,93,26,
12,156,138,241,56,208,24,58,88,84,166,79,221,117,104,208,246,42,49,158,2,184,95,117,94,100,191,76,229,174,43,58,12,5,58,219,72,62,173,249,231,152,15,205,75,12,118,240,172,59,4,251,179,195,176,198,102,
217,73,37,56,185,125,172,157,227,100,152,155,30,101,107,19,215,52,120,108,16,97,140,46,13,63,30,137,69,235,168,60,169,34,202,2,181,60,186,110,26,249,25,172,65,57,162,230,25,66,116,67,55,25,20,175,206,
215,214,127,69,162,141,168,122,109,204,8,205,100,114,208,172,157,187,26,27,225,19,58,47,90,167,45,52,53,182,101,165,196,54,113,7,31,182,59,52,232,171,101,196,247,108,39,74,33,163,44,214,80,116,96,32,107,
163,121,140,23,41,42,38,227,252,214,73,195,15,108,182,232,247,97,236,195,28,24,246,104,212,103,212,111,31,3,27,193,216,168,103,61,101,124,20,92,225,151,180,232,239,220,54,174,215,2,170,166,177,87,193,
128,24,189,246,62,214,244,222,195,222,6,159,83,157,229,239,237,99,253,175,116,35,62,249,179,47,93,233,140,65,5,2,211,31,167,205,138,158,52,85,198,98,165,38,35,242,140,70,29,156,108,224,207,213,11,232,
54,107,252,173,242,85,139,180,223,66,19,233,171,55,230,133,11,80,8,74,187,156,197,107,237,58,141,55,5,203,204,62,240,58,248,232,235,24,6,195,218,173,153,8,30,162,103,156,25,219,77,211,113,22,100,195,255,
69,19,199,14,55,168,113,220,160,139,110,132,205,128,118,61,65,100,139,184,22,34,226,15,90,181,50,67,194,58,207,132,36,96,123,217,203,200,201,187,238,161,159,110,88,131,140,89,197,206,211,58,60,2,177,150,
240,125,0,205,204,197,33,106,200,168,190,163,107,38,190,215,167,50,228,123,219,201,101,171,210,161,65,231,105,61,111,27,237,149,35,100,54,142,117,151,175,26,105,45,205,18,138,21,103,182,134,190,110,57,
79,39,208,61,237,169,96,214,200,87,163,141,134,125,10,113,29,157,232,58,200,173,161,55,250,196,203,112,166,202,174,69,107,59,89,10,222,69,49,18,70,177,175,125,190,165,236,231,4,175,96,166,250,104,174,
166,106,109,123,38,213,57,41,251,106,111,94,53,140,115,37,232,217,254,92,202,189,207,151,98,106,37,0,74,227,150,226,7,141,112,114,150,74,70,124,96,17,140,147,120,85,97,153,50,10,157,61,186,136,183,218,
172,1,70,186,72,144,249,64,190,251,199,37,83,198,193,8,233,22,23,156,59,217,24,206,125,11,162,204,139,168,160,225,178,36,208,151,86,138,220,6,218,153,63,183,149,85,140,91,1,12,24,41,179,12,92,159,153,
10,168,230,47,99,0,1,7,254,245,218,66,197,218,249,154,122,235,22,180,217,103,28,239,149,121,218,181,94,79,25,242,82,64,63,211,224,240,58,121,103,239,188,227,184,145,114,191,107,204,225,91,43,65,20,108,
235,116,8,29,128,133,189,222,225,170,11,132,209,95,93,88,128,199,23,207,111,18,4,186,165,188,8,180,43,13,33,21,250,49,94,235,145,204,151,211,20,187,240,72,73,168,71,60,207,5,186,13,197,87,74,25,41,250,
82,202,200,66,140,72,136,59,170,148,25,235,115,50,14,104,35,192,31,23,134,127,221,139,93,187,233,161,9,17,84,47,86,241,4,90,153,167,249,71,187,161,164,96,188,2,190,70,223,217,24,43,35,80,138,224,147,190,
87,85,40,202,88,113,15,203,254,186,118,190,105,102,180,128,87,119,56,168,81,125,116,0,157,97,77,248,14,38,117,164,120,35,67,90,166,46,136,28,50,71,174,247,161,145,179,35,120,241,206,129,69,106,118,164,
208,120,181,89,33,148,51,37,0,7,128,108,243,139,120,66,97,196,123,181,12,37,255,234,135,117,124,79,35,103,166,77,34,231,126,212,36,122,188,237,150,229,90,25,170,37,130,102,46,241,172,19,50,245,174,243,
208,113,127,193,161,56,101,61,124,93,101,176,179,52,60,46,0,51,40,168,4,36,228,70,24,5,5,133,196,244,200,120,80,247,127,196,133,161,239,35,183,6,198,247,73,192,174,11,197,53,102,73,12,209,142,128,41,125,
107,219,79,101,96,126,139,122,204,95,151,112,203,167,91,164,10,218,212,239,166,152,140,1,243,198,124,42,35,151,233,172,168,252,84,97,88,99,238,86,135,40,11,198,185,189,168,215,174,224,27,114,99,107,91,
133,60,51,42,125,45,57,49,136,28,45,92,175,120,63,26,232,72,13,116,101,166,214,125,230,24,48,126,117,159,129,132,213,26,71,79,115,60,197,145,160,66,124,6,119,98,79,241,16,152,187,77,22,147,76,233,81,119,
61,199,62,26,111,238,174,144,187,62,71,43,1,103,99,126,149,161,179,125,23,212,212,247,139,170,42,36,56,54,212,202,92,75,165,188,103,204,129,30,167,214,81,199,61,97,204,251,231,67,143,173,25,244,226,26,
63,171,51,224,188,79,46,177,170,58,219,206,83,110,212,7,244,232,163,27,11,65,243,169,212,123,231,202,24,216,7,15,204,205,159,230,155,10,164,147,51,186,86,89,149,77,242,187,130,216,124,71,39,47,205,19,
101,71,97,88,111,163,113,203,84,24,208,64,25,25,35,47,22,177,235,50,235,103,4,251,3,52,208,157,98,199,53,114,26,184,44,43,207,12,137,159,30,251,50,87,245,51,54,179,159,29,251,124,204,8,239,43,101,238,
56,34,230,134,225,17,123,249,120,61,207,138,69,14,254,53,190,205,236,130,22,158,157,254,184,102,47,183,175,33,158,120,43,30,94,43,147,61,60,124,213,15,101,85,172,208,141,109,139,101,193,148,2,239,86,78,
253,120,12,249,48,114,111,141,184,157,95,228,105,181,223,237,159,1,71,28,153,108,14,222,217,17,243,44,114,195,217,222,28,66,146,238,193,57,0,91,102,157,119,201,104,252,107,131,55,201,52,154,131,55,30,
79,3,172,230,91,15,74,205,201,255,101,36,112,198,195,67,167,220,119,193,255,164,106,90,27,230,200,31,238,0,229,13,114,244,54,92,131,220,29,77,116,56,177,82,87,32,79,1,10,208,163,39,225,47,176,170,209,
174,90,51,118,28,125,61,108,220,195,182,237,82,163,160,28,95,244,103,152,52,159,195,247,42,171,128,124,108,49,201,70,169,6,183,46,82,253,224,30,171,106,54,154,25,125,239,4,188,20,176,117,4,240,197,58,
179,157,86,194,158,103,59,141,83,185,163,226,94,241,25,99,207,238,172,37,32,170,235,203,25,151,157,56,174,223,224,14,246,205,237,243,38,216,34,142,246,33,17,174,82,220,60,76,62,73,233,11,204,88,15,157,
150,204,241,139,122,48,12,201,85,209,212,3,159,196,56,197,2,153,9,112,250,154,237,109,155,157,165,99,32,1,229,12,233,139,154,117,249,222,125,221,139,99,225,109,99,110,237,134,67,215,172,76,196,212,242,
187,28,104,254,57,103,251,29,35,211,82,99,174,222,159,128,159,181,22,183,223,219,138,24,172,128,246,178,70,3,25,14,12,218,168,99,86,198,251,128,167,42,43,148,157,10,214,206,236,240,171,33,95,78,150,127,
181,98,131,139,253,147,152,103,128,202,121,146,128,235,151,187,92,74,101,247,137,24,130,19,215,166,92,95,234,112,183,137,255,197,126,182,102,235,42,211,19,149,249,123,243,219,92,182,54,10,227,235,200,
152,71,243,254,71,220,139,240,171,239,167,245,246,161,186,171,90,80,193,221,163,176,138,96,223,107,127,191,223,167,227,135,99,129,101,249,1,79,18,118,22,56,250,222,98,193,20,194,118,233,135,138,183,167,
98,192,87,179,222,53,174,141,214,151,118,139,128,155,39,140,110,81,116,222,7,117,16,78,28,236,55,54,39,192,116,64,179,148,63,103,2,186,204,15,236,146,14,25,74,203,196,232,215,114,18,153,231,188,15,25,
110,32,203,170,73,43,71,153,134,19,120,57,187,87,28,125,25,177,19,193,93,213,180,70,205,254,120,12,254,36,160,125,169,137,24,143,246,53,253,103,30,251,194,29,217,11,86,23,93,36,175,168,160,82,219,49,153,
85,40,81,136,72,198,247,30,13,96,153,162,135,204,194,255,84,73,10,39,160,59,164,209,161,110,116,88,51,95,195,178,26,47,8,214,211,77,148,41,39,130,233,112,59,190,94,65,45,218,113,169,139,251,49,190,157,
251,107,55,65,57,71,202,145,90,245,53,27,211,168,30,126,146,223,104,230,188,210,61,100,94,26,168,192,96,87,184,54,183,76,228,222,13,54,210,157,230,251,17,131,216,117,76,13,198,172,129,129,44,250,199,170,
238,211,110,176,237,247,24,210,135,241,229,128,182,104,243,199,89,58,104,245,113,142,99,206,220,81,196,30,96,67,133,247,14,168,69,132,188,244,255,165,32,223,207,79,158,73,189,131,145,125,194,35,37,66,
14,239,248,169,214,218,227,1,17,185,131,145,79,13,24,64,164,252,143,216,165,235,118,241,107,57,236,138,166,9,133,48,163,137,110,69,219,236,42,76,106,119,104,154,41,107,5,235,120,158,156,211,16,105,94,
248,174,28,214,255,173,44,55,203,123,119,18,160,32,202,168,68,126,6,223,87,172,139,0,195,173,25,91,51,54,124,136,115,71,30,144,167,149,44,173,112,102,142,132,194,19,77,195,10,118,234,42,253,53,62,3,185,
225,44,17,79,154,56,150,226,184,234,187,86,209,89,249,106,214,195,11,89,95,111,17,220,114,186,154,29,131,89,172,244,93,149,250,232,14,224,182,230,179,90,85,235,74,188,181,175,251,114,206,212,206,227,159,
117,179,123,196,52,192,66,135,230,42,194,150,169,138,146,15,198,222,64,229,150,103,172,133,74,158,170,82,192,165,219,133,175,247,200,122,180,254,101,97,113,1,71,98,88,136,136,151,171,78,21,10,79,105,123,
174,243,24,199,30,164,209,239,74,76,240,80,71,120,236,149,199,168,87,177,100,246,221,105,212,54,239,219,49,12,122,220,46,217,230,8,169,80,25,91,87,28,116,232,208,80,140,88,142,16,253,0,0,31,69,73,68,65,
84,56,238,216,189,200,73,16,70,162,113,93,172,14,117,116,86,109,90,40,99,172,20,191,1,75,230,218,41,123,239,72,160,110,83,163,29,201,94,68,151,229,154,43,187,118,132,160,113,125,53,7,170,35,116,45,241,
103,105,145,104,0,43,20,212,110,158,139,213,41,173,13,163,237,215,204,122,213,174,106,152,190,64,31,71,55,26,124,169,216,238,89,205,209,3,165,175,8,146,162,53,193,47,17,122,55,199,96,182,38,174,113,27,
143,173,61,152,192,88,177,49,62,87,201,175,232,64,129,145,235,234,235,225,65,203,183,56,37,28,173,188,156,144,232,109,114,125,47,250,233,209,196,104,253,133,126,18,110,165,108,31,156,195,52,222,22,221,
164,182,251,209,153,194,233,49,48,74,52,119,227,89,93,84,64,223,39,128,6,100,15,71,106,175,65,209,44,107,166,158,61,154,131,247,235,152,167,74,66,73,157,31,253,135,240,190,189,234,204,67,128,118,236,178,
137,28,10,131,162,53,55,31,129,37,155,252,195,253,81,104,187,129,244,164,165,140,248,5,218,88,165,82,21,126,2,163,113,31,138,29,151,45,181,95,175,55,5,66,159,92,35,90,219,163,172,183,139,22,83,155,245,
216,134,14,90,216,209,4,71,41,129,30,139,218,26,15,162,26,90,115,61,94,95,250,88,181,240,97,181,144,189,119,0,207,66,117,2,114,26,218,60,181,254,85,135,221,250,120,60,101,208,87,120,240,182,123,7,129,
110,113,200,192,171,197,97,202,253,73,64,133,249,12,198,179,125,237,13,143,19,4,176,210,66,29,138,164,218,250,51,181,251,60,116,97,183,60,238,209,122,151,35,220,53,235,251,88,173,211,95,28,116,144,10,
27,155,53,217,44,133,175,246,1,50,59,52,239,219,90,189,143,24,245,224,239,170,143,19,48,156,234,132,113,152,175,200,108,67,165,149,218,223,82,214,40,156,105,112,72,116,14,162,121,116,235,186,55,244,61,
71,117,28,185,93,209,155,20,43,193,178,255,82,74,131,181,18,230,196,169,169,171,178,114,6,18,112,89,143,10,168,26,209,10,104,140,34,176,52,236,188,72,86,216,128,171,27,52,120,198,160,246,121,238,231,88,
186,252,140,87,200,54,176,208,188,128,224,47,68,219,93,30,187,28,250,231,4,214,176,189,222,148,42,184,254,155,61,242,102,43,245,191,115,184,227,212,250,221,181,111,210,236,143,70,231,176,222,136,185,74,
101,153,47,167,240,249,150,96,151,0,127,191,251,23,13,186,6,55,32,201,119,231,241,141,74,143,179,101,22,113,43,47,79,253,11,109,119,202,198,32,91,113,146,239,51,114,58,92,122,95,125,46,144,90,80,105,180,
98,246,87,72,24,29,215,88,85,25,250,76,153,2,124,87,208,175,216,139,252,147,81,14,25,22,84,197,141,174,102,253,50,20,244,44,120,193,252,105,139,249,141,41,86,190,131,6,1,66,110,19,69,224,5,104,225,25,
93,64,15,81,75,87,156,219,134,29,32,174,172,92,216,99,86,189,191,1,13,104,51,140,21,222,235,142,19,24,64,124,60,112,160,32,33,105,80,102,110,41,7,168,206,177,199,30,184,33,195,249,65,35,214,11,234,245,
94,14,124,205,92,41,35,138,104,3,87,165,174,121,89,113,125,129,191,239,26,238,101,123,28,83,156,70,70,220,179,15,215,191,90,234,220,78,44,123,122,236,142,166,251,186,61,115,179,28,199,114,26,25,178,235,
15,234,187,123,170,122,14,40,6,152,29,95,71,249,198,155,226,190,6,212,30,53,127,143,94,70,99,210,139,193,162,37,108,59,149,156,227,128,3,216,91,55,87,255,107,82,240,138,49,126,126,253,197,235,62,221,19,
249,218,169,59,84,92,179,66,104,95,114,211,134,84,202,89,16,26,106,40,55,190,135,110,47,46,164,31,4,43,126,209,108,68,13,209,160,24,89,24,213,26,78,14,216,200,102,239,67,106,246,133,0,36,188,225,137,103,
25,114,13,185,236,226,63,215,229,85,222,64,227,117,163,118,85,108,88,143,58,137,137,216,121,95,215,5,161,155,163,80,81,126,102,95,123,20,59,13,39,180,225,61,6,24,63,30,158,177,220,175,44,11,254,110,67,
101,165,117,205,214,248,221,110,75,117,70,214,131,93,59,243,74,94,158,144,249,35,28,93,16,104,109,142,235,10,195,1,107,191,149,235,109,155,237,26,133,175,90,172,164,184,43,42,240,231,136,152,111,184,187,
134,190,205,126,246,56,175,52,100,38,8,116,67,131,46,218,124,1,236,81,57,217,15,199,129,59,123,156,109,93,25,189,175,30,228,128,51,234,104,191,234,127,207,72,118,152,94,224,244,72,191,139,230,110,101,
251,204,189,63,242,210,223,240,133,6,33,235,5,206,133,219,227,196,134,123,254,219,199,194,238,56,11,95,104,171,222,40,91,121,213,163,173,80,198,228,72,224,247,57,252,179,221,107,206,52,135,214,192,89,
142,177,197,152,123,248,68,94,186,66,237,119,221,9,30,28,88,52,212,189,151,224,152,106,70,193,32,155,125,36,224,43,236,99,52,182,31,228,148,226,160,42,225,2,71,105,26,175,54,215,241,181,144,253,211,52,
95,200,178,136,248,158,63,0,215,117,172,155,246,57,46,172,143,114,140,203,26,131,22,217,153,78,255,159,72,199,125,146,206,83,81,121,41,190,76,30,146,43,101,179,51,251,70,221,240,80,2,197,104,10,191,215,
146,84,136,58,190,3,182,140,140,82,138,195,155,191,56,189,52,247,240,224,175,58,38,194,180,15,201,154,9,48,193,34,123,91,204,48,43,168,79,18,248,127,9,236,58,18,39,223,67,39,68,56,134,166,142,48,180,215,
141,5,222,53,172,234,125,140,97,222,1,161,6,187,47,229,150,136,9,120,219,200,66,96,82,164,193,185,145,87,45,237,148,61,9,99,174,107,181,239,101,127,152,6,26,83,78,106,245,224,2,63,223,167,249,250,68,59,
199,246,232,207,76,53,125,54,100,206,85,26,132,30,133,143,251,195,142,246,96,92,179,97,41,115,194,95,255,35,11,243,28,180,50,5,26,35,6,243,114,150,135,61,213,187,96,247,140,225,240,88,153,138,96,60,30,
135,131,90,57,178,17,251,207,141,235,244,154,101,68,253,206,82,96,153,178,34,77,212,27,252,110,117,249,45,248,140,89,251,25,240,19,116,218,95,131,76,238,69,153,210,175,173,255,126,60,44,36,123,24,147,
78,144,111,10,239,59,243,230,14,186,125,161,49,191,208,151,82,108,154,221,212,43,167,1,101,70,211,94,87,210,137,253,218,29,138,251,68,165,17,25,108,246,82,56,213,94,203,29,69,123,111,4,12,205,224,94,25,
252,124,223,40,155,96,22,30,211,248,146,23,213,60,12,195,72,147,51,50,31,225,179,206,9,238,33,99,216,206,135,248,230,222,102,43,168,134,102,212,22,92,107,38,109,244,194,78,65,228,4,40,223,238,179,167,
227,71,65,52,148,255,9,67,159,57,163,165,136,189,194,50,7,166,218,102,5,35,80,92,69,221,90,241,179,189,227,242,158,48,159,182,242,79,217,124,53,136,32,1,138,134,29,0,131,187,102,239,156,255,8,167,51,232,
223,47,240,232,213,1,31,48,48,42,213,206,223,213,233,247,209,76,224,216,229,41,171,97,12,65,35,254,129,47,181,37,249,157,198,52,251,209,151,241,88,21,252,255,9,128,153,136,14,253,196,236,48,236,213,60,
57,94,248,177,152,171,81,129,184,254,114,0,46,10,198,43,22,42,170,145,93,38,47,122,226,167,114,97,200,49,35,60,116,212,134,115,160,104,75,241,85,116,63,4,190,83,231,124,229,16,60,210,143,136,65,229,12,
70,178,81,72,206,68,219,254,104,97,215,93,83,230,230,90,232,217,177,82,224,9,22,78,233,254,45,125,1,209,91,251,11,124,160,205,81,25,218,213,177,139,39,128,3,216,82,62,230,177,53,27,41,149,178,55,63,202,
136,227,61,246,144,190,50,227,45,215,142,136,238,44,95,127,71,203,242,9,104,132,239,56,68,247,85,208,138,117,72,154,152,0,147,22,172,253,183,192,175,195,59,61,77,56,126,232,165,81,186,191,185,127,5,148,
95,175,223,44,193,215,247,58,131,154,50,90,149,81,121,144,168,54,96,42,80,7,11,135,19,217,17,241,153,0,82,232,198,240,55,139,227,53,86,115,125,176,51,97,214,86,100,40,34,216,168,243,161,126,134,134,132,
217,173,126,172,12,51,220,195,121,104,124,95,225,171,242,114,86,193,108,213,64,56,229,150,143,167,148,98,117,69,255,254,183,182,238,76,150,174,127,111,237,75,30,69,83,180,219,117,62,128,247,206,75,161,
12,93,57,201,14,239,113,30,169,101,119,40,14,209,126,134,42,127,113,146,165,43,162,84,251,46,246,210,226,1,162,154,101,103,84,84,141,49,158,100,83,84,180,94,202,55,60,226,22,128,90,192,246,71,90,174,190,
252,96,67,31,129,121,213,45,124,226,239,158,191,230,175,13,147,239,30,185,113,72,199,31,186,11,56,59,141,190,247,86,250,19,185,56,230,253,239,56,107,93,42,212,196,39,169,94,125,153,153,84,118,6,70,25,
182,73,214,12,183,103,101,101,174,155,165,249,146,149,226,11,213,125,69,120,85,94,61,77,195,52,212,107,165,152,87,32,56,60,220,167,29,96,30,55,241,24,126,19,195,204,60,247,118,21,238,181,65,183,149,2,
79,132,152,12,220,213,112,174,103,30,49,241,19,189,31,156,157,227,71,114,81,55,125,53,223,75,252,23,35,102,13,236,97,222,160,125,118,127,24,244,207,80,215,236,13,218,187,209,179,124,81,90,123,167,237,
30,79,249,232,48,90,92,63,195,139,235,107,47,224,225,111,27,118,203,203,100,178,5,229,29,62,197,208,39,67,123,12,106,95,222,252,77,4,41,218,59,116,109,76,212,111,91,26,90,112,68,118,158,222,213,180,186,
227,101,105,77,97,196,247,0,52,35,215,151,19,93,230,24,162,147,1,236,216,213,64,138,108,176,214,89,110,197,25,247,145,81,96,92,64,195,77,166,48,224,78,121,42,189,192,5,202,33,17,206,130,106,38,165,92,
213,95,24,248,6,245,236,233,103,154,179,113,255,53,136,47,3,6,200,155,109,199,228,90,153,143,141,241,9,127,69,241,211,141,57,111,19,150,242,220,122,207,232,150,50,109,7,71,195,175,58,118,61,152,239,127,
1,150,47,150,217,247,54,158,130,46,132,101,42,12,48,198,42,114,127,206,120,71,176,63,10,61,213,194,207,170,163,151,157,82,50,134,189,99,252,251,16,62,71,171,60,231,191,96,228,63,87,29,105,240,251,255,
211,172,154,51,0,173,57,129,86,99,206,247,198,249,1,202,66,216,107,124,131,153,122,113,73,35,158,40,203,208,13,70,175,85,137,126,107,165,181,58,22,5,219,206,153,165,104,99,251,163,20,155,149,152,227,3,
198,137,94,24,131,188,217,218,134,219,81,226,29,154,49,120,131,182,119,30,174,60,77,155,119,123,36,77,175,218,113,99,48,17,85,208,103,241,177,49,126,217,10,26,228,29,57,231,204,211,79,128,41,3,155,14,
241,215,114,35,237,75,159,122,126,12,13,125,171,17,188,109,208,56,129,221,3,118,227,215,214,162,122,127,213,156,224,64,138,207,14,234,248,190,67,213,124,157,51,25,201,70,201,214,178,23,197,77,112,55,238,
41,158,161,139,63,119,81,42,195,141,239,73,254,73,135,236,254,54,40,149,221,34,129,199,118,77,191,111,64,157,31,184,3,246,96,225,140,88,58,175,211,249,104,198,144,153,133,32,34,170,86,84,95,219,184,150,
125,2,133,80,107,223,150,83,209,231,220,239,196,178,218,207,70,116,75,92,27,140,45,26,65,123,48,12,31,138,28,237,202,203,91,159,253,159,116,109,159,10,125,71,154,30,50,189,240,111,95,73,223,249,50,172,
156,143,114,241,177,87,191,194,231,222,178,219,155,73,118,42,118,248,250,211,25,217,220,10,250,114,176,239,71,246,176,50,204,59,246,3,7,231,220,222,156,25,246,238,187,247,201,86,144,25,248,105,212,247,
232,126,39,100,7,102,84,185,50,242,191,6,255,125,248,202,17,212,243,227,165,213,84,107,246,49,193,172,101,56,255,28,60,19,190,22,240,193,173,74,153,6,194,103,158,175,168,58,10,2,36,95,245,245,171,139,
133,162,73,206,184,36,90,183,215,212,78,203,191,31,180,163,3,243,244,237,28,77,62,250,11,99,24,42,252,191,18,75,175,3,206,253,230,62,149,173,234,167,78,69,135,15,120,108,205,66,19,87,252,88,218,168,17,
68,234,202,232,167,52,191,65,130,124,116,114,208,182,113,196,254,179,151,61,30,186,235,159,171,211,179,191,134,255,115,96,53,23,79,204,84,20,165,67,133,109,153,8,235,37,242,150,210,45,145,131,177,65,51,
105,243,111,135,105,48,171,249,142,247,175,139,239,230,172,188,50,56,150,60,179,209,240,94,47,172,162,44,165,179,193,205,34,64,85,101,225,139,101,62,17,134,183,146,212,57,73,181,171,250,24,181,111,114,
85,182,39,168,211,132,50,147,166,41,165,244,223,171,48,117,68,232,62,141,251,207,53,236,188,176,249,30,214,81,81,255,111,42,255,231,194,145,35,187,184,255,183,131,143,95,136,129,157,115,107,184,255,10,
75,1,180,109,221,63,178,216,96,240,247,251,162,66,85,95,229,52,24,237,245,122,187,143,121,108,77,31,24,155,92,245,3,9,215,214,149,240,136,47,60,201,129,184,221,58,103,105,142,253,145,99,195,94,233,38,
99,106,216,32,244,212,48,147,241,179,84,220,142,81,198,131,118,209,105,87,172,215,175,251,253,159,54,38,191,176,15,31,101,23,254,227,144,101,213,252,61,62,223,240,253,208,83,235,89,52,60,210,233,20,129,
247,242,59,198,252,164,214,157,49,26,17,250,136,20,207,113,124,33,88,174,212,62,191,138,180,163,123,41,37,168,123,47,90,63,171,205,45,56,50,31,123,54,106,63,135,202,166,231,216,49,127,222,76,222,5,229,
233,191,14,68,85,89,175,95,243,169,217,40,242,255,141,246,127,38,252,13,55,237,191,236,26,170,245,197,215,165,252,140,160,98,43,144,192,250,80,54,236,251,195,198,92,85,187,99,191,254,193,168,208,29,88,
17,101,95,5,186,219,156,106,133,47,253,241,128,100,188,86,81,56,126,186,186,65,199,131,96,185,20,23,127,175,193,145,236,60,121,135,214,126,221,238,243,103,60,215,254,52,100,11,50,50,226,81,59,60,149,159,
61,54,211,235,34,15,63,65,121,253,91,225,215,5,251,90,80,39,206,163,195,108,171,178,207,129,196,158,48,176,125,225,253,245,27,244,194,90,27,217,98,14,84,163,204,194,63,233,190,244,22,59,127,7,148,97,205,
82,233,209,32,168,136,126,4,186,221,192,118,130,130,166,135,115,195,62,90,41,97,81,105,32,186,149,241,228,211,242,231,188,253,36,56,85,40,39,245,119,20,90,41,197,57,6,127,243,249,252,95,120,14,62,217,
84,157,194,142,3,219,235,253,108,232,206,252,235,91,148,241,28,198,243,218,250,228,110,159,15,195,126,131,157,109,226,168,29,215,25,207,161,127,50,188,82,29,54,141,172,58,154,165,219,119,246,198,163,84,
123,75,238,37,216,78,42,59,224,147,253,188,221,208,179,39,166,75,73,122,222,246,253,55,213,172,224,100,60,214,198,217,71,54,234,52,127,246,31,219,103,143,251,233,131,71,241,83,3,191,243,254,115,97,253,
156,251,188,206,228,77,181,255,183,193,236,39,150,217,58,181,148,25,72,181,167,108,225,73,144,160,203,221,182,106,245,6,28,109,210,72,185,151,98,141,197,39,198,16,119,6,57,50,248,59,111,145,187,247,226,
25,201,5,98,61,107,201,30,162,56,156,193,215,46,154,167,115,1,18,111,179,135,67,126,163,200,61,200,148,225,214,35,75,55,133,235,196,168,171,114,126,100,144,191,115,89,116,86,33,123,66,225,191,32,67,119,
50,46,217,24,239,70,204,140,71,205,119,54,55,72,255,223,103,208,117,192,151,70,192,69,60,89,244,150,97,223,79,179,51,93,180,79,42,163,144,77,87,191,103,94,253,250,51,150,161,79,105,159,164,218,163,58,
165,228,158,28,150,223,211,87,247,82,241,220,188,130,97,87,96,110,47,4,83,247,251,243,94,59,251,95,133,221,179,2,167,56,213,57,3,85,198,215,217,126,234,46,223,10,148,83,177,170,207,124,43,199,67,109,125,
40,30,25,199,238,86,74,230,20,237,128,26,239,39,12,237,87,58,148,159,9,62,18,31,119,68,214,54,237,122,183,240,199,195,115,208,128,2,179,204,238,156,78,211,199,63,135,190,107,82,116,106,121,111,128,206,
211,233,87,253,91,107,162,193,255,27,173,155,197,128,105,247,90,189,219,128,227,82,225,115,224,106,62,189,223,203,91,67,74,141,190,255,194,223,132,119,20,114,20,41,62,65,19,141,38,27,217,40,162,61,61,
41,189,155,165,80,134,18,105,69,47,56,138,120,216,57,84,185,11,209,129,178,127,151,161,253,122,120,141,217,166,254,198,200,183,151,177,189,184,199,197,89,245,232,192,117,34,62,172,163,35,248,167,179,243,
169,177,88,18,7,148,206,53,167,47,20,220,137,212,87,109,222,31,183,55,163,118,230,129,210,52,232,116,244,49,82,99,149,121,177,113,234,170,81,155,79,149,160,95,200,224,105,3,178,187,199,251,36,68,217,133,
140,246,83,41,231,95,3,252,93,128,114,21,215,178,219,135,179,41,134,33,181,228,154,247,108,74,247,43,27,190,128,137,157,204,193,14,79,181,110,252,218,218,103,3,24,245,94,178,105,140,123,29,108,147,93,
35,190,172,206,61,120,207,53,112,89,162,150,139,89,43,126,124,70,251,166,5,31,65,141,173,141,134,122,89,143,116,62,217,101,252,133,79,131,187,169,235,39,219,124,5,206,95,56,129,238,160,29,182,194,250,
148,218,46,101,234,180,240,113,229,67,254,78,160,103,80,85,214,248,137,99,39,173,193,143,179,124,26,28,36,175,116,105,155,41,230,254,189,20,63,112,187,19,186,83,239,189,245,252,94,42,155,229,120,164,220,
11,140,67,79,183,95,82,141,227,35,65,164,226,37,237,196,211,156,41,49,76,217,43,174,127,225,23,126,225,23,74,121,109,239,157,233,211,74,215,238,123,181,101,59,89,221,136,183,83,189,133,125,137,104,162,
14,221,49,238,81,189,163,8,253,59,227,172,195,33,187,62,171,43,205,210,203,153,33,82,16,69,253,230,57,70,129,247,12,100,76,124,27,11,103,200,107,41,227,247,124,13,214,58,83,242,163,137,234,43,149,239,
100,46,12,95,61,13,48,218,70,145,125,167,246,11,191,240,11,255,94,88,191,6,54,212,187,197,235,57,147,15,172,222,144,126,119,56,177,163,19,81,239,221,9,48,113,124,142,14,197,125,190,122,109,215,243,234,
57,40,67,27,25,234,29,163,172,140,249,197,206,107,146,214,40,86,20,232,243,61,76,33,150,30,181,83,177,137,210,185,9,21,212,162,113,72,114,34,245,100,157,131,23,183,61,178,159,135,154,74,241,209,254,47,
252,194,47,124,46,180,130,235,249,238,1,64,163,143,43,93,214,153,78,231,253,194,247,245,240,115,250,6,251,16,5,147,234,57,244,144,51,104,251,113,123,232,209,190,237,46,176,119,22,237,169,71,145,165,193,
37,12,78,74,155,235,119,90,176,151,243,222,62,59,126,150,242,200,145,60,26,131,62,118,24,137,155,49,188,218,160,199,107,30,165,187,174,119,231,48,125,70,52,243,60,198,125,27,225,199,103,26,94,140,205,
125,253,95,248,133,95,248,58,232,107,45,215,155,202,144,53,214,37,128,167,167,202,113,233,15,253,3,245,112,107,241,221,126,220,106,181,217,103,181,127,206,7,251,56,114,143,199,180,121,131,174,147,215,
223,7,204,231,157,57,105,165,149,215,155,88,160,108,35,245,97,232,6,14,64,52,152,43,15,235,169,131,15,132,181,83,123,22,99,179,24,135,241,198,197,196,30,48,57,1,125,145,185,249,100,143,244,36,197,68,52,
57,173,150,59,96,13,202,109,69,251,28,114,43,173,213,47,152,171,95,248,133,127,35,216,133,121,26,4,117,24,122,21,141,114,155,186,70,234,87,208,33,35,144,131,224,233,43,140,249,35,62,66,199,37,140,117,
41,231,129,227,212,131,213,191,250,117,55,93,250,93,112,127,240,222,76,176,160,97,42,122,144,119,210,32,217,132,157,26,181,132,26,252,127,6,26,93,51,171,141,23,17,145,231,189,43,245,40,221,74,206,56,189,
86,169,172,149,92,248,119,141,178,127,201,202,236,16,63,139,143,29,245,247,126,225,23,254,45,16,175,1,251,90,217,2,159,58,157,204,215,248,125,108,107,162,33,46,118,47,60,10,46,76,189,171,226,251,171,240,
254,122,62,217,3,239,245,59,68,186,106,231,60,22,146,52,175,126,237,55,63,201,160,191,7,214,123,172,98,135,93,69,220,89,58,62,74,225,75,234,137,231,133,248,135,81,124,100,224,85,142,227,107,65,70,225,
176,64,123,228,14,153,49,91,31,202,140,7,204,94,69,175,192,240,160,219,28,101,95,252,124,171,136,68,120,244,81,116,49,222,161,208,157,8,238,216,191,107,37,254,194,223,0,148,161,169,11,237,182,147,63,148,
166,31,75,245,216,87,143,253,34,46,99,188,160,30,58,1,156,74,87,56,185,71,88,231,254,106,217,87,30,81,77,222,22,232,176,99,39,34,80,118,40,202,28,247,237,199,145,114,207,244,229,207,134,217,51,53,174,
59,194,44,177,46,34,195,19,188,210,128,149,167,82,244,95,107,224,149,205,69,227,61,34,244,235,207,72,163,137,118,38,141,6,237,178,133,59,82,253,64,195,44,130,42,82,113,55,224,118,187,80,14,154,153,95,
125,64,136,235,120,37,170,158,176,176,207,254,171,152,103,226,215,229,191,240,41,160,223,64,23,153,53,37,35,243,126,173,13,214,70,44,209,187,6,40,146,154,225,184,71,78,64,163,181,218,230,181,138,198,21,
221,147,242,39,106,103,104,80,239,33,172,182,105,177,206,206,54,174,36,79,198,99,24,244,108,57,255,59,150,59,8,118,114,22,126,229,9,157,0,43,219,83,224,253,232,175,137,224,59,124,141,161,71,106,108,204,
157,97,111,118,193,183,82,230,243,163,205,226,172,128,132,131,100,86,117,156,254,31,252,64,29,55,198,141,204,157,112,68,50,199,45,90,204,124,189,122,100,146,113,44,183,111,10,42,107,165,204,35,119,170,
133,50,175,14,233,96,29,248,54,240,189,206,33,168,48,161,209,154,88,69,144,120,111,247,90,65,228,204,236,2,247,69,181,207,157,39,213,47,149,82,245,227,219,76,57,63,238,57,203,124,123,195,93,48,135,17,
158,81,6,61,235,223,199,161,227,206,99,179,61,86,109,186,145,231,72,188,175,47,47,9,95,1,239,43,210,200,72,103,107,61,171,199,247,178,182,43,27,100,34,244,168,155,63,223,152,91,104,165,25,163,190,147,
58,186,147,106,87,105,165,21,164,188,188,225,28,172,225,68,57,222,167,176,172,211,104,49,147,142,100,14,101,44,138,78,193,98,209,57,230,154,253,138,183,87,74,166,211,67,186,43,15,125,100,17,170,85,114,
92,103,215,161,220,61,180,25,242,34,190,239,183,197,138,104,172,124,90,151,35,139,232,122,174,157,182,221,230,69,211,210,241,56,138,246,210,202,202,153,143,104,23,81,30,11,218,73,176,176,83,151,157,255,
108,202,86,186,204,57,196,197,202,62,175,61,213,174,22,59,7,136,35,26,21,166,241,44,236,204,219,1,182,93,189,82,242,249,139,28,232,8,212,214,31,142,219,241,239,161,43,69,247,211,33,74,121,116,136,188,
231,29,88,121,92,25,47,120,112,164,8,30,78,121,217,160,94,252,146,122,118,33,236,114,193,28,141,62,39,28,13,133,210,21,90,157,138,39,51,152,99,142,2,252,172,224,58,94,179,24,139,29,49,51,101,76,243,50,
224,46,99,208,108,89,116,144,136,203,70,31,203,116,40,118,225,212,65,84,134,249,110,180,177,115,168,116,69,35,107,191,140,150,54,20,48,127,95,41,219,213,61,213,151,8,127,158,13,209,208,229,23,13,106,151,
183,50,191,206,202,84,214,215,78,19,242,217,235,57,71,153,28,8,94,107,76,59,234,198,215,24,241,200,133,56,192,2,115,22,205,199,59,186,152,215,201,174,115,55,202,224,122,188,88,166,6,21,28,241,197,247,
159,2,13,254,34,40,37,186,59,89,238,228,230,155,192,6,3,203,118,210,181,15,112,0,159,124,253,247,93,57,101,248,205,125,161,208,149,177,70,7,10,83,134,67,249,176,76,208,53,58,92,149,17,168,54,141,10,133,
146,119,226,19,221,111,162,223,220,182,183,169,142,173,210,51,25,120,48,9,175,185,125,6,140,91,69,27,184,70,118,51,93,75,162,244,61,226,243,212,56,170,122,59,202,246,206,250,231,245,173,104,117,195,162,
230,177,130,44,141,143,62,254,74,190,196,28,179,92,52,168,103,154,83,153,114,253,251,119,99,12,225,255,215,64,43,79,82,193,64,162,148,77,121,220,128,19,217,168,52,65,182,169,103,232,15,70,32,208,238,63,
0,175,193,168,52,249,89,170,125,137,17,140,109,150,58,57,45,143,34,148,200,219,191,19,209,220,3,181,128,62,195,216,119,88,113,99,12,124,243,189,104,92,233,250,110,148,88,151,145,235,122,56,9,109,58,4,
202,217,64,229,204,252,12,101,82,189,178,199,108,192,104,183,114,58,160,253,240,39,144,47,53,72,24,253,3,209,225,179,176,130,169,254,126,163,54,131,92,98,92,43,255,15,28,12,201,119,211,52,217,200,246,
76,198,74,247,169,245,159,242,83,230,220,43,62,29,79,80,102,124,193,149,83,117,53,68,217,112,188,71,252,93,127,120,213,34,190,108,108,162,177,235,120,190,71,247,12,106,197,246,228,1,172,45,152,195,226,
101,72,221,95,101,158,148,206,150,242,197,78,175,113,222,117,127,255,217,53,222,108,248,149,35,240,19,193,15,208,236,213,206,65,147,8,78,34,251,172,254,206,225,139,136,63,23,225,127,249,132,181,224,26,
225,51,165,102,215,232,135,223,19,4,198,192,4,70,14,141,116,45,47,3,141,145,60,27,115,54,176,171,209,110,244,105,20,83,177,10,186,43,108,67,147,101,80,17,107,106,21,217,54,89,164,56,116,74,181,6,106,40,
60,146,103,212,65,136,182,98,5,160,49,156,45,70,2,188,168,126,162,145,98,199,136,249,234,229,72,163,34,31,162,174,153,251,10,125,166,62,114,121,225,123,1,223,56,70,106,143,157,251,104,240,53,250,46,174,
191,30,152,90,38,241,111,82,122,19,237,73,54,55,138,254,199,117,32,155,89,239,205,187,220,51,94,86,158,236,191,7,192,196,31,76,142,186,14,41,4,6,218,236,153,7,184,34,3,191,164,9,159,223,23,193,71,156,
100,255,185,174,186,254,25,192,61,98,165,57,230,130,234,245,72,73,41,217,209,150,219,145,49,117,134,162,228,81,50,242,228,160,38,117,170,189,205,142,65,138,23,110,176,124,58,242,77,227,232,99,160,250,
54,202,155,29,175,30,1,143,58,125,188,65,97,170,84,243,202,137,49,70,188,227,233,247,105,221,162,113,55,50,66,4,135,28,148,120,110,228,220,70,115,182,57,231,127,127,181,9,171,230,238,61,67,37,218,31,87,
122,61,59,239,112,146,74,87,58,220,109,239,4,245,91,210,127,243,234,215,127,175,145,62,5,229,255,38,181,133,119,197,19,191,179,247,166,62,119,247,240,86,52,86,167,48,159,216,243,127,6,78,140,250,199,48,
253,40,100,217,151,29,245,198,170,144,141,187,164,1,215,46,2,140,140,64,243,206,3,103,33,20,13,151,233,11,28,92,23,65,71,184,34,217,230,40,189,175,171,74,52,133,179,128,89,1,53,126,198,33,40,208,247,82,
204,225,249,193,51,24,111,116,80,84,180,133,17,154,146,120,158,71,25,177,5,50,243,247,13,181,130,136,171,47,226,86,205,119,177,129,213,206,121,139,40,194,126,42,59,43,40,46,107,44,127,156,5,5,53,92,144,
59,188,252,72,88,250,231,123,88,110,24,218,161,48,80,33,5,184,118,132,97,213,46,226,161,223,11,247,253,203,215,44,187,61,188,239,82,54,201,200,55,113,125,54,156,140,212,137,1,80,206,195,170,81,230,178,
97,164,204,70,79,26,191,82,198,211,1,204,139,121,42,173,175,35,46,87,244,123,121,226,72,133,103,3,138,215,143,220,126,119,124,119,156,183,21,142,207,0,182,28,223,204,113,151,163,40,187,41,28,232,221,237,
214,108,251,243,212,176,199,109,246,145,252,163,140,180,130,76,229,253,251,213,97,41,89,47,149,225,139,246,226,28,214,197,92,157,62,26,177,179,23,191,27,205,103,78,128,60,253,250,32,124,207,146,95,169,
245,204,149,253,133,175,0,53,35,202,40,70,109,86,229,187,14,202,46,100,252,254,55,64,229,16,84,121,84,246,245,48,156,65,17,117,171,253,106,44,207,182,56,89,71,102,251,226,10,148,158,245,251,228,145,43,
171,225,143,220,127,41,94,133,69,170,76,181,95,193,207,21,120,28,25,186,147,76,36,158,38,222,77,109,71,105,248,221,118,157,22,11,238,238,30,60,239,15,13,193,3,67,30,45,134,159,15,216,49,86,217,141,202,
99,153,248,133,95,248,249,144,201,127,100,180,191,127,61,168,40,25,141,165,113,215,65,159,173,244,113,182,77,185,91,23,233,238,214,111,78,199,236,129,73,185,99,76,114,55,173,190,19,203,252,148,56,39,246,
139,108,105,131,19,40,59,81,173,218,163,201,246,198,249,59,27,231,168,253,59,123,240,161,131,66,50,166,140,186,114,34,60,115,229,109,65,248,170,116,255,62,68,17,254,59,240,83,86,199,47,252,76,184,35,167,
223,183,202,118,214,52,158,27,56,201,96,170,236,233,206,150,38,227,56,109,179,203,31,212,44,119,181,155,220,67,127,71,165,252,125,37,251,28,236,247,227,60,37,187,179,191,18,166,239,41,85,131,70,61,50,
204,153,241,63,61,208,177,83,199,221,111,115,1,154,180,146,224,175,203,243,202,131,254,183,200,153,133,239,238,149,218,241,229,45,135,95,248,92,248,119,173,130,237,222,212,235,44,196,129,113,205,178,148,
119,14,6,99,155,232,32,221,214,54,105,233,253,230,245,119,14,238,148,187,90,198,167,203,251,191,185,215,142,147,160,123,121,122,64,66,181,89,165,128,86,251,228,171,189,243,39,192,241,28,220,83,215,28,
241,55,33,227,171,12,199,231,156,216,255,9,16,165,77,163,123,187,192,235,33,186,86,116,212,38,96,116,175,223,143,104,68,60,101,229,217,247,39,66,22,133,99,183,236,223,11,126,255,120,2,151,177,158,139,
140,233,238,59,59,162,242,213,190,120,136,171,8,59,122,117,162,81,77,143,226,254,156,187,119,185,103,123,229,25,217,182,193,134,138,5,62,17,238,217,131,108,52,154,192,57,203,118,15,187,169,235,85,155,
44,253,45,159,125,220,224,229,216,41,8,22,202,17,28,164,201,112,255,204,237,165,101,246,235,63,6,95,235,247,240,122,136,174,163,9,105,193,125,190,167,156,143,104,66,119,203,179,239,79,8,203,174,16,254,
59,4,51,51,160,106,93,142,203,106,203,78,206,31,237,110,97,70,101,136,107,183,94,37,3,167,130,142,6,223,191,34,240,248,147,221,92,137,63,250,215,239,242,246,73,162,251,28,47,93,225,188,92,179,90,74,169,
110,244,52,168,189,154,76,24,149,97,70,193,142,246,143,210,125,238,128,214,14,207,234,94,182,223,117,71,184,35,143,122,85,95,29,152,225,123,104,39,254,173,78,192,191,160,11,191,240,1,208,224,34,138,96,
35,7,187,3,235,177,106,16,235,186,136,63,170,115,119,191,123,55,128,50,54,60,209,165,58,232,120,126,5,254,97,166,28,35,162,76,165,228,51,60,39,56,190,27,190,135,110,63,179,216,211,43,13,74,103,29,211,
66,24,94,233,205,82,153,58,68,199,109,24,162,199,212,78,50,1,239,194,19,6,254,29,167,128,159,71,237,70,190,71,6,70,25,193,253,95,120,30,254,43,59,38,159,212,207,22,171,162,241,157,157,93,243,29,162,207,
52,27,150,208,54,207,126,39,245,118,246,187,119,83,227,124,111,39,104,233,159,252,244,210,40,91,246,27,35,134,103,33,141,208,107,217,19,186,21,123,155,89,216,191,2,200,199,247,46,176,158,114,183,163,199,
99,190,195,211,169,33,67,225,43,101,109,236,59,68,11,41,218,171,226,58,39,7,79,238,236,245,103,169,54,108,27,245,1,23,167,226,101,180,13,156,45,99,240,187,146,227,136,132,63,9,199,80,150,134,1,102,54,
239,227,46,188,131,230,43,215,202,83,186,225,111,24,204,79,50,210,18,154,16,39,150,197,18,200,115,175,163,246,165,139,142,156,85,128,177,19,193,42,136,130,149,93,72,35,109,210,133,89,208,212,175,81,159,
69,153,135,235,46,253,223,224,117,171,150,7,249,216,90,255,84,108,241,62,248,42,58,87,56,78,234,127,39,124,183,147,225,233,245,200,125,110,102,168,221,247,82,200,155,21,194,23,125,143,202,36,127,202,115,
14,218,238,166,190,162,52,249,73,249,59,145,177,234,147,170,115,76,27,13,125,16,101,12,218,253,158,194,31,181,103,207,115,163,31,163,58,213,49,223,197,214,78,20,177,24,5,150,147,252,8,248,27,60,158,208,
124,146,191,163,84,178,48,234,39,56,184,113,148,225,139,112,238,232,144,213,97,54,21,28,172,82,241,153,156,159,232,196,189,40,252,181,189,122,119,142,239,182,251,211,74,249,191,202,200,238,4,5,104,204,
119,25,216,141,250,255,171,208,198,95,180,14,226,255,66,162,234,198,64,63,177,111,126,10,39,248,78,12,247,233,33,19,23,117,111,208,78,83,115,65,68,146,209,70,56,57,172,163,246,237,86,244,34,101,167,162,
14,164,175,182,123,56,155,160,218,71,117,118,249,206,218,202,246,1,47,59,116,162,49,80,217,23,94,122,13,218,169,246,189,78,116,127,101,8,57,98,54,56,136,14,195,42,162,221,93,255,81,187,186,137,3,97,55,
114,87,6,59,194,133,223,113,156,86,153,188,149,206,112,251,250,27,122,98,214,185,111,204,223,128,255,251,79,45,229,255,149,82,254,15,150,42,93,21,232,175,71,140,51,227,127,18,247,14,156,56,36,159,2,13,
254,150,82,74,173,213,43,234,196,72,100,202,110,39,34,207,218,168,246,217,62,253,157,136,155,219,157,70,169,170,93,26,201,38,237,118,202,87,16,141,203,9,79,12,60,215,167,7,131,152,62,243,212,69,44,138,
124,34,122,88,142,17,163,148,161,13,163,190,234,215,206,56,178,130,15,113,137,2,54,234,174,61,172,133,104,29,164,178,25,204,67,147,12,197,112,87,142,34,60,72,255,52,203,182,170,131,70,52,107,127,55,211,
214,239,159,64,140,175,65,157,191,106,77,254,191,255,31,84,100,99,136,49,17,137,31,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::case_main_png = (const char*) resource_MainSynthGui_case_main_png;
const int MainSynthGui::case_main_pngSize = 65490;

// JUCER_RESOURCE: case_effects_png, 12243, "../../Resources/case_effects.png"
static const unsigned char resource_MainSynthGui_case_effects_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,48,0,0,0,224,8,6,0,0,0,245,229,150,42,0,0,32,0,73,68,65,84,120,156,237,221,205,
174,43,189,154,16,96,215,58,135,1,244,12,9,36,16,12,185,1,96,136,196,0,113,33,125,103,125,31,136,1,136,33,112,3,12,65,2,9,137,89,195,160,251,91,197,96,175,172,93,113,252,243,218,85,73,42,89,207,115,180,
207,74,170,92,182,235,39,149,248,253,108,215,146,206,105,121,118,5,0,0,0,224,7,91,159,93,129,220,179,2,5,2,20,0,0,0,240,186,30,30,224,120,68,32,65,176,2,0,0,0,222,223,93,131,26,247,8,46,220,51,96,33,24,
2,0,0,0,199,185,103,208,225,208,188,143,12,8,28,145,215,217,234,3,0,0,0,175,230,200,192,193,17,121,29,82,159,189,141,252,71,109,47,24,1,0,0,0,247,19,13,50,236,13,70,76,111,191,39,48,48,179,109,111,155,
71,215,7,0,0,0,222,221,158,160,67,111,219,153,188,167,234,115,143,32,196,200,54,247,234,129,33,152,1,0,0,192,79,54,26,36,216,219,3,227,238,129,140,123,6,6,102,131,22,123,131,29,179,233,1,0,0,224,29,28,
21,188,152,237,125,49,82,126,56,237,17,1,137,104,218,145,192,196,81,65,140,40,193,14,0,0,0,206,236,94,79,11,25,9,66,28,145,118,164,14,87,142,30,194,17,13,70,228,203,70,130,24,209,245,163,233,0,0,0,224,
149,29,53,17,103,36,32,17,13,90,28,54,57,104,164,113,63,155,102,52,112,113,68,15,141,30,193,12,0,0,0,222,201,108,207,140,217,30,22,247,12,100,52,211,28,209,203,97,166,135,69,43,112,17,233,157,209,90,30,
93,15,0,0,0,239,232,168,185,43,90,239,71,210,70,235,213,76,179,55,8,48,58,20,100,169,164,235,245,196,136,6,53,162,235,1,0,0,224,157,141,6,49,122,1,135,90,250,86,154,104,57,161,245,173,134,254,222,224,
69,45,40,113,143,128,70,109,25,0,0,0,252,116,51,195,60,70,3,22,123,123,103,116,215,31,53,60,35,18,128,136,46,107,189,174,213,77,143,12,0,0,0,126,178,163,39,230,236,189,142,46,139,190,239,213,109,42,128,
17,13,94,140,6,46,70,123,102,148,222,215,150,1,0,0,192,79,51,51,164,99,52,64,209,90,182,39,136,177,59,128,113,100,240,162,247,55,250,186,181,44,178,14,0,0,0,94,221,80,48,32,205,245,182,232,253,237,173,
139,188,175,46,223,19,8,136,6,47,102,255,246,150,181,234,42,96,1,0,0,192,79,54,250,72,212,145,96,196,236,223,94,29,90,117,29,10,96,28,29,188,184,119,143,140,200,58,0,0,0,120,23,209,96,192,17,61,46,30,
17,196,104,6,48,102,134,142,204,6,45,70,130,26,181,101,181,52,0,0,0,192,252,147,69,122,193,138,61,193,140,86,93,114,223,203,103,2,24,71,7,47,102,122,99,204,76,238,57,178,30,0,0,0,206,108,244,41,30,189,
224,69,180,215,197,189,130,24,135,4,48,142,10,94,244,222,151,94,71,254,70,234,13,0,0,0,63,69,116,210,206,209,161,34,189,96,198,61,130,24,223,203,254,92,88,57,99,38,120,17,13,104,212,150,181,94,151,222,
3,0,0,192,79,80,234,109,177,84,94,95,254,94,150,111,255,166,236,117,173,172,165,240,190,150,223,180,145,39,122,212,122,95,68,130,23,181,101,189,180,189,50,106,203,122,251,4,0,0,0,239,168,213,139,97,118,
174,139,90,111,139,214,242,104,25,181,250,221,212,191,215,3,163,21,20,232,173,139,4,47,70,3,25,41,91,23,173,15,0,0,0,252,4,35,1,140,90,47,137,53,75,187,20,150,229,249,231,237,239,90,207,139,86,175,140,
102,79,141,232,16,146,72,239,140,218,144,144,124,89,228,95,45,207,252,117,94,135,94,125,1,0,0,224,39,232,245,112,40,245,158,40,13,29,105,5,46,74,229,149,134,147,108,95,151,242,10,13,49,105,5,48,162,189,
47,74,129,138,252,253,158,127,121,190,51,61,49,90,203,1,0,0,224,149,245,158,224,209,234,121,177,93,182,125,61,59,103,69,30,200,40,205,165,49,213,11,35,210,3,35,18,16,24,9,92,124,124,165,249,232,164,43,
229,147,10,235,242,250,228,245,21,184,0,0,0,224,39,40,77,222,153,47,239,205,117,145,210,109,239,139,252,223,231,87,154,207,64,93,90,129,140,173,110,47,140,63,111,18,246,68,135,115,68,122,84,212,130,23,
31,141,124,90,101,11,94,0,0,0,64,63,136,209,26,58,82,10,100,148,130,20,31,233,119,16,35,90,159,124,40,201,246,117,175,183,199,146,82,90,143,124,140,106,175,247,196,54,72,209,122,63,50,148,68,0,3,0,0,0,
126,155,9,96,108,95,231,255,62,54,175,183,193,140,143,84,239,129,81,155,212,115,151,90,0,35,18,16,200,123,95,244,210,69,130,25,165,101,165,60,242,242,75,245,29,233,85,2,0,0,0,175,96,100,66,205,237,235,
200,124,23,121,79,140,60,64,145,7,45,106,65,138,214,48,145,86,186,203,251,226,246,51,79,33,41,5,53,162,61,39,106,129,138,104,47,140,104,79,140,82,61,123,251,5,0,0,0,103,183,39,128,145,15,23,169,13,29,
185,40,245,190,216,6,49,182,109,234,82,175,139,86,189,182,65,138,200,48,146,112,0,35,175,88,171,247,197,118,125,228,223,200,144,146,60,239,82,93,106,189,71,0,0,0,224,213,69,218,186,219,160,197,182,215,
67,169,231,69,41,136,209,27,50,18,233,68,80,11,72,244,122,97,84,141,206,129,17,237,125,145,175,107,165,141,6,47,238,53,140,4,0,0,0,222,69,30,180,216,46,171,5,45,106,106,67,70,242,191,121,239,139,86,111,
140,90,47,140,174,82,0,99,111,15,134,82,143,136,72,160,98,100,72,73,94,78,173,23,198,158,253,0,0,0,128,87,82,122,194,199,229,117,100,248,72,169,247,69,169,231,69,254,20,146,82,175,138,237,251,17,151,122,
221,4,55,34,61,48,106,189,46,74,203,122,129,139,60,232,240,145,253,93,254,197,191,253,55,255,105,73,233,47,2,245,74,41,165,180,62,33,64,177,44,75,90,215,221,19,168,158,206,187,238,215,197,187,239,31,63,
195,178,252,186,229,185,150,121,53,143,186,7,159,245,94,127,214,122,213,188,90,125,223,157,243,193,94,174,161,199,122,228,241,30,45,107,25,8,40,172,41,253,245,127,249,119,255,254,95,125,189,189,4,44,46,
127,47,1,134,86,143,140,237,251,237,178,82,186,203,178,102,253,254,156,98,1,128,82,154,82,208,34,165,246,78,116,135,144,44,203,242,15,3,245,105,86,236,17,150,101,73,233,221,110,2,235,250,222,221,85,222,
125,255,248,25,190,238,59,174,101,94,206,163,238,193,103,189,215,159,181,94,53,175,86,223,119,231,124,176,151,107,232,177,122,199,123,57,246,108,44,7,231,247,157,239,175,142,5,181,121,47,182,175,215,202,
223,148,202,65,139,124,249,54,159,102,149,102,39,241,140,164,169,5,45,74,203,126,255,91,215,191,78,203,18,238,129,113,119,239,22,164,0,0,0,224,121,90,109,204,59,5,35,166,172,235,95,167,122,7,133,109,160,
162,22,204,72,41,24,152,8,164,73,41,141,79,226,89,43,172,53,55,69,41,93,111,120,201,243,76,4,44,22,65,14,0,0,0,26,214,72,112,34,111,91,62,63,160,209,10,96,228,129,139,237,235,109,15,140,86,207,139,33,
51,79,33,41,5,42,182,235,243,215,173,185,49,242,247,203,195,199,102,5,203,107,5,41,132,47,0,0,0,104,106,181,41,107,129,138,103,6,52,126,149,93,235,97,177,237,133,145,178,247,173,30,24,165,192,198,174,
167,144,108,51,173,29,157,218,156,24,165,237,163,243,95,60,174,7,70,39,104,177,187,71,133,136,6,0,0,192,207,54,208,186,45,181,65,139,65,141,109,186,199,4,51,90,163,45,242,64,70,52,136,81,91,182,93,94,
92,63,243,20,146,94,154,200,206,165,202,242,251,158,129,70,96,34,28,180,16,156,0,0,0,160,39,210,118,108,180,128,183,109,212,102,48,227,190,129,140,82,187,62,239,117,49,27,196,40,149,213,125,10,73,190,
65,45,163,86,33,249,235,210,178,124,155,214,220,25,199,170,4,39,186,65,11,193,10,0,0,0,238,165,214,7,33,95,212,10,102,220,55,144,81,10,78,228,129,140,109,218,210,92,24,145,32,70,175,71,70,74,105,255,36,
158,173,224,69,116,248,200,213,250,35,231,192,168,6,40,190,150,23,215,142,60,21,23,0,0,0,134,53,130,13,181,7,143,126,175,175,4,44,46,237,220,163,2,25,215,115,96,212,130,24,145,30,24,163,61,49,170,102,
38,241,220,238,68,190,188,244,190,55,60,228,46,195,71,138,193,139,106,64,163,151,155,96,5,0,0,0,71,9,118,189,104,5,51,42,129,140,101,93,143,11,98,252,46,185,214,235,162,182,62,79,155,175,75,169,49,215,
69,205,72,0,163,52,60,164,150,166,150,46,210,19,99,183,155,224,197,84,224,98,48,104,225,81,170,0,0,0,148,132,2,10,157,174,23,121,243,255,123,249,109,32,227,192,32,70,180,231,69,105,155,252,117,43,239,
80,131,122,239,16,146,75,161,219,191,165,117,219,247,165,192,69,42,188,31,175,72,180,215,69,245,208,4,142,153,64,5,0,0,0,35,106,237,200,106,144,161,17,204,104,5,50,178,32,70,74,187,135,148,148,122,86,
212,218,244,41,181,3,26,187,134,143,164,116,76,0,35,215,10,90,212,210,127,175,255,92,251,135,119,89,150,180,157,43,99,89,150,148,62,63,175,143,68,35,112,145,111,159,31,195,171,245,59,3,22,203,215,222,
68,230,246,216,166,189,173,227,254,252,143,218,238,200,121,74,102,93,234,17,221,143,217,122,207,30,167,104,222,103,56,150,35,246,214,121,228,186,126,196,177,121,197,115,112,241,200,186,159,233,56,141,
212,229,200,122,63,250,24,180,202,139,212,229,76,231,108,235,136,122,189,234,254,63,251,190,86,90,254,232,207,211,61,191,83,243,114,110,126,39,102,229,62,170,46,207,118,246,253,220,115,93,245,174,245,
153,125,111,229,121,201,171,150,239,145,229,29,101,239,231,254,136,237,158,149,239,104,29,82,122,222,239,253,239,177,20,205,137,56,203,17,139,37,125,229,191,93,92,202,103,93,83,250,248,104,214,165,84,
215,117,93,243,41,36,70,134,144,164,70,250,105,71,78,226,185,125,223,235,77,177,107,8,201,205,129,255,252,204,19,20,54,42,109,95,62,150,107,158,95,197,18,57,21,95,101,5,119,236,119,218,117,29,223,102,
196,142,237,14,29,77,53,235,82,143,232,126,204,214,123,246,56,5,243,62,197,177,28,177,183,206,3,215,245,67,142,205,43,158,131,139,71,214,253,76,199,105,164,46,71,214,251,209,199,160,85,94,164,46,103,58,
103,91,71,212,235,85,247,255,217,247,181,210,242,71,127,158,238,249,157,154,149,179,100,239,111,202,125,84,93,158,237,236,251,185,231,186,234,93,235,51,251,222,200,243,59,175,90,190,71,150,119,148,189,
159,251,35,182,123,86,190,131,117,72,233,177,191,247,215,101,155,164,49,253,193,77,48,227,58,144,241,251,63,186,167,219,29,200,122,99,164,207,207,70,111,143,102,0,103,219,123,162,213,243,34,223,166,214,
235,98,87,80,163,21,192,232,118,132,8,164,45,237,100,47,237,144,238,124,23,197,67,83,155,19,163,19,29,59,103,240,26,0,0,128,23,145,183,43,215,90,43,184,218,43,163,208,35,163,212,73,163,48,164,100,98,56,
73,180,231,69,164,151,70,100,94,140,230,250,71,12,33,169,165,137,68,110,218,153,28,21,188,104,117,165,217,27,180,56,105,151,61,0,0,0,14,54,49,223,196,182,205,89,12,102,52,3,25,75,123,209,49,65,140,239,
205,211,88,59,254,116,67,72,82,26,11,64,212,118,244,123,249,208,216,163,109,218,222,118,197,97,37,149,241,197,219,108,219,153,182,203,4,0,0,224,231,8,181,103,27,77,232,86,48,163,24,200,40,205,121,81,216,
110,179,62,218,138,221,180,205,107,61,43,70,59,36,236,14,104,124,4,10,136,46,239,13,41,137,70,104,66,150,59,4,47,150,181,215,227,98,205,254,1,0,0,192,136,88,187,178,218,62,29,248,143,243,165,245,197,167,
119,214,205,182,227,103,227,3,205,242,74,1,140,124,131,222,251,154,72,52,102,106,24,201,174,224,197,186,222,44,107,7,46,4,44,0,0,0,184,151,118,155,179,216,94,45,180,107,239,24,196,72,41,222,118,31,105,
223,15,199,30,238,49,7,70,174,180,3,181,101,215,221,91,242,46,50,217,172,194,191,150,101,57,228,193,141,60,175,108,217,146,150,118,87,156,60,175,200,44,177,165,114,243,245,91,121,190,165,253,207,243,172,
229,191,173,103,227,56,22,203,45,89,42,199,167,182,172,85,175,136,82,25,165,186,151,182,137,236,75,175,110,181,242,123,235,162,121,229,227,205,74,231,184,118,173,69,206,103,171,222,181,124,91,249,183,
206,125,84,164,158,145,186,215,234,81,187,6,35,245,141,156,239,214,241,136,124,206,242,109,107,105,182,233,70,235,85,170,75,235,252,213,238,17,37,181,253,206,243,173,229,83,187,230,74,245,206,243,104,
125,94,90,239,91,101,68,63,31,189,251,86,239,58,238,213,189,180,46,207,167,148,127,239,220,150,210,150,202,40,165,217,83,159,222,246,145,107,172,117,77,236,57,127,145,123,68,228,123,184,150,54,47,99,155,
111,173,174,173,125,200,211,148,202,142,28,251,86,157,163,159,161,72,253,183,235,91,247,134,61,215,126,94,126,244,119,197,232,61,96,187,31,189,244,249,186,145,251,124,105,121,158,247,182,140,222,111,130,
145,223,94,145,251,84,173,174,173,250,213,234,210,171,71,41,159,214,246,173,237,34,223,107,209,223,82,165,60,70,62,83,181,188,123,247,208,145,207,68,41,159,145,239,159,72,93,107,247,231,232,111,171,214,
62,181,126,67,229,219,207,254,110,26,185,87,244,238,193,173,125,201,235,89,75,127,241,241,209,169,215,101,221,237,241,88,210,242,107,88,201,182,188,207,207,95,121,94,202,188,172,187,58,143,87,153,124,
167,173,206,135,113,123,44,150,116,155,75,190,225,82,72,119,184,145,0,70,97,207,14,79,179,172,235,218,126,44,234,213,235,171,68,215,239,47,233,242,191,95,175,47,17,172,53,229,121,55,142,247,229,130,104,
173,47,189,110,45,43,45,175,189,223,254,109,253,16,40,237,115,228,125,175,110,145,125,26,217,239,94,121,209,60,162,249,207,214,63,90,206,158,99,209,59,119,145,252,35,199,110,100,255,162,219,245,28,113,
92,70,182,61,226,122,235,229,219,58,54,123,234,216,58,255,123,234,213,187,167,180,140,238,107,107,251,90,29,74,247,179,200,182,35,233,70,211,140,126,222,183,203,102,246,41,146,166,242,125,22,78,59,147,
102,111,25,35,235,107,199,47,122,60,239,249,25,157,253,126,143,164,25,201,59,242,93,81,74,219,251,81,189,167,254,173,122,30,89,198,204,119,210,232,61,96,251,126,244,247,200,204,125,105,54,239,124,217,
236,247,234,17,191,107,122,121,206,238,83,52,191,210,253,162,101,246,183,84,190,238,200,251,202,204,53,209,202,231,136,107,175,149,231,145,247,252,104,131,127,246,123,104,244,94,49,122,239,202,143,75,
237,187,42,247,199,31,215,239,171,219,93,242,47,95,227,235,182,75,198,31,127,4,130,255,95,239,255,88,175,179,44,22,189,126,253,89,47,27,214,14,68,180,253,223,59,25,225,192,71,111,14,140,72,101,182,127,
239,234,122,232,72,35,97,231,134,209,30,46,210,200,51,250,33,184,183,232,135,3,224,236,222,241,126,246,142,251,244,72,249,241,115,60,247,113,252,120,103,174,239,215,245,110,231,110,207,254,116,219,153,
229,117,197,33,37,173,247,149,44,39,134,146,204,58,36,118,240,136,33,36,91,119,186,82,227,17,209,114,240,98,103,228,179,147,5,0,0,0,63,88,175,37,124,105,119,22,131,33,133,222,24,233,87,219,246,234,73,
37,205,94,140,107,160,18,83,30,26,141,26,13,96,220,191,114,141,46,64,223,107,174,146,180,186,121,94,175,90,214,181,16,103,152,236,114,36,96,1,0,0,64,68,222,126,172,142,28,233,5,50,242,161,55,233,122,30,
139,117,109,180,218,55,219,111,179,170,13,129,121,76,239,140,161,121,51,246,14,33,57,151,78,240,162,176,65,57,143,106,16,101,243,15,0,0,0,102,244,218,150,213,118,233,237,178,155,182,238,246,237,89,166,
65,56,200,189,2,24,199,246,212,168,6,38,98,19,202,12,5,47,138,229,151,147,3,0,0,192,46,189,64,70,113,131,107,205,185,44,174,214,85,218,214,199,7,58,238,50,122,227,209,115,96,60,70,119,82,146,96,240,34,
122,14,223,44,170,5,0,0,192,193,122,147,125,150,167,186,168,12,241,184,29,78,114,245,88,212,187,77,121,241,92,207,14,96,220,60,63,118,109,61,190,38,210,251,162,55,27,107,107,206,140,70,178,106,157,0,0,
0,160,103,219,134,108,5,51,74,193,135,226,220,24,183,9,111,154,204,197,121,46,42,115,97,220,20,121,211,230,189,105,191,63,218,249,231,192,216,17,40,184,237,125,113,64,240,226,76,143,83,5,0,0,224,245,244,
218,149,225,33,37,249,83,55,119,180,85,95,160,157,27,13,96,156,172,243,73,191,247,69,55,120,81,203,118,120,18,21,0,0,0,152,16,121,136,68,63,147,171,119,75,109,132,66,109,46,140,115,8,197,28,158,61,132,
36,238,232,227,219,154,169,181,149,174,98,57,223,5,0,0,0,192,9,172,189,246,121,235,241,169,249,48,143,218,99,79,103,189,208,124,25,167,11,96,220,140,179,105,205,127,177,73,187,100,145,165,235,92,58,67,
71,118,4,47,46,129,11,225,11,0,0,0,202,46,237,198,64,32,99,42,136,145,37,216,174,95,83,90,139,115,97,244,170,114,190,86,238,185,231,192,136,62,65,164,157,73,32,207,104,217,191,44,105,253,254,7,0,0,0,17,
161,182,228,116,155,117,103,91,121,164,236,39,57,119,0,227,162,115,12,243,222,23,187,243,238,4,47,0,0,0,96,143,225,32,198,112,124,162,50,98,161,152,118,48,239,39,57,247,16,146,230,35,85,39,38,38,233,62,
98,181,178,44,25,42,2,0,0,192,209,26,67,75,74,195,61,214,116,189,108,93,179,249,43,234,19,90,124,183,101,183,249,230,163,80,174,138,63,95,235,247,116,1,140,166,35,15,224,68,240,34,158,247,68,125,0,0,0,
120,31,3,19,99,46,105,29,8,98,28,56,137,231,209,19,130,222,217,121,135,144,100,193,132,117,93,191,35,64,219,215,203,250,251,253,250,249,185,221,34,203,47,21,183,223,150,87,44,99,253,188,90,118,91,205,
75,186,148,214,207,117,51,191,104,57,138,177,110,202,41,213,163,180,62,175,83,173,30,173,242,106,233,90,117,168,45,139,148,223,170,107,173,158,173,101,181,243,31,93,87,59,230,165,125,170,237,127,175,238,
145,125,141,28,147,86,217,145,253,14,93,175,149,250,247,246,179,119,61,69,234,223,187,230,91,249,140,214,191,118,124,102,175,215,209,99,212,74,223,75,51,27,241,174,221,47,162,231,165,85,151,72,157,123,
247,147,209,227,215,42,175,149,71,43,223,232,126,181,182,139,222,39,162,215,117,171,254,53,123,143,201,104,61,163,249,213,62,207,51,199,167,148,119,107,63,242,229,249,253,101,244,152,245,62,195,189,251,
110,164,252,232,181,20,169,103,237,254,83,122,93,170,115,244,254,85,202,167,87,239,217,117,173,186,180,142,103,107,255,34,251,85,218,182,149,190,117,220,122,215,105,180,46,209,107,185,181,93,175,222,173,
50,34,203,106,199,47,186,159,189,101,173,247,189,188,163,199,48,250,153,232,93,39,189,107,163,150,182,119,173,143,214,59,92,183,212,191,174,74,117,29,57,14,163,215,111,100,63,243,101,121,30,189,52,145,
227,214,250,28,149,94,95,189,95,55,255,26,251,116,73,191,164,74,57,141,227,252,107,125,158,223,239,118,241,182,141,92,27,70,114,115,156,58,231,225,153,254,148,174,227,66,203,230,253,178,227,223,71,112,
249,77,186,127,240,79,255,201,95,166,148,254,78,106,29,176,237,186,106,178,181,254,182,148,119,97,89,168,231,197,57,207,43,0,0,0,103,209,9,100,92,44,155,255,191,87,53,126,189,216,84,166,212,3,99,89,210,
186,174,127,243,191,255,251,255,248,171,116,93,251,53,248,47,5,254,14,59,111,15,140,35,245,14,207,76,240,34,120,1,2,0,0,64,74,41,212,142,44,182,69,123,61,34,126,72,219,244,125,2,24,87,39,52,216,123,99,
186,172,253,89,0,0,0,240,67,29,209,166,108,182,109,175,198,149,28,80,216,57,156,111,18,207,117,253,117,168,127,247,109,249,94,190,77,147,210,215,252,23,217,178,171,109,178,151,183,233,10,239,211,101,2,
149,90,253,106,43,0,0,0,32,104,77,141,209,34,235,237,164,158,235,218,158,112,179,153,223,239,52,107,158,230,42,223,101,147,240,124,141,223,247,233,129,113,144,246,179,120,31,87,15,0,0,0,222,92,163,141,
57,252,52,204,31,224,245,2,24,123,162,64,129,222,23,245,109,231,139,5,0,0,128,162,145,182,230,158,54,109,47,175,23,112,190,33,36,41,141,7,11,162,243,95,60,202,11,94,8,0,0,0,28,168,53,220,227,33,54,99,
74,122,195,79,74,155,158,208,233,2,24,183,207,155,205,230,192,40,62,66,181,50,65,201,224,252,23,213,185,47,162,39,79,224,2,0,0,128,148,126,183,15,35,129,131,234,252,21,133,185,48,70,242,89,178,117,105,
36,54,113,190,246,237,201,135,144,220,241,128,29,29,108,16,188,0,0,0,32,247,82,109,207,115,183,107,79,30,192,168,91,118,13,51,41,228,87,59,81,145,114,4,47,0,0,0,168,137,180,25,43,73,186,147,121,14,182,
71,135,219,210,39,242,178,1,140,211,16,188,0,0,0,160,71,219,113,183,115,206,129,241,253,232,217,219,185,45,150,175,191,215,231,62,48,7,70,62,223,69,246,190,50,251,69,191,7,134,139,16,0,0,128,7,58,170,
21,90,204,167,212,30,63,137,215,232,129,241,172,3,39,120,1,0,0,192,81,122,109,200,103,53,49,95,164,109,251,26,1,12,0,0,0,224,71,19,192,0,0,0,0,78,239,156,115,96,252,126,115,253,247,106,217,213,86,183,
233,242,52,55,235,242,46,50,133,46,51,134,144,0,0,0,112,50,225,150,232,186,166,180,44,245,213,189,109,79,70,15,12,0,0,0,224,244,4,48,0,0,0,128,211,19,192,0,0,0,0,78,79,0,3,0,0,0,56,189,211,77,226,89,158,
176,115,187,172,144,206,36,158,0,0,0,16,116,153,216,179,209,166,61,97,123,87,15,12,0,0,0,224,244,4,48,0,0,0,128,211,19,192,0,0,0,0,78,239,116,115,96,172,47,50,7,198,178,44,215,117,133,31,226,93,175,253,
71,236,215,187,30,187,87,231,188,188,23,231,19,128,159,224,168,111,186,102,62,39,252,62,213,3,99,146,31,71,252,84,239,122,237,63,98,191,222,245,216,189,58,231,229,189,56,159,0,240,190,4,48,0,0,0,128,211,
19,192,0,0,0,0,78,79,0,3,0,0,0,56,61,1,12,0,0,0,224,244,206,247,20,146,148,110,159,62,114,194,167,144,148,243,0,120,172,159,248,196,133,87,223,231,87,175,63,228,122,215,116,244,154,247,217,0,136,123,200,
83,72,78,72,15,12,128,23,246,19,127,236,191,250,62,191,122,253,33,215,187,166,163,215,188,207,6,0,61,2,24,0,0,0,192,233,9,96,0,0,0,0,167,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,2,24,0,0,0,192,233,157,
239,49,170,87,143,76,93,211,178,44,205,180,151,245,235,186,166,165,176,60,207,119,155,254,226,242,216,174,200,54,219,52,151,247,121,186,226,190,108,180,202,203,243,207,183,235,213,125,91,151,60,93,174,
86,239,218,186,86,125,242,215,189,178,107,106,229,246,242,40,213,45,122,126,90,251,223,50,242,184,183,210,185,171,149,93,179,231,156,68,202,170,93,127,181,235,174,85,167,210,117,89,43,63,146,46,82,118,
239,124,182,202,143,238,87,158,174,102,102,127,35,215,121,45,143,75,157,34,247,162,210,103,35,95,183,205,35,122,236,123,199,183,119,44,35,229,182,182,175,41,222,7,214,53,165,193,123,100,235,158,221,186,
119,143,94,119,163,199,177,246,153,157,249,220,143,126,39,212,234,28,189,183,214,174,225,214,62,141,124,183,111,183,171,213,189,183,109,100,159,106,235,123,247,251,218,117,82,186,102,163,191,63,106,219,
150,210,148,234,56,186,143,181,253,217,230,53,250,189,215,186,70,242,101,209,223,62,35,215,121,235,88,246,234,91,170,115,228,222,82,74,23,253,13,90,170,127,233,158,95,122,95,251,13,89,171,79,239,154,139,
94,87,173,207,75,237,179,222,210,186,7,215,202,137,44,159,185,167,150,234,86,42,47,207,63,178,252,178,174,86,159,145,223,126,163,247,218,82,249,173,115,26,249,252,212,242,202,211,108,235,149,235,125,39,
70,238,155,45,209,223,34,121,154,145,239,236,90,93,122,159,185,82,93,70,175,207,77,6,151,138,220,148,81,218,207,103,251,83,74,105,187,167,203,230,253,178,227,223,71,112,249,77,186,191,255,143,255,209,
95,166,148,254,206,182,146,203,246,192,93,94,94,29,204,181,176,108,147,182,96,242,244,2,0,0,192,188,94,176,33,208,88,61,44,180,176,41,171,144,231,223,252,159,255,249,191,254,234,107,213,186,73,22,249,
151,2,127,135,25,66,2,0,0,0,156,158,0,6,0,0,0,112,122,167,155,3,35,50,222,38,50,254,49,50,150,104,155,87,158,95,158,103,205,232,216,206,86,190,35,99,237,34,99,215,122,99,179,70,198,31,231,121,68,198,79,
182,234,159,239,71,105,124,102,100,223,123,227,124,91,235,122,99,73,163,203,71,199,157,69,198,35,183,198,236,213,214,247,202,156,29,195,57,243,121,105,93,143,189,235,46,50,110,48,175,87,41,223,220,232,
88,199,86,158,189,115,223,26,179,25,25,231,60,90,255,232,54,145,123,92,100,220,246,101,125,111,255,123,117,143,140,235,108,165,111,229,83,219,175,82,157,74,215,104,111,172,109,190,237,204,178,94,249,145,
123,68,235,30,213,170,115,105,221,204,253,187,87,151,214,181,217,75,223,26,219,221,187,207,71,174,137,218,126,68,235,95,218,182,85,207,222,254,68,238,255,51,231,61,58,206,186,149,79,244,179,215,50,58,
142,187,118,204,162,101,70,62,243,145,125,136,148,219,59,94,209,109,123,247,216,210,185,236,229,29,189,255,142,212,101,123,76,162,199,166,148,111,190,31,179,159,151,218,181,213,90,222,250,222,27,185,55,
213,142,219,232,253,43,146,95,244,51,16,61,150,181,237,122,223,197,53,189,115,189,85,186,198,74,121,69,238,251,173,251,69,244,117,111,93,105,95,75,223,213,189,125,201,207,97,158,254,42,143,165,94,214,
119,250,212,184,63,44,229,115,82,74,159,150,239,194,54,219,143,95,3,143,178,164,235,17,54,219,247,75,224,223,71,229,239,159,54,239,183,255,254,84,121,255,157,246,159,253,203,127,254,31,82,74,127,47,165,
244,125,16,211,246,224,127,143,154,217,126,40,110,211,109,23,151,214,45,55,31,170,194,135,172,254,185,43,151,7,0,0,0,45,189,0,65,113,117,22,192,200,243,216,190,207,183,95,150,219,21,151,96,198,82,72,247,
59,175,255,251,223,254,243,127,253,215,41,165,207,175,127,235,215,223,63,54,203,74,239,47,105,255,216,108,83,250,219,251,151,178,215,134,144,0,0,0,0,231,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,2,24,0,
0,0,192,233,9,96,0,0,0,0,167,39,128,193,67,205,60,150,9,128,95,220,67,121,85,174,221,99,156,241,56,158,165,78,103,169,7,112,95,127,126,118,5,114,75,74,205,199,202,28,117,107,114,139,123,30,95,48,0,243,
220,67,121,85,174,221,99,156,241,56,158,165,78,103,169,7,116,29,240,24,213,155,60,38,31,163,154,90,143,81,93,215,116,54,122,96,0,0,0,0,167,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,2,24,0,0,0,192,233,157,
46,128,97,242,157,113,142,89,204,61,142,211,51,142,189,243,205,81,92,75,0,239,199,189,29,234,30,245,249,240,57,188,159,211,61,133,36,165,246,9,247,20,146,50,31,146,24,65,12,184,230,90,2,120,63,238,237,
80,119,138,32,198,171,60,133,228,132,78,215,3,3,0,0,0,32,39,128,1,0,0,0,156,158,0,6,0,0,0,112,122,231,155,3,99,89,58,99,110,214,75,194,71,212,6,0,0,0,142,115,138,57,48,74,219,153,3,3,0,0,0,96,55,1,12,
0,0,0,224,244,222,43,128,113,226,174,46,0,0,0,240,80,111,214,70,126,175,0,6,0,0,0,240,150,78,55,137,231,210,153,196,243,168,248,209,123,197,161,0,0,0,120,9,143,156,196,243,42,157,73,60,1,0,0,0,238,238,
53,2,24,207,138,0,245,138,61,113,100,10,0,0,128,147,153,234,125,241,0,47,210,182,125,141,0,198,153,189,200,137,6,0,0,224,137,180,29,119,59,231,28,24,151,176,83,227,252,30,127,234,151,180,164,245,240,92,
1,0,0,32,20,192,40,36,89,11,11,151,157,115,96,172,223,211,93,148,230,189,232,183,199,159,229,101,123,96,172,163,7,115,54,218,21,217,76,36,13,0,0,128,154,201,224,197,97,121,111,12,183,165,79,228,228,1,
140,59,30,217,163,131,14,157,167,167,0,0,0,240,195,220,163,157,120,215,118,231,185,219,180,39,15,96,68,85,14,242,224,177,47,117,205,25,206,71,32,3,0,0,224,103,27,109,23,86,146,86,219,168,131,249,156,61,
48,17,117,206,57,48,150,37,69,166,163,184,58,5,151,244,203,146,66,27,71,242,220,67,16,3,0,0,128,136,145,192,67,116,254,139,237,155,222,28,25,223,235,55,243,95,156,112,138,200,215,235,129,177,39,48,208,
58,209,95,14,233,133,1,0,0,0,17,35,189,47,2,109,218,120,185,175,215,200,125,189,0,198,168,35,207,201,235,157,95,0,0,0,206,74,123,117,200,235,4,48,74,189,37,142,24,223,51,210,11,99,48,107,0,0,0,40,106,
180,45,67,189,47,38,50,47,182,161,95,168,39,198,233,230,192,72,203,242,245,44,218,239,73,45,218,201,55,219,165,53,50,113,70,48,93,90,210,82,27,244,115,210,241,64,0,0,0,188,128,78,240,162,184,186,55,124,
100,247,252,23,215,235,206,216,228,125,157,30,24,123,244,2,74,51,17,167,37,144,47,0,0,0,92,204,182,35,123,109,214,31,210,54,125,205,0,198,230,228,77,13,35,169,68,152,114,161,71,214,8,100,0,0,0,208,18,
108,55,134,135,142,52,3,26,129,225,35,47,52,108,100,235,116,67,72,150,175,3,185,124,124,92,13,245,88,215,245,215,240,146,77,218,117,93,211,178,93,182,44,105,253,252,44,230,151,150,148,214,207,245,247,
178,175,161,36,235,166,140,165,120,18,175,135,146,92,202,188,170,87,74,105,249,88,174,223,167,229,247,235,37,91,183,212,215,213,142,199,165,220,109,249,173,252,91,242,125,168,165,105,229,85,90,159,215,
173,246,250,178,93,235,216,143,28,187,218,118,181,58,148,222,183,234,153,231,189,173,115,47,93,169,204,86,217,35,215,72,235,28,70,142,81,190,31,173,115,221,170,119,94,199,222,181,85,202,183,85,151,222,
121,233,213,167,84,191,214,121,235,29,143,94,190,163,251,95,202,183,181,143,165,186,110,141,92,139,173,250,84,239,117,131,247,155,90,121,181,116,173,50,122,215,74,175,220,209,252,123,117,235,221,67,34,
199,170,244,57,40,213,161,182,239,145,123,91,107,251,150,72,189,107,105,123,199,171,181,190,118,77,183,62,163,189,251,227,200,119,232,54,143,222,189,162,180,111,165,188,122,233,103,150,71,245,238,79,145,
207,114,244,179,216,187,143,238,45,107,91,230,104,29,123,229,149,202,168,125,39,247,174,223,222,111,137,200,181,51,122,236,162,223,91,181,125,104,149,53,250,29,23,253,45,86,170,219,182,142,165,186,148,
242,25,253,62,42,149,147,167,169,237,123,228,158,27,249,94,142,124,87,151,242,239,221,39,106,191,15,90,247,226,200,247,93,233,253,54,239,218,178,222,125,33,114,223,139,188,110,213,127,68,228,250,168,149,
85,60,143,203,109,250,82,218,171,114,151,143,155,208,67,241,51,242,145,245,67,216,108,116,115,108,182,199,126,217,172,191,148,253,149,246,234,216,126,124,236,254,254,185,151,211,5,48,82,42,95,44,223,203,
58,95,72,173,131,28,74,95,184,64,46,81,176,37,221,158,196,214,251,217,117,37,75,118,97,205,228,49,146,46,90,159,218,178,209,215,189,252,103,182,27,61,86,189,50,246,44,219,46,111,109,115,196,249,237,165,
157,253,220,68,182,155,169,227,158,207,212,104,125,162,251,50,91,206,222,115,52,243,25,30,61,215,209,178,71,223,183,204,222,155,246,214,225,200,252,246,220,67,102,63,95,145,242,163,251,48,115,254,246,
28,143,61,239,35,251,240,168,239,208,217,251,222,81,159,203,94,94,17,189,107,108,230,90,136,92,143,179,247,184,163,126,219,28,241,155,104,230,55,197,200,49,152,249,13,17,169,107,100,253,204,231,123,239,
119,212,204,190,221,235,183,71,52,77,190,239,247,248,252,239,253,238,169,213,239,168,251,215,222,123,229,204,189,59,114,13,221,227,158,57,186,237,200,111,199,109,154,210,113,104,245,252,191,9,86,12,212,
171,180,236,230,117,227,51,95,11,242,62,211,41,135,144,20,15,250,215,255,54,137,190,211,109,187,194,44,31,31,105,249,90,183,44,215,187,183,124,44,215,231,231,59,221,239,188,242,19,184,181,166,165,120,
193,229,23,193,246,164,143,174,203,255,229,199,164,150,95,233,125,77,52,77,239,134,58,243,5,94,58,6,181,15,89,244,216,213,182,27,189,97,246,142,101,233,220,244,210,149,242,239,221,228,163,215,72,75,228,
24,213,142,85,171,110,189,114,70,110,252,181,235,160,119,93,141,92,151,173,207,81,235,179,60,122,124,163,219,229,121,212,242,29,41,191,117,93,244,174,197,214,178,145,123,93,207,72,186,200,61,110,228,60,
237,201,191,183,109,171,188,232,177,170,157,199,222,185,140,124,94,34,219,183,68,234,93,75,219,59,94,173,245,181,227,208,187,79,244,206,95,173,156,86,30,189,123,69,169,46,165,188,34,247,201,209,229,81,
189,115,62,122,207,217,190,47,93,143,173,242,246,150,213,187,38,163,159,231,210,118,189,243,223,186,46,70,62,251,209,107,39,186,188,149,87,109,63,123,249,213,246,47,122,45,214,174,131,200,253,169,119,
47,41,229,19,57,207,181,178,106,105,242,215,173,123,207,72,25,173,101,173,123,87,171,188,188,126,249,235,214,57,136,92,107,35,247,202,209,251,194,200,57,104,189,110,213,127,68,228,250,168,149,21,217,174,
154,118,249,168,111,91,186,71,125,100,233,242,183,219,54,240,166,204,75,155,121,89,150,171,229,75,214,206,30,253,204,63,218,233,122,96,84,15,216,154,110,151,111,186,181,212,14,111,249,131,153,45,200,243,
94,150,98,79,140,239,164,203,114,243,132,146,145,47,168,200,135,175,149,54,114,35,239,25,185,209,143,172,143,222,100,102,110,96,189,60,75,131,201,184,52,0,0,15,142,73,68,65,84,233,102,110,218,145,122,
69,235,82,203,175,87,246,76,222,123,211,140,30,207,90,57,35,55,187,232,241,25,189,198,103,175,203,86,29,122,229,204,220,236,163,215,215,72,154,153,207,210,209,105,34,229,143,164,221,115,158,142,218,207,
210,242,145,207,113,52,207,145,229,163,63,8,107,219,247,140,212,111,244,158,125,244,125,52,82,214,204,121,153,173,251,104,250,61,247,251,72,217,247,188,231,140,220,15,247,126,127,205,158,251,17,145,239,
141,35,126,243,28,121,45,204,124,166,71,127,231,204,220,203,103,126,35,204,252,14,216,123,158,107,203,143,186,231,142,150,91,91,54,115,207,58,226,187,105,166,206,145,107,104,116,127,102,174,223,89,71,
93,175,181,117,107,90,82,106,109,91,202,103,41,172,106,93,55,3,199,110,239,103,254,81,78,217,3,227,91,241,128,141,30,196,44,125,227,66,232,151,253,219,154,218,93,125,0,0,0,96,43,212,142,156,110,179,238,
108,43,215,202,62,145,115,7,48,122,182,17,172,102,20,106,71,16,35,24,200,16,204,0,0,0,32,23,110,51,214,218,159,51,193,139,112,91,249,181,156,114,8,73,177,171,202,146,82,26,153,67,100,89,210,210,154,116,
100,89,110,135,137,212,202,40,165,45,103,58,80,65,0,0,0,222,93,168,149,88,11,44,132,71,11,108,3,22,249,208,148,234,155,219,50,78,30,224,136,246,192,56,217,244,163,149,177,65,205,99,29,236,30,83,203,35,
208,27,3,0,0,0,194,90,237,204,137,224,69,115,85,41,120,113,30,161,152,195,25,134,144,180,43,186,35,104,144,71,158,118,7,49,46,233,5,51,0,0,0,152,17,105,83,78,6,47,110,219,192,131,245,106,123,122,199,134,
103,7,48,198,14,192,82,121,211,232,133,177,43,136,209,59,127,130,25,192,27,56,227,12,211,192,125,249,220,3,60,88,180,237,88,107,135,206,4,47,34,189,47,198,191,14,158,26,196,120,141,57,48,194,115,80,92,
210,167,171,195,90,120,72,76,186,57,238,181,50,162,115,111,248,33,0,188,48,141,25,248,121,124,238,1,78,166,53,157,65,36,113,107,122,133,94,0,227,69,190,19,238,213,3,227,126,81,153,72,47,140,108,85,185,
27,205,192,35,99,150,205,63,0,0,0,56,66,175,173,25,108,203,174,123,130,23,247,113,151,152,192,179,135,144,28,171,17,53,26,10,98,244,198,34,9,100,0,0,0,48,171,215,174,172,182,75,59,193,139,82,62,111,100,
52,128,177,55,138,50,191,125,53,162,20,159,248,36,28,196,184,148,23,9,100,232,157,1,0,0,64,205,72,219,177,217,14,13,4,47,154,237,210,74,155,122,95,144,227,161,49,130,211,205,129,209,58,97,245,195,186,
153,168,34,159,203,98,73,217,251,37,45,55,135,232,146,115,105,14,140,175,117,145,57,56,4,49,0,0,0,24,213,12,34,148,215,173,75,254,223,246,11,115,73,214,242,232,78,185,112,78,35,61,48,74,45,248,181,242,
119,52,159,88,5,90,227,122,154,243,97,228,179,179,254,250,119,171,17,14,243,196,17,0,0,0,142,210,109,99,150,219,167,197,246,236,115,130,23,35,237,255,86,204,32,28,35,120,214,28,24,181,10,118,43,222,14,
98,108,116,130,24,191,242,170,110,220,206,124,123,161,221,43,160,49,242,212,21,0,0,40,241,155,146,119,177,189,150,95,245,186,14,183,35,235,237,209,98,27,54,208,246,189,202,250,59,175,80,91,118,186,237,
126,15,165,33,36,107,58,110,48,196,186,249,87,90,119,83,238,242,241,241,171,240,252,96,110,46,210,171,199,126,173,235,38,167,205,80,146,82,30,23,159,159,191,215,127,229,251,61,172,100,59,100,100,249,248,
90,191,182,135,146,124,124,252,94,62,52,228,164,144,246,170,252,202,250,82,89,165,229,181,124,74,101,180,202,105,213,171,182,125,77,237,188,214,246,171,180,125,171,156,203,250,86,29,71,207,81,158,174,
113,109,222,164,169,157,147,217,114,91,199,168,116,206,74,231,176,84,143,218,241,218,166,29,185,30,75,251,179,93,87,122,63,146,79,107,253,72,25,185,214,231,101,166,190,165,122,229,251,146,127,126,107,
101,150,182,43,213,37,242,185,201,63,39,173,114,182,117,44,165,139,168,213,121,228,26,45,237,71,158,247,204,117,212,42,175,85,118,235,158,91,75,191,77,211,187,30,163,247,227,90,254,121,221,183,229,230,
245,136,110,19,249,108,215,234,27,173,107,105,155,200,119,88,235,220,180,142,93,228,216,150,234,182,85,58,159,189,107,189,149,79,107,223,122,117,140,222,191,242,50,122,249,149,246,179,100,207,247,68,111,
31,34,247,131,90,121,165,58,149,202,104,213,189,87,255,210,185,142,158,171,232,119,91,239,248,151,210,183,202,232,253,46,136,212,123,207,111,149,217,245,249,62,244,238,181,121,125,123,223,27,189,244,165,
215,165,186,180,236,185,247,228,231,115,91,231,90,94,145,207,85,239,59,184,87,207,145,253,47,229,89,202,119,244,28,68,203,106,253,38,234,93,15,249,186,60,77,254,186,85,94,177,172,122,189,215,175,54,233,
146,215,51,207,171,248,61,124,121,93,217,239,254,239,131,188,102,165,154,174,155,127,71,185,201,43,50,7,198,154,210,85,64,35,223,253,232,118,181,52,235,77,218,210,69,177,89,182,166,148,150,171,19,190,
221,175,206,15,193,148,138,1,135,75,36,235,38,144,177,44,215,121,214,246,40,175,115,105,31,106,58,251,219,205,187,116,225,237,201,231,168,122,69,204,228,215,43,39,154,103,180,190,35,229,69,214,237,41,
247,136,115,56,83,183,61,215,81,52,237,232,245,20,189,62,70,206,121,47,237,61,235,59,122,189,215,234,50,115,92,90,219,69,243,143,40,229,115,244,53,122,244,189,184,181,126,244,26,201,151,207,126,86,162,
249,143,228,57,243,217,143,230,61,82,167,217,60,71,247,109,100,125,79,233,124,142,94,235,145,237,71,234,120,196,247,71,109,251,200,177,217,91,86,116,155,145,99,51,187,236,222,247,161,209,207,202,204,111,
136,217,207,99,164,222,247,248,173,114,244,189,118,251,58,250,217,140,126,174,163,117,233,213,111,100,251,61,231,111,207,181,57,83,135,81,35,231,122,207,111,147,217,239,140,217,223,74,181,247,223,203,
183,219,222,102,253,187,199,69,86,70,235,122,190,41,243,182,46,235,71,101,48,70,125,63,71,2,20,209,52,145,192,200,149,222,16,146,145,232,201,90,121,189,93,214,202,111,40,90,179,142,92,180,181,11,177,176,
188,62,63,198,247,134,217,63,0,0,0,136,136,181,39,171,237,210,74,59,118,164,77,60,56,239,197,108,59,190,23,31,104,229,87,117,196,83,72,34,61,45,242,244,165,127,251,162,1,203,18,239,118,21,216,238,166,
71,70,61,227,112,21,1,0,0,160,166,249,31,211,143,238,185,51,166,214,142,31,205,99,151,86,0,99,54,168,176,39,24,177,46,203,146,150,232,1,94,150,223,67,73,190,222,23,131,24,87,35,76,150,116,115,220,182,
229,221,4,56,178,183,71,142,232,1,0,0,224,199,202,3,22,55,45,225,102,219,184,183,241,237,246,235,178,140,54,214,247,180,128,103,183,173,110,183,167,7,198,118,46,140,53,251,187,77,211,251,183,77,55,28,
248,88,35,65,140,155,152,197,165,152,193,201,105,82,57,34,38,168,1,0,0,64,75,123,170,130,204,72,224,162,178,168,20,188,152,84,106,187,247,218,248,219,109,243,191,211,45,232,35,134,144,148,140,4,36,182,
193,143,169,29,41,6,49,82,202,102,95,221,148,214,94,120,157,71,158,79,177,252,96,69,1,0,0,160,164,27,96,152,11,92,164,116,104,240,98,116,155,67,245,38,241,28,81,219,169,94,52,230,106,249,178,35,136,113,
115,82,138,99,132,74,91,119,38,81,249,154,40,101,249,248,56,100,252,208,208,48,153,96,250,210,250,214,54,145,242,71,234,56,226,94,249,62,171,220,123,239,79,52,255,209,235,170,86,206,222,124,222,221,246,
216,148,142,213,61,142,221,232,231,187,151,215,35,234,220,42,255,29,202,56,139,179,29,207,145,251,213,76,254,71,58,235,117,114,116,189,238,185,159,223,223,27,149,223,79,123,191,191,142,188,247,157,193,
81,223,211,143,114,150,223,55,151,180,71,252,30,58,106,159,142,190,47,62,235,94,126,175,115,48,147,254,89,70,127,19,205,124,207,53,215,95,38,228,172,77,204,249,43,209,230,95,97,213,109,230,87,111,139,
237,228,160,172,109,30,105,211,247,122,95,236,118,207,73,60,107,189,48,106,19,119,174,233,107,14,140,93,65,130,233,222,24,161,149,169,91,191,129,231,31,143,126,168,5,49,206,91,238,217,190,228,143,40,231,
21,190,116,158,165,247,101,119,246,32,70,105,91,65,140,215,117,182,227,41,136,177,223,79,12,98,212,210,190,91,16,35,165,99,239,221,247,118,166,223,55,163,233,5,49,98,101,220,243,28,204,164,127,134,187,
7,49,166,175,197,198,250,64,224,34,165,169,249,46,74,66,29,17,58,233,183,235,118,25,9,96,212,230,185,136,164,25,153,11,99,183,155,33,37,41,253,58,161,173,9,58,111,74,46,197,93,2,94,224,67,10,0,0,192,153,
116,218,145,173,213,149,224,197,65,34,109,249,217,222,23,195,113,128,209,30,24,219,0,69,74,215,221,21,70,122,97,212,210,28,214,181,228,114,194,186,189,49,190,215,101,53,106,38,104,38,4,0,0,128,138,96,
112,161,219,73,227,174,129,139,239,44,55,127,123,13,224,104,239,139,233,78,12,121,0,163,21,136,104,181,224,183,189,46,74,189,48,34,61,47,214,148,2,67,52,70,21,135,144,108,186,173,78,5,51,74,9,1,0,0,96,
135,78,19,179,26,160,248,30,210,119,184,153,30,24,121,112,34,18,4,9,45,143,244,192,232,245,160,40,165,221,254,237,13,39,169,165,59,86,165,247,197,58,18,204,248,222,232,192,122,1,0,0,240,243,4,91,191,205,
94,21,143,153,194,160,212,249,160,53,55,70,42,252,141,150,211,116,212,99,84,243,222,22,173,30,24,165,101,41,149,15,192,241,26,195,72,186,193,140,239,149,71,87,10,0,0,0,126,233,14,5,121,220,220,139,145,
222,22,189,30,24,249,235,105,181,0,70,41,8,209,91,95,27,78,146,191,174,245,188,88,83,74,159,187,246,102,196,246,132,119,130,25,223,155,12,60,97,4,0,0,0,122,194,243,86,60,231,129,17,159,169,220,233,160,
57,53,68,101,89,190,188,164,185,126,102,18,207,148,110,131,20,151,101,121,218,94,16,227,146,238,51,165,244,81,200,227,49,58,193,140,239,85,189,71,234,8,112,0,0,0,176,177,107,98,205,115,60,229,242,210,
102,15,205,107,153,202,193,135,72,112,163,235,168,33,36,151,194,243,128,70,47,136,145,111,247,121,248,36,158,163,74,101,71,3,19,231,184,184,0,0,0,56,137,112,43,241,156,237,201,82,15,140,209,158,23,135,
253,151,254,145,0,70,100,146,205,60,120,177,221,174,20,196,184,172,191,244,192,72,105,89,254,98,160,78,143,209,187,144,244,188,0,0,0,160,229,156,1,138,186,95,109,243,75,219,189,212,3,35,85,94,143,246,
176,8,55,168,255,156,226,129,137,210,16,145,92,109,62,140,94,100,230,251,239,31,127,251,183,255,49,165,229,239,110,138,201,203,173,213,245,197,174,6,0,0,0,120,136,222,156,19,95,150,205,251,245,255,165,
250,176,145,232,112,146,212,72,23,169,223,85,154,75,163,191,20,36,88,10,239,151,194,251,252,223,71,229,125,244,111,43,223,86,93,242,253,168,189,6,0,0,128,119,83,154,44,115,251,186,213,91,162,53,199,197,
182,7,70,244,111,171,231,70,45,224,81,10,122,92,237,95,107,8,73,173,215,69,235,169,36,151,215,249,186,214,223,203,240,145,207,116,29,168,200,93,214,111,203,203,159,132,178,253,91,26,206,2,0,0,0,239,170,
22,184,200,255,182,230,181,168,5,32,122,193,136,86,79,139,96,15,144,102,218,93,115,96,108,51,205,131,4,165,116,181,192,69,233,117,171,39,70,45,112,81,123,34,138,222,23,0,0,0,252,4,173,94,24,181,64,70,
228,95,52,144,145,215,165,215,211,34,175,103,211,236,83,72,106,61,49,106,21,200,39,245,44,165,219,6,49,122,229,150,2,23,122,95,0,0,0,240,211,245,122,97,140,246,196,136,244,188,40,229,17,173,99,88,47,128,
113,9,12,228,67,68,106,61,49,74,242,32,194,54,80,145,111,219,235,125,145,58,175,183,127,243,215,0,0,0,240,238,142,14,96,68,3,27,145,124,162,245,44,170,5,48,106,61,44,242,64,70,74,237,96,70,173,7,196,118,
24,73,62,73,103,173,204,188,183,69,107,254,139,156,64,6,0,0,0,239,172,213,246,142,4,50,90,65,136,232,252,23,165,237,243,250,212,70,101,244,246,101,122,14,140,90,47,140,200,163,86,107,203,91,189,47,106,
65,140,84,248,91,170,71,109,25,0,0,0,188,186,86,240,98,251,186,22,200,216,211,19,163,55,116,36,218,251,162,235,18,192,168,245,184,40,173,171,245,194,24,25,195,210,234,121,145,7,43,74,143,110,77,133,191,
181,101,45,130,26,0,0,0,188,146,104,219,187,52,44,99,52,128,145,47,155,121,18,73,169,215,71,105,63,90,251,181,166,212,238,129,81,10,106,148,122,97,68,134,146,180,148,122,94,108,243,111,61,117,36,47,215,
252,23,0,0,0,252,116,181,64,65,109,8,201,118,217,81,189,49,242,250,180,2,42,181,186,95,57,250,41,36,179,61,50,182,121,214,2,25,41,149,3,24,249,242,84,88,14,0,0,0,63,65,173,103,67,30,56,136,12,43,153,13,
104,228,101,244,234,24,18,13,96,148,122,94,108,95,151,2,23,35,65,140,218,48,149,218,227,82,243,244,230,191,0,0,0,224,39,235,245,102,136,12,37,169,189,30,9,98,244,242,235,213,173,42,250,24,213,214,186,
61,65,140,60,80,177,125,95,122,157,10,127,243,101,165,242,4,48,0,0,0,120,103,189,222,14,189,0,198,229,239,158,64,70,47,143,86,61,123,235,174,2,24,173,96,69,190,190,214,19,98,79,79,140,72,47,143,72,192,
164,68,0,3,0,0,128,119,22,25,174,113,68,16,99,251,58,26,188,168,149,217,170,247,205,250,200,16,146,94,96,163,148,166,21,100,216,174,111,5,44,242,124,74,129,138,72,160,100,102,62,14,0,0,0,120,53,35,65,
140,35,135,148,148,94,71,234,53,148,38,58,233,101,111,190,137,200,223,200,235,214,178,90,153,173,186,235,121,1,0,0,192,79,82,10,4,140,244,132,232,13,255,24,29,42,210,26,66,18,233,137,241,189,124,164,209,
127,116,16,99,100,93,173,172,90,157,5,46,0,0,0,248,201,122,189,32,246,204,141,49,178,174,87,86,169,110,197,229,179,143,81,205,51,108,205,81,145,10,239,83,97,93,109,168,74,105,121,62,148,164,246,30,0,0,
0,126,178,189,129,140,124,121,36,144,81,91,191,203,232,176,139,214,227,74,71,122,78,44,133,245,189,158,22,145,178,75,244,198,0,0,0,224,39,104,5,9,90,129,140,200,28,25,209,64,70,105,89,180,236,220,213,
186,153,167,118,28,25,196,232,165,137,190,174,213,15,0,0,0,126,170,145,73,61,107,175,163,67,76,122,105,122,229,181,234,152,82,74,233,79,149,132,35,61,26,122,65,140,94,126,165,52,209,131,92,155,156,196,
16,18,0,0,0,126,170,104,123,57,50,156,164,180,60,58,167,197,204,211,72,170,102,135,94,140,76,162,57,51,25,231,236,36,157,122,95,0,0,0,192,111,161,9,50,27,239,103,38,255,28,201,63,82,183,148,82,189,7,70,
74,253,96,192,200,99,76,71,135,126,244,162,50,209,19,0,0,0,0,63,213,72,219,57,26,124,24,237,117,209,203,47,108,52,72,209,91,223,155,20,52,58,17,103,100,114,209,145,222,22,122,102,0,0,0,240,206,70,130,
2,145,128,194,222,128,198,72,89,161,245,173,30,24,41,141,207,93,17,93,182,103,126,140,11,115,93,0,0,0,192,47,145,246,113,171,29,189,39,168,17,9,92,212,150,133,205,6,15,162,233,70,2,25,173,178,204,121,
1,0,0,0,251,141,78,201,48,250,20,145,61,129,139,102,186,94,15,140,139,163,131,24,165,229,35,219,2,0,0,0,227,102,134,112,68,135,129,220,45,120,145,210,253,230,145,24,13,70,28,145,30,0,0,0,136,25,125,10,
200,145,233,167,210,142,6,2,142,74,191,103,242,208,217,224,133,160,7,0,0,0,239,104,118,110,137,225,71,153,6,214,143,214,37,156,126,166,81,127,244,54,123,134,167,28,81,62,0,0,0,188,186,61,19,100,30,49,
204,99,166,252,161,109,158,17,20,216,251,232,214,35,202,0,0,0,128,119,118,196,83,59,167,31,121,122,143,237,206,16,44,184,215,60,28,0,0,0,64,219,225,115,85,220,107,251,35,3,2,103,205,11,0,0,0,24,115,68,
15,142,67,243,186,87,160,224,17,1,8,65,14,0,0,0,24,119,100,112,226,97,101,60,42,8,32,216,0,0,0,0,239,235,238,65,145,103,6,22,4,53,0,0,0,224,245,60,162,7,199,141,179,7,17,206,94,63,0,0,0,120,39,79,9,78,
68,252,127,117,200,72,36,243,210,157,110,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::case_effects_png = (const char*) resource_MainSynthGui_case_effects_png;
const int MainSynthGui::case_effects_pngSize = 12243;

// JUCER_RESOURCE: levelIndicator_png, 731, "../../Resources/level indicator.png"
static const unsigned char resource_MainSynthGui_levelIndicator_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,228,0,0,0,64,8,6,0,0,0,203,84,4,181,0,0,2,162,73,68,65,84,120,156,237,221,
203,106,83,81,20,128,225,117,210,180,73,154,106,132,182,70,139,104,65,161,180,79,80,156,249,20,190,137,83,117,234,155,248,56,34,14,138,83,5,193,32,148,10,22,39,219,129,141,189,229,102,47,201,74,251,125,
16,72,78,86,78,246,32,228,103,39,129,84,91,59,219,37,0,72,167,68,255,237,185,138,136,147,111,213,71,183,207,28,170,162,154,218,218,184,122,181,165,230,210,172,215,0,112,203,156,222,7,149,82,142,142,150,
40,229,248,18,229,104,244,212,245,163,199,159,221,74,149,227,243,48,159,234,237,78,59,34,34,126,31,254,158,241,82,0,230,84,41,17,213,184,221,105,137,211,189,28,28,229,201,158,111,242,49,123,230,249,81,
143,136,16,101,128,75,24,27,227,136,136,106,178,177,43,36,198,243,165,214,191,210,238,180,195,199,215,0,48,27,181,147,55,68,25,0,102,163,118,246,128,40,3,192,244,157,11,114,132,40,3,192,180,13,12,114,
132,40,3,192,52,13,13,114,196,223,40,247,127,129,13,0,92,159,250,184,129,207,123,123,113,240,227,96,26,107,1,128,27,105,107,103,123,236,204,200,29,50,0,48,29,130,12,0,9,8,50,0,36,48,246,59,228,97,222,
124,123,59,217,220,131,215,23,125,10,24,203,235,144,89,243,26,188,93,202,203,87,19,205,85,239,223,253,247,185,237,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,
0,72,64,144,1,32,129,106,247,197,243,50,106,224,211,135,143,254,237,9,0,46,193,191,61,1,192,156,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,
64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,1,65,6,128,4,4,25,0,18,16,100,0,72,64,144,1,32,
1,65,6,128,4,4,25,0,18,16,100,0,72,160,62,234,206,198,114,35,214,31,175,199,198,179,141,105,173,7,0,110,156,78,171,19,251,223,247,71,206,12,13,114,99,185,17,247,214,59,241,240,233,110,44,44,216,72,3,192,
69,253,250,121,24,139,141,197,232,125,233,13,157,25,88,218,126,140,91,119,151,197,24,0,46,169,181,210,140,238,147,110,172,61,90,27,58,115,174,182,98,12,0,87,111,92,148,79,21,87,140,1,224,250,140,138,242,
191,234,138,49,0,92,191,97,81,174,69,136,49,0,76,211,160,40,215,197,24,0,174,81,53,248,112,243,78,51,238,111,118,163,68,68,239,107,47,234,171,27,171,177,212,90,18,99,0,184,2,101,72,128,7,105,173,52,163,
187,217,141,218,66,45,254,0,69,210,101,25,211,69,99,163,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::levelIndicator_png = (const char*) resource_MainSynthGui_levelIndicator_png;
const int MainSynthGui::levelIndicator_pngSize = 731;

// JUCER_RESOURCE: presetsPanel_png, 25488, "../../Resources/presets panel.png"
static const unsigned char resource_MainSynthGui_presetsPanel_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,213,0,0,0,113,8,6,0,0,0,26,161,95,186,0,0,32,0,73,68,65,84,120,156,237,189,205,
142,110,205,146,22,22,177,234,107,44,220,32,100,132,27,90,8,176,196,192,150,144,16,82,247,224,200,3,134,190,1,15,124,11,190,2,207,61,243,208,151,117,36,211,48,64,66,70,8,75,22,150,104,169,45,143,193,253,
213,155,12,50,35,226,121,158,200,245,86,213,222,181,107,159,166,51,206,217,95,189,107,173,92,153,17,145,241,151,145,63,203,199,24,246,65,248,163,143,190,112,224,192,129,3,7,14,28,56,112,224,192,95,48,
248,147,143,20,246,15,4,213,39,152,62,112,224,192,129,3,7,14,28,56,240,151,13,222,21,92,191,39,168,62,193,244,129,3,7,14,28,56,112,224,192,129,191,236,240,52,184,190,222,120,249,4,212,7,14,28,56,112,224,
192,129,3,7,14,188,17,23,63,11,170,79,64,125,224,192,129,3,7,14,28,56,112,224,64,193,109,124,124,23,84,159,128,250,192,129,3,7,14,28,56,112,224,192,129,14,219,56,121,23,84,159,128,250,192,129,3,7,14,28,
56,112,224,192,129,123,104,241,178,6,213,39,160,62,112,224,192,129,3,7,14,28,56,112,224,109,160,184,249,186,123,112,224,192,129,3,7,14,28,56,112,224,192,129,167,144,241,243,91,167,127,28,56,112,224,192,
129,3,7,14,28,56,112,224,13,136,160,250,100,169,15,28,56,112,224,192,129,3,7,14,28,248,56,252,145,217,201,84,31,56,112,224,192,129,3,7,14,28,56,240,221,224,99,140,147,165,62,112,224,192,129,3,7,14,28,
56,112,224,59,224,100,170,15,28,56,112,224,192,129,3,7,14,28,248,78,56,65,245,129,3,7,14,28,56,112,224,192,129,3,223,9,39,168,62,112,224,192,129,3,7,14,28,56,112,224,59,225,151,31,221,192,111,126,243,
155,127,246,236,249,24,99,251,251,192,129,3,7,14,28,56,112,224,192,129,103,224,238,219,223,59,248,237,111,127,251,199,63,20,151,31,181,81,241,46,152,30,99,228,191,184,198,191,7,14,28,56,112,224,192,129,
3,7,14,188,23,34,152,198,191,241,111,7,63,42,184,254,33,65,181,6,212,24,72,63,30,15,186,183,131,19,96,31,56,112,224,192,129,3,7,14,28,184,131,187,128,25,131,233,235,186,110,3,236,31,17,88,127,122,80,141,
1,53,6,210,187,12,245,93,150,250,4,213,7,14,28,56,112,224,192,129,3,7,238,64,131,100,205,82,227,111,119,167,0,59,224,179,3,235,79,13,170,49,160,142,64,250,241,120,180,236,244,221,18,144,3,7,14,28,56,112,
224,192,129,3,7,62,10,187,64,90,179,214,17,88,95,87,157,211,241,153,129,245,167,5,213,26,80,199,191,187,108,181,46,255,56,129,245,129,3,7,14,28,56,112,224,192,129,143,130,110,86,212,127,152,165,142,224,
250,71,4,214,159,18,84,63,11,168,239,130,235,128,93,48,125,2,236,3,7,14,28,56,112,224,192,129,3,119,176,91,83,173,193,245,46,152,254,145,129,245,119,7,213,239,9,168,241,218,236,172,167,62,112,224,192,
129,3,7,14,28,56,240,125,240,158,117,213,187,64,250,71,5,214,159,118,78,181,102,162,49,160,126,182,244,227,44,1,57,112,224,192,129,3,7,14,28,56,240,45,176,59,167,26,151,126,60,30,143,22,124,95,215,149,
247,199,24,111,158,111,253,110,92,190,39,83,173,89,234,215,215,215,22,76,63,91,87,109,118,150,127,28,56,112,224,192,129,3,7,14,28,248,24,60,91,254,241,158,245,212,241,239,229,229,229,211,178,213,159,146,
169,214,181,211,187,101,31,26,84,199,123,39,128,62,112,224,192,129,3,7,14,28,56,240,17,216,197,143,17,60,71,246,25,131,236,200,78,99,217,200,86,63,251,80,204,71,224,211,130,234,32,238,110,169,199,238,
254,174,158,3,7,14,28,56,112,224,192,129,3,7,222,3,24,12,71,124,137,247,30,143,135,93,215,213,18,186,143,199,195,94,94,94,182,239,124,43,124,106,80,189,11,162,119,75,64,240,61,252,123,224,192,129,3,7,
14,28,56,112,224,192,123,33,98,72,204,74,71,204,25,203,58,34,246,212,181,212,207,18,189,223,2,223,29,84,239,178,208,119,31,123,185,251,68,249,9,170,15,28,56,112,224,192,129,3,7,14,124,47,224,210,143,200,
82,199,253,120,166,129,117,148,251,222,108,245,167,4,213,248,251,217,63,44,179,123,247,192,129,3,7,14,28,56,112,224,192,129,143,64,4,200,207,126,63,139,71,227,250,119,34,168,126,22,60,107,0,125,54,41,
30,56,112,224,192,129,3,7,14,28,248,44,208,120,18,55,43,226,95,204,86,223,197,175,223,3,63,100,77,245,238,185,153,217,95,255,253,191,97,127,240,183,254,174,253,163,255,246,143,237,191,251,135,255,216,
254,230,223,248,175,237,247,126,239,175,204,50,89,214,108,60,134,217,24,246,163,67,238,24,143,220,181,227,242,204,205,173,99,85,181,220,213,231,155,95,92,114,182,52,160,21,46,59,160,164,182,226,84,203,
45,33,13,91,253,225,27,26,240,10,43,25,102,195,45,7,116,171,175,2,183,225,248,230,48,31,85,215,112,165,13,174,198,106,201,161,213,177,43,248,185,224,190,232,133,182,152,251,64,207,250,17,120,237,250,154,
80,118,124,73,56,25,186,226,245,118,222,234,194,215,175,251,141,142,240,55,67,151,179,94,121,151,211,39,156,251,12,164,18,147,183,108,195,179,86,159,233,251,29,244,126,222,105,187,195,213,40,125,104,117,
99,39,47,117,82,164,165,12,189,234,160,23,14,54,105,48,103,60,158,141,85,117,234,149,39,182,100,87,70,137,170,141,85,202,145,134,55,45,205,61,60,51,142,42,38,223,90,239,83,193,64,166,217,115,113,12,62,
62,51,215,100,213,7,240,244,86,43,167,110,139,45,30,92,66,49,166,171,238,5,238,125,209,71,123,235,25,251,223,242,107,247,254,238,51,1,250,175,33,185,235,40,52,212,14,125,135,50,32,239,237,16,39,135,52,
58,209,244,206,91,92,220,217,210,103,141,223,131,67,21,67,68,136,158,73,205,131,69,228,214,204,196,187,6,190,252,22,253,70,154,111,125,91,225,55,12,35,13,135,231,155,232,145,40,112,119,243,107,105,0,224,
246,24,195,254,252,207,255,163,253,233,159,253,63,246,47,255,245,255,97,255,215,255,253,175,236,95,253,155,127,190,13,172,169,246,223,181,53,213,207,130,232,29,178,255,195,63,253,31,237,15,255,246,63,
176,191,245,95,253,29,251,253,255,242,247,237,186,102,243,175,175,15,123,60,134,217,99,216,99,253,155,253,2,14,193,118,114,28,134,3,28,201,22,83,117,105,99,115,183,238,220,139,250,198,18,223,197,26,31,
133,103,49,204,93,59,10,234,88,222,210,211,45,161,210,240,173,241,120,110,126,49,232,24,111,32,114,231,86,222,165,187,113,173,6,196,67,177,165,150,245,162,138,173,99,176,159,63,161,181,183,120,250,14,
251,232,98,0,159,209,215,222,181,46,98,59,91,191,173,248,182,198,172,9,238,131,85,142,224,206,139,29,20,252,69,61,50,18,152,101,157,112,204,119,229,85,50,216,183,108,126,174,191,251,208,253,61,10,243,
153,240,45,209,225,91,138,252,201,176,83,52,140,61,76,196,120,145,148,206,21,203,60,113,182,3,234,235,118,101,218,245,214,191,80,153,47,37,25,189,18,10,246,183,220,134,87,238,76,225,54,38,131,155,49,200,
78,60,154,5,211,154,245,229,27,36,118,237,18,206,248,238,166,76,139,150,144,47,182,99,186,113,129,187,103,79,64,201,123,3,93,172,126,23,191,166,12,57,255,214,215,7,153,33,29,68,76,44,136,34,104,96,175,
61,31,215,39,176,102,249,235,185,86,63,139,62,238,117,250,51,180,253,91,194,16,207,255,148,171,68,17,162,62,16,183,224,219,202,65,111,193,72,56,9,201,134,82,186,37,126,24,159,187,217,229,110,230,51,161,
55,207,152,54,187,94,46,187,220,237,191,248,43,127,213,254,222,31,254,67,251,187,127,251,191,177,63,251,255,254,189,253,175,255,251,255,76,205,236,226,210,187,32,251,123,224,211,191,168,248,12,254,201,
63,250,239,237,247,255,234,95,203,235,199,235,195,94,95,135,189,190,62,236,245,49,108,60,134,141,199,195,30,195,204,30,152,19,190,17,59,144,158,46,72,225,90,167,73,244,21,21,12,46,52,203,68,54,38,36,7,
98,4,196,130,130,34,200,62,38,14,239,180,113,237,54,4,28,174,132,188,165,109,239,148,215,187,88,253,253,101,35,131,222,155,118,49,55,24,82,63,119,107,61,39,127,255,206,183,194,29,197,90,247,51,142,60,
3,13,66,55,205,190,233,209,241,129,22,190,17,48,65,193,76,124,174,6,65,80,245,54,216,64,99,186,111,37,141,112,75,66,40,41,212,232,61,160,193,222,214,147,116,45,39,42,132,148,42,130,98,202,44,202,84,105,
145,219,85,54,244,219,201,227,111,120,124,43,142,234,102,119,178,22,109,141,108,215,92,102,111,164,60,213,186,46,154,93,104,120,88,22,172,181,132,102,156,154,146,224,6,167,67,212,158,25,240,84,154,193,
192,39,219,185,67,205,172,201,27,75,117,216,149,123,129,193,204,250,142,199,67,74,253,197,6,113,106,77,55,196,201,100,57,127,106,58,168,106,120,205,226,85,176,21,158,138,30,178,9,156,125,99,234,16,231,
91,247,16,178,233,183,118,100,107,34,135,200,204,10,220,32,118,179,144,16,27,67,228,203,114,128,150,44,141,250,158,137,203,141,222,111,85,81,76,199,78,230,83,127,66,181,198,190,236,174,105,230,73,197,
51,207,237,193,14,17,120,97,231,79,238,108,29,10,137,10,102,202,94,220,27,80,230,13,227,190,99,238,205,192,114,246,228,99,157,55,237,230,215,176,151,203,237,229,23,51,127,185,236,122,241,25,96,191,92,
246,119,254,224,239,207,86,96,93,245,29,124,246,82,228,79,221,168,184,187,70,192,128,58,131,233,95,87,96,253,235,99,5,212,195,198,235,228,235,24,113,252,94,15,96,9,62,98,71,111,252,230,124,166,194,177,
42,39,45,196,70,217,224,188,221,45,208,193,99,247,132,107,71,148,40,249,33,193,210,91,35,72,242,151,119,222,77,17,121,194,83,55,231,126,246,184,187,163,164,220,157,109,158,119,131,178,11,221,119,78,21,
95,194,192,0,45,151,9,35,209,115,40,146,98,229,164,0,197,26,155,0,119,91,245,70,94,121,105,140,153,175,140,174,249,93,62,255,142,119,59,135,22,79,42,84,249,56,240,155,226,82,77,39,238,184,255,186,43,208,
201,189,175,15,125,124,211,15,98,87,136,83,15,35,25,138,223,59,102,170,210,63,11,106,118,221,248,214,189,77,213,59,59,49,158,148,208,30,170,230,36,248,209,105,114,27,54,28,250,74,3,152,247,208,20,183,
134,101,93,54,6,101,56,103,192,3,243,90,98,87,112,201,157,14,222,187,196,117,121,99,154,111,80,204,148,60,74,182,145,233,231,178,198,6,185,1,224,139,198,123,147,93,127,91,255,179,97,187,31,205,238,110,
222,119,208,251,124,85,213,122,19,74,173,190,235,254,232,14,163,167,4,62,9,74,243,14,110,60,131,22,131,162,186,170,202,222,114,103,195,122,10,72,125,111,91,95,49,145,48,10,106,241,165,94,83,243,23,132,
92,67,80,168,111,66,179,215,233,39,17,113,111,123,43,5,59,199,24,215,15,123,6,40,85,156,211,143,43,36,0,219,1,123,155,229,247,125,55,147,212,179,83,174,203,204,47,179,241,50,147,45,215,48,51,187,236,229,
229,202,178,239,217,116,248,145,248,245,189,240,221,203,63,222,251,60,179,192,102,246,120,204,128,250,215,255,255,97,175,191,14,123,125,60,236,245,215,87,123,60,204,198,35,142,232,163,154,236,185,151,
234,112,231,132,158,149,73,81,112,185,54,95,49,90,209,224,75,24,82,149,117,254,100,56,141,142,169,197,54,18,219,208,163,69,196,183,239,232,75,251,221,240,239,215,119,38,120,103,64,127,76,0,116,167,248,
207,156,195,91,24,169,130,126,43,184,212,117,31,202,52,156,34,83,186,121,51,222,186,49,187,84,173,203,117,218,210,12,36,30,149,237,204,40,167,42,155,229,217,88,161,44,127,156,77,18,112,228,47,9,178,23,
46,115,73,10,205,243,152,114,227,45,215,16,186,228,195,53,225,74,236,238,21,160,119,126,208,53,207,62,57,189,90,54,10,241,4,29,6,190,189,25,64,8,170,104,87,200,47,111,104,186,85,218,221,245,14,9,168,79,
221,21,209,99,110,131,6,24,195,42,92,153,58,192,28,154,79,212,170,161,35,172,59,136,86,232,83,220,112,40,176,39,166,98,148,141,18,36,125,26,118,13,235,217,117,8,191,70,185,107,14,158,100,183,204,77,12,
212,177,187,199,191,158,117,251,197,58,15,87,3,174,115,214,148,53,136,218,118,144,100,208,145,144,213,225,143,124,70,56,65,181,201,222,187,160,142,50,148,86,247,86,251,95,225,41,160,97,249,187,11,248,
24,167,249,235,173,0,180,75,52,151,24,79,239,237,223,90,191,203,184,220,148,7,40,129,100,158,139,79,159,75,235,210,154,147,149,37,31,178,250,121,183,215,105,139,15,216,198,125,79,62,49,88,36,6,161,163,
55,56,82,29,102,58,42,115,210,89,80,17,95,180,184,217,117,185,189,188,92,54,198,101,195,134,189,140,135,185,185,185,61,236,122,185,250,86,20,8,176,63,18,183,126,11,124,218,242,15,133,61,98,147,168,215,
95,95,87,48,61,236,215,199,235,204,82,191,14,251,245,215,185,182,122,38,168,7,215,69,1,132,153,65,22,27,109,209,122,65,4,20,235,115,150,137,15,4,24,239,49,165,207,213,118,223,236,83,155,246,164,254,108,
39,3,125,224,147,153,69,182,182,148,74,249,56,160,129,213,40,102,167,22,6,169,102,145,41,88,239,223,210,7,70,65,3,47,168,118,225,196,148,57,4,179,181,253,17,141,41,58,232,141,65,111,10,186,46,7,243,251,
89,103,162,153,245,188,49,210,9,226,116,245,192,247,211,240,105,16,178,104,195,133,105,183,176,139,172,240,113,69,117,243,215,131,76,23,214,147,134,140,58,104,6,78,41,51,34,50,33,2,229,116,235,162,68,
165,250,106,152,248,220,182,136,58,152,178,250,85,215,12,36,112,64,196,217,204,65,242,182,131,94,27,7,31,125,230,114,227,104,221,192,174,192,205,155,46,97,185,23,45,80,39,35,21,148,115,92,247,149,255,
128,215,247,133,45,216,246,19,14,250,99,99,59,2,47,177,35,22,125,95,158,222,81,70,32,38,24,241,172,196,150,92,236,82,173,249,91,216,164,239,210,195,91,248,62,135,88,160,92,127,143,37,190,131,123,156,122,
152,130,182,175,251,136,157,28,236,194,32,7,198,110,103,135,252,70,166,150,218,114,108,15,157,103,102,58,64,162,188,177,76,197,169,205,189,51,187,109,63,97,163,246,65,239,113,61,225,187,214,123,67,101,
93,16,162,238,24,79,144,178,76,92,244,30,228,141,188,252,242,234,67,48,191,111,137,139,188,249,188,48,61,223,209,201,117,221,112,162,235,41,214,26,250,190,244,191,150,209,173,101,59,94,60,118,170,208,
204,192,54,132,143,194,218,159,184,222,13,254,108,150,46,31,118,185,219,235,139,217,24,15,251,101,184,61,134,153,255,158,219,235,235,195,174,151,151,90,190,244,4,126,228,201,115,159,254,153,242,184,222,
253,118,91,159,49,127,12,123,188,62,236,241,235,195,198,159,175,128,250,245,97,143,215,216,168,248,152,190,13,164,242,198,45,89,116,152,110,89,68,227,132,130,74,193,146,177,1,105,171,241,227,109,137,215,
178,121,50,32,234,113,69,116,36,123,169,203,0,120,3,142,152,13,64,235,145,120,132,49,192,108,185,161,132,7,146,214,69,119,167,102,15,230,80,208,183,125,103,99,136,40,134,25,144,204,24,122,40,1,65,37,162,
170,28,247,199,220,217,91,152,66,99,25,17,2,78,207,166,90,229,247,222,128,39,102,166,193,123,180,255,72,196,177,30,224,57,24,117,151,18,195,6,47,139,92,200,84,183,137,39,146,81,65,21,217,89,127,161,65,
55,76,17,154,80,150,250,175,187,44,2,228,241,14,116,29,12,77,147,227,210,138,71,215,159,187,224,73,214,251,214,18,234,197,144,150,177,228,160,100,23,84,20,86,60,35,193,92,117,186,247,52,195,79,178,168,
112,247,0,238,75,255,164,61,211,251,221,16,214,207,77,208,210,204,193,13,6,57,105,158,250,179,195,89,43,184,151,3,70,147,245,203,181,0,172,175,69,71,159,242,147,38,217,1,63,223,117,253,61,170,55,152,241,
125,13,86,202,54,50,95,203,54,160,124,237,90,120,35,150,34,224,242,111,225,183,179,89,197,109,197,152,107,122,54,135,196,79,153,86,244,164,33,163,106,89,213,62,163,99,80,84,120,102,11,151,8,177,35,120,
44,255,89,241,192,99,107,59,70,250,112,39,44,31,203,102,122,235,144,41,67,226,79,178,140,250,79,151,223,108,135,153,107,213,86,228,8,159,202,197,82,138,71,51,183,226,173,40,238,24,157,253,173,78,156,73,
236,45,171,148,240,188,99,149,175,101,50,225,197,140,74,178,45,43,91,24,37,85,222,222,84,146,141,205,114,55,123,248,156,145,185,134,217,227,101,216,171,61,204,253,178,241,58,236,225,110,175,191,154,93,
110,118,253,178,215,60,205,88,227,239,223,137,211,63,62,10,243,43,54,86,255,94,231,223,215,215,97,143,95,227,147,230,195,30,175,107,83,146,174,33,83,99,155,80,18,235,57,53,194,1,5,198,12,57,45,182,254,
203,43,44,43,243,215,172,54,118,130,105,96,99,44,212,205,218,63,91,79,170,74,171,138,252,12,118,1,69,252,126,126,44,161,238,83,170,76,119,24,184,245,5,204,192,91,230,12,59,61,55,56,63,243,46,111,122,30,
206,28,122,24,73,51,195,67,221,117,202,41,156,115,153,57,235,193,108,180,224,70,3,129,249,58,6,73,44,75,105,188,233,30,86,44,114,123,3,91,177,150,231,125,58,110,94,63,228,222,8,99,187,174,53,27,72,209,
213,110,3,26,9,74,179,236,29,81,44,138,78,104,8,174,240,238,112,94,94,48,113,12,250,60,121,218,246,204,229,59,138,238,102,6,196,109,110,8,116,126,167,186,115,33,12,206,188,250,203,137,30,93,223,219,116,
73,59,11,177,105,131,4,97,114,239,156,111,130,46,51,56,67,177,158,14,46,189,159,189,17,249,95,124,8,246,184,193,242,2,17,35,31,212,139,64,87,84,62,88,70,200,193,214,230,50,194,121,83,154,23,171,148,5,
222,134,60,77,166,19,153,126,43,252,137,118,3,45,252,70,186,184,31,231,38,212,106,247,161,191,49,102,115,228,121,252,39,124,84,233,3,6,51,69,111,221,239,116,244,181,169,68,31,221,82,191,90,4,34,143,235,
253,245,44,245,19,252,129,131,188,73,64,139,253,218,166,227,137,166,13,206,196,244,145,111,4,142,232,127,172,92,85,62,175,154,248,119,15,232,220,30,49,59,181,154,220,45,29,8,62,80,106,236,233,204,227,
70,206,158,186,244,242,253,30,54,44,158,56,6,124,115,137,3,18,82,232,139,205,75,51,184,98,26,28,108,220,224,210,102,156,130,84,51,51,175,161,218,24,94,203,52,50,46,66,233,69,174,63,208,50,144,119,122,
230,90,18,1,164,253,26,118,45,254,92,171,214,135,15,115,31,115,141,245,99,60,239,150,47,128,47,13,170,205,220,198,195,42,35,61,70,174,163,30,175,195,94,31,182,142,214,179,53,114,48,51,204,122,66,77,119,
179,200,170,172,186,17,161,151,166,168,192,186,50,140,20,96,31,21,114,119,202,250,219,146,244,46,161,143,0,40,133,178,7,107,53,229,246,152,107,254,168,98,22,221,196,94,73,49,17,214,221,250,56,41,201,118,
150,13,122,24,211,145,195,233,208,102,14,166,70,204,30,128,243,78,212,163,135,128,97,221,17,179,211,226,178,160,49,67,214,61,107,246,213,172,28,66,58,239,50,24,189,112,33,210,103,62,234,106,24,134,15,
131,254,110,87,151,222,249,193,232,48,36,1,121,134,30,160,109,82,98,3,57,253,3,58,179,42,236,121,204,84,60,31,27,252,53,132,125,203,224,33,108,58,51,130,20,112,228,62,188,244,167,109,244,234,122,87,89,
4,105,92,174,91,87,106,224,67,47,220,201,191,89,5,38,34,51,192,1,241,199,6,93,208,234,190,95,46,187,36,8,79,48,168,31,155,89,34,131,227,229,22,22,209,110,211,119,161,123,99,55,6,62,78,219,234,242,38,75,
242,35,28,163,227,108,89,209,94,146,197,221,30,97,16,47,203,26,244,46,77,1,60,30,208,161,130,211,64,26,52,232,10,71,175,56,1,30,161,19,34,31,187,222,237,50,191,151,254,177,2,186,77,124,154,118,98,24,240,
221,161,61,233,30,115,84,139,77,7,203,187,181,166,218,101,221,244,6,221,230,152,84,63,240,151,62,215,103,129,218,66,72,116,185,237,127,192,119,29,219,146,130,236,172,224,90,133,92,130,45,90,103,79,127,
90,63,246,237,118,77,74,200,78,234,253,145,54,206,141,214,54,231,189,86,29,227,29,109,170,146,52,251,30,151,131,178,242,243,181,253,138,238,157,132,182,62,51,28,158,113,191,247,247,239,108,166,203,95,
174,175,207,220,236,108,75,213,76,108,160,214,88,203,175,203,204,30,51,6,187,236,97,195,47,27,151,219,227,225,230,15,179,235,49,217,56,227,198,123,111,245,163,225,75,131,234,71,6,202,243,95,108,74,124,
188,206,17,253,88,75,67,230,104,3,178,144,162,25,149,84,88,211,37,146,77,206,169,225,245,223,233,4,86,135,83,246,198,115,151,168,153,45,39,142,153,110,39,7,246,16,209,83,63,223,194,4,145,197,161,63,6,
168,136,26,160,188,118,170,103,146,91,33,94,208,135,5,56,60,194,73,186,177,209,221,1,37,213,188,70,59,170,84,221,229,224,61,85,42,126,219,165,244,206,208,69,48,216,94,70,247,212,48,126,22,246,13,125,188,
219,211,8,30,139,2,57,8,62,38,91,120,164,205,190,96,244,64,7,108,63,55,10,17,192,186,84,87,215,54,201,184,87,59,98,244,58,159,65,230,97,77,56,149,29,162,3,43,232,8,95,169,44,67,180,107,118,23,222,165,
43,238,27,53,240,165,53,109,161,133,149,30,234,59,29,158,173,194,138,197,217,84,3,4,120,180,188,43,145,71,30,128,109,16,57,232,113,12,243,153,122,110,128,22,121,80,7,253,159,253,162,147,180,156,211,185,
15,135,128,6,146,213,117,99,208,141,250,173,129,118,252,202,141,111,112,13,1,5,234,135,246,78,223,226,11,181,223,102,46,149,202,110,147,28,95,228,155,123,59,1,47,107,32,65,246,96,176,244,77,191,128,152,
115,158,152,166,141,13,245,224,166,63,110,64,247,155,224,252,105,161,175,28,4,29,75,95,166,150,66,219,142,77,243,139,187,143,193,180,99,80,183,67,154,4,119,108,10,176,76,53,241,179,29,95,186,237,222,204,
119,172,71,163,92,118,148,192,53,66,42,112,131,81,222,93,239,233,12,157,216,21,86,26,130,86,245,164,72,145,84,31,244,185,215,154,16,108,39,154,131,145,89,14,92,162,223,179,104,200,133,40,225,198,46,69,
51,177,212,198,241,254,205,123,226,37,168,174,176,3,218,207,157,83,85,66,125,19,151,221,108,32,70,189,94,125,253,120,157,52,92,215,53,3,105,95,99,240,203,236,37,212,224,17,56,254,60,248,218,229,31,145,
149,30,195,198,171,173,140,244,204,94,61,198,40,133,24,62,51,214,1,139,211,180,86,123,103,49,177,188,24,163,236,230,193,29,60,80,96,67,248,160,34,157,176,198,44,49,102,108,244,104,161,157,233,105,154,
31,193,3,21,28,34,224,162,60,80,113,210,6,81,27,10,55,143,243,216,17,238,133,238,206,21,198,134,61,224,196,224,18,102,115,189,83,188,56,109,65,72,183,115,187,96,211,41,160,78,251,176,148,72,58,79,167,
152,230,51,48,226,206,125,55,133,134,141,17,53,213,69,140,47,200,230,5,114,108,181,75,124,188,146,179,109,129,104,200,215,48,30,0,122,136,64,53,131,56,122,93,215,100,6,46,110,66,195,14,66,211,136,3,130,
198,80,70,177,14,32,15,128,236,170,182,6,187,99,25,61,204,192,142,133,120,132,11,90,95,252,160,245,141,35,244,172,240,39,18,110,35,147,108,120,227,240,170,238,244,85,241,22,16,53,168,47,209,195,68,253,
190,50,253,3,228,190,244,189,112,94,212,22,74,112,29,158,176,148,96,128,177,168,193,174,87,160,164,122,175,212,65,213,154,176,203,115,184,147,142,174,237,123,94,72,72,52,64,56,163,129,42,200,50,2,58,141,
188,174,247,170,51,221,64,183,179,213,165,243,24,166,56,215,179,37,69,78,71,68,219,183,251,232,4,219,14,124,162,89,113,137,26,172,108,154,202,90,203,28,66,189,160,90,171,94,140,217,212,206,198,85,11,49,
128,42,180,39,92,185,178,134,214,199,194,104,144,249,56,150,188,84,61,188,57,79,151,60,8,61,248,60,109,45,180,69,75,210,202,158,224,105,96,73,12,248,175,81,4,90,245,16,22,23,189,216,59,180,29,83,146,47,
145,237,215,117,79,60,48,119,254,205,102,139,100,4,147,121,104,147,208,4,152,193,54,62,93,203,221,163,90,152,22,170,62,15,219,218,233,18,31,130,12,55,165,11,17,43,28,114,239,214,242,171,117,130,153,236,
123,48,152,181,223,232,10,58,229,145,126,80,137,171,235,152,189,203,132,213,8,75,49,108,140,56,38,111,201,113,250,217,89,194,199,196,247,165,148,255,126,66,254,11,224,75,131,234,220,234,5,17,104,4,10,
54,124,253,51,27,143,135,161,50,176,123,17,75,187,46,251,238,126,120,190,53,114,40,5,44,17,67,130,147,50,186,3,234,30,70,134,120,9,63,132,12,130,63,255,194,54,113,26,176,54,12,33,254,156,245,75,206,169,
34,155,89,247,35,172,168,109,86,49,219,161,220,153,172,53,93,247,30,139,19,59,103,48,240,168,182,49,23,42,131,5,226,53,97,91,91,151,138,52,76,59,172,144,34,63,130,193,93,94,135,97,159,215,224,42,218,160,
199,176,155,129,160,226,63,212,235,139,59,15,204,146,196,227,50,115,228,140,161,206,108,73,251,231,153,242,139,184,77,148,54,180,50,21,217,5,205,208,129,179,46,71,184,254,32,47,30,53,219,227,144,5,194,
233,247,249,116,5,20,84,255,0,188,73,176,133,45,83,120,201,188,146,125,135,243,74,35,16,105,244,108,46,157,117,37,79,216,144,184,32,117,123,64,16,144,60,195,126,119,8,82,161,153,60,44,163,132,6,195,15,
150,41,9,200,141,45,4,133,253,3,28,11,16,183,91,74,133,93,76,55,112,93,36,180,69,153,231,208,67,236,31,156,253,144,41,117,122,213,160,79,224,254,173,40,75,7,144,147,221,189,11,54,67,79,129,80,177,110,
27,55,1,41,46,59,200,209,226,217,216,122,86,65,86,56,248,222,46,1,19,215,251,190,29,212,110,61,43,63,195,212,185,196,89,28,124,232,220,15,130,160,106,106,92,72,34,196,255,82,201,16,65,173,206,192,19,62,
149,99,163,193,76,155,209,195,126,34,95,106,101,223,85,139,68,70,114,235,3,222,103,55,183,19,135,246,112,248,136,13,53,235,145,27,5,182,27,16,215,195,246,115,84,68,128,166,100,96,1,131,190,205,190,230,
54,171,188,229,82,176,162,157,181,30,215,54,71,223,177,207,4,68,196,98,96,98,108,8,175,83,79,113,109,119,226,22,119,86,176,187,234,13,123,72,123,230,29,158,65,61,104,120,66,83,203,155,121,170,31,126,211,
195,135,155,93,190,86,49,44,221,121,152,141,11,245,60,102,230,159,247,227,143,132,47,94,83,61,150,224,77,97,152,14,217,205,237,50,31,175,115,9,200,48,51,191,86,217,18,246,24,161,100,77,96,76,201,0,12,
150,41,27,213,245,189,128,195,244,74,116,160,154,173,43,37,137,207,253,149,0,105,33,229,240,152,28,162,122,246,188,242,101,196,80,216,7,120,209,12,179,179,98,202,18,227,186,46,88,22,50,175,109,3,221,240,
153,133,147,44,78,82,77,200,31,186,46,114,40,72,115,39,246,204,90,193,25,57,112,2,234,10,199,61,252,202,135,232,204,131,79,17,240,39,255,136,178,160,253,10,100,128,94,113,157,192,130,11,223,149,122,139,
134,240,71,151,100,26,109,201,108,188,21,181,133,129,32,115,81,163,255,135,51,210,214,46,237,202,158,40,99,163,198,177,189,53,134,217,184,140,7,98,108,196,219,225,31,112,237,198,207,73,239,196,136,227,
250,223,52,141,219,168,135,241,158,218,239,229,72,221,215,1,254,133,99,232,120,244,164,9,142,85,39,244,222,24,230,118,9,229,168,171,152,9,153,214,248,142,86,10,98,82,127,7,60,71,124,13,108,201,88,50,14,
37,80,214,220,215,190,4,112,36,126,225,171,134,95,125,52,51,202,200,82,111,143,231,215,40,203,108,15,156,235,26,147,143,170,27,168,127,244,54,152,74,16,129,109,121,22,131,176,19,123,29,113,183,220,179,
225,142,90,57,223,117,164,67,3,8,104,155,109,126,71,234,106,193,130,218,238,170,124,24,202,188,103,208,25,215,152,73,68,59,163,50,224,98,252,124,132,221,235,114,146,246,102,67,234,109,184,0,50,206,122,
17,56,145,98,174,190,114,238,159,198,83,71,114,8,174,65,49,215,188,158,191,86,121,153,43,245,78,103,213,252,6,133,248,88,124,122,236,77,168,170,177,47,5,201,124,119,172,190,116,227,207,209,107,191,179,
63,165,46,28,94,182,60,229,5,228,96,221,74,157,160,153,92,23,30,20,160,212,55,75,191,6,221,243,225,160,62,12,28,75,199,242,198,106,75,107,54,240,91,102,6,113,199,110,31,26,246,18,63,189,204,7,15,76,121,
128,229,82,31,219,108,150,127,245,101,32,181,215,44,29,111,78,251,176,226,199,133,221,252,123,109,176,255,58,248,218,160,218,157,254,121,50,97,93,123,77,101,99,222,52,71,240,41,204,225,38,230,83,110,35,
108,28,24,144,146,21,206,58,165,177,168,178,35,186,204,195,185,69,131,177,190,186,162,192,65,117,24,76,97,44,252,208,136,160,114,54,156,49,136,137,247,208,0,86,128,20,142,27,87,33,57,24,177,48,4,70,213,
141,162,61,171,101,167,234,166,1,147,91,171,40,241,13,179,20,206,15,24,145,101,101,228,89,164,42,233,114,131,74,79,227,163,1,108,42,16,183,51,252,98,135,107,184,78,47,77,105,61,110,34,180,113,58,241,59,
58,219,205,12,118,129,207,238,192,37,40,104,253,167,114,135,225,197,93,203,132,68,240,15,237,159,169,155,33,211,90,180,129,129,39,54,94,37,235,22,50,1,235,131,117,42,47,109,172,115,143,209,248,206,194,
108,5,254,24,121,33,190,197,155,50,178,186,133,19,244,62,35,73,214,23,42,141,93,179,148,60,101,1,13,175,26,84,90,83,237,189,29,172,187,1,44,33,16,25,137,211,75,26,190,162,187,245,154,182,137,114,189,228,
57,88,50,82,197,210,25,167,12,25,220,95,13,227,20,45,61,115,131,1,196,14,15,196,225,82,129,19,78,116,185,196,170,16,93,93,238,113,129,45,156,235,145,13,250,96,149,189,18,97,243,75,232,80,1,3,187,189,157,
53,139,27,128,32,217,110,43,189,165,231,72,47,200,46,218,156,80,22,22,7,232,115,151,251,234,36,72,62,86,93,88,22,85,96,112,73,52,79,196,194,12,210,6,23,206,117,223,154,227,14,251,1,36,237,218,137,223,
55,193,95,13,8,194,55,17,39,50,57,146,88,96,96,71,178,73,76,75,24,114,65,54,64,3,116,232,16,151,107,11,106,29,235,44,75,86,131,247,24,96,172,119,70,53,165,24,6,239,208,218,12,12,245,47,232,143,236,119,
128,173,66,117,194,179,93,32,30,117,57,236,115,37,173,212,38,97,63,19,3,67,9,10,127,119,177,179,123,124,139,23,172,151,53,35,54,106,208,186,218,32,233,107,35,149,170,103,199,6,210,82,103,122,75,157,42,
150,116,121,235,171,225,75,131,234,43,5,217,83,206,210,145,248,181,88,18,199,182,84,78,63,178,90,173,99,66,153,197,36,242,12,60,91,13,14,0,215,155,153,34,171,188,96,188,123,93,35,49,152,241,109,25,252,
203,43,96,90,165,181,33,166,95,131,38,146,201,18,5,94,226,229,41,52,243,191,101,216,171,77,196,159,188,78,189,131,100,227,111,50,204,165,188,184,70,60,218,199,181,154,51,148,247,94,31,198,9,11,191,97,
90,151,0,41,112,41,54,79,11,89,102,199,138,7,76,208,244,203,232,100,43,0,116,139,192,174,243,35,55,12,149,55,144,96,214,193,32,175,25,11,152,167,173,76,232,58,238,199,244,57,100,222,201,209,175,192,87,
108,92,216,9,241,177,216,237,11,37,8,101,156,113,86,95,62,253,153,99,113,238,51,20,93,108,51,95,246,249,58,108,196,76,217,203,62,119,187,70,56,175,153,1,66,89,175,89,134,146,161,208,199,233,28,138,2,93,
114,9,68,55,44,213,233,133,198,86,129,250,194,22,214,219,252,71,117,89,86,140,131,164,70,15,102,51,93,3,112,148,1,17,251,33,29,16,78,105,240,107,132,19,232,127,109,24,12,92,34,235,184,100,47,159,45,45,
45,241,187,117,154,185,28,66,147,155,40,111,27,103,159,204,88,239,52,181,52,167,27,151,103,207,175,118,81,195,197,246,73,255,83,54,28,235,39,147,8,133,150,188,214,75,140,75,245,230,101,243,216,50,238,
175,93,38,126,149,46,156,172,240,31,120,147,186,120,61,207,110,67,65,99,197,115,35,118,210,179,204,4,11,207,226,116,159,54,112,83,235,1,131,56,158,25,220,153,229,192,25,188,235,118,234,19,240,144,138,
154,24,135,109,92,112,145,93,133,23,6,243,161,102,13,74,102,40,60,190,152,255,52,192,200,230,46,145,147,122,118,21,91,186,141,109,193,101,244,160,196,36,99,126,148,4,99,146,48,158,52,104,66,156,144,65,
58,41,99,155,50,147,88,195,140,8,79,230,204,148,2,126,216,107,107,123,12,226,25,85,23,108,182,181,141,126,213,140,36,244,10,35,179,158,66,176,147,246,201,160,43,47,184,177,147,153,208,133,97,69,143,129,
78,185,219,149,137,217,184,181,120,238,229,247,127,6,252,156,76,181,45,198,123,8,250,218,166,228,110,238,151,93,54,214,122,167,213,133,107,106,212,165,170,188,179,17,14,105,216,72,216,193,73,78,168,204,
43,7,92,85,91,19,178,165,125,23,102,64,223,234,199,168,26,237,219,186,95,138,23,153,157,120,14,153,60,168,136,39,91,144,15,165,188,201,22,180,137,138,163,40,122,240,196,29,131,39,158,34,108,89,29,104,
218,124,6,138,17,191,129,223,42,28,160,61,238,88,126,41,131,182,244,50,43,51,5,70,138,28,16,116,130,111,172,167,239,189,242,106,5,166,1,67,161,83,102,172,178,70,26,145,65,230,37,44,65,125,5,78,76,149,
78,103,171,193,203,55,138,15,117,202,192,244,168,21,32,97,150,238,34,94,116,155,205,131,147,157,19,125,54,230,209,25,23,114,178,80,153,47,26,147,119,205,201,155,100,33,235,221,200,226,87,61,237,245,194,
117,25,106,194,158,6,27,59,174,34,142,245,218,182,15,154,89,113,236,94,41,168,246,162,46,43,89,131,202,110,185,46,112,219,31,241,27,245,16,223,245,114,34,120,59,223,29,48,40,29,60,125,125,57,204,254,121,
88,187,226,185,170,98,13,122,214,240,22,100,145,155,108,19,172,0,0,32,0,73,68,65,84,120,156,47,135,156,147,85,162,64,42,157,238,94,21,153,54,229,133,13,100,3,52,156,196,111,2,151,155,209,98,187,33,51,
124,230,43,78,24,176,52,46,158,12,236,74,218,83,97,118,101,64,65,31,21,89,184,80,19,109,253,238,162,135,216,200,114,142,131,162,194,151,101,66,151,168,180,126,240,206,99,206,98,2,70,78,11,86,195,236,86,
189,212,144,83,192,199,221,195,50,97,102,28,244,13,46,138,178,56,200,150,26,165,145,138,254,76,141,44,125,171,126,39,179,143,78,112,41,105,206,244,160,240,103,89,128,171,194,232,76,207,160,32,64,180,152,
203,30,114,134,6,236,192,98,34,250,87,219,202,246,210,53,181,117,109,89,20,56,89,237,14,228,146,151,12,52,245,49,91,193,239,162,47,59,161,100,25,103,34,120,195,45,84,38,125,165,58,215,68,218,5,9,44,183,
240,184,0,39,207,190,94,252,247,149,170,141,165,32,94,255,126,22,124,249,57,213,153,13,245,82,229,249,243,50,243,135,205,196,221,88,27,255,208,144,1,243,37,221,242,22,3,167,17,47,195,151,25,9,94,118,107,
60,238,169,145,174,174,15,10,24,96,68,182,107,164,68,23,24,163,78,75,8,28,77,75,186,153,13,52,35,129,97,229,113,7,212,181,236,196,36,207,141,54,46,52,37,67,28,23,45,35,99,68,79,188,43,160,142,123,232,
142,103,27,154,224,178,133,35,226,69,237,68,65,183,22,104,215,52,218,88,255,101,103,176,51,62,77,89,171,0,35,182,247,29,20,31,229,90,193,197,200,200,174,101,67,20,188,227,50,165,89,241,240,21,228,218,
160,53,123,13,191,106,34,25,0,210,69,87,115,253,175,102,141,2,7,103,127,102,67,178,105,160,103,192,139,116,102,208,127,65,223,128,235,40,87,140,2,228,91,86,200,139,63,136,175,6,16,155,224,144,167,56,121,
110,170,173,147,92,136,249,34,96,136,13,192,92,74,173,185,244,125,70,136,244,180,188,210,5,89,249,120,86,1,43,15,26,102,34,128,219,197,85,131,248,39,244,201,225,169,46,111,43,133,90,67,190,28,49,13,171,
157,57,67,252,190,83,34,235,114,9,148,13,3,199,197,127,212,61,114,176,6,253,232,144,118,152,178,72,51,98,220,72,114,68,168,223,92,108,26,110,69,217,64,92,100,10,97,246,44,196,208,249,154,102,40,160,110,
158,13,20,220,100,116,209,108,203,112,82,131,90,182,200,152,15,231,235,29,233,20,166,185,209,192,82,86,67,25,25,48,13,14,19,241,121,125,193,158,132,128,20,41,236,231,196,3,238,136,147,40,91,48,219,191,
10,99,34,170,252,108,65,91,154,68,196,15,225,115,93,95,130,35,217,135,49,86,162,13,2,190,180,7,54,251,199,228,253,100,85,233,103,144,212,51,250,130,35,213,100,212,14,11,15,9,5,254,105,109,163,254,79,187,
177,44,182,108,190,191,18,249,242,165,53,124,216,180,75,196,233,147,74,196,40,73,117,89,75,88,98,48,227,102,102,23,218,154,154,97,204,6,93,19,125,130,143,203,117,86,229,197,16,179,166,180,51,96,6,57,95,
1,243,229,160,151,145,157,246,41,227,63,51,75,109,246,229,153,106,51,135,255,93,102,246,106,75,160,104,55,242,101,227,26,118,225,167,169,204,80,51,192,224,75,27,187,14,84,227,214,237,95,93,166,159,8,97,
133,149,221,142,87,43,135,12,202,218,98,167,173,145,94,15,40,115,235,34,72,59,252,104,213,162,197,114,25,206,162,76,129,116,121,21,51,111,84,203,40,67,53,214,8,56,174,220,194,72,34,9,209,31,130,139,26,
27,233,31,213,63,14,178,141,108,215,240,218,68,164,83,195,209,27,101,70,22,99,211,136,224,249,37,97,248,132,25,240,112,99,46,129,14,113,24,77,102,138,203,156,149,15,35,180,112,21,223,87,82,62,241,173,
205,61,171,47,114,7,188,110,182,152,235,253,135,71,223,104,190,134,3,38,64,168,25,25,202,104,171,204,26,243,189,250,188,94,172,109,5,24,157,47,122,195,81,102,192,45,40,49,38,217,241,49,104,206,86,117,
125,53,56,176,11,164,56,166,89,159,110,238,145,190,212,241,1,161,72,47,226,102,79,167,157,89,61,83,122,241,192,146,187,128,199,30,106,182,56,62,103,145,118,91,155,110,241,121,180,235,242,34,211,37,67,
145,13,224,108,135,111,150,179,33,29,165,117,133,194,186,190,132,135,180,124,74,127,88,239,160,205,128,107,87,48,37,4,100,134,102,21,196,94,96,183,43,155,240,107,172,158,132,142,68,135,54,242,186,96,65,
134,101,67,160,232,20,147,142,50,51,129,55,221,145,101,163,42,57,64,101,30,143,208,145,104,231,50,211,248,169,218,224,222,193,204,123,232,100,200,119,115,93,224,111,116,32,3,49,49,84,239,245,19,171,1,
223,195,101,203,54,118,159,24,207,60,251,122,107,94,160,191,200,182,174,59,217,138,135,134,176,29,165,67,19,135,12,14,73,224,134,65,22,170,1,73,49,200,151,22,157,248,76,164,35,126,190,40,195,141,1,235,
210,105,29,188,96,168,4,13,247,37,45,162,48,240,162,155,44,129,202,32,193,22,134,11,39,213,165,81,114,210,250,57,234,2,164,240,228,29,51,147,165,32,160,60,146,5,156,183,60,159,69,20,153,89,235,21,82,91,
148,251,73,240,181,231,84,199,127,215,72,227,53,78,249,240,135,185,173,53,73,145,21,92,163,81,132,187,245,118,120,120,82,109,208,42,131,137,89,172,153,217,10,60,204,168,215,116,42,91,12,198,188,143,5,
224,196,130,20,202,85,202,89,142,201,136,224,186,166,213,80,138,156,235,186,110,75,229,79,12,64,105,92,50,55,106,235,73,208,81,94,35,62,88,247,174,112,132,161,64,56,58,14,170,155,160,238,5,87,217,198,
142,174,89,122,193,173,60,90,4,142,168,144,52,99,17,235,238,129,192,182,238,115,231,217,22,98,56,128,98,158,131,177,81,15,185,203,58,151,221,233,129,186,180,203,193,95,57,135,121,141,131,34,198,41,214,
176,215,244,125,201,185,186,173,212,6,53,160,102,96,68,241,13,82,38,115,7,121,196,211,111,2,47,228,219,40,253,34,86,135,83,0,118,53,7,205,181,26,58,180,248,16,147,162,199,176,12,43,163,79,50,144,234,1,
101,106,19,205,160,135,49,72,64,7,197,89,33,140,84,162,230,158,250,246,155,139,92,249,226,229,136,162,93,118,183,131,104,162,224,193,61,109,76,225,200,228,244,193,21,64,139,66,120,86,168,227,206,237,56,
148,101,187,10,255,149,241,30,89,18,23,59,30,17,108,138,39,4,250,67,231,43,34,155,185,100,163,233,58,88,138,177,122,200,165,140,1,29,185,225,186,104,18,178,1,127,135,223,220,239,78,4,50,237,4,105,238,
21,169,174,137,110,161,170,27,125,176,110,70,169,154,177,50,189,210,253,251,76,226,172,151,195,211,173,101,88,120,128,78,167,178,129,140,4,51,194,15,150,227,156,210,149,186,53,12,24,178,244,214,185,33,
248,141,228,12,248,239,110,208,136,58,17,30,132,125,70,15,210,103,149,152,176,88,120,185,242,108,132,240,228,242,170,106,24,126,163,142,18,54,72,8,246,45,206,2,21,125,109,201,144,120,7,140,115,170,165,
186,215,77,65,248,249,216,79,198,62,162,141,115,12,226,2,47,242,49,32,143,21,66,196,213,176,69,89,207,194,108,45,239,21,142,26,16,113,107,63,67,134,66,98,231,94,25,207,127,147,150,42,241,179,224,139,131,
106,199,190,153,119,188,58,111,165,101,234,216,24,241,200,176,65,188,213,75,215,232,12,134,101,239,206,59,215,134,223,213,14,213,189,214,212,113,27,160,136,35,162,218,18,42,20,202,148,87,8,224,0,65,64,
163,54,82,229,102,37,154,214,28,60,152,195,140,132,82,1,52,52,131,40,23,253,26,140,207,154,59,14,5,202,147,77,160,46,10,128,70,117,23,25,244,224,61,122,85,227,152,21,151,156,114,86,81,149,35,136,3,185,
144,166,182,247,148,1,226,112,74,73,215,227,1,83,78,241,10,245,25,84,192,2,189,87,101,106,23,140,17,102,10,44,140,249,128,242,158,252,210,208,173,124,217,172,131,100,254,134,238,52,134,72,87,208,78,21,
99,118,6,70,12,66,97,220,230,42,225,57,5,72,198,193,135,49,175,194,177,160,133,104,203,160,222,97,40,119,197,104,16,106,6,193,160,203,180,230,212,67,140,11,200,231,136,139,120,154,5,214,129,140,200,91,
233,155,89,45,39,16,231,11,47,168,249,16,173,168,31,168,107,248,16,198,15,133,22,14,208,249,228,131,118,246,165,13,94,198,164,1,5,55,21,166,60,170,166,77,218,180,88,194,231,12,12,210,64,153,80,31,118,
65,182,144,134,216,94,188,76,148,129,71,179,38,137,118,153,36,51,139,62,190,140,63,218,84,207,231,229,126,186,157,14,112,49,198,39,241,213,99,90,137,113,61,92,44,157,47,93,108,49,178,111,174,19,23,111,
111,240,54,102,37,110,88,100,92,115,13,239,110,144,32,182,117,162,138,252,0,30,101,63,134,190,96,240,23,24,177,6,57,57,57,104,55,219,90,127,209,208,155,109,78,138,195,101,14,147,255,149,101,45,250,35,
144,103,190,33,189,219,144,157,240,209,231,232,230,42,114,96,123,150,22,196,33,200,198,37,43,94,196,6,110,184,60,15,198,90,133,35,216,43,136,22,166,6,128,111,170,64,119,207,99,164,164,15,40,228,66,70,
20,100,195,130,55,137,231,196,105,78,246,49,215,42,204,114,154,37,138,188,158,202,219,180,209,73,133,121,254,47,158,95,127,121,50,213,51,160,93,35,69,31,230,246,106,49,50,115,127,88,5,21,99,78,121,170,
231,216,40,117,23,138,217,19,169,230,151,85,214,53,44,158,6,116,228,13,160,5,112,140,104,44,170,169,186,104,70,111,95,12,112,84,140,209,160,142,154,254,177,88,211,11,111,34,26,27,199,70,153,170,49,64,
255,144,246,93,118,32,222,177,141,65,131,99,253,200,56,20,66,104,19,149,246,150,185,198,169,76,250,13,141,102,20,176,46,193,14,25,40,94,25,10,121,151,140,226,40,195,229,192,111,64,24,131,134,78,171,12,
32,152,250,190,50,73,241,193,27,144,33,179,52,16,86,129,76,20,238,59,114,170,111,241,212,145,176,238,34,215,232,234,124,189,147,172,89,5,83,202,146,159,151,4,101,79,41,122,14,160,75,190,142,152,194,120,
182,54,235,109,214,147,26,157,109,178,104,90,165,81,76,132,63,60,85,191,218,96,47,100,188,113,16,79,25,98,61,44,153,234,116,139,24,246,126,207,181,205,115,128,54,124,144,243,166,64,235,146,250,85,39,111,
130,228,93,195,151,97,112,128,51,96,150,242,146,54,239,137,29,153,244,163,64,149,61,42,7,186,199,113,90,138,1,109,84,129,28,28,165,167,191,96,182,111,182,80,253,188,2,106,176,29,109,112,153,246,124,179,
161,171,17,38,191,101,65,57,207,140,130,191,144,119,121,192,32,246,193,36,192,198,217,207,80,87,153,237,162,224,107,152,229,32,204,113,112,251,132,44,161,135,6,45,129,157,23,62,161,95,69,185,101,255,186,
203,187,196,131,8,186,21,7,82,106,192,7,169,187,72,70,184,191,92,151,87,115,81,146,197,226,35,217,175,214,38,104,168,95,80,34,126,93,105,19,157,157,19,211,174,186,7,1,42,147,203,150,162,169,211,166,79,
162,178,244,137,251,23,55,53,225,125,9,98,169,157,121,51,246,80,78,87,49,248,181,56,57,5,233,50,91,27,4,13,108,145,234,131,6,78,241,12,26,51,107,124,81,251,156,52,161,13,94,217,211,249,7,124,211,53,235,
203,236,116,100,89,225,119,75,126,254,4,248,242,53,213,224,169,44,167,241,172,174,195,191,192,135,220,218,38,19,114,127,218,73,16,8,71,73,109,135,116,8,21,216,85,96,89,24,58,6,189,28,174,221,18,95,33,
136,178,1,106,31,150,201,95,179,12,78,10,117,122,185,94,218,224,5,193,112,5,173,229,85,93,28,75,110,152,26,144,155,17,38,228,20,172,50,133,120,16,65,196,218,93,189,154,185,18,135,98,60,26,53,54,48,129,
103,5,180,162,171,220,46,178,165,41,175,35,33,70,171,112,157,153,152,198,201,169,245,234,240,139,63,84,2,254,44,127,215,198,153,214,65,96,7,197,224,67,19,183,70,86,169,221,237,16,181,234,3,126,3,13,14,
15,23,28,140,31,109,154,179,8,118,87,224,43,30,175,103,169,7,68,21,131,81,160,128,125,192,203,33,103,69,253,118,63,225,206,193,44,121,46,87,217,138,112,192,190,211,51,112,52,181,9,15,130,211,40,41,1,188,
218,30,31,226,228,193,152,96,134,230,170,219,80,251,236,192,148,155,157,239,194,226,237,57,202,54,208,234,168,237,86,47,121,88,138,140,14,91,108,223,150,58,109,236,98,221,64,132,80,214,4,191,152,157,113,
213,191,245,22,240,28,19,11,217,4,44,18,205,101,183,171,127,83,118,205,32,48,239,124,49,51,222,212,216,28,201,46,124,23,14,39,107,34,48,226,236,160,195,75,40,21,216,247,185,126,22,106,143,128,66,98,159,
26,140,16,142,138,21,100,181,135,145,252,226,62,21,219,80,23,146,153,97,30,217,18,44,135,179,6,154,94,89,253,74,178,41,146,130,190,4,237,166,196,220,34,210,134,178,145,51,183,78,67,25,176,87,23,216,146,
57,186,245,36,4,237,34,107,69,31,44,148,152,230,146,43,241,151,181,164,203,107,73,165,25,45,9,15,147,200,175,174,13,237,81,118,103,240,8,25,110,151,241,191,137,252,69,7,103,105,150,131,178,21,67,106,89,
113,68,118,196,172,55,181,27,251,117,8,14,247,196,84,117,172,212,252,58,189,129,251,237,10,15,183,185,139,101,118,105,100,170,47,91,105,236,219,246,191,2,190,118,249,135,79,151,21,255,220,230,218,234,
225,215,252,90,40,168,8,138,59,198,111,148,237,137,50,33,240,88,0,173,26,5,184,213,137,161,104,183,167,51,128,60,183,165,39,163,118,215,243,43,98,64,139,120,107,165,33,141,219,62,227,13,206,129,215,32,
194,123,96,72,2,95,50,47,99,213,134,153,171,101,88,70,254,247,162,10,232,20,8,174,186,156,65,80,249,84,118,203,1,184,185,164,177,7,40,131,37,91,116,58,23,36,32,105,119,233,131,102,212,23,228,74,81,15,
140,123,125,77,38,216,27,100,137,22,224,74,70,44,6,43,245,49,150,146,2,206,104,243,209,132,74,229,128,101,64,65,47,21,218,161,136,5,8,173,178,234,181,191,46,184,80,253,238,185,119,33,220,233,196,146,248,
117,205,255,204,108,210,144,88,75,140,248,234,87,181,235,201,7,60,19,190,209,131,134,186,158,149,45,40,252,213,1,16,31,148,53,54,143,147,43,250,84,223,247,215,45,73,223,72,237,152,36,70,110,176,100,59,
90,45,135,70,123,22,188,56,126,217,114,224,245,168,248,177,35,140,20,70,133,162,234,140,118,59,125,240,219,205,116,9,69,13,172,49,98,96,217,156,244,224,64,4,245,90,9,145,223,104,187,21,22,57,60,99,129,
245,96,149,40,219,102,145,221,132,185,16,122,199,131,166,34,20,64,236,68,44,73,52,203,190,212,242,149,1,172,117,247,53,241,15,181,137,92,227,108,26,89,99,143,26,88,190,208,102,241,74,252,210,146,208,65,
223,200,140,23,25,139,54,51,156,173,220,125,53,23,173,96,28,237,57,239,224,250,228,224,49,214,37,242,216,69,243,246,49,221,169,227,152,0,71,161,26,130,51,222,216,103,54,46,103,122,141,105,228,230,170,
111,103,147,154,188,187,228,21,104,7,77,176,208,26,102,49,154,165,239,21,200,75,189,199,251,201,26,21,220,6,162,241,194,176,49,46,42,107,252,184,26,21,253,196,193,224,136,145,64,190,143,33,45,82,94,190,
5,103,119,211,158,96,155,6,21,232,174,110,234,252,98,148,27,235,174,59,96,226,102,151,95,107,240,61,35,202,43,98,204,159,24,88,127,249,154,106,131,127,165,28,158,89,149,221,20,214,48,163,3,218,205,240,
108,132,65,194,172,91,217,104,73,193,0,21,192,78,133,5,127,36,188,81,209,198,120,7,158,89,141,4,124,151,93,183,14,106,231,33,85,8,80,96,119,193,121,158,207,161,59,243,6,24,226,178,56,84,183,133,96,202,
52,243,62,59,98,32,220,80,45,40,51,47,93,49,219,7,61,133,211,128,237,35,96,173,54,70,85,192,129,164,108,158,164,132,220,14,71,64,16,122,201,184,107,208,21,152,139,204,140,24,227,72,50,17,157,94,163,247,
194,47,195,232,170,251,73,48,156,83,160,222,37,132,13,187,101,193,52,99,48,194,155,75,177,171,145,12,246,101,77,172,153,181,145,225,229,112,242,70,182,87,8,226,7,30,124,241,166,130,69,47,238,149,93,156,
245,38,230,37,51,125,247,63,0,237,50,235,222,15,173,3,7,135,176,131,189,216,100,193,212,182,164,68,106,30,44,202,86,217,48,204,118,5,225,58,213,74,86,7,236,146,91,179,241,14,124,35,60,23,117,178,22,125,
40,189,136,111,102,92,151,204,35,219,52,219,142,120,12,107,120,233,53,173,174,135,68,6,218,220,220,224,105,165,159,185,9,59,116,224,102,86,107,171,244,170,228,225,19,130,158,157,138,71,123,109,208,99,
240,110,53,232,240,91,171,237,168,113,230,115,152,153,195,154,149,216,80,153,13,197,230,178,209,220,7,95,44,28,114,121,18,154,201,212,159,148,160,234,218,52,66,155,229,33,192,150,221,164,140,94,147,76,
111,43,171,1,146,47,157,189,93,58,210,252,132,179,158,53,187,57,228,161,65,32,39,145,152,91,209,187,137,213,7,149,219,76,224,69,181,72,183,113,159,199,36,74,188,124,37,19,197,254,81,203,130,226,157,16,
209,192,197,204,198,216,236,215,136,94,213,40,148,211,6,218,153,220,125,108,159,103,157,101,27,203,34,13,178,177,73,59,233,7,212,226,92,214,140,204,93,234,102,4,209,77,246,208,231,58,232,229,110,228,167,
241,4,177,121,37,44,60,116,206,167,140,102,252,24,44,184,177,55,95,0,95,188,166,122,49,37,24,99,110,126,173,127,143,96,195,10,140,96,234,184,2,227,112,108,235,63,196,251,120,187,119,146,91,8,0,172,45,
11,87,73,35,198,77,102,1,53,18,181,121,101,151,53,0,197,44,216,110,221,37,114,130,71,137,171,172,20,78,149,198,128,105,212,122,176,56,129,33,75,35,190,121,63,218,233,27,160,118,215,81,69,223,132,35,130,
223,238,51,207,203,22,185,129,151,200,135,217,15,239,118,184,233,46,86,189,16,64,36,183,209,224,195,108,134,177,255,37,122,149,231,195,154,177,101,187,85,204,185,119,154,16,72,97,48,75,2,38,253,20,207,
6,156,11,172,114,16,92,91,180,7,133,117,42,2,226,179,92,77,158,178,51,159,14,115,88,155,30,239,85,67,205,70,35,227,224,3,8,139,202,44,16,75,28,208,152,95,36,131,206,131,98,232,250,220,160,187,238,59,200,
215,200,193,82,235,73,203,140,123,14,140,37,219,191,120,138,206,189,245,25,150,53,96,197,168,224,209,141,143,249,171,217,179,144,69,39,103,81,210,71,228,99,245,245,174,208,198,25,226,89,34,51,237,25,253,
45,123,7,193,199,240,165,103,27,27,210,137,149,7,125,42,176,25,30,119,252,141,239,218,194,37,52,26,130,143,152,9,217,179,66,16,50,80,190,16,20,60,230,43,120,2,225,187,42,56,70,77,3,108,112,219,204,134,
77,50,61,72,246,188,134,169,122,235,115,57,61,41,198,186,196,205,233,157,210,203,20,39,160,71,143,130,43,211,129,9,132,245,162,6,57,132,142,27,143,24,133,9,234,164,220,248,7,202,58,208,171,95,213,213,
184,57,63,38,150,246,9,236,166,203,105,58,185,150,188,235,90,19,26,225,249,157,60,197,12,74,115,63,64,19,217,75,201,32,243,18,151,62,56,86,182,229,9,123,52,19,181,254,233,94,137,102,175,23,159,98,253,
93,226,192,13,169,200,199,131,41,183,131,31,58,14,189,46,33,30,207,225,151,4,157,30,232,176,53,152,150,56,70,31,121,240,96,0,78,14,182,112,197,44,156,36,197,89,149,185,113,121,219,164,79,125,160,160,58,
62,254,98,149,164,157,247,183,86,239,75,224,203,63,254,146,61,224,151,205,205,137,150,76,240,37,104,243,104,186,199,70,17,68,227,67,209,93,218,64,135,54,184,76,77,116,123,251,111,72,6,109,156,25,203,156,
45,67,197,51,34,87,109,56,130,140,86,209,26,191,118,97,53,40,14,190,149,239,248,170,109,208,171,78,22,102,153,119,217,108,64,228,88,57,104,136,83,246,112,243,48,51,129,170,116,193,201,177,214,77,103,53,
146,205,0,165,26,206,31,38,9,62,245,129,76,111,19,143,43,156,133,117,33,30,119,144,146,67,232,211,131,27,122,193,225,177,249,10,250,227,49,46,243,144,224,22,51,198,65,142,136,241,29,30,156,33,131,74,204,
236,186,32,240,178,65,81,195,192,104,112,149,240,59,190,56,187,230,66,25,233,233,120,49,206,251,186,113,48,130,58,132,213,56,148,165,253,89,114,208,46,31,65,183,217,173,10,56,236,6,58,207,253,67,221,153,
137,251,114,196,142,101,188,218,140,13,214,137,211,133,90,185,105,197,187,168,178,156,115,65,142,13,1,63,3,250,220,108,176,203,108,4,234,80,68,237,74,22,133,141,149,147,246,157,82,136,78,80,231,69,11,
147,55,244,12,33,227,38,192,10,108,44,233,247,186,95,188,88,22,118,115,54,176,203,117,181,61,180,104,211,191,88,74,129,125,237,208,215,244,1,39,115,170,171,183,235,226,51,160,222,20,242,59,3,160,68,137,
177,104,114,28,125,185,169,110,219,125,104,104,87,129,97,52,16,158,54,116,183,97,179,87,154,230,182,185,188,110,11,75,146,33,187,158,71,203,174,58,32,233,115,1,237,67,214,253,237,227,37,208,207,161,133,
128,83,110,20,220,234,224,48,146,125,113,189,27,164,6,237,237,26,41,7,193,160,89,140,168,182,29,89,130,253,12,17,143,203,99,241,69,186,49,121,38,61,138,234,73,66,180,235,28,175,12,231,65,57,108,10,238,
51,170,155,107,99,230,237,103,70,150,221,0,123,224,195,210,88,197,224,35,55,29,26,6,216,65,106,201,19,157,83,157,1,118,80,235,203,246,92,59,100,191,12,190,124,77,245,250,5,255,187,204,237,81,19,247,158,
11,27,106,148,219,122,184,187,10,105,169,217,14,126,122,115,189,9,48,204,113,77,98,77,243,133,139,41,253,155,35,61,92,86,65,155,102,144,134,112,162,89,110,108,68,64,20,18,49,163,160,2,130,91,231,44,162,
154,56,108,36,92,13,231,214,224,29,112,42,161,217,163,225,180,254,94,178,241,207,128,63,210,112,76,99,226,237,40,59,176,76,224,68,118,185,229,202,161,234,149,65,130,128,150,198,83,224,43,146,52,170,172,
79,185,227,172,131,78,195,226,135,24,248,164,10,161,26,187,205,200,158,151,92,144,49,186,147,243,85,3,44,144,229,117,156,88,202,121,249,68,240,32,88,143,56,133,40,202,212,30,246,17,47,137,216,56,153,188,
222,233,34,20,221,69,187,80,1,138,53,103,107,103,111,242,87,34,161,6,81,114,158,111,50,21,46,105,151,203,78,89,196,9,216,145,130,196,131,13,149,241,170,6,209,25,119,101,97,16,142,19,5,21,153,67,59,40,
232,206,36,180,217,83,49,96,60,139,87,143,227,132,14,178,47,46,124,179,178,119,85,214,27,215,156,255,35,8,9,82,52,42,176,180,133,60,76,42,89,212,164,42,6,217,59,29,174,229,131,38,31,198,34,117,96,10,192,
174,35,206,52,207,37,143,149,82,229,69,197,172,16,68,170,161,51,179,54,123,72,135,164,111,116,105,195,214,204,18,122,221,142,129,66,222,24,150,1,9,45,206,243,37,11,94,55,250,56,8,100,177,17,11,237,186,
241,242,8,12,246,146,214,213,63,17,68,171,60,195,192,201,1,39,138,207,87,176,91,161,34,66,216,66,108,19,185,98,204,67,219,224,139,151,93,113,11,79,228,69,230,0,188,202,211,135,85,44,251,83,55,66,247,61,
93,27,47,222,112,240,94,82,6,107,225,195,241,43,137,101,190,231,215,73,113,70,0,191,28,76,188,183,165,255,100,99,88,127,200,46,166,94,238,60,250,170,2,100,8,163,16,55,209,83,175,90,162,157,220,147,231,
113,21,203,63,174,228,204,95,154,229,31,211,87,84,70,58,141,143,58,17,179,56,199,123,221,240,229,219,66,88,240,236,69,17,64,117,54,81,97,192,86,90,209,169,130,82,200,139,187,152,129,62,235,169,142,47,
137,54,201,180,173,26,189,232,49,154,166,66,73,218,4,86,73,160,106,124,179,0,232,50,169,170,124,61,54,53,172,245,98,59,155,88,23,165,200,228,252,118,142,71,98,26,190,64,87,94,72,209,90,240,245,215,43,
133,6,89,250,85,7,5,16,174,98,196,155,169,184,218,214,143,120,179,15,196,56,247,62,99,216,232,196,77,15,168,83,2,158,211,163,200,200,34,150,209,245,35,166,179,0,255,49,210,161,116,235,179,21,78,248,205,
206,128,228,130,112,118,32,106,42,168,174,79,132,164,157,76,14,212,26,202,252,115,103,219,8,221,21,6,151,245,100,156,116,137,74,58,216,125,229,168,139,91,85,78,71,17,109,227,117,221,45,30,24,138,93,225,
96,192,139,97,60,40,176,140,23,211,105,190,117,92,159,250,100,68,119,103,227,58,93,102,204,116,142,180,116,198,76,45,133,111,2,185,202,18,135,13,94,226,7,178,188,219,120,217,17,86,131,192,178,187,183,
90,140,131,108,247,108,180,210,94,130,21,68,14,236,207,132,88,135,15,163,108,146,199,97,250,37,189,144,135,220,192,5,27,80,200,230,196,127,147,87,172,151,236,95,84,168,140,147,2,78,221,71,182,102,214,
45,13,195,128,66,237,135,202,21,207,88,180,52,73,162,54,220,229,200,67,29,156,20,236,79,181,177,189,192,230,142,220,194,6,125,10,110,245,200,120,33,97,172,50,104,19,80,246,106,185,206,198,18,108,48,167,
106,233,177,211,127,97,62,35,125,55,86,139,179,18,65,228,174,89,14,238,29,43,146,179,237,98,226,0,55,202,178,142,98,93,99,61,6,121,163,89,176,13,77,42,66,98,27,23,82,166,3,204,41,159,40,156,96,95,36,184,
103,221,151,118,187,203,39,226,161,85,27,22,113,225,84,140,88,174,59,111,121,126,60,208,34,198,252,73,240,229,203,63,232,11,56,177,166,106,49,231,90,134,241,213,220,230,113,32,56,156,145,60,233,141,98,
231,61,120,144,83,49,51,50,17,193,183,218,45,171,235,249,12,214,180,142,139,103,189,181,168,89,11,228,213,190,104,214,25,55,91,182,179,52,189,132,123,102,96,163,13,241,0,119,25,13,108,56,235,20,124,13,
95,157,125,81,155,39,208,96,1,94,102,102,126,81,214,43,91,1,158,184,106,13,49,2,7,49,26,178,169,5,224,112,152,156,35,126,101,102,53,156,203,80,134,27,158,123,135,211,100,120,246,137,25,182,88,142,146,
228,7,28,84,11,93,69,152,210,141,131,17,172,34,210,119,45,48,136,129,129,70,108,38,242,99,204,170,177,204,30,226,210,119,201,38,47,209,46,95,230,43,163,87,6,177,206,143,230,64,207,205,98,134,177,120,225,
60,172,229,222,195,43,161,53,88,129,239,170,37,196,245,150,88,29,242,166,13,6,7,5,31,173,172,89,102,103,226,252,119,58,51,90,157,241,38,139,84,184,33,207,57,104,236,206,193,225,241,36,126,64,225,228,239,
170,234,86,163,193,174,164,252,162,32,235,82,18,114,116,154,191,129,231,182,114,155,24,212,105,73,192,115,154,83,160,50,116,113,172,86,52,234,110,253,142,149,59,163,137,32,177,184,30,191,137,180,18,133,
48,147,132,37,40,140,195,105,241,110,172,133,122,120,15,62,87,31,182,110,46,89,4,2,163,10,60,223,127,68,95,135,157,185,218,50,91,253,77,247,64,127,218,112,65,207,184,135,37,105,57,131,154,33,116,101,136,
243,19,211,193,86,49,138,180,95,56,249,134,69,96,105,95,184,45,254,36,105,97,218,244,27,44,199,8,62,218,10,138,75,174,155,200,56,121,78,43,31,81,136,233,162,40,10,208,197,199,39,10,153,44,25,249,196,201,
150,194,114,60,236,235,172,184,232,35,255,24,197,160,73,7,250,74,101,61,17,84,115,67,203,37,118,17,163,238,51,216,176,37,27,203,122,221,184,3,140,131,119,139,196,21,203,83,244,57,239,185,170,198,58,118,
218,239,120,171,43,188,239,11,210,0,63,229,48,226,200,148,245,120,118,107,65,127,56,124,241,57,213,193,244,248,224,114,92,251,226,139,155,133,67,191,30,86,217,130,48,98,96,200,214,168,44,133,8,227,111,
99,37,204,243,99,69,202,72,209,242,101,217,152,16,37,151,16,222,102,114,135,245,163,5,52,181,80,111,102,91,243,234,202,162,249,169,234,212,213,85,22,167,231,117,121,9,182,33,178,84,134,55,20,8,44,85,43,
142,10,233,237,54,142,76,209,40,24,100,132,174,184,198,41,191,97,166,187,124,249,74,53,127,53,179,28,116,207,140,48,83,203,62,84,208,237,46,171,36,197,202,133,62,206,118,124,37,56,128,199,134,129,39,177,
130,158,133,12,86,48,31,27,109,177,97,36,104,119,36,147,174,112,69,57,231,198,85,228,2,95,150,121,95,255,47,94,235,230,46,135,90,244,147,224,152,88,212,99,35,241,89,240,48,55,150,140,209,6,46,136,107,
203,154,184,65,153,77,249,189,144,74,34,212,11,231,245,14,190,59,204,96,70,184,214,24,58,189,43,146,149,125,74,108,89,239,67,128,48,80,102,186,252,214,102,156,85,38,167,127,141,215,177,2,137,160,222,92,
87,12,234,70,160,189,178,82,217,153,229,220,89,70,212,166,153,177,242,97,105,62,71,156,241,235,70,22,78,53,54,75,251,98,134,39,68,44,148,186,12,33,225,24,213,105,196,77,209,7,84,22,217,40,252,34,169,187,
196,115,155,62,49,3,251,233,117,15,155,110,168,136,208,215,92,63,18,0,116,113,150,155,55,157,86,3,186,53,96,62,169,198,201,198,54,164,248,216,176,201,18,199,139,94,39,108,112,87,127,153,101,149,101,184,
204,76,48,52,27,118,121,157,114,149,54,86,51,228,25,44,23,25,181,172,207,211,159,12,160,195,125,84,61,241,69,196,141,241,203,58,212,80,18,99,80,191,150,173,94,190,5,196,118,89,199,82,250,76,110,165,0,
195,38,58,233,203,38,106,195,114,175,83,108,22,161,196,46,218,150,214,199,92,22,3,216,137,239,128,74,226,79,37,27,83,82,60,236,97,69,1,244,105,211,39,14,166,62,2,132,111,131,149,194,117,223,129,48,234,
94,147,175,146,223,216,234,139,196,142,156,141,222,166,235,232,42,19,179,128,39,158,36,71,204,253,9,240,165,65,53,174,137,116,139,140,245,250,52,176,141,217,81,57,66,194,180,48,30,210,230,213,73,14,119,
100,67,23,7,154,101,248,216,216,204,2,53,210,158,145,49,142,218,67,105,163,246,139,132,187,132,67,102,100,22,25,96,126,40,163,7,248,136,102,229,6,168,124,117,150,203,15,51,80,198,116,52,1,158,198,29,120,
113,227,205,146,230,228,161,68,228,221,134,215,211,212,94,233,19,40,224,237,55,226,205,6,21,131,195,81,172,128,64,137,161,127,148,35,156,150,26,127,38,2,241,192,204,206,250,216,159,156,101,204,198,137,
232,4,119,29,159,4,190,42,149,96,252,33,8,68,9,140,18,252,205,83,103,160,11,118,107,101,133,154,230,0,219,129,30,52,72,240,124,147,147,216,50,69,89,164,194,207,29,31,1,15,160,111,62,27,211,25,67,155,241,
225,158,122,87,144,31,204,147,139,100,120,213,147,178,63,184,47,37,16,107,95,133,139,146,44,192,27,211,187,116,52,228,80,57,0,25,231,160,165,205,30,128,64,183,207,252,110,212,11,47,74,229,75,183,166,92,
148,237,168,96,209,121,112,32,250,21,191,113,31,125,62,35,250,170,52,153,172,116,82,160,227,168,168,171,143,205,106,22,40,102,250,34,243,139,25,90,229,129,152,107,120,230,27,135,172,51,21,245,50,158,202,
177,181,59,106,114,17,135,44,170,29,190,248,122,197,38,186,41,123,97,107,116,237,240,72,158,72,189,130,46,101,36,179,157,184,169,12,41,219,144,101,99,176,50,138,183,89,214,187,61,216,201,93,222,144,4,
16,179,6,234,206,117,152,106,144,22,65,16,251,130,201,169,107,124,203,217,214,59,232,27,107,82,120,183,40,44,167,65,52,122,54,128,120,132,92,173,186,41,219,139,125,41,179,94,96,189,178,142,247,52,109,
86,1,45,225,18,151,200,24,194,181,164,163,6,226,72,131,21,147,241,1,218,115,131,4,215,10,86,29,235,77,185,162,134,129,90,48,238,171,235,61,235,53,46,175,124,2,28,97,235,207,154,13,145,248,38,138,122,254,
167,200,193,228,3,208,142,54,55,112,202,255,101,44,89,1,247,207,130,47,207,84,211,154,106,131,127,110,134,199,4,61,182,83,166,182,209,172,141,178,75,155,234,34,235,85,167,251,238,220,70,4,91,81,13,182,
144,171,11,56,194,176,18,142,193,237,144,242,214,189,249,188,220,31,161,29,133,135,177,193,244,16,242,165,38,234,188,209,104,75,54,3,48,36,129,221,173,189,146,74,153,248,88,236,213,202,129,102,109,186,
6,199,161,225,80,48,113,34,51,171,18,124,213,38,86,106,216,235,233,222,61,244,145,49,25,163,168,2,248,216,200,46,219,79,56,121,163,234,130,12,94,24,144,22,126,110,129,12,103,200,8,4,165,69,141,209,223,
1,60,48,91,126,176,173,143,207,97,216,243,110,14,250,194,113,83,225,107,197,82,136,7,153,72,170,176,100,116,97,233,157,7,213,110,101,251,231,159,203,48,43,188,66,166,44,91,83,232,209,88,245,55,73,135,
6,82,3,46,189,197,82,57,200,224,233,252,120,81,37,111,167,91,27,103,19,191,65,215,152,86,3,59,18,59,220,241,122,242,163,88,5,81,154,216,193,11,61,118,46,55,16,24,181,254,21,241,230,245,241,193,155,154,
62,111,95,163,212,65,181,85,123,59,27,147,116,226,177,95,158,255,201,250,100,114,31,42,136,62,185,234,181,44,34,118,184,43,9,241,148,218,109,118,178,44,207,236,55,220,12,190,168,133,51,193,112,54,173,
108,245,90,86,133,75,221,40,3,50,235,173,100,134,240,37,236,241,224,119,195,78,105,144,195,249,4,154,167,89,182,64,120,46,211,252,109,155,57,208,115,107,189,116,60,62,176,31,250,18,6,62,227,153,109,46,
110,170,204,229,41,180,190,24,250,71,253,33,215,184,106,91,18,72,75,13,23,210,148,173,173,89,7,183,107,177,61,250,154,79,151,42,182,133,225,40,199,53,159,85,31,69,127,197,128,171,108,101,225,87,52,52,
171,213,120,71,84,146,206,116,234,93,7,161,0,248,149,82,71,70,38,75,22,166,112,26,16,137,205,250,225,100,60,54,115,66,233,75,199,42,47,3,35,161,182,220,241,184,253,102,71,218,149,21,140,229,81,157,43,
150,172,96,91,109,213,215,194,79,57,167,218,214,137,31,193,143,121,78,181,145,113,154,103,49,131,105,160,32,123,192,127,213,192,140,18,112,51,88,184,223,67,161,214,195,42,219,134,157,131,10,190,214,162,
94,165,84,228,204,108,6,84,89,60,165,2,44,62,108,82,30,144,101,8,187,58,68,40,213,8,206,159,17,140,179,243,73,140,197,169,54,46,136,193,48,225,95,166,250,175,0,0,32,0,73,68,65,84,111,253,18,35,29,78,131,
178,40,87,17,16,101,200,0,85,133,252,137,83,107,71,98,210,114,11,210,221,69,107,218,1,39,204,60,42,51,166,89,127,109,111,233,111,229,77,28,85,132,206,107,34,149,235,18,195,216,224,72,27,29,71,4,45,221,
100,96,144,52,104,32,87,196,186,90,181,13,234,48,132,216,182,83,93,2,210,69,130,224,171,127,198,146,57,234,247,144,91,90,143,51,172,109,248,2,253,162,160,81,50,176,24,137,224,204,69,53,5,6,31,178,25,83,
10,102,93,152,145,79,138,100,192,212,254,106,31,198,163,53,138,206,86,22,125,200,43,26,232,59,139,59,118,75,204,58,92,193,34,64,33,228,132,108,3,86,138,8,183,66,131,120,81,228,116,97,158,177,121,240,66,
3,217,168,10,120,124,113,86,139,237,131,56,96,55,94,46,165,252,198,38,53,53,167,83,188,192,24,242,1,105,215,43,232,81,211,77,19,45,192,228,12,102,192,241,103,139,26,228,40,122,36,63,162,247,242,110,136,
59,101,230,128,174,25,168,41,237,19,244,196,147,237,199,144,104,203,73,215,232,236,74,201,0,185,110,214,3,94,104,160,55,6,15,42,204,12,166,227,159,89,208,157,161,140,223,81,59,210,196,237,132,43,155,1,
94,205,6,5,126,68,239,168,186,220,229,171,174,217,239,123,131,222,197,51,94,246,244,191,209,200,12,22,89,199,65,93,72,111,209,212,5,118,20,47,92,87,254,212,8,229,162,138,251,254,30,94,94,40,176,250,55,
234,106,29,67,178,92,124,211,172,53,242,55,6,11,52,78,18,113,12,54,239,19,156,210,104,32,162,137,75,155,75,4,117,128,133,62,105,75,179,153,225,178,160,16,143,203,47,195,100,173,219,101,180,156,241,39,
192,151,31,169,87,233,122,188,174,206,39,219,1,193,5,231,32,49,227,198,217,203,28,1,130,81,32,69,178,30,159,238,252,65,221,137,167,17,208,161,128,184,97,144,128,231,167,130,201,157,193,137,91,10,82,219,
75,100,187,107,196,186,218,97,73,143,250,32,144,220,201,54,234,57,102,6,188,152,49,237,75,122,65,226,64,96,211,183,16,228,216,178,56,165,89,18,66,196,58,147,197,104,45,70,213,115,50,166,6,173,70,143,140,
85,135,67,16,24,47,178,81,190,219,20,52,131,30,167,172,134,190,139,3,10,167,224,240,106,60,195,141,124,218,117,168,238,153,89,143,77,170,62,44,63,236,19,85,134,8,93,220,174,217,102,173,249,224,254,233,
2,93,50,133,107,224,41,123,237,112,237,81,150,43,226,245,241,213,129,221,239,67,70,214,161,252,162,181,130,223,73,23,225,12,253,158,71,86,23,161,147,23,184,89,12,131,119,162,189,123,156,1,13,93,28,238,
134,177,89,40,226,51,71,236,1,215,144,77,20,176,193,113,125,195,165,50,142,243,178,2,222,140,127,81,121,41,88,4,187,160,164,154,209,192,37,5,104,21,230,80,214,101,218,104,152,206,35,205,32,219,200,49,
102,119,153,193,154,224,217,102,179,80,73,130,50,35,218,90,53,146,98,14,114,184,110,197,139,98,3,240,13,175,101,157,39,158,188,49,140,15,74,68,6,142,1,242,23,15,155,205,18,25,169,80,24,218,54,26,112,198,
186,247,204,246,111,28,78,112,22,125,27,211,202,36,34,12,40,55,81,228,37,147,173,31,150,97,42,182,132,13,128,13,147,75,230,29,140,88,232,238,124,111,148,77,178,217,55,3,250,22,109,11,52,97,141,167,32,
151,104,107,88,223,194,191,48,253,45,239,235,208,15,201,147,208,75,111,19,35,52,200,49,12,36,157,218,209,193,160,75,167,240,18,85,149,126,152,75,118,246,159,109,213,176,52,139,176,93,98,60,226,193,148,
49,49,222,59,35,149,151,142,254,159,184,102,203,127,142,248,217,72,162,175,88,27,224,133,178,134,118,98,241,19,239,100,210,139,248,156,213,98,145,249,8,200,203,47,246,66,18,210,45,15,213,179,74,54,168,
172,125,45,252,196,143,191,4,115,98,132,49,179,157,211,57,45,201,144,141,28,105,20,183,61,2,87,228,148,182,88,20,58,116,237,108,16,248,41,91,191,188,208,64,26,234,150,13,133,176,236,150,48,153,73,6,12,
62,80,206,66,121,202,145,68,80,160,198,209,27,18,119,132,67,125,104,60,1,1,31,188,209,175,66,231,104,173,178,211,52,165,30,63,250,60,114,182,195,213,150,246,22,95,120,89,9,78,245,215,6,175,10,106,217,
184,70,81,153,215,136,153,162,101,120,136,186,76,74,62,49,146,148,165,27,182,61,255,84,232,75,131,0,140,233,71,8,58,240,30,83,246,44,235,181,11,159,167,227,168,89,205,218,25,20,148,62,168,12,165,147,239,
112,162,125,222,129,67,84,106,224,35,237,239,174,27,182,78,241,196,106,222,161,220,96,26,129,143,148,66,217,45,85,130,238,96,190,136,125,208,44,54,108,196,170,13,171,80,246,13,160,128,153,20,128,231,207,
220,128,201,233,4,216,249,196,155,73,200,106,0,113,162,101,27,27,249,226,191,202,56,49,157,164,139,11,63,220,28,110,151,116,24,39,50,178,26,39,13,40,219,25,182,73,132,83,23,246,209,241,106,119,107,252,
45,250,3,3,99,103,27,11,114,17,177,31,207,52,130,61,199,64,139,153,216,3,218,42,100,166,18,172,188,15,28,93,239,149,63,0,213,179,72,4,180,218,211,198,239,7,2,6,89,71,69,22,66,209,108,168,207,38,64,171,
36,186,146,137,69,220,156,11,95,106,87,214,179,232,118,55,155,25,116,235,38,168,101,4,118,126,0,109,3,125,61,151,131,193,251,69,109,69,59,107,4,148,133,159,213,44,25,202,252,89,75,177,189,252,64,130,76,
183,2,141,190,104,41,63,86,137,196,184,198,115,160,53,46,230,100,80,216,13,240,249,100,216,17,1,65,8,6,234,161,199,84,242,170,242,46,234,50,251,207,179,137,57,155,137,253,5,155,119,117,153,143,91,159,
213,162,122,11,9,181,34,60,80,30,148,136,197,35,244,146,166,133,243,165,180,127,33,124,241,57,213,158,78,34,133,193,67,17,175,121,226,135,45,227,243,80,27,48,168,99,42,155,177,4,95,45,0,92,82,152,92,54,
201,44,5,121,137,216,168,64,49,235,166,110,246,46,224,88,82,251,113,111,243,216,56,174,183,253,90,162,50,204,240,11,132,109,109,231,246,51,209,160,188,176,94,147,2,165,124,1,52,87,35,192,22,204,34,95,
145,15,155,178,75,91,234,171,135,234,12,224,55,42,217,5,142,124,179,70,111,113,103,149,69,29,115,237,158,52,230,19,221,146,15,95,228,213,185,224,203,180,66,166,43,78,93,97,40,222,164,25,90,109,147,242,
3,62,244,33,31,199,231,182,12,18,154,145,75,145,222,242,123,161,64,143,131,118,101,45,227,196,21,176,211,224,160,29,119,57,234,10,75,226,49,89,249,113,83,174,228,145,54,157,181,32,14,187,124,228,176,13,
187,55,75,54,79,3,13,98,197,200,79,227,158,10,184,160,76,100,63,234,62,171,72,139,201,104,188,225,24,129,235,67,110,148,28,141,39,115,188,189,235,112,175,154,230,163,46,7,5,215,229,34,199,202,108,121,
150,237,212,99,135,200,35,74,153,21,95,54,209,251,44,145,246,101,218,156,252,244,188,225,52,191,83,95,218,32,223,205,109,103,249,10,14,36,150,106,14,187,252,199,174,58,210,8,26,36,181,158,18,59,130,226,
198,27,214,231,211,10,230,215,124,83,36,69,210,192,25,179,80,218,192,118,89,196,192,110,121,217,190,40,232,107,144,50,112,0,30,190,12,244,78,237,71,196,61,249,28,245,7,131,49,85,37,112,152,59,89,69,252,
139,111,78,44,136,103,132,145,135,238,141,165,190,80,98,51,255,143,122,170,179,66,44,0,225,71,87,127,184,250,236,78,106,89,99,93,110,4,75,249,210,174,215,219,195,57,116,123,38,83,112,119,35,172,11,107,
234,207,186,184,80,14,178,31,106,118,90,15,113,64,76,117,217,52,53,189,221,71,5,70,112,152,200,67,200,201,76,159,199,230,252,152,129,65,31,137,244,107,134,255,186,224,116,176,124,19,173,125,61,27,112,
112,68,150,205,78,196,196,172,215,117,11,36,190,22,190,120,163,226,236,14,12,168,67,144,95,209,40,175,192,176,157,180,161,54,31,127,188,105,188,192,74,91,216,226,18,130,89,78,207,56,234,193,69,26,137,
177,13,185,57,65,11,10,137,181,178,114,202,111,231,231,33,68,108,102,160,17,199,125,23,110,230,240,229,185,112,4,168,20,84,7,159,170,98,192,147,212,140,178,148,20,240,49,139,87,61,163,20,171,165,196,36,
88,228,12,31,58,36,48,18,234,48,199,52,146,224,21,204,76,218,81,11,15,248,80,95,129,214,71,160,136,70,109,0,211,99,163,92,114,141,60,174,19,190,192,129,142,99,23,94,171,104,153,249,146,168,71,213,107,
227,72,74,40,4,79,203,244,64,95,174,151,201,71,1,35,99,224,179,30,14,115,158,61,81,79,161,89,58,162,3,185,26,125,23,178,59,128,116,135,76,143,153,250,69,226,27,188,19,5,116,134,98,32,111,100,80,237,176,
201,81,4,23,148,182,107,161,52,207,215,46,172,216,218,157,43,226,155,213,170,211,251,221,48,225,212,21,116,60,178,21,50,233,85,180,234,233,219,127,224,89,178,5,215,133,251,166,228,19,72,15,166,46,25,228,
11,145,246,178,89,102,18,20,91,21,163,254,26,21,204,204,247,112,115,164,46,203,0,25,31,114,45,178,171,54,10,129,62,46,18,213,9,151,6,148,229,170,240,188,226,107,149,209,190,181,146,5,84,31,177,163,200,
215,102,159,195,222,153,205,96,106,172,125,44,110,60,123,36,65,141,194,240,154,225,88,85,165,29,29,48,64,136,178,174,56,214,39,102,23,94,251,118,72,196,7,44,115,216,233,188,153,93,99,113,218,209,118,152,
217,214,154,237,18,25,243,119,11,22,3,111,168,205,168,126,196,215,237,194,141,17,219,37,116,83,104,39,43,86,217,235,226,232,32,6,54,126,143,19,239,149,145,119,81,110,55,201,157,148,13,57,9,197,161,190,
137,2,71,49,24,144,95,194,209,73,106,197,67,6,92,207,131,11,72,223,104,183,83,189,27,27,75,229,105,214,238,214,34,43,94,171,95,118,105,103,149,113,193,103,196,109,190,234,160,255,101,128,109,27,38,127,
29,124,237,145,122,105,160,97,68,225,115,56,148,191,175,97,254,144,217,94,91,91,210,194,142,45,67,108,102,134,107,188,230,53,90,132,205,232,172,29,14,10,66,184,132,172,118,188,107,216,108,20,52,107,214,
142,178,198,195,172,130,197,41,206,188,9,160,214,37,57,57,11,223,142,32,21,107,168,40,223,45,117,243,44,203,171,207,209,22,133,248,22,65,67,166,20,201,246,11,62,26,107,209,38,34,31,148,161,220,78,141,
21,27,178,34,52,169,136,47,78,199,83,240,174,14,21,145,38,111,214,168,87,251,201,69,151,40,58,11,134,188,183,250,22,142,156,42,131,80,148,108,183,170,83,140,231,189,125,236,49,112,30,184,150,121,198,212,
204,49,30,148,220,203,16,89,228,165,87,188,89,71,94,202,160,60,28,44,215,75,177,54,110,88,117,152,13,112,231,238,50,34,205,152,111,92,2,7,192,237,149,160,89,112,226,211,32,176,163,173,195,38,27,55,213,
23,206,46,241,88,147,12,78,199,112,51,216,108,236,130,247,155,211,189,181,243,206,186,134,136,70,192,173,145,25,154,63,88,207,235,210,239,104,163,104,153,134,124,185,173,234,82,183,38,178,28,191,105,100,
185,9,231,100,163,27,151,24,13,71,60,219,58,79,95,24,147,163,40,247,184,9,184,140,240,172,114,183,87,165,69,206,137,2,6,42,74,5,186,121,219,252,242,228,105,184,155,93,54,16,196,51,154,76,115,152,55,8,
87,68,210,107,151,107,22,146,129,103,202,128,179,250,184,81,0,155,114,184,225,69,200,11,175,118,115,178,71,207,142,134,220,217,85,196,15,223,164,25,214,149,65,174,217,142,149,241,79,155,36,250,46,244,
209,51,27,196,75,58,154,52,24,51,138,86,22,14,212,173,248,185,161,135,158,111,158,228,158,151,117,169,97,137,129,77,114,179,90,198,137,120,5,192,233,37,182,150,134,220,78,227,214,112,195,69,7,66,159,167,
24,173,104,160,153,66,216,204,10,66,133,217,224,50,1,24,128,25,201,235,176,146,4,244,205,197,19,188,134,14,138,53,252,72,90,148,31,102,116,60,30,236,125,8,59,109,43,136,174,126,11,12,154,69,250,50,248,
250,211,63,174,105,36,231,103,37,205,134,95,54,220,109,248,35,143,196,204,44,20,8,221,244,141,165,162,190,58,56,215,65,102,3,110,177,102,105,150,149,143,128,132,210,161,225,192,17,36,5,80,203,224,172,
247,117,149,49,26,54,60,28,41,234,66,44,244,53,222,12,6,135,202,183,226,204,140,108,165,36,173,94,16,129,245,8,108,96,68,57,168,86,44,107,117,194,133,180,156,148,228,218,211,16,246,114,74,84,142,140,242,
206,18,162,245,223,24,46,252,13,125,146,180,131,83,34,131,4,159,251,139,88,54,141,147,14,84,56,94,237,45,203,242,21,124,181,56,26,234,139,70,48,218,244,178,59,33,199,131,55,226,102,224,69,54,30,178,118,
104,208,86,203,8,46,158,156,36,87,196,66,168,203,171,218,232,89,244,12,66,8,240,55,7,252,64,183,154,161,182,80,0,14,20,112,217,93,236,251,93,239,15,10,67,49,112,181,245,188,100,75,199,41,208,237,13,170,
219,209,1,12,184,83,82,142,163,199,58,237,2,108,14,190,229,181,92,165,104,15,158,146,105,168,49,9,97,198,124,84,44,187,214,104,39,214,117,14,66,27,15,22,109,187,254,143,41,83,58,226,13,93,119,188,231,
203,191,185,225,146,42,156,93,65,22,238,117,73,113,130,118,1,7,15,34,96,58,131,231,126,116,64,231,38,42,192,170,4,60,209,4,136,185,229,128,200,71,231,54,254,174,113,165,42,46,214,13,239,57,210,99,192,
255,152,246,214,94,45,122,33,236,4,91,194,77,43,166,73,184,160,223,18,79,56,243,71,3,200,106,53,54,46,83,213,52,168,49,242,155,250,205,0,13,36,9,92,45,167,129,157,141,15,194,149,190,232,174,149,157,184,
77,18,74,239,204,234,208,141,128,177,118,58,103,54,54,205,218,78,49,158,80,48,160,173,20,176,155,226,137,127,217,89,242,174,32,52,26,200,147,120,185,195,76,78,189,70,114,161,170,118,99,143,183,3,147,84,
195,139,191,213,160,131,87,36,85,19,36,110,109,80,150,229,221,153,77,110,230,77,121,4,148,136,160,245,37,234,115,187,46,99,219,224,110,126,205,196,237,229,174,61,247,165,240,197,107,170,231,81,122,151,
95,118,185,217,195,31,115,45,241,53,133,245,90,59,31,30,235,136,159,254,17,128,5,184,33,101,25,72,218,68,39,229,155,220,43,199,219,70,244,18,168,10,112,66,24,6,191,3,56,77,3,180,105,183,251,130,38,50,
3,203,57,183,204,232,82,148,197,136,180,237,201,60,85,164,179,165,100,64,189,120,153,244,80,246,28,172,105,50,25,112,76,35,29,229,141,13,193,59,96,231,132,204,112,125,166,132,93,192,199,177,200,205,217,
57,23,122,119,251,72,162,159,51,2,31,65,186,225,36,90,78,151,2,126,183,179,206,35,125,87,202,19,226,144,184,91,59,107,97,227,41,229,158,24,66,186,15,150,203,165,242,219,186,45,12,83,237,87,48,67,167,41,
178,177,156,104,60,142,15,37,40,90,88,59,238,180,71,60,84,206,183,235,224,178,162,139,29,108,10,202,162,192,111,94,139,242,134,3,21,45,49,235,231,55,244,222,190,238,59,211,157,221,177,30,95,225,4,113,
175,131,27,125,113,177,120,26,53,20,30,20,44,15,167,186,73,238,214,13,234,135,1,235,246,139,121,64,43,56,37,178,54,48,21,156,65,11,6,64,198,25,87,157,134,160,69,223,16,184,167,46,121,221,128,163,199,186,
156,226,205,123,103,153,43,105,144,58,48,89,147,103,209,251,76,207,254,43,110,44,205,164,67,170,127,240,172,97,232,204,27,58,49,34,121,20,138,26,95,180,228,189,62,209,40,247,14,99,136,92,202,223,249,186,
247,126,135,25,150,210,197,186,230,210,165,228,176,220,125,83,112,97,2,51,63,21,252,77,172,42,88,139,138,98,51,108,225,148,153,103,145,113,178,90,237,44,75,200,96,2,119,134,197,128,59,250,220,97,127,2,
119,164,106,0,209,18,149,69,115,89,57,60,67,21,199,14,178,37,99,36,98,220,155,209,239,115,169,14,46,212,96,29,156,191,25,165,50,215,56,172,151,130,65,61,29,77,101,134,209,112,236,53,50,179,62,161,111,
225,43,86,11,142,188,25,82,46,218,70,253,215,145,14,20,230,224,71,42,50,186,246,101,239,51,110,188,102,220,232,14,43,33,230,133,253,44,248,218,160,250,114,243,151,245,239,213,237,122,113,27,227,178,113,
61,204,94,94,236,245,245,49,249,241,50,59,99,104,84,77,209,8,68,79,224,73,112,29,225,124,211,69,117,86,125,171,140,248,231,106,107,169,156,175,84,163,183,78,23,83,230,38,26,197,50,215,90,221,109,38,220,
56,128,88,93,86,211,182,140,31,153,154,77,144,227,196,66,49,240,197,1,195,240,125,36,242,144,35,194,97,238,110,74,215,153,207,46,1,36,7,161,232,72,54,191,137,111,184,33,167,54,239,132,1,213,250,233,84,
41,109,146,238,194,119,15,99,52,29,60,95,120,196,0,235,146,12,87,201,72,220,219,24,94,68,157,12,8,133,235,125,151,50,12,84,50,42,103,180,203,71,74,189,180,208,82,25,176,117,195,245,44,73,8,191,184,104,
196,56,44,186,166,100,130,215,166,214,135,123,80,166,42,27,56,235,18,165,64,125,74,227,234,228,84,111,73,218,65,226,95,80,49,159,155,58,130,152,103,176,133,155,174,138,208,174,199,228,223,109,251,235,
135,3,99,98,107,15,1,136,125,12,90,204,75,14,103,45,45,199,149,3,133,120,190,163,159,144,1,253,233,196,121,191,149,244,130,188,15,40,25,248,146,11,231,252,166,134,168,42,111,218,251,77,30,84,76,90,125,
253,145,146,238,82,72,7,198,79,191,216,220,9,96,237,105,113,11,42,201,205,84,125,235,179,190,49,174,124,10,207,124,66,184,211,248,173,58,145,95,239,205,101,63,67,228,85,54,57,54,194,157,249,22,69,196,
134,78,108,217,159,232,202,221,155,177,213,106,105,148,95,10,221,183,210,147,102,190,16,69,242,61,6,130,91,152,153,25,207,198,56,164,197,98,169,35,100,93,135,179,166,65,45,217,48,206,154,168,136,96,47,
214,53,12,228,111,5,183,250,234,174,79,75,63,221,176,239,209,69,132,253,77,15,51,134,233,25,220,149,72,90,47,203,242,181,68,45,246,24,117,69,5,42,17,187,59,206,232,203,203,126,64,189,219,228,41,132,82,
24,42,93,110,230,47,54,131,105,159,155,30,175,12,172,87,150,218,125,158,95,253,147,224,107,215,84,95,64,244,229,54,46,183,199,229,147,65,47,33,248,51,107,230,3,214,229,118,205,7,184,233,64,113,134,92,
18,131,197,170,155,39,194,150,160,64,135,82,188,16,245,137,113,237,50,136,198,118,131,103,251,173,53,132,11,85,3,137,75,9,202,109,225,39,65,19,175,1,142,99,176,18,113,65,54,64,88,134,7,39,131,174,195,
121,169,173,235,116,148,177,169,0,126,151,137,191,235,235,77,213,27,231,135,85,97,112,136,72,86,144,109,25,199,177,55,96,199,23,216,6,238,55,182,230,157,32,14,33,3,60,227,53,186,226,216,154,152,128,104,
205,190,45,158,226,94,131,162,173,116,163,54,209,110,184,159,6,247,57,133,24,2,16,186,209,12,78,91,146,188,46,28,81,37,82,244,122,230,249,70,37,4,105,80,64,92,139,26,116,34,91,243,200,78,153,98,151,198,
246,146,88,146,192,40,192,204,206,206,233,3,46,123,255,10,22,99,32,47,101,41,143,240,2,121,92,83,173,28,10,20,142,184,126,114,87,194,4,49,215,27,80,78,109,35,148,197,204,116,84,42,75,184,40,120,159,130,
159,237,55,189,220,225,39,88,249,22,79,141,10,84,90,63,170,189,209,113,208,70,79,73,62,71,216,204,172,125,207,160,2,29,93,78,113,71,149,38,139,184,63,121,89,86,156,125,127,39,217,124,37,254,211,216,37,
16,249,225,79,104,179,147,81,210,32,26,112,51,206,30,14,222,220,201,62,65,112,17,93,187,3,12,106,239,253,235,162,31,51,169,121,223,73,100,234,103,216,74,68,206,57,129,48,106,63,197,186,92,75,41,28,106,
66,122,145,38,73,11,111,19,10,123,141,197,89,184,184,198,141,125,196,75,232,27,179,152,157,4,218,144,31,42,120,20,72,172,235,237,57,241,102,116,204,109,82,207,158,96,151,204,219,1,62,153,75,59,134,153,
95,115,249,199,53,39,185,102,80,125,205,204,245,203,140,39,63,172,218,159,8,95,254,241,151,24,85,140,151,203,30,15,179,95,174,97,126,13,123,140,213,25,30,191,93,130,106,118,5,183,153,2,80,228,42,44,69,
168,172,164,54,135,25,126,6,88,3,133,102,63,209,177,52,27,238,252,140,10,19,66,242,34,43,59,237,58,105,194,222,208,55,222,104,217,159,227,157,10,214,141,131,156,104,132,166,113,164,109,172,152,238,243,
90,71,131,47,118,237,130,8,174,10,215,39,223,57,190,168,75,141,173,242,243,230,58,241,5,121,34,50,98,227,108,39,213,204,118,251,44,110,123,146,160,44,204,22,143,29,169,119,221,141,195,154,94,237,236,51,
154,190,31,36,80,105,0,199,240,27,46,177,195,75,26,41,96,92,203,180,176,36,209,178,171,77,233,97,202,118,188,83,153,233,67,154,39,193,18,26,139,37,151,58,3,150,165,229,85,206,75,33,71,205,172,207,49,24,
75,11,246,72,251,196,140,148,151,39,93,81,235,145,219,114,134,101,0,57,150,135,62,48,163,236,172,116,221,126,240,162,211,18,239,225,241,83,80,66,174,45,121,61,134,168,205,162,216,255,174,233,78,108,130,
70,202,182,120,33,25,43,18,172,230,68,170,190,54,163,34,149,228,171,98,165,68,213,158,251,136,193,1,212,91,76,105,54,24,131,153,77,97,10,136,110,234,185,131,91,35,38,248,241,218,36,35,133,186,145,225,
103,245,229,171,3,171,89,107,162,211,159,246,96,206,177,18,104,60,116,120,75,206,176,214,119,239,71,80,137,188,0,15,150,195,93,183,190,217,110,133,32,147,130,155,165,137,173,143,105,39,98,239,232,123,
127,178,143,15,216,171,12,121,215,169,28,238,37,186,183,133,102,119,75,235,238,128,40,136,196,236,101,185,170,225,122,113,200,88,155,189,172,68,237,207,130,47,255,248,203,117,93,246,242,98,83,72,30,102,
175,227,97,182,130,105,127,12,243,199,250,216,4,200,11,253,54,180,245,75,120,225,180,137,58,94,11,3,47,153,112,75,73,218,157,74,17,226,5,134,51,158,160,17,193,205,40,134,74,2,34,245,116,57,136,88,94,186,
183,59,13,0,223,133,7,248,158,135,248,66,67,177,203,61,153,134,234,196,27,236,182,108,208,223,59,84,250,35,1,39,95,77,142,29,42,152,164,96,89,151,202,217,99,245,79,163,23,125,125,252,235,55,191,247,248,
238,239,168,89,233,166,134,252,12,69,49,113,3,222,128,128,104,107,237,54,125,144,38,75,131,135,86,133,6,132,243,23,96,73,52,41,150,157,118,44,27,248,95,148,85,221,15,130,118,114,110,166,193,159,226,223,
226,0,8,2,245,51,68,146,127,17,55,202,207,231,253,27,163,254,52,142,114,121,22,29,2,220,30,218,229,187,158,176,220,92,205,186,188,249,34,97,180,210,216,250,222,40,140,241,192,0,28,40,200,87,89,220,230,
141,178,89,26,80,60,211,161,65,29,184,59,0,231,217,171,226,69,55,97,18,224,40,60,174,129,228,124,23,251,139,78,177,216,249,252,45,91,139,238,124,140,54,106,217,88,170,20,250,181,107,191,216,77,144,25,
165,6,23,254,48,237,138,232,207,155,234,102,248,204,64,6,185,49,109,101,37,65,188,241,134,126,203,26,94,113,145,13,56,15,224,34,67,198,71,227,230,90,139,106,57,43,65,251,118,169,128,193,213,88,114,35,
179,18,136,175,74,78,206,50,185,189,177,177,22,112,34,103,180,69,101,111,235,168,156,180,1,174,118,16,227,52,202,82,218,10,191,205,60,183,89,187,222,225,52,7,213,30,107,168,47,171,128,250,197,236,229,
23,171,140,245,167,202,226,199,224,83,130,234,58,124,187,174,241,119,125,45,176,70,19,227,26,54,94,162,208,152,66,248,58,5,102,60,36,104,136,98,240,155,69,86,247,20,239,4,122,35,116,106,230,36,211,129,
50,57,21,161,156,104,5,202,17,228,136,75,114,54,129,125,197,161,158,26,217,177,219,195,142,190,187,235,216,138,136,153,235,107,91,242,142,107,1,79,184,214,29,197,147,119,119,16,92,138,128,237,142,154,
169,187,229,208,7,70,28,163,140,45,227,177,202,122,180,96,221,208,84,229,128,49,92,211,25,77,209,30,148,221,173,19,30,250,12,225,142,91,210,11,91,38,59,63,15,252,220,140,191,46,135,213,22,143,182,205,
18,121,184,185,48,150,30,160,177,212,227,157,6,252,170,153,143,55,123,189,209,51,238,21,92,157,146,25,44,219,242,230,71,240,245,54,104,209,250,159,117,15,234,187,177,124,181,41,219,59,45,80,132,54,80,
114,45,109,155,217,240,93,32,37,72,55,197,21,57,39,116,74,166,145,253,77,95,194,181,103,134,172,232,67,125,173,95,79,220,164,75,127,236,88,165,252,217,168,23,110,24,46,245,114,121,189,115,75,40,223,74,
102,107,190,245,7,148,164,96,69,107,149,4,2,182,197,162,186,212,182,152,145,27,205,22,113,131,108,7,62,227,165,7,91,25,127,115,36,163,202,182,87,190,190,204,164,244,116,162,201,146,179,237,214,141,138,
15,19,244,182,230,226,14,127,182,244,219,190,4,68,110,172,122,243,99,85,27,219,224,24,96,146,23,247,124,200,181,74,99,132,229,29,57,91,129,20,5,32,155,116,83,7,182,127,119,239,67,176,83,206,247,216,247,
251,253,21,31,169,69,91,190,204,230,146,61,183,60,233,99,46,29,118,123,121,89,203,64,86,230,122,223,170,61,141,83,223,243,5,221,247,192,15,203,84,239,17,116,187,174,97,47,191,76,193,112,191,236,117,141,
62,30,175,195,30,110,211,216,63,74,24,205,80,73,66,160,160,43,228,60,212,10,204,202,184,222,137,4,94,63,161,164,222,112,51,254,140,239,174,156,186,167,155,210,100,152,192,81,57,151,142,96,222,225,70,172,
133,42,227,13,60,120,75,74,173,243,96,251,208,204,124,236,185,181,92,128,100,159,203,232,55,126,139,181,165,218,194,73,196,61,162,223,141,151,142,112,112,232,82,215,110,131,196,78,121,155,11,113,163,12,
94,226,251,174,151,173,241,155,184,134,246,217,141,51,245,134,60,88,129,11,156,162,178,11,97,138,222,103,235,186,223,35,221,207,164,64,223,243,55,126,223,185,171,247,24,169,247,226,177,211,98,124,198,
247,178,86,55,201,166,215,127,115,163,20,85,45,51,15,185,254,53,10,201,212,43,110,147,127,182,212,224,9,148,122,224,154,104,196,84,229,156,239,220,249,227,70,55,25,195,125,16,80,72,133,114,119,39,148,
69,65,105,239,100,126,215,236,123,99,130,168,187,130,83,8,20,119,75,55,32,104,131,56,104,131,132,1,67,160,107,101,3,205,0,250,232,53,170,246,29,6,151,234,185,243,27,67,112,148,227,37,205,44,182,187,206,
107,28,224,185,200,241,48,205,94,83,0,170,130,129,51,15,155,25,164,38,43,248,106,191,77,173,14,42,189,163,31,235,82,153,31,116,141,191,56,28,16,3,45,254,166,97,72,40,136,1,144,165,85,61,172,219,227,127,
111,11,191,23,122,61,228,31,54,232,236,172,99,62,123,102,44,172,171,21,201,13,181,0,254,39,217,63,232,249,123,224,222,190,197,53,39,202,220,45,3,235,203,109,6,213,191,68,96,61,230,134,69,170,249,166,221,
79,10,160,119,240,93,65,245,91,136,105,150,58,22,195,191,252,50,89,245,106,99,6,212,215,176,199,203,176,199,195,108,60,166,194,239,50,213,63,6,238,28,119,60,123,75,80,222,175,68,37,64,61,106,99,225,66,
51,178,134,8,152,13,21,163,192,107,103,111,26,221,161,218,140,11,215,207,78,244,73,224,178,105,230,238,217,14,141,142,83,181,235,202,247,103,49,24,86,39,93,215,72,23,255,44,190,185,219,229,207,128,13,
238,218,239,122,172,33,57,111,95,146,18,214,84,172,43,159,110,80,81,65,210,179,245,141,234,236,118,189,245,1,14,104,199,223,89,244,157,245,110,252,209,192,41,130,158,238,221,169,196,51,148,233,217,90,
190,66,203,103,208,113,239,54,19,109,170,249,48,116,87,194,103,58,112,40,162,235,231,21,159,119,233,215,247,130,40,56,198,42,79,190,7,148,175,86,151,97,248,180,171,28,223,214,165,85,111,44,115,120,163,
83,48,244,31,112,61,146,235,50,3,3,122,120,199,213,157,57,82,187,134,11,173,230,241,163,90,80,152,187,9,230,235,38,6,219,114,158,91,131,59,99,217,245,103,59,243,214,150,25,172,118,222,234,108,196,181,
217,105,240,109,24,184,109,29,69,25,172,103,86,137,247,62,60,89,67,189,67,99,44,60,91,173,86,50,65,126,49,112,114,169,38,6,35,142,47,19,173,20,56,14,233,126,170,155,153,54,204,204,201,120,67,254,123,96,
249,247,199,32,81,239,22,65,68,10,80,98,57,182,77,76,82,188,33,145,0,182,106,252,125,115,200,211,22,235,176,57,241,53,208,216,172,248,242,178,206,173,254,229,178,235,229,166,134,155,12,245,91,101,191,
5,190,59,83,173,8,96,32,189,41,157,191,174,95,102,134,250,213,231,70,69,127,152,189,60,230,218,232,248,151,64,187,193,70,5,13,182,174,191,193,125,104,48,19,127,242,104,43,51,90,243,154,77,230,53,123,150,
15,99,176,13,34,122,69,207,236,215,174,12,135,7,251,117,154,123,184,203,185,168,49,47,231,176,195,225,141,88,119,19,36,168,171,99,108,247,6,82,157,238,59,232,35,35,183,225,42,70,9,193,9,58,234,111,83,
159,84,113,123,95,157,35,149,125,238,2,218,138,109,244,125,119,77,251,38,208,185,65,193,2,189,65,143,181,169,206,162,164,237,30,125,206,166,213,189,249,42,187,191,58,47,125,81,74,107,120,71,33,153,198,
125,80,125,218,117,188,176,29,16,163,76,92,44,211,130,99,255,192,211,63,171,38,154,124,214,115,200,84,85,247,72,48,144,51,218,234,90,56,30,144,131,187,117,146,67,90,221,41,5,32,76,93,169,129,178,190,254,
33,51,43,2,245,212,138,189,85,246,71,64,4,63,157,223,12,20,6,201,239,123,251,199,191,187,140,63,51,29,67,207,106,166,50,3,76,73,15,88,251,97,123,235,126,4,57,18,228,33,194,148,149,31,92,8,180,101,187,
103,190,67,183,212,212,38,194,109,168,128,72,25,11,167,218,142,221,102,79,192,17,87,95,103,141,219,179,49,47,46,157,107,231,163,87,117,209,201,51,165,80,187,35,180,170,162,210,18,189,193,204,210,233,77,
122,62,12,79,147,153,205,2,19,222,171,183,26,224,152,181,142,14,86,224,201,50,19,244,116,153,125,245,251,171,231,131,32,68,191,88,178,54,42,94,99,46,1,89,65,245,12,168,209,182,191,77,248,46,126,253,94,
248,180,229,31,239,89,147,50,30,195,174,151,58,192,216,127,113,243,151,185,220,227,241,152,127,237,49,25,57,108,152,61,86,81,191,145,147,8,14,180,143,215,179,40,207,135,29,106,225,110,208,171,91,54,194,
156,37,47,8,12,176,57,213,110,192,177,217,101,244,96,35,29,102,155,230,4,239,94,175,130,1,133,216,111,203,134,141,195,68,58,59,117,251,231,183,144,36,119,218,187,181,51,48,220,155,200,69,135,244,226,92,
222,173,189,111,34,191,115,170,216,139,243,185,132,110,74,201,115,91,41,119,116,18,109,191,101,67,133,228,219,55,33,237,122,227,35,239,197,187,141,149,55,14,172,244,49,150,2,33,254,43,196,0,185,13,137,
78,238,72,125,204,215,89,215,174,123,209,143,116,135,175,252,117,185,39,78,245,174,162,96,68,19,109,212,211,27,185,126,151,255,117,190,126,166,212,239,132,46,139,128,246,27,207,238,158,223,149,99,181,
220,5,31,207,90,111,159,65,186,129,10,83,177,93,45,17,181,108,233,163,230,101,105,15,6,57,173,85,40,160,31,242,208,87,26,41,210,183,111,145,136,136,82,93,111,200,194,237,58,112,45,167,237,177,141,66,20,
201,7,54,102,75,127,236,252,48,226,179,125,200,198,163,252,249,155,86,232,67,64,182,198,177,85,240,159,102,54,68,22,61,131,221,120,119,241,233,61,41,86,164,231,153,10,180,190,117,249,85,215,204,241,122,
198,114,175,111,221,162,183,41,195,109,9,231,4,249,103,154,248,12,62,218,151,33,127,107,215,206,218,172,56,143,214,91,27,23,229,141,255,240,31,255,195,124,229,29,113,233,103,174,167,54,251,132,229,31,
59,100,226,62,254,27,99,216,159,254,191,255,206,254,240,15,254,254,74,223,135,8,187,217,101,51,216,30,145,169,94,129,20,140,148,239,236,68,117,185,6,46,111,25,242,187,251,159,199,220,175,7,39,5,142,240,
133,237,83,173,171,227,96,196,215,241,85,139,163,110,247,107,181,163,123,226,114,152,200,193,144,159,104,85,118,189,41,189,86,58,244,102,160,191,83,245,188,134,24,135,202,72,225,230,251,222,99,35,208,
1,191,105,49,239,188,138,54,244,145,32,122,207,199,125,221,172,27,250,153,238,231,131,130,94,251,91,125,130,101,222,234,175,247,68,72,217,151,27,150,86,159,70,64,17,193,109,21,216,218,4,244,174,80,239,
221,41,107,111,131,4,134,24,96,19,166,182,97,228,134,120,205,34,208,51,121,255,238,154,218,216,148,125,66,163,155,81,130,108,183,212,246,25,139,216,177,163,140,237,134,171,209,208,93,141,241,54,235,198,
51,13,216,221,223,159,27,98,230,109,211,120,103,108,105,204,59,206,21,184,67,2,159,225,243,187,123,31,49,126,207,92,152,110,26,201,126,221,9,131,34,31,217,219,249,172,39,154,54,56,130,14,181,239,122,197,
146,194,33,243,149,176,100,192,155,160,109,24,245,52,80,7,88,232,62,235,146,61,17,240,27,105,0,185,126,98,178,168,150,189,44,162,61,86,43,172,56,188,85,235,71,12,194,183,130,223,252,14,120,210,150,186,
192,59,187,120,215,114,154,246,216,164,232,144,84,95,118,195,103,157,143,215,87,251,247,127,246,239,236,255,252,183,255,98,83,79,143,75,239,202,124,15,124,234,233,31,24,64,235,243,49,134,253,47,255,219,
255,100,143,199,76,63,143,49,158,44,19,57,112,224,192,129,3,7,14,28,56,112,224,99,128,193,177,254,221,149,251,157,58,253,227,46,250,215,32,123,247,23,225,4,216,7,14,28,56,112,224,192,129,3,7,62,10,187,
205,136,187,191,119,113,234,103,5,214,159,186,81,241,25,194,102,70,193,244,221,239,3,7,14,28,56,112,224,192,129,3,7,62,2,119,103,79,239,130,231,93,32,253,59,19,84,95,215,149,129,113,92,191,190,190,54,
164,175,235,178,199,227,113,187,76,228,192,129,3,7,14,28,56,112,224,192,129,143,194,110,169,199,117,93,219,32,90,239,199,245,247,194,15,89,224,221,82,224,0,0,3,51,73,68,65,84,83,29,8,62,30,15,187,174,
185,185,36,214,82,71,0,142,217,105,204,88,31,56,112,224,192,129,3,7,14,28,56,240,30,120,207,122,233,235,186,50,112,222,5,218,191,51,107,170,205,172,69,255,152,181,142,231,17,100,227,59,186,89,241,44,1,
57,112,224,192,129,3,7,14,28,56,240,45,176,91,246,113,23,68,71,210,247,119,50,168,142,96,26,179,211,102,150,215,17,60,71,32,141,155,22,21,78,198,250,192,129,3,7,14,28,56,112,224,192,29,220,101,168,227,
239,46,168,142,140,53,102,173,63,107,233,135,153,153,143,49,254,232,123,42,248,205,111,126,243,207,204,44,3,234,215,215,215,252,141,255,48,152,198,12,53,6,208,39,152,62,112,224,192,129,3,7,14,28,56,240,
94,184,59,249,227,110,9,8,6,210,47,47,47,20,84,255,246,183,191,253,227,239,193,229,211,191,168,168,107,169,3,34,208,214,101,31,26,72,159,192,250,192,129,3,7,14,28,56,112,224,192,91,160,25,102,13,170,205,
172,101,165,119,107,171,63,13,159,239,205,84,155,85,182,218,204,90,118,90,51,213,241,59,224,44,255,56,112,224,192,129,3,7,14,28,56,240,17,120,182,252,35,126,239,150,126,104,128,29,240,189,89,106,179,79,
10,170,205,158,7,214,24,76,239,150,128,152,157,64,250,192,129,3,7,14,28,56,112,224,192,199,225,238,155,41,111,173,171,14,248,140,128,218,236,19,131,106,179,30,88,99,166,218,204,222,181,174,250,192,129,
3,7,14,28,56,112,224,192,129,143,192,91,95,74,212,76,117,192,103,5,212,102,159,28,84,155,113,96,125,151,165,198,103,241,27,225,4,217,7,14,28,56,112,224,192,129,3,7,238,224,61,235,169,239,178,213,1,159,
25,80,155,253,128,160,218,140,3,107,51,206,80,107,214,122,7,39,168,62,112,224,192,129,3,7,14,28,56,112,7,119,27,12,159,125,57,17,225,179,3,106,179,31,20,84,155,245,192,58,224,110,233,199,9,164,15,28,56,
112,224,192,129,3,7,14,124,20,244,11,221,111,125,41,241,71,4,212,102,63,48,168,14,184,11,174,3,206,102,197,3,7,14,28,56,112,224,192,129,3,223,2,187,115,170,239,224,71,5,211,217,254,143,14,170,15,28,56,
112,224,192,129,3,7,14,28,248,207,29,174,183,139,28,56,112,224,192,129,3,7,14,28,56,112,224,25,156,160,250,192,129,3,7,14,28,56,112,224,192,129,239,132,203,204,254,228,103,35,113,224,192,129,3,7,14,28,
56,112,224,192,95,96,248,147,147,169,62,112,224,192,129,3,7,14,28,56,112,224,59,33,130,234,147,173,62,112,224,192,129,3,7,14,28,56,112,224,227,240,39,102,103,77,245,129,3,7,14,28,56,112,224,192,129,3,
223,13,24,84,159,108,245,129,3,7,14,28,56,112,224,192,129,3,239,135,140,159,53,83,125,2,235,3,7,14,28,56,112,224,192,129,3,7,222,6,138,155,119,203,63,78,96,125,224,192,129,3,7,14,28,56,112,224,192,61,
180,120,249,110,77,245,9,172,15,28,56,112,224,192,129,3,7,14,28,232,176,141,147,159,109,84,60,129,245,129,3,7,14,28,56,112,224,192,129,3,5,183,241,241,91,167,127,156,192,250,192,129,3,7,14,28,56,112,224,
192,129,55,226,98,31,99,188,183,162,63,250,126,92,14,28,56,112,224,192,129,3,7,14,28,248,11,5,239,74,50,127,36,168,14,56,193,245,129,3,7,14,28,56,112,224,192,129,255,220,225,67,43,54,254,19,208,221,210,
31,226,60,236,161,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainSynthGui::presetsPanel_png = (const char*) resource_MainSynthGui_presetsPanel_png;
const int MainSynthGui::presetsPanel_pngSize = 25488;


//[EndFile] You can add extra defines here...
//[/EndFile]

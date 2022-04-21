#pragma once

#include <JuceHeader.h>
#include <memory>

#include "../../SoundSystemLib/Source/CasPlayer.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    
    void initialize();
    void play();
    
    juce::TextButton playButton;
    juce::TextButton stopButton;
    
    std::unique_ptr<CasPlayer> casPlayer;
    
    void playButtonClicked();
//    void stopButtonClicked();

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

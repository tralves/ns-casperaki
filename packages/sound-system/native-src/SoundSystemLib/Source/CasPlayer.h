/*
 ==============================================================================
 
 CasPlayer.h
 Created: 7 Apr 2022 2:56:42pm
 Author:  Tiago Alves
 
 ==============================================================================
 */

#pragma once

#include <JuceHeader.h>

using namespace juce;
class CasPlayer : public AudioSource,  public ChangeListener
{
public:
   CasPlayer();
    ~CasPlayer() override;
    
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;
    
    void changeListenerCallback(juce::ChangeBroadcaster* source) override;
 
   void initSample();
    
    void play();
private:
    enum TransportState
    {
       Stopped,
        Starting,
        Playing,
        Stopping
    };
   ;
   
   AudioSourcePlayer audioSourcePlayer;
   AudioDeviceManager deviceManager;

   juce::AudioFormatManager formatManager;
    std::unique_ptr<juce::AudioFormatReaderSource> readerSource;
 
   
    
 
   juce::AudioTransportSource transportSource;
    TransportState state;
     
  
 
   
    void changeState (TransportState newstate);
};

/*
  ==============================================================================

    CasPlayer.cpp
    Created: 7 Apr 2022 2:56:42pm
    Author:  Tiago Alves

  ==============================================================================
*/

#include "CasPlayer.h"

#include "./utils.h"

CasPlayer::CasPlayer()
    : state (Stopped)
    {
        
        formatManager.registerBasicFormats();       // [1]
        transportSource.addChangeListener (this);   // [2]
        
        String res = deviceManager.initialiseWithDefaultDevices(0,2); // num in/out channels
        std::cout << "initialiseWithDefaultDevices res: " << res << std::endl;
        audioSourcePlayer.setSource(this);
        deviceManager.addAudioCallback(&audioSourcePlayer);
    }

CasPlayer::~CasPlayer()
{
    // This shuts down the audio device and clears the audio source.
    audioSourcePlayer.setSource (nullptr);
    deviceManager.removeAudioCallback (&audioSourcePlayer);

    deviceManager.closeAudioDevice();
}

//==============================================================================
void CasPlayer::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    transportSource.prepareToPlay (samplesPerBlockExpected, sampleRate);
}

void CasPlayer::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill)
{
    if (readerSource.get() == nullptr)
    {
        bufferToFill.clearActiveBufferRegion();
        return;
    }
    
    transportSource.getNextAudioBlock (bufferToFill);
}

void CasPlayer::releaseResources()
{
    transportSource.releaseResources();
}

void CasPlayer::changeListenerCallback (juce::ChangeBroadcaster* source)
{
    if (source == &transportSource)
    {
        if (transportSource.isPlaying())
            changeState (Playing);
        else
            changeState (Stopped);
    }
}

void CasPlayer::changeState (TransportState newState)
{
    if (state != newState)
    {
        state = newState;
        
        switch (state)
        {
            case Stopped:                           // [3]
//                stopButton.setEnabled (false);
//                playButton.setEnabled (true);
                transportSource.setPosition (0.0);
                break;
                
            case Starting:                          // [4]
//                playButton.setEnabled (false);
                transportSource.start();
                break;
                
            case Playing:                           // [5]
//                stopButton.setEnabled (true);
                break;
                
            case Stopping:                          // [6]
                transportSource.stop();
                break;
        }
    }
}

void CasPlayer::initSample() {

//    auto* audioReader = (formatManager.createReaderFor (createAssetInputStream ("cello.wav").release(), true));
    
    auto assetInputStream = createAssetInputStream ("hiHat_sample.wav");
    
    auto* reader { formatManager.createReaderFor (std::move(assetInputStream)) };

    if (reader != nullptr)
    {
        auto newSource = std::make_unique<juce::AudioFormatReaderSource> (reader, true);   // [11]
        transportSource.setSource (newSource.get(), 0, nullptr, reader->sampleRate);       // [12]
//        playButton.setEnabled (true);                                                      // [13]
        readerSource.reset (newSource.release());                                          // [14]
    }
}

void CasPlayer::play() {
    changeState(Starting);
}

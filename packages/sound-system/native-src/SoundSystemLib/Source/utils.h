/*
  ==============================================================================

    utils.h
    Created: 7 Apr 2022 8:08:26pm
    Author:  Tiago Alves

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

inline std::unique_ptr<juce::InputStream> createAssetInputStream (const char* resourcePath)
{
  #if JUCE_ANDROID
    ZipFile apkZip (File::getSpecialLocation (File::invokedExecutableFile));
    return std::unique_ptr<InputStream> (apkZip.createStreamForEntry (apkZip.getIndexOfFileName ("assets/" + String (resourcePath))));
  #else
   #if JUCE_IOS
    auto assetsDir = File::getSpecialLocation (File::currentExecutableFile)
                          .getParentDirectory().getChildFile ("Assets");
   #elif JUCE_MAC
    auto assetsDir = juce::File::getSpecialLocation (juce::File::currentExecutableFile)
                          .getParentDirectory().getParentDirectory().getChildFile ("Resources").getChildFile ("Assets");

//    if (! assetsDir.exists())
//        assetsDir = getExamplesDirectory().getChildFile ("Assets");
//   #else
//    auto assetsDir = getExamplesDirectory().getChildFile ("Assets");
   #endif

    auto resourceFile = assetsDir.getChildFile (resourcePath);
    jassert (resourceFile.existsAsFile());

    return resourceFile.createInputStream();
  #endif
}

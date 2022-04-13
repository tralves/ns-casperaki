# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

set(OBOE_DIR "/Users/tralves/JUCE/modules/juce_audio_devices/native/oboe")

add_subdirectory (${OBOE_DIR} ./oboe)

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions([[-DJUCE_ANDROID=1]] [[-DJUCE_ANDROID_API_VERSION=16]] [[-DJUCER_ANDROIDSTUDIO_7F0E4A25=1]] [[-DJUCE_APP_VERSION=1.0.0]] [[-DJUCE_APP_VERSION_HEX=0x10000]])

include_directories( AFTER
    "../../../JuceLibraryCode"
    "~/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

if(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    set(BINARY_NAME "SoundSystemLib")
    add_definitions([[-DJUCE_DISPLAY_SPLASH_SCREEN=0]] [[-DJUCE_USE_DARK_SPLASH_SCREEN=1]] [[-DJUCE_PROJUCER_VERSION=0x60106]] [[-DJUCE_MODULE_AVAILABLE_juce_audio_basics=1]] [[-DJUCE_MODULE_AVAILABLE_juce_audio_devices=1]] [[-DJUCE_MODULE_AVAILABLE_juce_audio_formats=1]] [[-DJUCE_MODULE_AVAILABLE_juce_core=1]] [[-DJUCE_MODULE_AVAILABLE_juce_data_structures=1]] [[-DJUCE_MODULE_AVAILABLE_juce_dsp=1]] [[-DJUCE_MODULE_AVAILABLE_juce_events=1]] [[-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1]] [[-DJUCE_STRICT_REFCOUNTEDPOINTER=1]] [[-DJUCE_STANDALONE_APPLICATION=1]] [[-DJUCER_ANDROIDSTUDIO_7F0E4A25=1]] [[-DJUCE_APP_VERSION=1.0.0]] [[-DJUCE_APP_VERSION_HEX=0x10000]] [[-DDEBUG=1]] [[-D_DEBUG=1]])
elseif(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    set(BINARY_NAME "SoundSystemLib")
    add_definitions([[-DJUCE_DISPLAY_SPLASH_SCREEN=0]] [[-DJUCE_USE_DARK_SPLASH_SCREEN=1]] [[-DJUCE_PROJUCER_VERSION=0x60106]] [[-DJUCE_MODULE_AVAILABLE_juce_audio_basics=1]] [[-DJUCE_MODULE_AVAILABLE_juce_audio_devices=1]] [[-DJUCE_MODULE_AVAILABLE_juce_audio_formats=1]] [[-DJUCE_MODULE_AVAILABLE_juce_core=1]] [[-DJUCE_MODULE_AVAILABLE_juce_data_structures=1]] [[-DJUCE_MODULE_AVAILABLE_juce_dsp=1]] [[-DJUCE_MODULE_AVAILABLE_juce_events=1]] [[-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1]] [[-DJUCE_STRICT_REFCOUNTEDPOINTER=1]] [[-DJUCE_STANDALONE_APPLICATION=1]] [[-DJUCER_ANDROIDSTUDIO_7F0E4A25=1]] [[-DJUCE_APP_VERSION=1.0.0]] [[-DJUCE_APP_VERSION_HEX=0x10000]] [[-DNDEBUG=1]])
else()
    message( FATAL_ERROR "No matching build-configuration found." )
endif()

add_library( ${BINARY_NAME}

    STATIC

    "../../../Source/CasPlayer.cpp"
    "../../../Source/CasPlayer.h"
    "../../../Source/main.cpp"
    "../../../Source/main.h"
    "../../../Source/SoundSystem.cpp"
    "../../../Source/SoundSystem.h"
    "../../../Source/utils.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMP.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPacket.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPackets.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPConversion.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPConverters.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPDispatcher.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPFactory.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPIterator.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPMidi1ToBytestreamTranslator.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPMidi1ToMidi2DefaultTranslator.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPMidi1ToMidi2DefaultTranslator.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPProtocols.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPReceiver.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPSysEx7.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPSysEx7.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPTests.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPUtils.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPUtils.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPView.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPView.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiDataConcatenator.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_ADSR_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_GenericInterpolator.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_WindowedSincInterpolator.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPBytestreamInputHandler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPTests.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPU32InputHandler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStream.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBase.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBuilder.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamCallback.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Definitions.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/LatencyTuner.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Oboe.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/ResultWithValue.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/StabilizedCallback.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Utilities.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Version.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioExtensions.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioClock.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStreamBuilder.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/LatencyTuner.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/MonotonicCounter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/OboeDebug.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI24Caller.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI24Caller.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI32Caller.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI32Caller.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/StabilizedCallback.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Utilities.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Version.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/HyperbolicCosineWindow.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/KaiserWindow.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowgraphUtilities.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI32.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI32.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI32.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI32.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/CMakeLists.txt"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/README.md"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_HighPerformanceAudioHelpers.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.mm"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_51.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_stereo.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/floor/floor_books.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/floor_all.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_8.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_11.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_16.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_44.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_8.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_16.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44p51.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44u.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_8.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_11.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_16.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_22.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_32.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44p51.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44u.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_X.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/analysis.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/backends.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/block.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codec_internal.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor0.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor1.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/highlevel.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/info.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup_data.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mapping0.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/masking.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/os.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/res0.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/scales.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/sharedbook.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/synthesis.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisenc.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisfile.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/README.md"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/crctable.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_SingleThreadedAbstractFifo.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../../../JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../../../JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_AllocationHooks.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_AllocationHooks.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_Reservoir.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../../../JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_Functional.h"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../../../JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_intel_SharedCode.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_CFHelpers.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_ObjCHelpers.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_wasm_SystemStats.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_CompilerWarnings.h"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../../../JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../../../JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../../../JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../../../JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../../../JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreePropertyWithDefault.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreePropertyWithDefault_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_AudioBlock.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_AudioBlock_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_SIMDRegister.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Convolution.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Convolution.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Convolution_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_FFT.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_FFT.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_FFT_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Windowing.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Windowing.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_FastMathApproximations.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LogRampedValue.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LogRampedValue_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LookupTable.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LookupTable.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Matrix.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Matrix.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Matrix_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Phase.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Polynomial.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DelayLine.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DelayLine.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DryWetMixer.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DryWetMixer.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FIRFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FIRFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FIRFilter_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_IIRFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_IIRFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_IIRFilter_Impl.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Oversampling.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Oversampling.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Panner.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Panner.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessContext.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorChain.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorChain_test.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorDuplicator.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorWrapper.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_StateVariableFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Bias.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Chorus.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Chorus.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Compressor.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Compressor.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Gain.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_LadderFilter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_LadderFilter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Limiter.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Limiter.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_NoiseGate.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_NoiseGate.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Oscillator.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Phaser.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Phaser.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Reverb.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_WaveShaper.h"
    "../../../../../../../../../JUCE/modules/juce_dsp/juce_dsp.cpp"
    "../../../../../../../../../JUCE/modules/juce_dsp/juce_dsp.mm"
    "../../../../../../../../../JUCE/modules/juce_dsp/juce_dsp.h"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../../../JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.h"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../../../JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../../../JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../../../JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../../../JUCE/modules/juce_events/juce_events.h"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_dsp.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/CasPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/main.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/SoundSystem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMP.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPacket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPackets.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPConversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPDispatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPMidi1ToBytestreamTranslator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPMidi1ToMidi2DefaultTranslator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPMidi1ToMidi2DefaultTranslator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPProtocols.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPReceiver.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPSysEx7.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPSysEx7.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/ump/juce_UMPView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_ADSR_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_GenericInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/utilities/juce_WindowedSincInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPBytestreamInputHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPU32InputHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamCallback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Definitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/LatencyTuner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Oboe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/ResultWithValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/StabilizedCallback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Utilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Version.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioClock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStreamBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/LatencyTuner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/MonotonicCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/OboeDebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI24Caller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI24Caller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI32Caller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI32Caller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/StabilizedCallback.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Utilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/common/Version.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/HyperbolicCosineWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/KaiserWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowgraphUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI32.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI32.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/CMakeLists.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/oboe/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_HighPerformanceAudioHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/crctable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_SingleThreadedAbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_AllocationHooks.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_AllocationHooks.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_Reservoir.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_Functional.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_intel_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_CFHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_wasm_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_CompilerWarnings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreePropertyWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreePropertyWithDefault_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_AudioBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_AudioBlock_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_SIMDRegister.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Convolution.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Convolution.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Convolution_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_FFT.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_FFT.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_FFT_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/frequency/juce_Windowing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_FastMathApproximations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LogRampedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LogRampedValue_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LookupTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_LookupTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Matrix.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Matrix.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Matrix_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Phase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_Polynomial.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DelayLine.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DelayLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DryWetMixer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_DryWetMixer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FIRFilter_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_IIRFilter_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Oversampling.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Oversampling.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Panner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_Panner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorChain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorChain_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorDuplicator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_ProcessorWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_StateVariableFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Bias.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Chorus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Chorus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Compressor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Compressor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Gain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_LadderFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_LadderFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Limiter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Limiter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_NoiseGate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_NoiseGate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Oscillator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Phaser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Phaser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/widgets/juce_WaveShaper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/juce_dsp.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/juce_dsp.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_dsp/juce_dsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

target_compile_options( ${BINARY_NAME} PRIVATE "-fsigned-char" )

if( JUCE_BUILD_CONFIGURATION MATCHES "DEBUG" )
    target_compile_options( ${BINARY_NAME} PRIVATE)
endif()

if( JUCE_BUILD_CONFIGURATION MATCHES "RELEASE" )
    target_compile_options( ${BINARY_NAME} PRIVATE)
endif()

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
    "oboe"
)

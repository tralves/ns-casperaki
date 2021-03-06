//
// Created by Tiago Alves on 19/04/2022.
//

#include "SoundSystemLibAndroid.h"
#include <jni.h>

#include "../../SoundSystemLib/Source/CasPlayer.h"

CasPlayer* casPlayer = nullptr;

extern "C"
JNIEXPORT jint JNICALL
Java_com_casperaki_soundsystem_SoundSystemLibAndroid_doubleNumberJNI(JNIEnv *env, jobject thiz,
                                                                     jint a) {
    return a * 4;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_casperaki_soundsystem_SoundSystemLibAndroid_initPlayer(JNIEnv *env, jobject thiz) {
    MessageManager::getInstance()->runDispatchLoop();
    std::cout << "Java_com_casperaki_soundsystem_SoundSystemLibAndroid_initPlayer! " << std::endl;
    casPlayer = new CasPlayer;
    casPlayer->initSample();
}

extern "C"
JNIEXPORT void JNICALL
Java_com_casperaki_soundsystem_SoundSystemLibAndroid_play(JNIEnv *env, jobject thiz) {
    casPlayer->play();
}

extern "C"
JNIEXPORT void JNICALL
Java_com_casperaki_soundsystem_SoundSystemLibAndroid_initialiseJUCE(JNIEnv *env, jclass clazz,
                                                                    jobject app_context) {
    Thread::initialiseJUCE (env, app_context);
}

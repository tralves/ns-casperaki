package com.casperaki.soundsystem;

public class SoundSystemLibAndroid {
  public int val = 5;

  static {
    System.loadLibrary("SoundSystemDynLib");
  }

  public native int doubleNumberJNI(int a);

  public native void initPlayer();

  public native void play();

  public int doubleNumber(int number) {
    return number * 2;
  }
}

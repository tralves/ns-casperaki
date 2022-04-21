package com.casperaki.soundsystem;
import android.content.Context;

//import com.rmsl.juce.Java;

public class SoundSystemLibAndroid {
  public int val = 5;

  static {
    System.loadLibrary("SoundSystemDynLib");
  }

  public SoundSystemLibAndroid(Context context) {
    System.out.println("SoundSystemLibAndroid constructor!");
    initialiseJUCE(context);
//    Java.initialiseJUCE(context);
    System.out.println("SoundSystemLibAndroid initialiseJUCE!");
    this.initPlayer();
    System.out.println("SoundSystemLibAndroid initPlayer!");
  }

  public void playy() {
    System.out.println("SoundSystemLibAndroid playy!");
    this.play();
  }

  public int doubleNumber(int number) {
    return number * 2;
  }

  private native int doubleNumberJNI(int a);

  private native void initPlayer();

  private native void play();

  public native static void initialiseJUCE (Context appContext);

}

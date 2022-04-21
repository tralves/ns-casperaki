import { Utils } from '@nativescript/core';
import { SoundSystemCommon } from './common';

declare let com: any

export class SoundSystem extends SoundSystemCommon {

  SoundSystemLib = com.casperaki.soundsystem.SoundSystemLibAndroid;
  private _soundSystem: any;

  initialize(): void {
    console.log("new this.SoundSystemLib")
    this._soundSystem = new this.SoundSystemLib(Utils.android.getApplicationContext())
  }

  play(): void {
    console.log("JS PLAY!")
    this._soundSystem.playy();
  }

}

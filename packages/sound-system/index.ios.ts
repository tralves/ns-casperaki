import { SoundSystemCommon } from './common';

declare let SoundSystemLibIOS: any;

export class SoundSystem extends SoundSystemCommon {

  SoundSystemLib = SoundSystemLibIOS;
  private _soundSystem: any;

  initialize(): void {
    this._soundSystem = new this.SoundSystemLib();
    console.log("val:" + this._soundSystem.val);
    this._soundSystem.initPlayer();
  }

  play(): void {
    this._soundSystem.play();
  }

    
}

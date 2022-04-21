import { Observable } from '@nativescript/core';

export abstract class SoundSystemCommon extends Observable {

  abstract initialize(): void;

  abstract play(): void;


  val = 1;

  testFunc() {
    console.log("SoundSystemLib test! " + this.val);
    this.initialize();

    setTimeout(() => this.play(), 5000);
  }

  // testFunc() {
  //   const a:any = new Test();
  //   console.log(a.val);
  //   console.log(a.doubleNumber(5));

  //   const b:any = new SoundSystemLibIOS();
  //   console.log(b.val);
  //   console.log(b.doubleNumber(7));
  //   b.initPlayer();
  //   setTimeout(() => b.play(), 5000);
  //   return 1;
  // }
}

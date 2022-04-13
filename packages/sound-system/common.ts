import { Observable } from '@nativescript/core';
 

declare let Test: any
declare let JuceTestStaticLib: any

export class SoundSystemCommon extends Observable {

  val = 1;

  testFunc() {
    const a:any = new Test();
    console.log(a.val);
    console.log(a.doubleNumber(5));

    const b:any = new JuceTestStaticLib();
    console.log(b.val);
    console.log(b.doubleNumber(7));
    b.initPlayer();
    setTimeout(() => b.play(), 5000);
    return 1;
  }
}

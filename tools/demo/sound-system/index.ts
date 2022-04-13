import { DemoSharedBase } from '../utils';
import { SoundSystem } from '@ns-casperaki/sound-system';

export class DemoSharedSoundSystem extends DemoSharedBase {

  testIt() {
    const s = new SoundSystem();
    console.log('test sound-system! ' + s.val + " " + s.testFunc());
  }
}

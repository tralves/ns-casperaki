import { Component, NgZone } from '@angular/core';
import { DemoSharedSoundSystem } from '@demo/shared';
import { } from '@ns-casperaki/sound-system';

@Component({
	selector: 'demo-sound-system',
	templateUrl: 'sound-system.component.html',
})
export class SoundSystemComponent {
  
  demoShared: DemoSharedSoundSystem;
  
	constructor(private _ngZone: NgZone) {}

  ngOnInit() {
    this.demoShared = new DemoSharedSoundSystem();
  }

}
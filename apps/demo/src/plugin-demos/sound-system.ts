import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedSoundSystem } from '@demo/shared';
import { } from '@ns-casperaki/sound-system';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedSoundSystem {
	
}

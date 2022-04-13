import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { SoundSystemComponent } from './sound-system.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: SoundSystemComponent }])],
  declarations: [SoundSystemComponent],
  schemas: [ NO_ERRORS_SCHEMA]
})
export class SoundSystemModule {}

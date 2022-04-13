# SoundSystemLib

Casperaki SoundSystem Juce library

## iOS

IF you need to re-create the iOS project:

- Create "New Group without folder" `iOS`
- Add `SoundSystemLibIOS.mm/.h` to that folder
- Build phases > New Headers Phase > `SoundSystemLibIOS.h` in public
- Build Settings
  - Executable Prefix: <empty>
  - Public Headers Folder Path: `/include/SoundSystemLib`

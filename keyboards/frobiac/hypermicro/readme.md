# frobiac/hypermicro

Custom PCB [prototype](https://deskthority.net/viewtopic.php?p=196280#p196280) design by 7bit on deskthority, v0.0 2014-08-27
Col D6 replaced with E6 due to wrong diode polarity

* Keyboard Maintainer: [frobiac](https://github.com/frobiac)
* Hardware Supported: Teensy-2.0
* Development history: [deskthority](https://deskthority.net/viewtopic.php?t=4185)

Make example for this keyboard (after setting up your build environment):

    make frobiac/hypermicro

Flashing example for this keyboard:

    make frobiac/hypermicro:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Physical reset button**: Briefly press the button on the Teensy-2.0
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available



Please follow this QMK branch for updated configuration files: https://github.com/pabile/qmk_firmware/tree/pabile/keyboards/pabile

# P20

![Linear grid](https://github.com/pabile/Pabile20/blob/master/_bak/layout-grid.jpg)

A 5x4 grid macro numeric pad with up to 3 optional rotary encoders. 

* Keyboard Maintainer: [pabile](https://github.com/pabile)
* Hardware Supported: Pabile P20 PCB, Pro Micro, Rotary Encoders, Alps/MX Switches
* Hardware Availability: [pabileonline.blogspot.com](https://pabileonline.blogspot.com/search/label/p20)

Make example for this keyboard (after setting up your build environment):

    make pabile/p20:default

For PCB v2, compile configurations using:

    make pabile/p20:ver2

Rotary encoder pins (PCB v2 only):
Encoder 0: F4, F7
Encoder 1: F6, B1
Encoder 2: F6, B3

Backlight pin: B6

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

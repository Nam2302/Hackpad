# Naman's Hackpad
The Hackpad has 8-inputs (7 switches + rotary encoder) with an OLED display. It uses [QMK](https://qmk.fm/) firmware, and the layout includes simple and frequently used shortcuts. 

## CAD Model:
The case has two pieces, which includes the top switch plate and a bottom container. Inside it is a cavity where the PCB sits, and the XIAO is mounted visibly on the front with its own cutout rather than hidden underneath. The design also has a distinct diagonal edge on the bottom.

## PCB:

## Case:

## Firmware
This Hackpad runs QMK firmware. There's a single layer with 7 keys mapped to the following shortcuts: new tab, new window, undo, redo, refresh, paste, and copy, with the encoder controlling volume. The OLED currently displays a simple status message.

## Final result:
This was the first PCB and CAD project I've ever finished, and had many challenges. I redeigned the PCB layout three seperate times trying to get it under the 100x100mm size limit. 
The case design also had hurdles as I mostly started out eyeballing every measurement by dragging shapes around in Tinkercad, which never quite lined up right. I redid the whole thing once I actually found the align tool and coordinate input fields.
Finally, setting up Ubuntu to get the firmware going was a whole seperate issue, but overall I am proud of my journey and final product.

## BOM:
Here is everything you need to create this Hackpad:
| Component | Amount |
| :--- | :---: |
| **Seeed XIAO RP2040** | 1x |
| **MX-Style switches (Cherry MX 1.00u)** | 7x |
| **1N4148 Diodes** | 7x |
| **EC11 Rotary encoder** | 1x |
| **0.91 inch OLED display** | 1x |
| **DSA keycaps** | 7x |
| **100nF Ceramic capacitor** | 1x |
| **M3x16mm screw** | 4x |
| **Case** (1 printed part) | 1x |
| **PCB** | 1x |

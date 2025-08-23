---
created: 2025-02-25T19:05+03:00
tags:
  - blog
sr-due: 2025-07-23
sr-interval: 2
sr-ease: 190
---

# 3D printing

Construction of a 3D object from a CAD model or a digital 3D model.

I have 3D printer which use fused filament fabrication 3D printing process. models. Fused filament fabrication (FFF), also known as fused deposition modeling (with the trademarked acronym FDM), or filament freeform fabrication, is a 3D printing process that uses a continuous filament of a thermoplastic material.

## TODO

- [ ] [Creality K1 silent toolhead covers (5015 or 5020 fan) by Stanislau Shchahliak | Download free STL model | Printables.com](https://www.printables.com/model/797223-creality-k1-silent-toolhead-covers-5015-or-5020-fa)
- [ ] https://store.creality.com/blogs/all/k1c-maintenance-tips
- [ ] https://www.reddit.com/r/Creality/comments/1gzc2ld/k1max_is_there_a_way_to_trigger_filament_retract/
- [ ] [Creality K1: способы регулировки натяжения ремней - если у вас овальные круги, и неквадратные квадраты 😁](https://3dtoday.ru/blogs/10001c/creality-k1-moi-opyt-natyazenie-remnei-zamena-skivov-root-mainsail-normalnyi-input-shaping)
- [ ] I think this is easy : FAN 0=Part Fan, FAN 1=Chamber Fan, Fan 2=Side Fan, well at least on my K1 Max.
- [ ] [K1 0.2 nozzle](https://www.reddit.com/r/crealityk1/comments/1e3q6jl/working_on_a_02mm_profile_for_creality_print_51/?share_id=cKT74wd0cfEVrk3ZTJUSw&utm_medium=android_app&utm_name=androidcss&utm_source=share&utm_term=1)
- [ ] https://3dtoday.ru/blogs/dimix200612/zamena-sopla-unicorn-na-volcano-v-creality-k1
- [ ] https://www.printables.com/model/523382-creality-k1-belt-tension-meter
- [ ] [INSANELY DETAILED 100% FDM 3D printed Titus figurine - as good as RESIN? Top 5 Tips!! - YouTube](https://www.youtube.com/watch?v=Z7vmsS_YiDc)
- [ ] [Five ways to reduce layer lines on your 3D prints - Adaptive layer height and more! - YouTube](https://www.youtube.com/watch?app=desktop&v=cnujGcSmAjI)
- [ ] [Finishing 3D Prints: How to Sand, Fill and Prime 3D Printed Parts - YouTube](https://www.youtube.com/watch?v=ZTE9bJyUO_8)
- [ ] [The ONE GAME-CHANGING Slicer SETTING... (Huge 3D Print Quality BOOST) - YouTube](https://www.youtube.com/watch?v=__OQmUwVkrw)

## Printing from Zip Lock

I can print from zip lock, to avoid plastic hydrate and printing quality degradation over time.

Here is schematic how I print from zip lock.

![[./img/print_from_zip_lock.excalidraw|Shematic of print from zip lock]] 

_Printing from a zip lock_

## Printing TPU

Coil above bearings. Direct feed only, clogs with tube.

tPU on k1c, fdplast 220C/50 head cooler 100% back cooler 100% side cooler 70% speed 40%

## Calibration

### Flow rate

3D printer flow rate, or the extrusion multiplier, refers to the slicer setting that determines the amount of plastic to extrude. By default, the flow rate is set to 1.0 or 100% depending on the slicer. When you set the flow rate to 1.1 or 110% you are increasing the flow rate by 10%.

Flow rate influences the quality of the print.

## Creality K1C FDM printer

Specifications:

| Feature                | Specification                                            |
| ---------------------- | -------------------------------------------------------- |
| Build Volume           | 220 x 220 x 250 mm                                       |
| Material               | PLA/PETG/TPU/ABS (up to 300 degrees)                     |
| Extruder Type          | Sprite Direct drive                                      |
| Supported Filament     | PLA/TPU/PETG/ASA/ABS/PET/Carbon/PLA-CF/PA-CF             |
| Max printing speed     | 600 mm/s (with specific cases)                           |
| Nozzle                 | 0.4 mm (Unicorn), max 300 degrees                        |
| Build Platform         | Coated steel flex plate, heated, max 100°C               |
| Filament Runout Sensor | Yes                                                      |
| Connectivity           | LAN, Creality Cloud, USB Flash Disk                      |
| Interface              | 4.3 inch Color touch screen                              |
| Machine Footprint      | 355 x 355 x 482 mm                                       |
| Machine Weight         | 12.4 KG                                                  |
| Other                  | Auto leveling, filament detection, camera, auto-recovery |

General notes:

Do not place the printer near any heat source or flammable or explosive objects. We suggest placing it in a well-ventilated, cool and dustless environment, stable environment without vibration.

Replacement of filaments of the same kind: follow the normal Retreat - Feed process.

Printing PLA/PTEG - remove top cover if room temperature exceed 30°C. Or use mod? https://www.printables.com/model/491477-creality-k1-vented-lid-riser/comments

Replacement of different filaments: Preheat the nozzle to reach the target temperature of the current filament; then retreat it, replace with the target filament, and preheat the nozzle to the higher filament extrude temperature of the two filaments; feed for 30s until the filament has been completely extruded, and finally set the nozzle temperature to the temperature of current filament nozzle.

## Creality Helper Script

Guide how I used [Creality-Helper-Script](https://github.com/Guilouz/Creality-Helper-Script) to unlock some features.

Links:

- [Install & Update Rooted Firmware](https://guilouz.github.io/Creality-Helper-Script-Wiki/firmwares/install-and-update-rooted-firmware-ender3/?h=root)
- [Reset Factory Settings - Wiki for Creality Helper Script](https://guilouz.github.io/Creality-Helper-Script-Wiki/firmwares/reset-factory-settings/)
- [Install Helper Script - Wiki for Creality Helper Script](https://guilouz.github.io/Creality-Helper-Script-Wiki/helper-script/helper-script-installation/)
- [Change Date & Time - Wiki for Creality Helper Script](https://guilouz.github.io/Creality-Helper-Script-Wiki/firmwares/change-date-and-time/)

1. OTA update
2. Get root
3. Factory reset, check/fix datetime
4. Install/update helper script

Helper scripts recommended items from Tombraider2006 [^1]:

1 Moonraker and Ngnix (web-server for slicer and reverse-proxy)

2 Fluid (:4408) or 3 Mainsail (:4409) web UI.

4 Entware repo for embedded devices.

5 Klipper Gcode Shell Command, give many "tune" and analyze features with commands and scripts.

6 Klipper Adaptive Meshing & Purging:

On issuse with purging (`variable_purge_margin` doesn't help), like outline/support overlap, need to disable `adaptive_purge_line` in Web UI. TPU printing: need to tune printing profile and add _ADAPTIVE_PURGE_LINE_OFF in the start code and _ADAPTIVE_PURGE_LINE_ON in the end code.

7 Buzzer Support (beep sound), 
- [ ] check later

8 Nozle Cleaning Fan Control (improve algorithm speed)

9 Fans Control Macros, 
- [ ] check this when print with ABS

- [ ] check later 10 Improved Shapers Calibrations 11 Useful macros 12 Save Z-Offset Macros

16 Moonraker Timelapse, 
- [ ] check this later

## Replace filament

1. Pause/stop printing
2. Press retract in console (touch display menu option)
3. Unlock extruder
4. Optionaly remove your bowden tube from extruder, can be helpful when fillament is ended in the process of 3D printing.
5. Pull filament out, while taking out your filament don't forget the keep the tension of filament with your fingers at the end (if you keep it loose like in the video it might tangle
6. press extract to remove filament from extruder

7. cut your new filament in 45 degrees angle, gently without breaking your filament push until the end, you will feel when it goes inside, if it resists it's okay,

8. put bowden tube back if needed and lock extruder
9. start printing

## Inbox

# K1 fix resonance

Number 1

- [Creality K1 X Axis Resonance and Buzzing Fix (SUPER SIMPLE!) - YouTube](https://www.youtube.com/watch?v=eWtgwboWTi8) [XY Axis Belt Tension | Creality Wiki](https://wiki.creality.com/en/k1-flagship-series/k1-series-general-documents/xy-axis-belt-tension) [Z-axis Belt Tension | Creality Wiki](https://wiki.creality.com/en/k1-flagship-series/k1-series-general-documents/z-axis-belt-tension) [Creality K1 belt tension meter by RaduSorin1 | Download free STL model | Printables.com](https://www.printables.com/model/523382-creality-k1-belt-tension-meter/comments) - [ ] pid calibration control: pid # алгоритм управления нагревателем pid или watermark (регулирование по гистерезису. Гистерезис задается добавлением строки « max_ delta: ». По умолчанию 2 градуса). *** https://www.reddit.com/r/crealityk1/comments/176g33d/heater_extruder_not_heating_at_expected_rate/ [Creality K1 & K1C top mounted filament spool holder (new version 2) for TPU, etc. by Mr TVR | Download free STL model | Printables.com](https://www.printables.com/model/624848-creality-k1-k1c-top-mounted-filament-spool-holder)

Я делал последний раз проще, годится только для боудена в чистом виде, хотя можно адаптировать. Пластик ФДпласт идет в ZIF пакетах , не считая коробки. Просто делаю отверстие в углу шилом на 3-4 см ниже 'молнии пакета' и 1 см в сторону от угла. Вытаскиваю нить, оборачиваю углом пакета (тем что отступили) и степлером скрепляю. Одно отверстие если делать растягивается, поэтому нужно обернуть. Пластик так и остается в пакете, по целофану катушка легко крутится. Со временем стало пакет заворачивать в сторону мотора экструдера, приклеил скотчем противоположную сторону пакета к шкафу (он рядом). Пользуюсь так чуть меньше месяца, никаких проблем, пластик всегда сухой.

https://www.youtube.com/watch?v=y08v6PY_7ak [Quick and Simple Way to Level Your Creality K1 or K1 Max Bed - YouTube](https://www.youtube.com/watch?v=mW4jI42n3z4)

1. Heat belt to 60 to calibrate
2. Genreate height-map
3. Level bed with [shims](https://www.printables.com/model/665382-creality-k1k1-maxk1c-bed-levelling-risersshims/)

## Tuning

- [Calibration · SoftFever/OrcaSlicer Wiki · GitHub](https://github.com/SoftFever/OrcaSlicer/wiki/Calibration)
- [Voron 0.2 Tuning - Calibrating a Filament Profile in Orca Slicer - YouTube](https://www.youtube.com/watch?v=7BUJLbQUABY)

## Riser

[CREALITY K1 | K1C LID RISER V3 [FRAME EXTENSION KIT] by LEOTE [approach] | Download free STL model | Printables.com](https://www.printables.com/model/951012-creality-k1-k1c-lid-riser-v3-frame-extension-kit/files)

- [ ] [Хитрости многоцветной печати на Creality серии K1](https://losprinters.ru/articles/khitrosti-mnogotsvetnoy-pechati-na-creality-serii-k1/)

[^1]: [Tombraider2006/K1](https://github.com/Tombraider2006/K1/blob/main/random/menu.md)

## Containers

https://www.thingiverse.com/thing:6807699/comments

## Websites

| Site                                                     | Info                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| :------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Printables](https://www.printables.com/)                | (Formerly PrusaPrinters) Models and gcode for download. Please note downloading gcode might seem like a quick fix, but is [extremely dangerous](https://www.youtube.com/watch?v=RKdsp2vrmag). It's highly recommended that you don't do it, but if you do it would be worthwhile running it through a checker such as [Gcode Checker](https://www.reddit.com/r/3Dprinting/comments/dkmsdu/i_created_a_program_that_checks_gcode_marlin_for/) |
| [Thingiverse](https://www.thingiverse.com/)              | Largest 3D model hosting service, sometimes buggy                                                                                                                                                                                                                                                                                                                                                                                            |
| [MakerWorld](https://makerworld.com/en)                  | BambuLab's repository for models. It has a focus on multicolour models and files for BambuLab printers, but standard STLs to use on other printers are available as well on all of their models.                                                                                                                                                                                                                                             |
| [GrabCad](https://grabcad.com/)                          | functional/ technical models                                                                                                                                                                                                                                                                                                                                                                                                                 |
| [My Mini factory](https://www.myminifactory.com/)        | Paid and free models, guaranteed to print. Contains a collection called [Scan the World](https://www.myminifactory.com/scantheworld/) that contains scans from many artifacts in many museums.                                                                                                                                                                                                                                               |
| [NIH Print Exchange](https://3dprint.nih.gov/)           | Scientifically accurate and medically applicable models curated by the US National Institutes of Health                                                                                                                                                                                                                                                                                                                                      |
| [pinshape](https://pinshape.com/)                        | free and paid models                                                                                                                                                                                                                                                                                                                                                                                                                         |
| [Redpah](https://www.redpah.com/)                        | free and paid models                                                                                                                                                                                                                                                                                                                                                                                                                         |
| [YouMagine](https://www.youmagine.com/)                  | Open source models                                                                                                                                                                                                                                                                                                                                                                                                                           |
| [yeggi](https://www.yeggi.com/)                          | 3D model aggregator/search                                                                                                                                                                                                                                                                                                                                                                                                                   |
| [CGTrader](https://www.cgtrader.com/)                    | Hosts all kinds of models, not just for 3D printing, some may not be well optimized                                                                                                                                                                                                                                                                                                                                                          |
| [NopSCADlib](https://github.com/nophead/NopSCADlib)      | Library of cad files for various printer parts. Good for designing rep rap machines.                                                                                                                                                                                                                                                                                                                                                         |
| [embodi3d](https://www.embodi3d.com/)                    | [/u/embodi3d](https://www.embodi3d.com/u/embodi3d) Home biomedical 3D printing. Models, tutorials, forums                                                                                                                                                                                                                                                                                                                                    |
| [Smithsonian Digitization](https://3d.si.edu/)           | collection of scanned models from the Smithsonian collection                                                                                                                                                                                                                                                                                                                                                                                 |
| [Autodesk Online Gallery](https://gallery.autodesk.com/) | Various 3D content such as technical/functional models, panoramas and virtual reality content. Can be useful for learning modelling techniques if the source files are available.                                                                                                                                                                                                                                                            |
| [Thangs](https://thangs.com/)                            | Growing library of models and also suggests geometrically related models based on what you search or models you like. Improving as more models are added to the site, also offers collaboration tools.                                                                                                                                                                                                                                       |

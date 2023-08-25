---
date: 2023-04-15
draft: true
tags:
- inbox
- definition
sr-due: 2023-05-21
sr-interval: 4
sr-ease: 274
---

# Lineage 2 tools

> Lineage II is a massively multiplayer online role-playing game (MMORPG) for
> Microsoft Windows and the second game in the Lineage series. It is a prequel
> to Lineage and is set 150 years before the first game. It has become popular
> since its October 1, 2003 launch in South Korea, reporting 1,000,918 unique
> users during the month of March 2007. To date, the game has been played by
> more than 14 million users, most of whom are based in Asia.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/Lineage_II)

Lineage II adopted a free-to-play model in Lineage II: Goddess of Destruction,
with all game content being free except for "purchasable in-game store items and
packs" in November 2011.

- L2PE - The little tool for edit existing object’s properties or import/export
  new one.
     Features:
    – Edit object properties such as emitters colors etc.
    – Import/Export a new object to/from Lineage 2 files.
    – Supports higher Lineage 2 Chronicles/Clients.
- L2smr - Tool for adding/editing StaticMesh actors.
- L2Tool - it’s universal UTX package viewer, converter to Unread Editor format
  and TGA/DDS image replacer.
- XDAT Editor - An open source interface.xdat editor by acmi.
- Protection ID - The little tool for analyzing protection type for separated
  files or CD/DVDs.
- HD GeoEditor v.1.07b by DRiN
- CFF Explorer - A freeware suite of tools including a PE editor called CFF
  Explorer and a process viewer
- Unreal Tournament Package Tool - This Windows tool can examine an UT package
  file (and also from other Unreal Engine games) and extract its objects in
  several formats. It allows you to extract textures, sounds, music, scripts,
  meshes.
- WOTgreal – File Viewer/Exporter for Lineage 2 .u files WOTgreal can examine
  and export the classes, meshes, images and sounds of a particular Unreal
  Tournament mod (.u file). Features: Open most unreal engine package files and
  view their content, extract some interesting objects in viewable format,
  decompile unrealscript code.
- L2 File Edit ++ v.2
- UE Viewer – unreal engine packages viewer for Lineage 2 files
- Skeletal Mesh Editor - The Skeletal Mesh Editor Mode is where you can find the
  tools to manipulate and preview Skeletal Mesh assets
- ActorX Importer for 3ds Max - ActorX Importer complements functionality of the
  Epic Games ActorX Exporter. Epic's plugin can export psk and psa files from
  3ds Max, Maya and XSI. Plugin from this page has opposite functionality: you
  can load psk and psa files back to the 3ds Max (there is no versions for Maya
  and XSI).
- UTPT – File Viewer/Exporter for Lineage 2 files UTPT can examine a UT package
  file (and also from other Unreal Engine games) and extract its objects in
  several formats. It allows you to extract textures, sounds, music, scripts,
  meshes.
- L2DK - программа позволяет войти в режим разработчика не имея сервера. С помощью данной программы вы сможете примерить любую одежду, оружие, аксессуар, посмотреть анимацию скиллов и любоваться разными НПЦ. Установка: Распакуйте архив в папку system, где расположена ваша игра и запустите Lineage 2 DK.exe , далее нажмите Develop mode. После этого Игра запустится в режиме разработчика. Нажмите Tab и вводите:
SV - (Skill Viewer) просмотр анимации скиллов
PV - (Pawn Viewer) просмотр одежды, оружия
NV - (NPC Viewer) просмотр нпс (всех нпс, можно погулять валакасом по крепе например)



## Client Side stuff

winetricks requirements:
> export WINEARCH=win32
> winetricks vcrun2005 vcrun2008 vcrun2010 vcrun2012 vcrun2013 vcrun2015
> wine system/l2.exe
> winetricks corefonts
> winetricks sandbox
> winecfg and configure drivers

Kill game guard (high-five), [method](https://i.imgur.com/tQswxD4.png)

Requirements:
- xpeviewer
- https://github.com/WerWolv/ImHex/releases
- hex editor (I use <https://github.com/RaafatTurki/hex.nvim>)

1. Open in РЕ Editor core.dll (system\core.dll)
2. Go to exports → `?GL2UseGameGuard@@3HA` (`046c`)
3. Go to hex and get offset, in my case: `000e0db4`
4. Open in hex editor core.dll and go to offset

http://l2maxi.ru/java/faq/1697-manual-redaktirovanie-modeley-ukx-v-lineagenormalnyy.html
https://maxcheaters.com/topic/240179-collection-l2-shares-updated-07042023google-drive/
https://www.youtube.com/watch?v=IMMynGIoSR0 - effect

## L2Editor
Supported files: u, uax, ukx, unr, usx, utx
How to use Compiled:
1. Extract L2Editor-Compiled.zip to your Lineage II folder.
2. Open UnrealEd.exe
3. Enjoy!
Note: If you want to edit the L2Editor run options, edit UT2003.ini
Note: For Prelude client use Prelude-System.zip instead.

How to use Source:
1. Extract L2Editor-Source.zip.
2. Use Visual Studio 2013 Community Edition to build it.
3. Run System\!GenerateLibs.bat to generate lib files for l2 dlls.


L2Editor based on L2 Prelude DLLs. (Build Maps using original files from NCSOFT as result can build correct Intensity Maps aka IntMap)
Checked on the chronicles Prelude, Interlude, HF, Helios-GameCost, Salvation-Kr.

Saves packages as Version 123 Licensee 0.
Opens native packages 111, 121.
Running on the original LineageEffect, LineageEffect_br, LineageWarrior from Salvation.

Problems and issues are still enough but I will continue to work on the availability of free time.

If you are interested in further development of the project, you can create issues:
https://bitbucket.org/lordofdest/l2editor/issues
It is desirable with screenshots, video or any info that will help to quickly understand the problem.

If you are interested in the source code of this editor, you can contact with me. The options can be as follows: Exchange or simply handing over to people with a normal reputation on the forum.

All other questions are also in the PM or Skype lord0fdest.

Have a nice day!

Installation:
Replace original Prelude System folder in client to System from archive.
Features:
Build Intensity Maps.
And other stuff =p
Limitations:
Open/Save only Prelude Maps.
Known issues:
Crash on maps with AMover, AMovableStaticMesh.
Support:
At the moment I do not have free time to support this project.
Cookies:
UnrealEd-Prelude
UnEditor-Prelude-Complete-Package

P.S.
Maybe in future I try to share Interlude version of this Editor after fixing a lot of issues ;)

P.S.S
Have a nice day.


Edit 26/02/2020 https://drive.google.com/file/d/1qCVqTfuZe_NQug8a2DhVePdomnN5WqaH/view?usp=sharing
проект не полностью рабочей версии под версию движка 4.23.0.

## TODO

- [ ] l2j server
Ueview guide
- [ ] [Вытаскиваем из Lineage2 текстуры, анимацию и меши](https://www.youtube.com/watch?v=OfoBiWhyrfE)
- [ ] [Компиляция  u - YouTube](https://www.youtube.com/watch?v=JcDQzCbMNqY)
- [ ] [Адаптирование Арморов - YouTube](https://www.youtube.com/watch?v=XgQ3INqrXjc)
- [ ] https://www.youtube.com/watch?v=lXOjLTmL9nA


https://forum.zone-game.info/showthread.php?t=42513&page=2

Lighting
https://github.com/monocyte-games/ue-lightmap-debugger
https://forums.epicgames.com/udk/udk-development/level-design-and-creation/291247-i-hate-udk-lightmaps
https://github.com/rdw-archive/RagnarokFileFormats/blob/master/GND.MD
https://maxcheaters.com/topic/217389-l2editor/
https://forum.zone-game.info/showthread.php?t=42513&page=11
https://michaeljcole.github.io/wiki.unrealengine.com/LightingTroubleshootingGuide/#invalid-lightmap-settings-when-converting-bsp-to-static-mesh

https://www.gildor.org/smf/index.php/topic,7653.0.html wtf?
https://www.youtube.com/watch?v=YAZ9Wmg4tYo - unreal edit guide
https://www.gildor.org/smf/index.php/topic,151.0.html - convert unreal to l2
(static mesh/animations)
https://www.gildor.org/smf/index.php/topic,2988.30.html - ue4 port
https://www.youtube.com/watch?v=vLPvUV--yN0 - backface culling in blender
https://www.youtube.com/watch?v=AKqJ6_l9iik&t=372s
https://www.youtube.com/watch?v=vBJ4t0ZYSJo
https://www.youtube.com/watch?v=IioWGDgtX1g

## Sources
- [ ] https://maxcheaters.com/topic/14091-how-to-make-your-own-model/
- [ ] https://www.youtube.com/watch?v=UCzqCskoOQI (ueview guide)
- [ ] https://docs.unrealengine.com/udk/Two/
- [ ] https://www.gildor.org/downloads
- [ ] http://rootware.ru/
- [ ] https://github.com/acmi
- [ ] https://www.acordero.org/projects/
- [ ] https://www.youtube.com/@KonstantinNosov/videos
- [ ] https://l2crypt.com/l2-tools/
- [ ] https://forummaxi.ru/tutorials/category/6-%25d1%2580%25d0%25b0%25d0%25b1%25d0%25be%25d1%2582%25d0%25b0-%25d1%2581-%25d0%25ba%25d0%25bb%25d0%25b8%25d0%25b5%25d0%25bd%25d1%2582%25d0%25be%25d0%25bc/
- [ ] https://cytologist11.rssing.com/chan-6721886/article5822-live.html
- [ ] http://www.lineage2media.com/glowmodificationlineage2.html
- [ ] https://forummaxi.ru/topic/79928-%D1%8D%D0%BA%D1%81%D0%BF%D0%BE%D1%80%D1%82-l2-3ds-max-%D1%8D%D1%84%D1%84%D0%B5%D0%BA%D1%82%D1%8B/
- [ ] https://maxcheaters.com/topic/202062-l2-ultimate-collection/
- [ ] http://rootware.ru/wotgreal-package-exporter/
- [ ] https://forum.zone-game.info/showthread.php?t=27688
- [ ] https://www.cuzus.org/forums/showthread.php?tid=2382&pid=24054#pid24054
- [ ] https://www.cuzus.org/forums/showthread.php?tid=3319
- [ ] https://cytologist11.rssing.com/chan-6721886/article5822-live.html

## Extraction
https://github.com/Bigcheese/L2MapExtract/blob/master/unreal_package.bt


Unreal Lightmap... fix
https://www.youtube.com/watch?v=kRmyzF6A10U


## Notes
l2editor
https://maxcheaters.com/topic/217389-l2editor/

First version can open various maps, second save them with lighting

Simply epic.  I hope you are able to correct issue with lighting =)

L2Editor based on L2 Prelude DLLs. (Build Maps using original files from NCSOFT as result can build correct Intensity Maps aka IntMap)

Known issues:
Crash on maps with AMover, AMovableStaticMesh.


sorry for dig it up but who know the solution for solving black terrain?
set up ambient brightness in zone info. Then rebuild map.
`AmbiengtBrightness=255`

Has anyone managed to prevent the editor from crashing when trying to import armor animations (psa)?
use gildor's ut2004 editor for that.

I have the both the ut2003 and ut2004 version that is able to open .ukx packs created by the ut2down tool, but I can't open default C1 packs with it. I've been trying to port C6 textures into the C1 client. I found out how to manually add notifys, but I was unable to import sounds into the pack. I tried editing directly the C1 pack with the lordofdest-l2editor-25.10.2017 version, which seems to work, but it crashed when trying to add animations (skirts).
just resave them with l2editor

I have also tried the UnrealED from the latest patch of Unreal Tournament 2004, which can create .ukx files and is compatible with the ut2down encryption.
(I can open and edit .ukx files encrypted with the ut2down tool)

Intensity maps for terrain sectors:
1. Can be generated using FDynamicLight::SampleIntensity.
2. Extension for DevMode to call UTerrainSector::MakeIntensityMap() and ULevel::Serialize.
   For other objects Lineage2 using FMultiLightMap (before GoD which using Beast)
   Issues will be fixed after fail with loading UnreadEd on Prelude dlls or not fix if we have success. =)

Change in levelinfo in lighting ilumination to 255 ;)


---
Prelude -> Prelude dll editor. Works good except terrain editor, but you can create it with different editors.

Interlude -> Unfinished Interlude dll editor.

L2Editor -> Universal client editor, supports all clients till fafurion. Some functions don't work. Breaks level light upon saving the map.

MAPS Unreal Engine -> decompiled Unreal maps so u can modify and import actors from there. Even these which are not supported by your editor.

UedTexKit -> allows to convert  unrealG16 .bmp heightmaps to G16 .tiff and backwards.

Geobuilder - creates geodata with client. U can setup startup map in l2.ini.

PandasBuildConv -> converts client-builded geodata into _conv.dat

HDGE -> geodata editor/converter

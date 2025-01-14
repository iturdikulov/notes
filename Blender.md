---
external:
  - https://www.blender.org/
date: 2023-03-04T00:00+03:00
tags:
  - inbox
  - 3D
sr-due: 2023-01-28
sr-interval: 4
sr-ease: 224
---

# Blender

Free and open source [[3D_computer_graphics|3D]] creation suite. Free as in
freedom.

[[computer_graphics|Computer graphics]] software tool set used for creating
animated films, visual effects, [[art]], 3D-printed models, motion graphics,
interactive 3D applications, virtual reality, and, formerly, video
[[game|games]].

## Learning path

- [ ] [Making 3D console](https://cgcookie.com/courses/press-start-your-simple-first-blender-project)
- [ ] [Blender Panel to import Google Earth Studio, KML Routes, and 3D Masking](https://github.com/imagiscope/EarthStudioTools)

## General shortcuts

- Toggle left toolbar::`t`
- Properties (right side), useful to set dimensions, position, etc.::`n`
- Add new object::`S-a`
- Delete::`x` or `del` (single object deleting without confirmation)
- Search for function, mode aware::`F3`
- Initiate move, move along axis:
  &#10;<br>
  `g`; then `x`, `y`, `z` move along axis or move using `mmb` hold with snapping
  to axis. Along local axis (rotate object first) - `x,x`/`y,y`/`z,z`.
  Alternative drag `mmb` while moving to snap/move object to axis. You can move
  object by Gizmo (local) in move mode (left toolbar) and white circle around
  object. To cancel move press `esc` or `rmb`.
- Scale:
  &#10;<br>
  `s`, along axis - `x/y/z` or scale using `mmb` hold with
  snapping to axis. Along local axis - `x,x`/`y,y`/`z,z`.
  Or scale button in left panel.
- Rotate
  &#10;<br>
  `r`, along axis - `x/y/z` or rotate using `mmb` hold with
  snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`. Or rotate button in left
  panel.
- Trackball Rotate::`r, r`
- Precise movement
  &#10;<br>
  `S-` (*hold*). Allow to drag/set value more precisely.
- Incremental movement
  &#10;<br>
  `C-(*hold*)`. Allow to drag/set value incrementally or enable snapping.
- Duplicate vertices/mesh.
  &#10;<br>
  `S-d`, or `Mesh -> Duplicate`. `lmb` to confirm, `esc` to cancel.
  When you duplicate vertices, you can press `p` to separate them into a new mesh.
- Duplicate Linked::`M-d`

<!-- TODO: need to review -->

- Hide selection (geometry/vertices)::`h`
- Show All::`M-h`
- Hide all Except Selected::`S-h`
- Annotate::`D (*hold*) + LMB (*drag*)`
- Erase Annotation::`D (*hold*) + RMB (*drag*)`
- Open quick favorite's menu::`q`
- Rename object
  &#10;<br>
  You can rename selected object by double-clicking on it in outliner. Or select object and press F2.
- Shading Pie Menu
  &#10;<br>
  `z`. You can also change/check current view-port shading in top right corner,
  layout mode
- Toggle X-Ray (to select through mesh)
  &#10;<br>
  `M-z` or button in top right (2 squares).
- Pivot point pie menu TODO: what is pivot?::`.`
- Snap pie menu::`S-s`
- Orientation pie menu::`,`
- Maximise Area (but keep toolbar)::`C-space`
- Fullscreen Area::`C-M-space`
- Quad view::`C-M-q`
- Open popup menu for last action (Adjust Last Operation)::`F9`

## Navigation shortcuts

- Orbit::`mmb`
- Pan::`S-mmb`
- Zoom In/Out::`scroll` or `C-mmb`
- Smooth zoom::`C-mmb` (*drag*)
- Fly::`S-~`. `scroll` to change speed.

- Pie Menu::`~`
- Focus::`.`
- Isolate::`/`

- Fast View Switch::`M-MMB (*drag*)`
- Camera::`0`. Or press button in right toolbar (toggle the camera view).
- Front::`1`
- Rotate Down::`2`
- Side::`3`
- Rotate Left::`4`
- Persp/Ortho::`5`
- Rotate Right::`6`
- Top::`7`
- Rotate Up::`8`
- Opposite::`9`

- Show All Objects::`home`
- Zoom to region::`S-b`

Change Window type (under Cursor):

- Assets::`S-F1`
- Movie Clip::`S-F2`
- Nodes::`S-F3`
- Python Console::`S-F4`
- 3d Viewport::`S-F5`
- Graph::`S-F6`
- Properties::`S-F7`
- Video Sequencer::`S-F8`
- Outliner::`S-F9`
- UV/Image::`S-F10`
- Text::`S-F11`
- Dope Sheet::`S-F12`

## Object mode shortcuts

- Change Mode Pie Menu::`C-tab`
- Edit/Object mode toggle::`tab`
- Mirror::`C-m` *then* `X/Y/Z` (*or* `mmb` *(drag))*
- Set Parent (to last selected)::`C-p`
- Clear Parent::`M-p`
- Toggle Snapping::`S-tab`, or button in top right controls.
- Clear Location::`M-g`
- Clear Rotation::`M-r`
- Clear Scale::`M-s`
- Apply Menu - Location / Scale / Rotation::`C-a`
- Join Selected Objects::`C-j`
- Copy Attributes to New Objects TODO: what is this?::`C-l`
- Add Subdivision level::`C-0/1/2/3/4/5`
- Mask view to region / Clear mask::`M-b`
- Center 3D cursor::`S-c`
- Move active object to collection::`m`
- Move Active Camera to view::`C-M-numpad0`
- Set as Active Camera::`C-numpad0`

## General selection shortcuts

- Select::`lmb`
- Select All::`a`
- Deselect All::`M-a`
- Marquee Box Select::`b` *or* `LMB (*drag*)`
- Circle Select::`c`
- Lasso Select::`C-rmb`
- Invert Selection::`C-i`
- Select Linked::`S-l`
- Select Similar::`S-g`
- Select from many TODO: what is this?::`M-lmb`

- Select Connected Mesh::`C-l`, useful to restore selection.
- Select Connected Mesh Under Cursor::`l`
- Select Edge Loop::`M-lmb`
- Select Edge Ring::`C-M-rmb`
- Vertex Select Mode::`1`
- Edge Select Mode::`2`
- Face Select Mode::`3`
- Mirror current selection::`C-S-m`
- Grow/Shrink Selection TODO: need to fix my keyboard::`C-Num+`/ `C-nuM-`
- Edge Crease::`C-e`
- Shrink/fatten::`M-s`

## Edit mode shortcuts

Modelling:

- Extrude::`e`, select at least few vertices, edges or faces.
- Inset, TODO: how its working?::`i`
- Bevel::`C-b`
- Bevel Vertices::`C-S-b`
- Loop cut, this is context-sensitive operation::`C-r`
- Vertex/Edge Slide::`G,G`
- Knife::`k`
- Fill Face::`F`
- Shear::`C-S-M-s`
- Bend::`S-w`
- Split::`y`
- Rip::`v`
- Rip Fill::`M-v`
- Merge::`m`
- Recalculate Normals::`S-n`
- Flip Normals: TODO: what it does?::`C-S-n`
- Proportional Editing On/Off::`o`
- Proportional Falloff Type::`S-o`
- Separate to new object::`p`

Curve Editing:

- Add new handle::`e` *or* `C-rmb`
- Change handle type::`v`
- Delete but maintain connection::`C-x`
- Close curve::`M-c`
- Tilt, TODO: what is this?::`C-t`
- Clear Tilt::`M-t`

Texturing:

- TODO: need review
- Unwrap::`u`
- Mark Seam::`C-e`

## UV Editor shortcuts

- TODO: need review
- Select Island::`l` (*under cursor*) or `C-l`
- Stitch::`v`
- Weld::`S-w`
- Pin::`p`
- Unpin::`M-p`
- Select Pinned::`S-p`

## Image editor shortcuts

View:

- Properties, Scopes, Slots and Metadata::`n`
- View at 100%::`1 (Numpad)`
- View to Fit::`S-home`
- Next Render Slot::`j`
- Previous Render Slot::`M-j`
- Select Render Slot::`1-8`
- Save Image::`M-s`
- Save Image As TODO: need compare with pdf cheatsheet::`S-M-s`

Paint:

- Create New Blank Image::`M-n`
- Open Image::`M-o`
- Brush Properties::`n`
- Brush Size::`F`
- Brush Strength::`S-F`
- Sample Color::`s`
- Flip Color::`x`

## Nodes shortcuts

TODO: need review

- Cut Connection::`C-rmb` (*drag*)
- Connect selected::`F`
- Properties::`n`
- Delete selected but maintain connection::`C-x`
- Duplicate selected and maintain connection::`C-S-d`
- Mute Selected::`m`
- Group Selected::`C-g`
- Ungroup Selected::`C-M-g`
- Edit Group (Toggle)::`tab`
- Frame Selected Nodes::`C-j`
- Show/Hide inactive node slots::`C-h`

Compositor:

TODO: need review

- Move backdrop::`M-mmb`
- Zoom backdrop::`V / M-V`
- Properties and performance::`n`

## Sculpting shortcuts

- Inflate::`i`
- Draw::`x`
- Grab::`g`
- Brush Selection::`S-space`
- Change Brush Size::`F`
- Change Brush Strength::`S-F`
- Brush Angle::`C-F`
- Angle Control::`r`
- Stroke Control::`e`
- Mask (box)::`b`
- Mask (brush)::`m`
- Mask (brush) erase mode::Hold `C-`, while you in mask mode (`b`).
- Clear Mask::`M-m`
- Invert Mask::`C-i`
- Hide (box)::`h`
- Toggle Isolate mode::`/`
- Temporary toggle smooth tool::`S-`

## Rendering and animation shortcuts

- Render::`F12`
- Render Animation::`C-F12`
- Playback rendered animation::`C-F11`
- Set Render Region, TODO: how it working?::`C-b`
- Clear Render Region::`C-M-b`

Animation general:

- Play/Pause Playback::`space`
- Reverse Play::`C-S-space`
- Scroll through frames::`M-scroll`
- Next/Previous Frame::`Left/Right arrow`
- First/Last Frame::`S-Left/Right arrow`
- Jump to Keyframe::`Up/Down arrow`
- Add Keyframe on current frame::`i`
- Delete Keyframe on current frame::`M-i`

Timeline / Dopesheet

- Toggle Dopesheet::`C-tab`
- Toggle Frames/Seconds::`C-t`
- Zoom to fit active keyframes::`home` *or* `. (Numpad)`
- Set Keyframe Interpolation::`t`
- Set Keyframe Handle Type::`v`
- Set Keyframe Extrapolation::`S-e`
- Mirror Keyframes::`C-m`
- Set Preview Range::`p` *then* `lmb` (*drag*)
- Auto set preview range::`C-M-p`
- Clear Preview::`M-p`
- Marker::`m`
- Rename Marker TODO: not working?::`C-m`

- Bind Selected Camera to Selected Marker, TODO: what it do?::`C-b`
- Select keyframes before/after current frame::`[/]`
- Select all keyframes on current frame, TODO: what it do?::`C-k`

Graph Editor:

- TODO: need review
- Add Keyframe at Cursor::`C-rmb`
- Properties and Modifiers::`n`
- Lock Selected Channel::`tab`

## Rigging (armatures)

- Add new bone::`e`
- Duplicate bone::`S-d`
- Bone Settings::`S-w`
- Roll::`C-r`
- Clear Roll::`M-r`
- Recalculate Roll::`S-n`
- Align bone::`C-M-a`
- Switch bone direction::`M-F`
- Dissolve Bone::`C-x`
- Dissolve bones::`C-x`
- Split::`y`
- Separate::`p`
- Scroll Hierarchy::`]` *and* `[`

Posing Mode:

- TODO: need review

- Add Keyframe::`i`
- Clear Location::`M-g`
- Clear Rotation::`M-r`
- Clear Scale::`M-s`
- Apply Pose::`C-a`
- Propagate Pose::`M-p`
- Push Pose from Breakdown::`C-e`
- Relax Pose to Breakdown::`M-e`
- Pose Breakdowner::`S-e`
- Copy Pose::`C-c`
- Paste Pose::`C-v`
- Add IK::`S-i`
- Add Pose to Library::`S-l`
- Paste Pose Flipped::`C-S-v`
- Add Constraint::`C-S-c`

## More keybindings

![[./img/blender-infographiC-SM-2500.png]]
_[Learn Blender with a poster infographic](https://www.giudansky.com/illustration/infographics/blender-map)_

---

![[img/ref-CGCookie-blender_hotkeys_4.1.pdf#page=2]]
_[Blender Hotkey Cheat Sheet](https://cgcookie.com/downloads/blender-hotkey-cheat-sheet)_

## Tutorials

- [ ] [Creating Realistic 3d Pencil model in Blender Tutorial](https://www.youtube.com/watch?v=dq7qUVHnN0M)

- [ ] [Tutorial: Quick Smooth Camera Movements in Blender - YouTube](https://www.youtube.com/watch?v=a7qyW1G350g)
- [ ] [Beginner Modelling Chair Tutorial - YouTube](https://www.youtube.com/playlist?list=PLjEaoINr3zgEL9UjPTLWQhLFAK7wVaRMR)
- [ ] [Blender Tutorial - Creating a Stormy Ocean - YouTube](https://www.youtube.com/watch?v=oysCSbhXYBo)
- [ ] [How To Render This Cinematic Shot With EEVEE - YouTube](https://www.youtube.com/watch?app=desktop&v=RB6Ytdfwy-0)
- [ ] [Create a Realistic Forest in 30 Minutes - YouTube](https://www.youtube.com/watch?v=72LPW4S8bns)

- [ ] [PRESS START: Your Simple First Blender Project](https://cgcookie.com/courses/presS-start-your-simple-First-blender-project)
- [ ] [Тропическая сцена в Blender](https://www.youtube.com/watch?v=CsNgljHnbhA)
- [ ] [Blender Tutorial - Quick Rigid Body Fun](https://www.youtube.com/watch?v=nHVYYMG3QVY)
- [ ] [How to Create Ghibli Trees in 3D - Blender Tutorial](https://www.youtube.com/watch?v=DEgzuMmJtu8)
- [ ] [Create a Subway in Blender in 20 minutes](https://www.youtube.com/watch?v=nb6rSMAooDs)
- [ ] [How to Create a Low Poly Tree in 1 Minute](https://www.youtube.com/watch?v=y7PdiGXbrD0)
- [ ] [Blender Beginner Modelling Tutorial - Part 1](https://www.youtube.com/watch?v=Hf2esGA7vCc)

- [ ] [Intermediate Blender Tutorial Series](https://www.youtube.com/playlist?list=PLjEaoINr3zgHJVJF3T3CFUAZ6z11jKg6a)
- [ ] [How to Learn 3D in 4 weeks (self-taught curriculum)](https://www.youtube.com/watch?v=Nj_l6YHMj-c)
- [ ] [The Complete "Game Development with Blender" Book](https://github.com/mikepan/GameEngineBook)
- [ ] [BlenderText To 3D AI Generator](https://devbud.gumroad.com/l/Shap-e)
- [ ] [Animate a Character in 15 Minutes in Blender](https://www.youtube.com/watch?v=imbIsNAvUpM)
- [ ] [GitHub - ichlubna/blenderScripts: Random Python scripts for Blender](https://github.com/ichlubna/blenderScripts)
- [ ] [Destroy Anything with Particles in Blender - Iridesium](https://www.youtube.com/watch?v=mXnp_KIo8q8)
- [ ] [Use Backface Culling To Make Objects Transparent Based On Perspective - Blender](https://www.youtube.com/watch?v=vLPvUV--yN0)
- [ ] [Easy Caustics in Blender!](https://www.youtube.com/watch?v=j17dGVw3_gM)
- [ ] [Sculpt January 2018 | no 9 | Tool | Blender](https://www.youtube.com/watch?v=exAwCkuGHe4)
- [ ] [Easy God Rays or Sun Rays in Blender](https://www.youtube.com/watch?v=MQooOGayOQI)
- [ ] [Ray Gun Beginners Tutorial | Blender 2.8 | Part 2 materials](https://www.youtube.com/watch?v=ffcf8W-4guA)
- [ ] [Clipping or Alpha Inheritance](https://www.youtube.com/watch?v=HeCS-VdpzdI)
- [ ] [Burning Embers, Leaves or Dust Particles](https://www.youtube.com/watch?v=Tg_gGLqDUqg)
- [ ] [Creating Magic Portals | Transparent Textures in Blender 2.8](https://www.youtube.com/watch?v=pBIRKRmsDkA)
- [ ] [Blender Tutorial - Particle trail in less than 5 minutes](https://www.youtube.com/watch?v=7i0VwC5Jccc)
- [ ] [How to Make Electricity FX in Blender - Iridesium](https://www.youtube.com/watch?v=p4UWvg6ixho&list=PLYUS7Y8UYCN23HDQ3N7wqx64MQQfk3iRo)
- [ ] [Magic spell symbol VFX animation tutorial Blender - Eevee](https://www.youtube.com/watch?v=MwDF4iQtYTM)
- [ ] [Glass Plasma Orb in Blender (Blender Tutorial)](https://www.youtube.com/watch?v=rtPzXrZ23k0)
- [ ] [Flaming Magic Sword - Blender Tutorial Part 2](https://www.youtube.com/watch?v=hdunwukqdCc)
- [ ] [Making a Procedural Magical Blast | Blender Geometry Nodes | Part 1](https://www.youtube.com/watch?v=FaXCwbbN5co)
- [ ] [Blender Energy FX Tutorial |Blender](https://www.youtube.com/watch?v=9ehbb93atqo)
- [ ] [Как сделать пружину](https://www.youtube.com/watch?v=f_tbE0Kn7KM)
- [ ] [Glass Liquid Simulation Tutorial](https://www.youtube.com/watch?v=V_LEc4r9_a0)

- [ ] Geometry Nodes from scratch (check your filesystem)
- [x] [[Price_-_Donut_tutorial_in_Blender]]
- [x] [[CG_Cookie_-_Blender_basics]]

## External links

- [Blender Guru](https://www.youtube.com/@blenderguru)
- [Josh Gambrell](https://www.youtube.com/@JoshGambrell)
- [Derek Elliott](https://www.youtube.com/@DerekElliott)
- [SouthernShotty](https://www.youtube.com/@SouthernShotty)
- [Grant Abbitt](https://www.youtube.com/@grabbitt)
- [Ryan King Art](https://www.youtube.com/@RyanKingArt)
- [Curtis Holt](https://www.youtube.com/@CurtisHolt)
- [Polygon Runway](https://www.youtube.com/@polygonrunway)
- [CG Geek](https://www.youtube.com/@CGGeek)
- [Max Hay](https://www.youtube.com/@maxhay5426)
- [Polyfjord](https://www.youtube.com/@Polyfjord)
- [Smeaf](https://www.youtube.com/@Smeaf)
- [CG Geek](https://www.youtube.com/@CGGeek)
- [Max Hay](https://www.youtube.com/@maxhay5426)
- [Polyfjord](https://www.youtube.com/@Polyfjord)
- [Smeaf](https://www.youtube.com/@Smeaf)
- [Cleverpoly](https://www.youtube.com/@cleverpoly)
- [Default cube](https://www.youtube.com/@DefaultCube)
- [Kaizen tutorials](https://www.youtube.com/@KaizenTutorials/featured)
- [Bad normals](https://www.youtube.com/@BadNormals)
- [Kev Binge](https://www.youtube.com/@KevBinge)
- [intranetgirl](https://www.youtube.com/@intr4)
- [RenderRides](https://www.youtube.com/@RenderRides)

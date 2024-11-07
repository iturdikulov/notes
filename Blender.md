---
external:
  - https://www.blender.org/
date: 2023-03-04
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
animated films, visual effects, [[art|art]], 3D-printed models, motion graphics,
interactive 3D applications, virtual reality, and, formerly, video
[[game|games]].

## Blender Common Shortcuts

Shortcuts for Blender which I use often.

### General (most window types)

Toggle left toolbar::`T`
Properties, right toolbar (useful to set dimensions, position, etc.)::`N`
Add Object/Node::`S-A`
Delete::`X` or `Delete` (single object deleting without confirmation)
Search for Function::`F3`

Initiate Move, move along axis
&#10;
`G`, `X`, `Y`, `Z` move along axis or move using `MiddleMouse` hold with
snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`. Alternative drag `MMB`
while moving to snap/move object to axis.
You can move object by Gizmo (local) in move mode (left toolbar) and white
circle around object.
To cancel move press `ESC` or `RMB`.

Scale
&#10;
`S`, along axis - `X/Y/Z` or scale using `MiddleMouse` hold with
snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`.
Or scale button in left panel.

Rotate
&#10;
`R`, along axis - `X/Y/Z` or rotate using `MiddleMouse` hold with
snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`. Or rotate button in left
panel.

Trackball Rotate::`R, R`

Precise movement
&#10;
`S-` (*hold*). Allow to drag/set value more precisely.

Incremental movement
&#10;
`C-(*hold*)`. Allow to drag/set value incrementally or enable snapping.

Duplicate verticies/mesh.
&#10;
`S-D`, or `Mesh -> Duplicate`. `LMB` to confirm, `Esc` to cancel.
When you duplicate vertices, you can press `p` to separate them into a new mesh.
Duplicate Linked TODO: linked?::`M-D`
Hide selection (geometry/verticies)::`H`
Unhide All::`M-H`
Hide all Except Selected::`S-H`
Annotate::`D (*hold*) + LMB (*drag*)`
Erase Annotation::`D (*hold*) + RMB (*drag*)`
Quick favs menu::`Q`

Rename object
&#10;
You can rename selected object by double-clicking on it in outliner. Or select object and press F2.


### Navigation (3D viewport)

Orbit::`MMB`
Pan::`S-MMB`
Zoom In/Out::`Scroll` or `C-MMB`
Smooth zoom::`C-MMB` (*drag*)
Fly::`S-~`. `Scroll` to change speed.

### View (3D viewport)

### Numpad views (toggle)

Pie Menu::`~`
Focus::`.`
Isolate::`/`

Fast View Switch::`M-MMB (*drag*)`
Camera::`0`. Or press button in right toolbar (toggle the camera view).
Front::`1`
Rotate Down::`2`
Side::`3`
Rotate Left::`4`
Persp/Ortho::`5`
Rotate Right::`6`
Top::`7`
Rotate Up::`8`
Opposite::`9`

Show All Objects::`Home`
Zoom to region::`S-B`

### Object Mode (3D viewport)

Change Mode Pie Menu::`C-TAB`
Edit/Object mode toggle::`TAB`
Mirror::`C-M` *then* `X/Y/Z` (*or* `MMB` *(drag))*
Set Parent (to last selected)::`C-P`
Clear Parent::`M-P`
Toggle Snapping::`S-TAB`, or button in top right controls.
Clear Location::`M-G`
Clear Rotation::`M-R`
Clear Scale::`M-S`
Apply Menu - Location / Scale / Rotation::`C-A`
Join Selected Objects::`C-J`
Copy Attributes to New Objects TODO: what is this?::`C-L`
Add Subdivision level::`C-0/1/2/3/4/5`
Mask view to region / Clear mask::`M-B`
Center 3D cursor::`S-C`
Move active object to collection::`M`
Move Active Camera to view::`C-M-Numpad0`
Set as Active Camera::`C-Numpad0`

### General Selection (most window types)

Select::`LMB`
Select All::`A`
Deselect All::`M-A`
Marquee Box Select::`B` *or* `LMB (*drag*)`
Circle Select::`C`
Lasso Select::`C-RMB`
Invert Selection::`C-i`
Select Linked::`S-L`
Select Similar::`S-G`
Select from many TODO: what is this?::`M-LMB`

### Shading (3D viewport)

Shading Pie Menu
&#10;
`Z`. You can also change/check current view-port shading in top right corner,
layout mode

Toggle X-Ray (to select through mesh)
&#10;
`M-Z` or button in top right (2 squares).

### Pie Menus

Pivot point pie menu TODO: what is pivot?::`.`
Snap pie menu::`S-S`
Orientation pie menu::`,`

### Selection (Edit Mode)

Select Connected Mesh::`C-L`, useful to restore selection.
Select Connected Mesh Under Cursor::`L`
Select Edge Loop::`M-LMB`
Select Edge Ring::`C-M-RMB`
Vertex Select Mode::`1`
Edge Select Mode::`2`
Face Select Mode::`3`
Mirror current selection::`C-S-M`
Grow/Shrink Selection TODO: need to fix my keyboard::`C-Num+`/ `C-Num-`
Edge Crease::`C-E`
Shrink/fatten::`M-S`

### Curve Editing (Edit mode)

Add new handle::`E` *or* `C-RMB`
Change handle type::`V`
Delete but maintain connection::`C-X`
Close curve::`M-C`
Tilt, TODO: what is this?::`C-T`
Clear Tilt::`M-T`

### Modelling (Edit Mode)

Extrude::`e`, select at least few vertices, edges or faces.
Inset, TODO: how its working?::`i`
Bevel::`C-B`
Bevel Vertices::`C-S-B`
Loop cut, this is context-sensitive operation::`C-R`
Vertex/Edge Slide::`G,G`
Knife::`K`
Fill Face::`F`
Shear::`C-S-M-S`
Bend::`S-W`
Split::`Y`
Rip::`V`
Rip Fill::`M-V`
Merge::`M`
Recalculate Normals::`S-N`
Flip Normals: TODO: what it does?::`C-S-N`
Proportional Editing On/Off::`O`
Proportional Falloff Type::`S-O`
Separate to new object::`P`

### Texturing (Edit Mode)

TODO: need review
Unwrap::`U`
Mark Seam::`C-E`

### UV Editor

TODO: need review
Select Island::`L` (*under cursor*) or `C-L`
Stitch::`V`
Weld::`S-W`
Pin::`P`
Unpin::`M-P`
Select Pinned::`S-P`

### Image Editor (View)

Properties, Scopes, Slots and Metadata::`N`
View at 100%::`1 (Numpad)`
View to Fit::`S-Home`
Next Render Slot::`J`
Previous Render Slot::`M-J`
Select Render Slot::`1-8`
Save Image::`M-S`
Save Image As TODO: need compare with pdf cheatsheet::`S-M-S`

### Image Editor (Paint)

Create New Blank Image::`M-N`
Open Image::`M-O`
Brush Properties::`N`
Brush Size::`F`
Brush Strength::`S-F`
Sample Color::`S`
Flip Color::`X`

### Nodes (Materials / Compositor)

TODO: need review
Cut Connection::`C-RMB` (*drag*)
Connect selected::`F`
Properties::`N`
Delete selected but maintain connection::`C-X`
Duplicate selected and maintain connection::`C-S-D`
Mute Selected::`M`
Group Selected::`C-G`
Ungroup Selected::`C-M-G`
Edit Group (Toggle)::`TAB`
Frame Selected Nodes::`C-J`
Show/Hide inactive node slots::`C-H`

#### Compositor

TODO: need review
Move backdrop::`M-MMB`
Zoom backdrop::`V / M-V`
Properties and performance::`N`

### Sculpting

Inflate::`I`
Draw::`X`
Grab::`G`
Brush Selection::`S-Space`
Change Brush Size::`F`
Change Brush Strength::`S-F`
Brush Angle::`C-F`
Angle Control::`R`
Stroke Control::`E`
Mask (box)::`B`
Mask (brush)::`M`
Mask (brush) erase mode::Hold `C-`, while you in mask mode (`B`).
Clear Mask::`M-M`
Invert Mask::`C-i`
Hide (box)::`H`
Toggle Isolate mode::`/`
Temporary toggle smooth tool::`S-`

### Rendering

Render::`F12`
Render Animation::`C-F12`
Playback rendered animation::`C-F11`
Set Render Region, TODO: how it working?::`C-B`
Clear Render Region::`C-M-B`

### Animation General

Play/Pause Playback::`Space`
Reverse Play::`C-S-Space`
Scroll through frames::`M-Scroll`
Next/Previous Frame::`Left/Right arrow`
First/Last Frame::`S-Left/Right arrow`
Jump to Keyframe::`Up/Down arrow`
Add Keyframe on current frame::`i`
Delete Keyframe on current frame::`M-i`

#### Animation (Timeline / Dopesheet / Graph Editor)

Toggle Dopesheet::`C-TAB`
Toggle Frames/Seconds::`C-T`
Zoom to fit active keyframes::`Home` *or* `. (Numpad)`
Set Keyframe Interpolation::`T`
Set Keyframe Handle Type::`V`
Set Keyframe Extrapolation::`S-E`
Mirror Keyframes::`C-M`
Set Preview Range::`P` *then* `LMB` (*drag*)
Auto set preview range::`C-M-P`
Clear Preview::`M-P`
Marker::`M`
Rename Marker TODO: not working?::`C-M`

#### Animation (Timeline / Dopesheet / Graph Editor) (cont.)

Bind Selected Camera to Selected Marker, TODO: what it do?::`C-B`
Select keyframes before/after current frame::`[/]`
Select all keyframes on current frame, TODO: what it do?::`C-K`

#### Graph Editor

TODO: need review
Add Keyframe at Cursor::`C-RMB`
Properties and Modifiers::`N`
Lock Selected Channel::`TAB`

### Rigging (Armatures)

Add new bone::`E`
Duplicate bone::`S-D`
Bone Settings::`S-W`
Roll::`C-R`
Clear Roll::`M-R`
Recalculate Roll::`S-N`
Align bone::`C-M-A`
Switch bone direction::`M-F`
Dissolve Bone::`C-X`
Dissolve bones::`C-X`
Split::`Y`
Separate::`P`
Scroll Hierarchy::`]` *and* `[`

### Posing Mode

TODO: need review

Add Keyframe::`i`
Clear Location::`M-G`
Clear Rotation::`M-R`
Clear Scale::`M-S`
Apply Pose::`C-A`
Propagate Pose::`M-P`
Push Pose from Breakdown::`C-E`
Relax Pose to Breakdown::`M-E`
Pose Breakdowner::`S-E`
Copy Pose::`C-C`
Paste Pose::`C-V`
Add IK::`S-i`
Add Pose to Library::`S-L`
Paste Pose Flipped::`C-S-V`
Add Constraint::`C-S-C`

### Window General (most window types)

Toolbar::`T`
Properties bar::`N`
Maximise Area (but keep toolbar)::`C-Space`
Fullscreen Area::`C-M-Space`
Quad view::`C-M-Q`

#### Change Window Type (Under Cursor)

Assets::`S-F1`
Movie Clip::`S-F2`
Nodes::`S-F3`
Python Console::`S-F4`
3d Viewport::`S-F5`
Graph::`S-F6`
Properties::`S-F7`
Video Sequencer::`S-F8`
Outliner::`S-F9`
UV/Image::`S-F10`
Text::`S-F11`
Dope Sheet::`S-F12`

### Other

Open popup menu for last action (Adjust Last Operation)::`F9`

## More keybindings

![[./img/blender-infographic-SM-2500.png]]
_[Learn Blender with a poster infographic](https://www.giudansky.com/illustration/infographics/blender-map)_

---

![[./img/CGCookie-blender_hotkeys_4.1.pdf#page=2]]
_[Blender Hotkey Cheat Sheet](https://cgcookie.com/downloads/blender-hotkey-cheat-sheet)_

## Tutorials

- [ ] [Creating Realistic 3d Pencil model in Blender Tutorial](https://www.youtube.com/watch?v=dq7qUVHnN0M)

- [ ] [Tutorial: Quick Smooth Camera Movements in Blender - YouTube](https://www.youtube.com/watch?v=a7qyW1G350g)
- [ ] [Beginner Modelling Chair Tutorial - YouTube](https://www.youtube.com/playlist?list=PLjEaoINr3zgEL9UjPTLWQhLFAK7wVaRMR)
- [ ] [Blender Tutorial - Creating a Stormy Ocean - YouTube](https://www.youtube.com/watch?v=oysCSbhXYBo)
- [ ] [How To Render This Cinematic Shot With EEVEE - YouTube](https://www.youtube.com/watch?app=desktop&v=RB6Ytdfwy-0)
- [ ] [Create a Realistic Forest in 30 Minutes - YouTube](https://www.youtube.com/watch?v=72LPW4S8bns)

- [ ] [PRESS START: Your Simple First Blender Project](https://cgcookie.com/courses/press-start-your-simple-first-blender-project)
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
- [ ] [Clipping or Alpha Inheritance](https://www.youtube.com/watch?v=HeCs-VdpzdI)
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
- [x] [[Price-Donut_Tutorial_in_Blender]]
- [x] [[CG_Cookie-Blender_Basics]]

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

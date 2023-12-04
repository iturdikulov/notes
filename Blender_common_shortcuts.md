---
date: 2023-03-13
sr-due: 2024-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- computer_graphics
---

# Blender Common Shortcuts

Shortcuts for [[Blender]] which I use often.

## General (most window types)

Toggle left toolbar::`T`
Properties, right toolbar (useful to set dimensions, position, etc.)::`N`
Add Object/Node::`S-A`
Delete::`X` or `Delete` (single object deleting without confirmation)
Search for Function::`F3`

Initiate Move, move along axis
?
`G`, `X`, `Y`, `Z` move along axis or move using `MiddleMouse` hold with
snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`.

Scale::`S`, along axis - `X/Y/Z` or scale using `MiddleMouse` hold with
snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`

Rotate::`R`, along axis - `X/Y/Z` or rotate using `MiddleMouse` hold with
snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`

Trackball Rotate::`R, R`
Precise movement::`S-(*hold*)`
Incremental movement::`C-(*hold*)`

Duplicate verticies/mesh.
?
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
?
You can rename selected object by double-clicking on it in Scene collection. Or
select object and press F2.

## Navigation (3D viewport)

Orbit::`MMB`

Pan::`S-MMB`

Zoom In/Out::`Scroll` or `C-MMB`

Fly::`S-~`

## View (3D viewport)

## Numpad views (toggle)

Pie Menu::`~`
Focus::`.`
Isolate::`/`

Fast View Switch::`M-MMB (*drag*)`
Camera::`0`
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

## Object Mode (3D viewport)

Change Mode Pie Menu::`C-TAB`
Edit/Object mode toggle::`TAB`
Mirror::`C-M` *then* `X/Y/Z` (*or* `MMB` *(drag))*
Set Parent (to last selected)::`C-P`
Clear Parent::`M-P`
Toggle Snapping::`S-TAB`
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

## General Selection (most window types)

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

## Shading (3D viewport)

Shading Pie Menu::`Z`

Toggle X-Ray (to select through mesh)
?
`M-Z` or button in top right (2 squares).

## Pie Menus

Pivot point pie menu TODO: what is pivot?::`.`
Snap pie menu::`S-S`
Orientation pie menu::`,`

## Selection (Edit Mode)

Select Connected Mesh::`C-L`
Select Connected Mesh Under Cursor::`L`
Select Edge Loop::`M-LMB`
Select Edge Ring::`C-M-RMB`
Vertex Select Mode::`1`
Edge Select Mode::`2`
Face Select Mode::`3`
Mirror current selection::`C-S-M`
Grow/Shrink Selection TODO: need to fix my keyboard::`C-Num+`/ `C-Num-`
Edge Crease::`C-E`

## Curve Editing (Edit mode)

Add new handle::`E` *or* `C-RMB`
Change handle type::`V`
Delete but maintain connection::`C-X`
Close curve::`M-C`
Tilt, TODO: what is this?::`C-T`
Clear Tilt::`M-T`

## Modelling (Edit Mode)

Extrude::`e`
Inset, TODO: how its working?::`i`
Bevel::`C-B`
Bevel Vertices::`C-S-B`
Loop cut::`C-R`
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

## Texturing (Edit Mode)

TODO: need review
Unwrap::`U`
Mark Seam::`C-E`

## UV Editor

TODO: need review
Select Island::`L` (*under cursor*) or `C-L`
Stitch::`V`
Weld::`S-W`
Pin::`P`
Unpin::`M-P`
Select Pinned::`S-P`

## Image Editor (View)

Properties, Scopes, Slots and Metadata::`N`
View at 100%::`1 (Numpad)`
View to Fit::`S-Home`
Next Render Slot::`J`
Previous Render Slot::`M-J`
Select Render Slot::`1-8`
Save Image::`M-S`
Save Image As TODO: need compare with pdf cheatsheet::`S-M-S`

## Image Editor (Paint)

Create New Blank Image::`M-N`
Open Image::`M-O`
Brush Properties::`N`
Brush Size::`F`
Brush Strength::`S-F`
Sample Color::`S`
Flip Color::`X`

## Nodes (Materials / Compositor)

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

### Compositor

TODO: need review
Move backdrop::`M-MMB`
Zoom backdrop::`V / M-V`
Properties and performance::`N`

## Sculpting

Brush Selection::`S-Space`
Brush Size::`F`
Brush Strength::`S-F`
Brush Angle::`C-F`
Angle Control::`R`
Stroke Control::`E`
Mask (box)::`B`
Mask (brush)::`M`
Clear Mask::`M-M`
Invert Mask::`C-i`
Hide (box)::`H`

## Rendering

Render::`F12`
Render Animation::`C-F12`
Playback rendered animation::`C-F11`
Set Render Region, TODO: how it working?::`C-B`
Clear Render Region::`C-M-B`

## Animation General

Play/Pause Playback::`Space`
Reverse Play::`C-S-Space`
Scroll through frames::`M-Scroll`
Next/Previous Frame::`Left/Right arrow`
First/Last Frame::`S-Left/Right arrow`
Jump to Keyframe::`Up/Down arrow`
Add Keyframe on current frame::`i`
Delete Keyframe on current frame::`M-i`

### Animation (Timeline / Dopesheet / Graph Editor)

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

### Animation (Timeline / Dopesheet / Graph Editor) (cont.)

Bind Selected Camera to Selected Marker, TODO: what it do?::`C-B`
Select keyframes before/after current frame::`[/]`
Select all keyframes on current frame, TODO: what it do?::`C-K`

### Graph Editor

TODO: need review
Add Keyframe at Cursor::`C-RMB`
Properties and Modifiers::`N`
Lock Selected Channel::`TAB`

## Rigging (Armatures)

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

## Posing Mode

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

## Window General (most window types)

Toolbar::`T`
Properties bar::`N`
Maximise Area (but keep toolbar)::`C-Space`
Fullscreen Area::`C-M-Space`
Quad view::`C-M-Q`

### Change Window Type (Under Cursor)

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


## Other

Open popup menu for last action::`F9`

---

# Blender Beginner Donut Tutorial

You can select linked vertices by ==`Ctrl-L`==, it can help if you don't separate them and deselected vertices by accident.


`Hold Shift`::`Allow to drag/set value more precisely`

`Hold Control`::`Allow to drag/set value incrementally or enable snapping`

`Z`::`toggle render mode`

Probably better to place `subdivision modifier` on bottom of the stack (depends on the situation)

You can toggle snapping by ==`Shift-Tab`==.

To change world units need ? Scene Properties (properties sidebar) > Units >
Metric

After scaling object, need to apply scale ? C-A > Scale

You can change shading of object from ==context menu==

How to apply subdivision modifier (or any modifier) ? P > Modifiers Properties >
Add Modifier

How to move siblings points in edit mode ? You need to select point(s) enable
proportional editing (O) and move (G) To increase/decrease proportional editing
radius use mouse wheel

How to move points along axis in proportional editing mode ? Use alt + s to
shrink/fatten proportional editing radius

How select random points in edit mode ? Select > **S**elect Random

Orthographic mode basically means ? that you can't see perspective, only
orthographic view (no depth, objects same size regardless of distance)

https://docs.google.com/document/d/1zPBgZAdftWa6WVa7UIFUqW_7EcqOYE0X743RqFuJL3o/edit?usp=sharing

# Navigation+

3d viewport

camera

cube

lamp

adding object: add menu or +A

delete object (without confirmation)A - DEL

orbiting - scroll-wheel drag

move the view - shift + scroll-wheel drag

you can click on circles in axis control widget (top-right) to orbit or hold LMB on it and drag

zoom - scroll up/down

smooth zoom - ctrl + middle mouse drag 

you can change view-port shading in top right corner, layout mode 

You can move object by Gyzmo in move mode (left toolbar) and white circle around object. Or press G to grab and move your mouse.

To cancel move press ESC or RMB

To confirm press left click

scale - scale button on left side, or S key

rotate - rotate button or R key #

To move by axis, press axis key while moving (X, Y, Z).  Alternative drag MMB while moving to snap/move object to axis.

It also working with scaling 

# Render

Render working from point of view of camera

F12 or Render menu -&gt; Render Image

Save -&gt; ^s

## Camera

To enter the camera view mode, press button in right toolbar (toggle the camera view) or perss Num0 

To quickly set camera position

\- Select camera in Scene Collection (right menu)

- press N to open properties menu
- open view tab and check camera to view checkbox
- move it as needed
- uncheck camera to view 

    To set material, in properties window (right side), select material tab and press add new, and set base color

# Part 2

After adding new object, in bottom left corner will be temporary (until you not do any action) available object options, to reopen them press F9

You can quickly change object shading, by context menu (right click)

On method to smooth object, is add subdivision surface modifier in object properties (right menu) .

Subdivision surface split polygon to additional 4 polygons. 

Press tab to switch between object and edit mode

To move sibling vertices use proportional editing mode - O, or click on icon in top right. Change how much vertices affected (circle of influence size), use mouse scroll or use PgUP/PgDown.

You can select edge, by holding alt and click on edge itself.

# Part 3

Duplicate object by +d, cancel moving by ESC or RMB


You can select vertices in edit mode by drag LMB.

**Z-fighting**, also called **stitching** or **planefighting**, is a phenomenon in 3D rendering that occurs when two or more primitives have very similar distances to the camera. This would cause them to have near-similar or identical values in the z-buffer, which keeps track of depth. This then means that when a specific pixel is being rendered, it is ambiguous which one of the two primitives are drawn in that pixel because the z-buffer cannot distinguish precisely which one is farther from the other.

The _Solidify_ modifier takes the surface of any mesh and adds depth, thickness to it.

You can hide modifiers in edit (and other modes) by toggle visibility in modifier properties (on top after modifier name).

 You can toggle snapping by +tab or button in top right controls. Here various types of snapping: for example face project. Snapping working good if you have enough geometry (apply subdivision modifier for example). 

To apply modifier, press arrow button near modifier name and  click on apply.

You can extend selection in edit mode (for example edge) by ^+ and shrink by ^-.

Use H to hide selection and !H to show it.

+H will hide all.

Blender modifiers works from top to bottom. 

One useful properties of solidify modifier is Edge data.

To extrude, select  vertices (+LMB) and press E to start extrude. 

# Part 4

Shrink wrap modifier can help with snap vertices. Select target mesh, which vertices need to be snapped. Usually need to place this modifier above other ones.

## Sculpting

In sculpting mode you can quickly enable tools by hotkeys, for example inflate is I, draw is X, grab is G, mask M.

F + mouse move will resize brush. 

+F + mouse move will change strength.

If you have subdivision modifier, which not applied, sculpting still working on low-poly mesh, so usually you need to apply it. 

Subdivision modifier applying will use Viewport level.

Very handy option for mask is "Front Faces Only", which prevent painting it in opposite faces, you can find it in top toolbar, Brush dropdown. 

To erase mask, hold ^

To invert mask use ^i  

If you want to see only selected object use / hotkey (isolation mode). 

Mes filter tool can use to inflate/deflate not-masked faces.

You can smooth mask by find clicking on this item in Mask option (make edge of mask "spread").

To clear mask use !M or select option in menu.

To reduce "lumpiness" in model, you can use smooth tool. Because this brush is so essential, it’s always accessible by holding S-and sculpting.

---

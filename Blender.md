---
external:
  - https://www.blender.org/
created: 2023-03-04T00:00+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2025-11-01
sr-interval: 114
sr-ease: 204
---

# Blender

Free and open source [[3D_computer_graphics|3D]] creation suite. Free as in
freedom.

[[computer_graphics|Computer graphics]] software tool set used for creating
animated films, visual effects, [[art]], 3D-printed models, motion graphics,
interactive 3D applications, virtual reality, and, formerly, video
[[game|games]].

## General shortcuts

- Toggle left toolbar:<wbr class="f"> `t`
- Properties (right side), useful to set dimensions, position, etc.:<wbr class="f"> `n`
- Add new object:<wbr class="f"> `S-a`
- Delete:<wbr class="f"> `x` or `del` (single object deleting without confirmation)
- Search for function, mode aware:<wbr class="f"> `F3`
- Initiate move, move along axis:
  <br class="f">
  `g`; then `x`, `y`, `z` move along axis or move using `mmb` hold with snapping
  to axis. Along local axis (rotate object first) - `x,x`/`y,y`/`z,z`.
  Alternative drag `mmb` while moving to snap/move object to axis. You can move
  object by Gizmo (local) in move mode (left toolbar) and white circle around
  object. To cancel move press `esc` or `rmb`.
- Scale:
  <br class="f">
  `s`, along axis - `x/y/z` or scale using `mmb` hold with
  snapping to axis. Along local axis - `x,x`/`y,y`/`z,z`.
  Or scale button in left panel.
- Rotate
  <br class="f">
  `r`, along axis - `x/y/z` or rotate using `mmb` hold with
  snapping to axis. Along local axis - `X,X`/`Y,Y`/`Z,Z`. Or rotate button in left
  panel.
- Trackball Rotate:<wbr class="f"> `r, r`
- Precise movement
  <br class="f">
  `S-` (*hold*). Allow to drag/set value more precisely.
- Incremental movement
  <br class="f">
  `C-(*hold*)`. Allow to drag/set value incrementally or enable snapping.
- Duplicate vertices/mesh.
  <br class="f">
  `S-d`, or `Mesh -> Duplicate`. `lmb` to confirm, `esc` to cancel.
  When you duplicate vertices, you can press `p` to separate them into a new mesh.
- Duplicate Linked:<wbr class="f"> `M-d`

<!-- TODO: need to review -->

- Hide selection (geometry/vertices):<wbr class="f"> `h`
- Show All:<wbr class="f"> `M-h`
- Hide all Except Selected:<wbr class="f"> `S-h`
- Annotate:<wbr class="f"> `D (*hold*) + LMB (*drag*)`
- Erase Annotation:<wbr class="f"> `D (*hold*) + RMB (*drag*)`
- Open quick favorite's menu:<wbr class="f"> `q`
- Rename object
  <br class="f">
  You can rename selected object by double-clicking on it in outliner. Or select object and press F2.
- Shading Pie Menu
  <br class="f">
  `z`. You can also change/check current view-port shading in top right corner,
  layout mode
- Toggle X-Ray (to select through mesh)
  <br class="f">
  `M-z` or button in top right (2 squares).
- Pivot point pie menu TODO: what is pivot?:<wbr class="f"> `.`
- Snap pie menu:<wbr class="f"> `S-s`
- Orientation pie menu:<wbr class="f"> `,`
- Maximise Area (but keep toolbar):<wbr class="f"> `C-space`
- Fullscreen Area:<wbr class="f"> `C-M-space`
- Quad view:<wbr class="f"> `C-M-q`
- Open popup menu for last action (Adjust Last Operation):<wbr class="f"> `F9`

## Navigation shortcuts

- Orbit:<wbr class="f"> `mmb`
- Pan:<wbr class="f"> `S-mmb`
- Zoom In/Out:<wbr class="f"> `scroll` or `C-mmb`
- Smooth zoom:<wbr class="f"> `C-mmb` (*drag*)
- Fly:<wbr class="f"> `S-~`. `scroll` to change speed.

- Pie Menu:<wbr class="f"> `~`
- Focus:<wbr class="f"> `.`
- Isolate:<wbr class="f"> `/`

- Fast View Switch:<wbr class="f"> `M-MMB (*drag*)`
- Camera:<wbr class="f"> `0`. Or press button in right toolbar (toggle the camera view).
- Front:<wbr class="f"> `1`
- Rotate Down:<wbr class="f"> `2`
- Side:<wbr class="f"> `3`
- Rotate Left:<wbr class="f"> `4`
- Persp/Ortho:<wbr class="f"> `5`
- Rotate Right:<wbr class="f"> `6`
- Top:<wbr class="f"> `7`
- Rotate Up:<wbr class="f"> `8`
- Opposite:<wbr class="f"> `9`

- Show All Objects:<wbr class="f"> `home`
- Zoom to region:<wbr class="f"> `S-b`

Change Window type (under Cursor):

- Assets:<wbr class="f"> `S-F1`
- Movie Clip:<wbr class="f"> `S-F2`
- Nodes:<wbr class="f"> `S-F3`
- Python Console:<wbr class="f"> `S-F4`
- 3d Viewport:<wbr class="f"> `S-F5`
- Graph:<wbr class="f"> `S-F6`
- Properties:<wbr class="f"> `S-F7`
- Video Sequencer:<wbr class="f"> `S-F8`
- Outliner:<wbr class="f"> `S-F9`
- UV/Image:<wbr class="f"> `S-F10`
- Text:<wbr class="f"> `S-F11`
- Dope Sheet:<wbr class="f"> `S-F12`

## Object mode shortcuts

- Change Mode Pie Menu:<wbr class="f"> `C-tab`
- Edit/Object mode toggle:<wbr class="f"> `tab`
- Mirror:<wbr class="f"> `C-m` *then* `X/Y/Z` (*or* `mmb` *(drag))*
- Set Parent (to last selected):<wbr class="f"> `C-p`
- Clear Parent:<wbr class="f"> `M-p`
- Toggle Snapping:<wbr class="f"> `S-tab`, or button in top right controls.
- Clear Location:<wbr class="f"> `M-g`
- Clear Rotation:<wbr class="f"> `M-r`
- Clear Scale:<wbr class="f"> `M-s`
- Apply Menu - Location / Scale / Rotation:<wbr class="f"> `C-a`
- Join Selected Objects:<wbr class="f"> `C-j`
- Copy Attributes to New Objects TODO: what is this?:<wbr class="f"> `C-l`
- Add Subdivision level:<wbr class="f"> `C-0/1/2/3/4/5`
- Mask view to region / Clear mask:<wbr class="f"> `M-b`
- Center 3D cursor:<wbr class="f"> `S-c`
- Move active object to collection:<wbr class="f"> `m`
- Move Active Camera to view:<wbr class="f"> `C-M-numpad0`
- Set as Active Camera:<wbr class="f"> `C-numpad0`

## General selection shortcuts

- Select:<wbr class="f"> `lmb`
- Select All:<wbr class="f"> `a`
- Deselect All:<wbr class="f"> `M-a`
- Marquee Box Select:<wbr class="f"> `b` *or* `LMB (*drag*)`
- Circle Select:<wbr class="f"> `c`
- Lasso Select:<wbr class="f"> `C-rmb`
- Invert Selection:<wbr class="f"> `C-i`
- Select Linked:<wbr class="f"> `S-l`
- Select Similar:<wbr class="f"> `S-g`
- Select from many TODO: what is this?:<wbr class="f"> `M-lmb`

- Select Connected Mesh:<wbr class="f"> `C-l`, useful to restore selection.
- Select Connected Mesh Under Cursor:<wbr class="f"> `l`
- Select Edge Loop:<wbr class="f"> `M-lmb`
- Select Edge Ring:<wbr class="f"> `C-M-rmb`
- Vertex Select Mode:<wbr class="f"> `1`
- Edge Select Mode:<wbr class="f"> `2`
- Face Select Mode:<wbr class="f"> `3`
- Mirror current selection:<wbr class="f"> `C-S-m`
- Grow/Shrink Selection TODO: need to fix my keyboard:<wbr class="f"> `C-Num+`/ `C-nuM-`
- Edge Crease:<wbr class="f"> `C-e`
- Shrink/fatten:<wbr class="f"> `M-s`

## Edit mode shortcuts

Modelling:

- Extrude:<wbr class="f"> `e`, select at least few vertices, edges or faces.
- Inset, TODO: how its working?:<wbr class="f"> `i`
- Bevel:<wbr class="f"> `C-b`
- Bevel Vertices:<wbr class="f"> `C-S-b`
- Loop cut, this is context-sensitive operation:<wbr class="f"> `C-r`
- Vertex/Edge Slide:<wbr class="f"> `G,G`
- Knife:<wbr class="f"> `k`
- Fill Face:<wbr class="f"> `F`
- Shear:<wbr class="f"> `C-S-M-s`
- Bend:<wbr class="f"> `S-w`
- Split:<wbr class="f"> `y`
- Rip:<wbr class="f"> `v`
- Rip Fill:<wbr class="f"> `M-v`
- Merge:<wbr class="f"> `m`
- Recalculate Normals:<wbr class="f"> `S-n`
- Flip Normals: TODO: what it does?:<wbr class="f"> `C-S-n`
- Proportional Editing On/Off:<wbr class="f"> `o`
- Proportional Falloff Type:<wbr class="f"> `S-o`
- Separate to new object:<wbr class="f"> `p`

Curve Editing:

- Add new handle:<wbr class="f"> `e` *or* `C-rmb`
- Change handle type:<wbr class="f"> `v`
- Delete but maintain connection:<wbr class="f"> `C-x`
- Close curve:<wbr class="f"> `M-c`
- Tilt, TODO: what is this?:<wbr class="f"> `C-t`
- Clear Tilt:<wbr class="f"> `M-t`

Texturing:

- TODO: need review
- Unwrap:<wbr class="f"> `u`
- Mark Seam:<wbr class="f"> `C-e`

## UV Editor shortcuts

- TODO: need review
- Select Island:<wbr class="f"> `l` (*under cursor*) or `C-l`
- Stitch:<wbr class="f"> `v`
- Weld:<wbr class="f"> `S-w`
- Pin:<wbr class="f"> `p`
- Unpin:<wbr class="f"> `M-p`
- Select Pinned:<wbr class="f"> `S-p`

## Image editor shortcuts

View:

- Properties, Scopes, Slots and Metadata:<wbr class="f"> `n`
- View at 100%:<wbr class="f"> `1 (Numpad)`
- View to Fit:<wbr class="f"> `S-home`
- Next Render Slot:<wbr class="f"> `j`
- Previous Render Slot:<wbr class="f"> `M-j`
- Select Render Slot:<wbr class="f"> `1-8`
- Save Image:<wbr class="f"> `M-s`
- Save Image As TODO: need compare with pdf cheatsheet:<wbr class="f"> `S-M-s`

Paint:

- Create New Blank Image:<wbr class="f"> `M-n`
- Open Image:<wbr class="f"> `M-o`
- Brush Properties:<wbr class="f"> `n`
- Brush Size:<wbr class="f"> `F`
- Brush Strength:<wbr class="f"> `S-F`
- Sample Color:<wbr class="f"> `s`
- Flip Color:<wbr class="f"> `x`

## Nodes shortcuts

TODO: need review

- Cut Connection:<wbr class="f"> `C-rmb` (*drag*)
- Connect selected:<wbr class="f"> `F`
- Properties:<wbr class="f"> `n`
- Delete selected but maintain connection:<wbr class="f"> `C-x`
- Duplicate selected and maintain connection:<wbr class="f"> `C-S-d`
- Mute Selected:<wbr class="f"> `m`
- Group Selected:<wbr class="f"> `C-g`
- Ungroup Selected:<wbr class="f"> `C-M-g`
- Edit Group (Toggle):<wbr class="f"> `tab`
- Frame Selected Nodes:<wbr class="f"> `C-j`
- Show/Hide inactive node slots:<wbr class="f"> `C-h`

Compositor:

TODO: need review

- Move backdrop:<wbr class="f"> `M-mmb`
- Zoom backdrop:<wbr class="f"> `V / M-V`
- Properties and performance:<wbr class="f"> `n`

## Sculpting shortcuts

- Inflate:<wbr class="f"> `i`
- Draw:<wbr class="f"> `x`
- Grab:<wbr class="f"> `g`
- Brush Selection:<wbr class="f"> `S-space`
- Change Brush Size:<wbr class="f"> `F`
- Change Brush Strength:<wbr class="f"> `S-F`
- Brush Angle:<wbr class="f"> `C-F`
- Angle Control:<wbr class="f"> `r`
- Stroke Control:<wbr class="f"> `e`
- Mask (box):<wbr class="f"> `b`
- Mask (brush):<wbr class="f"> `m`
- Mask (brush) erase mode:<wbr class="f"> Hold `C-`, while you in mask mode (`b`).
- Clear Mask:<wbr class="f"> `M-m`
- Invert Mask:<wbr class="f"> `C-i`
- Hide (box):<wbr class="f"> `h`
- Toggle Isolate mode:<wbr class="f"> `/`
- Temporary toggle smooth tool:<wbr class="f"> `S-`

## Rendering and animation shortcuts

- Render:<wbr class="f"> `F12`
- Render Animation:<wbr class="f"> `C-F12`
- Playback rendered animation:<wbr class="f"> `C-F11`
- Set Render Region, TODO: how it working?:<wbr class="f"> `C-b`
- Clear Render Region:<wbr class="f"> `C-M-b`

Animation general:

- Play/Pause Playback:<wbr class="f"> `space`
- Reverse Play:<wbr class="f"> `C-S-space`
- Scroll through frames:<wbr class="f"> `M-scroll`
- Next/Previous Frame:<wbr class="f"> `Left/Right arrow`
- First/Last Frame:<wbr class="f"> `S-Left/Right arrow`
- Jump to Keyframe:<wbr class="f"> `Up/Down arrow`
- Add Keyframe on current frame:<wbr class="f"> `i`
- Delete Keyframe on current frame:<wbr class="f"> `M-i`

Timeline / Dopesheet

- Toggle Dopesheet:<wbr class="f"> `C-tab`
- Toggle Frames/Seconds:<wbr class="f"> `C-t`
- Zoom to fit active keyframes:<wbr class="f"> `home` *or* `. (Numpad)`
- Set Keyframe Interpolation:<wbr class="f"> `t`
- Set Keyframe Handle Type:<wbr class="f"> `v`
- Set Keyframe Extrapolation:<wbr class="f"> `S-e`
- Mirror Keyframes:<wbr class="f"> `C-m`
- Set Preview Range:<wbr class="f"> `p` *then* `lmb` (*drag*)
- Auto set preview range:<wbr class="f"> `C-M-p`
- Clear Preview:<wbr class="f"> `M-p`
- Marker:<wbr class="f"> `m`
- Rename Marker TODO: not working?:<wbr class="f"> `C-m`

- Bind Selected Camera to Selected Marker, TODO: what it do?:<wbr class="f"> `C-b`
- Select keyframes before/after current frame:<wbr class="f"> `[/]`
- Select all keyframes on current frame, TODO: what it do?:<wbr class="f"> `C-k`

Graph Editor:

- TODO: need review
- Add Keyframe at Cursor:<wbr class="f"> `C-rmb`
- Properties and Modifiers:<wbr class="f"> `n`
- Lock Selected Channel:<wbr class="f"> `tab`

## Rigging (armatures)

- Add new bone:<wbr class="f"> `e`
- Duplicate bone:<wbr class="f"> `S-d`
- Bone Settings:<wbr class="f"> `S-w`
- Roll:<wbr class="f"> `C-r`
- Clear Roll:<wbr class="f"> `M-r`
- Recalculate Roll:<wbr class="f"> `S-n`
- Align bone:<wbr class="f"> `C-M-a`
- Switch bone direction:<wbr class="f"> `M-F`
- Dissolve Bone:<wbr class="f"> `C-x`
- Dissolve bones:<wbr class="f"> `C-x`
- Split:<wbr class="f"> `y`
- Separate:<wbr class="f"> `p`
- Scroll Hierarchy:<wbr class="f"> `]` *and* `[`

Posing Mode:

- TODO: need review

- Add Keyframe:<wbr class="f"> `i`
- Clear Location:<wbr class="f"> `M-g`
- Clear Rotation:<wbr class="f"> `M-r`
- Clear Scale:<wbr class="f"> `M-s`
- Apply Pose:<wbr class="f"> `C-a`
- Propagate Pose:<wbr class="f"> `M-p`
- Push Pose from Breakdown:<wbr class="f"> `C-e`
- Relax Pose to Breakdown:<wbr class="f"> `M-e`
- Pose Breakdowner:<wbr class="f"> `S-e`
- Copy Pose:<wbr class="f"> `C-c`
- Paste Pose:<wbr class="f"> `C-v`
- Add IK:<wbr class="f"> `S-i`
- Add Pose to Library:<wbr class="f"> `S-l`
- Paste Pose Flipped:<wbr class="f"> `C-S-v`
- Add Constraint:<wbr class="f"> `C-S-c`

## More keybindings

![[./img/blender-infographiC-SM-2500.png]]
_[Learn Blender with a poster infographic](https://www.giudansky.com/illustration/infographics/blender-map)_

---

![[img/ref-CGCookie-blender_hotkeys_4.1.pdf#page=2]]
_[Blender Hotkey Cheat Sheet](https://cgcookie.com/downloads/blender-hotkey-cheat-sheet)_

## Learning path

- [ ] [Making 3D console](https://cgcookie.com/courses/press-start-your-simple-first-blender-project)
- [ ] [Blender Panel to import Google Earth Studio, KML Routes, and 3D Masking](https://github.com/imagiscope/EarthStudioTools)

- Jan - Blender Secrets
- Baechler and Greer-Blender 3D by Example
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

- [ ] [How to Create 3D Terrain with Google Maps and Blender! - YouTube](https://www.youtube.com/watch?v=Mj7Z1P2hUWk )
- [ ] [Creating Realistic 3d Pencil model in Blender Tutorial](https://www.youtube.com/watch?v=dq7qUVHnN0M)
- [ ] [Part 1: Ball Tube Slide - Satisfying Animation Loop (Blender Tutorial) - YouTube](https://www.youtube.com/watch?v=sWPXIgIL1dM)
- [ ] [Blender Tutorial: Hologram - YouTube](https://www.youtube.com/watch?v=0OsgS2JpM8k)

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
- [x] [[Price-Donut_tutorial_in_Blender]]
- [x] [[CG_Cookie-Blender_basics]]

## Tools

- [Scripts to import data into blender for use with testing/benchmarking renderers](https://github.com/aclysma/rendering-demo-scenes)


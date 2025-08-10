---
author: Jonathan Lampel
tags:
  - blog
  - JEWELRY
  - literature
created: 2023-12-12T00:00+03:00
external:
  - https://cgcookie.com/courses/blender-basics-an-introduction-to-blender-4-x
directory: ~/Computer/graphics/CG_Cookie-Blender_Basics
sr-due: 2025-07-22
sr-interval: 1
sr-ease: 130
---

# An introduction to Blender 4.x

At the end of this course, you will be able to comfortably navigate Blender 3D and have a solid understanding of what's possible.

And I think more important, you can understand basic concepts of 3D graphics and how to work with it.

## 1 Intro to Blender 4.0

Interface is too small, how I can adjust it?
<br class="f">
You can adjust resolution scale for UI in `Blender Preferences` → `Interface` → `UI`. <!--SR:!2024-01-31,10,270-->

## 2: Navigating the 3D View

How to zoom in/out?
<br class="f">
You zoom-in/zoom-out by using `Magnifier` icon in top right of 3D view and move by hand icon or just use mouse wheel (C-wheel for smooth zoom).

What is basic concept of Orthographic view (perspective difference)?
<br class="f">
[[orthographic_projection|Orthographic]] view remove our perspective distortion. <!--SR:!2024-01-22,1,210-->

How I can find hotkey for some action?
<br class="f">
If you are not able to remember hotkey, try to check it in panels controls (hover) or context menus. You can also use `F3` key to search for hotkey.

How to quickly navigate in 3D view (top, bottom, left, front, etc.)?
<br class="f">
You can use `NUM1-9` keys. But using `Pie menu` for navigation (` `` `) I think more suitable than `Num` keys (on my keyboard at least).

You can enable 3 keys Mouse emulation (`Settings` → `Input`), which might be useful for tablet and with this mode some additional key bindings will aviable:

1. `M-LMB` for orbiting
2. `S-M-LMB` for pan navigate
3. `C-A-LMB` for zoom

## 3: Selecting Objects

To deselect everything click on free space, or press ==`M-A`==.

How to select multiple individual objects (outliner and in the 3D view)?
<br class="f">
In the outliner you can hold `C-` key to select individual objects. In blender to select multiple items, hold `S-` key and click using `LMB`. <!--SR:!2024-01-25,4,230-->

How to deselect individual objects (outliner and in the 3D view)?
<br class="f">
To deselect in the 3D view use `S-` and click `LMB` 2 times, in the outliner, use `C-` key to deselect individual items.

How to determine active object in 3D view?
<br class="f">
Blender mark active object using light orange glow (border).

How to blender mark hidden toolbars in UI?
<br class="f">
You can expose additional tools from toolbar, if here small triangle (on left sidebar for example) and you can extend them by resizing to right.

Can you describe how rotation works (mnemonic/IRL example) per axis (X is front, Y left/right, Z top/bottom)?
<br class="f">
X - is sort of cartwheel exercise 🤸, Y - is front/backflip Z - is pirouetting

## 4: Transforming Objects and Adjusting Transformations

Little squares in Gizmo move tool move object in ==2 axes (plane)==. <!--SR:!2024-01-28,7,250-->

White circle in rotate tool allow you to rotate object at given degree ==`C-`,`C-S-`== keys allow you to work with fixed values of degree. <!--SR:!2024-02-04,14,250-->

`Scale cage tool` acts like ==`transform tool`== in raster editors, but in 3D space.

In blender when you rotate object, arm is matter, long arm ==slow== rotation, short arm fast rotation. <!--SR:!2024-02-03,13,250-->

To reset values (some number in input), hover on it and press ==`BCK`==. <!--SR:!2024-01-29,8,250-->

You can use math in input values, for example $2+2$ or $2*2$.

How to transform object with more precision or determine values?
<br class="f">
You can transform objects using precision (`S-` key) or determine values using `C-` or `C-S-` keys. <!--SR:!2024-01-25,4,230-->

You can clear an object transformation (move, rotate, scale) by ==`M-G, M-R, M-S`== keys. <!--SR:!2024-01-25,4,230-->

## 5: Adding, Deleting, and the 3D Cursor

Is context menu and object deletion aviable in outliner?
<br class="f">
In outliner deletion and context menus also works.

How to quickly snap selection or cursor (grid, world origin, etc.)?
<br class="f">
You can locate 3D cursor from snap menu (`Object` → `Snap` → `Cursor to`). You can also snap objects in same manner. Or use `S-S` shortcut. Or you can use new snapping `G` → `B` → `snap 1,2` ...

How to quickly add mesh primitives (cube, cylinder, etc.) and snap in same time?
<br class="f">
Add mesh tools (cube, cylinder, etc.) from left sidebar is useful to quickly generate meshes and snap them to geometry automatically.

## 6: Local Space and Parenting

How transformation works in blender, is there any specific order?
<br class="f">
In blender transformation has priorities, for example rotation is calculated first and then scale.

To change current transformation orientation, use ==`,`== key.

You can parent objects by moving them in outliner with ==`S-`== key from child to parent. And you can clear parent hierarchy by moving them with `S-` key in outliner, from parent to outside (clear space).

By default, object origin reference point is ==world origin==. But you can change this by parenting, when you parent child to parent, reference point will be parent origin.

## 7: Editing Object Data

How to open object data in outliner?
<br class="f">
You can click on object icon or object data icon in outliner and this will open associated tab in properties.

Relationship between object and object Data?
<br class="f">
Object is sort of container, which can store other objects and object data. You can also change objects data from one to another one. Also object has own properties and object data (data block) has own properties.

## 8: Edit Mode and Object Origins

Does vertices and edges have size?
<br class="f">
Vertices haven't size in blender and edges are infinity thin.

If I remove all geometry from object, origin will be still present (visualized as orange dot, usually in the center of object)?
<br class="f">
Each object has origin, even if you remove all geometry this origin will be still present.

How to add append geometry to object?
<br class="f">
You can add additional geometry in edit mode. `S-A` → select something to add.

You can select specific object, which added in edit mode (for example multiple cubes), by selecting part of mesh and select ==linked (`C-L`)==. Then you can separate this object by `P` key and join back (child to parent) by `C-J` key. <!--SR:!2024-01-22,1,229-->

How to set origin to geometry center?
<br class="f">
Use context menu: `Set Origin` → `Origin to Geometry` (or `Origin to Center of Mass`).

How to transform only object origin?
<br class="f">
Transform tools support additional options (top right corner). For example: `Options` → `Affect Only` → `Origins`. `Only locations` useful when you select two objects and scale for example (object not scaled, changed only locations). `Parents only`, transform only parent object.

To quickly change current mode for object, you can use PIE menu - ==`C-TAB`==. In keymap settings you can set only `TAB` key for this menu. <!--SR:!2024-01-23,2,249-->

You usually need to model object in edit mode, but rotate it in ==object mode==, to keep its local orientation.

## 9: Duplicate and Instance Objects

How to duplicate object and place it in same place?
<br class="f">
After duplication of object (`S-D`) you can instantly move it. To keep it in exact same place, use `ESC` key (cancel move operation). 

Duplicate linked (`M-D` instead `S-D`) create linked copy, it duplicates object but not their ==data==, and move them. Linked instances much more effective in terms of memory usage and rendering. And it's working for various objects: Light, Geometry, Camera, etc.

## 10: Pivot Points, Snapping, and Proportional Editing

How to change pivot point?
<br class="f">
You can change transform pivot point (center of the header section), for example rotate around 3D cursor, or bounding box center, or around active object, or around median point.
TODO: Median point in blender.

How to change grid size?
<br class="f">
You can change grid scale in `Show Overlays` menu (top right), this is useful for snapping for example. You can also change scene units, which also affect to grid and objects (for example location)! (`Scene tab in Properties` → `Unit scale`).

How to quickly set object dimensions to 1 meter, 1 km, 1 cm for example (without calculation yourself)?
<br class="f">
Blender support unit prefixes in values, for example 1 mm, 1 cm, 1 m, 1 km, etc. If you type 1 km in some input (`Transform panel` for example) it will be automatically converted to meters.

You can enable `Absolute Grid Snap` in snapping settings, to snap object by ==pivot center== all time, no matter what initial position was. TODO: not clear.

Which snapping modes are available?
<br class="f">
You can use different modes of snapping: `vertex` (snap to the nearest vertex), `edge`, `face` (you can also auto-rotate snapping object to face, with `Align rotation` to `Target option`). And you can also snap by specific axe (X, Y, Z), this useful in vertex snapping mode for example to snap near vertices.

`Proportion editing` allow you to edit multiple vertices or objects, which are in some radius from active vertex/object. You can change radius by mouse wheel or ==`f` / `F`== keys. You can also use different fallow-of types (smooth, sphere, sharp, linear, etc.).

Moving 3D cursor with holding ==`S-`== and then `C-` and `RMB` will snap it to grid or other snapping mode (useful to snap per vertices for example).

You can select through objects by some path (multiple objects, first, second, etc.), by ==`S-LMB`== keys.

How to adjust wireframe shading?
<br class="f">
You can adjust wireframe (and any other) shading in dropdown menu, for example x-ray transparency, background color, etc.

How to quickly hide all UI elements?
<br class="f">
To see plain scene (without UI), you can just disable overlays and gizmo (top right menu).

Can shading PIE menu be customized?
<br class="f">
You can add extra shading pie (Z) menu items in keymap settings.

You can hide/show multiple objects in outliner, by holding and dragging ==`LMB`== key on eye icon.

I can't see my object in viewport, and can't enable visibility in outliner, what I can do?
<br class="f">
Outliner has additional `Restriction Toggles` (Filter icon), if you not see some object which must be visible, try to enable `Disable in Viewport` icon in `Filter` → `Restriction toggles` items.

How to hide collection completely and make it non-selectable?
<br class="f">
You can hide entire collection from all modes and disable selecting items from it by `Excluded from View layer` (checkbox) toggle in Outliner.

How to place object in multiple collections?
<br class="f">
To place objects to multiple collections use Link to Collection (`S-M`).

How to delete collection and objects in it?
<br class="f">
You delete collection and objects in it by context menu (`RMB` on collection) and `Delete Hierarchy`.

How to select all objects in collection?
<br class="f">
You can select all objects in collection by `RMB` on collection and click on `Select Objects`.

You can group multiple objects by Empty object and parenting ==(`C-P`)==, useful when you need to transform group of items and visualize selection of them in viewport.

TODO: note backface culling (can be enabled in shading options).

Can shade smooth be applied to individual faces?
<br class="f">
Yes, shade smooth can be applied to individual faces, select face in face mode (3) and then apply it from context menu. <!--SR:!2024-01-24,2,249-->

How to set angle for shade smooth?
<br class="f">
Apply `Shade Auto Smooth`, and then you can change shade smooth angle in operations menu (appear in bottom left or F9). Shade smooth by Angle very useful to smooth for example cylinder with angle of $30\degree$.

How to mark sharp edges?
<br class="f">
You can mark specific edge as sharp, select it, `RMB` and `Mark Sharp`.

How to flip normals?
<br class="f">
You can flip normal by selecting it and press `M-N`, then `flip`.

## 13: The Extrude, Inset, and Knife Tools

Extrusion face in blender means?
<br class="f">
Extrusion face (E) - create copy of face, move it and attach back to original face, original face will be deleted.

How to cancel active operation?
<br class="f">
To really cancel some action, like extrusion operation press `ESC` key and then `C-Z` to undo (if required).

What difference between `Extrude Faces` and `Extrude Mainfold`?
<br class="f">
`Extrude Mainfold` tool - attempt to extrude face and "trying" not create additional faces.

> This tool is very similar to `Extrude Faces` but enables Dissolve Orthogonal Edges by default. This causes the tool to automatically split and remove adjacent faces when extruding inward

What do Extrude along normals mode (`C-F` -> ...)?
<br class="f">
`Extrude along normals` - extrude face along its normal vector (check also `Offset Even` option), effect usually visible with multiple faces.

`Knife tool` - to confirm cut press ==`Enter`==.

Knife tool - `A` toggle ==angle constrain==.

Knife tool - `S` toggle ==distance measurement==.

Knife tool - `C` toggle ==cut through===.

How create multiple cuts with knife tool?
<br class="f">
To create multiple cuts, press `RMB` when you want to finish cut and start new one.

To cut geometry along a plane use ==`Bisect`== tool (in Knife submenu), but select first all geometry.

How to quickly select extrusion mode?
<br class="f">
`M-E` open extrude menu, which allow you to extrude along normals, individual faces, etc.

## 14 - Bevel and Edge Loops

You can use bevel tool ==(`C-B`)== on edges and vertices (`V` to toggle, `C-S-B` to start with vertices). Good shape to training is box.

You can adjust many bevel parameters (operations menu), for example you can create custom `Profile Type`, which allow you to create ==custom bevel shape==.

Bevel looks weird in some specific shape, how to fix it?
<br class="f">
Usually before you bevel object, you need to apply scale (`C-A`).

When you use Loop-Cut (`C-R`) you can hold `LMB` to ==slide on edge==.

Before loop cut you can adjust segments amount using ==mouse scroll==.

To move edge quickly and regardless object rotation use `Edge slide` tool.

How to select edge/face loop?
<br class="f">
`M-LMB` and `C-M-LMB` can select edge/face loop (use it in different select modes).

Loop cut can't go through face with ==5+ edges (ngon's)== and through triangles.

## 15 - Subdivide, Fill, and Merge

How to subdivide Edges?
<br class="f">
To subdivide Edges, `Top Menu` → `Edge` → `Subdivide` (split edges/faces in half), or `RMB` → `Subdivide`. Sometimes it's can replace loop cut, since it allow you to subdivide edges more precisely and solve ngon/triangle loop cut problem (you can select path to subdivide).

To subdivide `Edge Ring`, go to `Edge` and select ==`Subdivide Edge Ring`==.

Is it possible to subdivide ngon's?
<br class="f">
You can't subdivide ngon's, but you can use knife tool to cut it.

How to extrude to cursor?
<br class="f">
You can extrude to cursor from many tools, hold `C-` and press `RMB`, this is useful to create vertex in specific place (Edit mode, vertex mode).

You can create edge (and face too!) from just 2 vertices by selecting them and press ==`F`== key (`Vertex` → `New Edge/Face from Vertices`). This is not Knife tool, it's just creating edge between 2 vertices or faces, etc.

How to fill face?
<br class="f">
`M-F` - fill face (not same as `F`), it will fill face with triangles (use `Face` → `Grid fill` to will with quads).

To join vertices in Blender, select two vertices and press ==`J`==, joining vertices will slice through any geometry between the two selected vertices to create a direct path through any intersecting geometry.

How to merge vertices if they are placed in same location?
<br class="f">
To use auto-merge vertices moved to same location, enable it in options menu (top right) or control button (also top right) and usually you need to enable snapping by vertex.

To create some form from edge loops (for example tunnel), select edges, then `Edge` menu → ==`Bridge Edge Loops`==.

## 16 - Object Modifiers

How to add bevel modifier?
<br class="f">
`Modifiers` → `Add Modifier` → `Generate` → `Bevel`.

How to hide displaying modifier in `Edit` mode?
<br class="f">
You can hide displaying modifier in `Edit` mode by clicking on icon in right of modifier name.

You can add bevel weight (`Edge` → `Add bevel weight`) to edges and use it in bevel modifier to bevel only ==edges with specific weight==.

If your bevel modifier not working (usually when you add some loop-cut), check `Geometry` → ==`Clamp Overlap`==.

What is `Array modifier`?
<br class="f">
`Array modifier` create copies of shape with some offset. And here multiple options to control these copies.

Mirror modifier mirror object by some axis, and it's working from object ==origin==.

You can enable mesh symmetry in edit mode (top right), which working for ==moving==, but it's not working with adding and removing geometry. Usually mirror modifier is better.

How to apply mirror modifier properly (for some complex geometry)?
<br class="f">
You can cut half of geometry, apply mirror modifier (enable clipping optionally) and then transformations will be applied to both sides.

How to quickly find element in menu?
<br class="f">
You can instantly type something in menus, to quickly find element.

## 17 - Editors and Windows

You can temporarily hide toolbar by ==`T`== key.

==View== menu can be used to quickly show/hide required panels.

Blender hotkeys working on ==active== panel/editor (mouse hover on which one). For example, you can maximize CURRENT editor by `C-space` key.

To toggle `4 view` mode, use ==`C-ALT-Q`== key combination.

You can zoom current editor by `C-MMB` hotkey.

You create new window (to place on second monitor for example) from current editor, `View` (also aviable in Context Menu) → `Area` → `Duplicate Area` into New Window. Or use ==`S-LMB`== with dragging from corner of current editor.

How to configure tool only for specific workspace?
<br class="f">
You can adjust current tool mode per current workspace from `Workspace` tab in `Tool` options (N → Tool → Workspace for example).

How to permanently save current settings?
<br class="f">
`File` → `Defaults` → `Save Startup File` can help you to permanent save current settings (tools, workspaces, etc.) into startup file or reset all of them.

## 18 - Working With Blend Files

How to ignore UI settings when opening blend file?
<br class="f">
You can use default UI when opening Blend file (yes they saved in blend files), in Open dialog click on Gear icon (top-right) and uncheck Load UI.

How to open previous state of blend file?
<br class="f">
You can open autosave file from File → Recover → Autosave window. Enable it in Settings → Save & Load settings.

Fastest method to move objects between blend files?
<br class="f">
Blender support Copy-Paste between same versions (or same major versions), you can use `C-C` and `C-V` between window instances. Blender also supporting appending blend files (copy) or linking (reference) objects.

How to overwrite linked objects?
<br class="f">
Linked objects properties can be overwritten, to overwrite: `Menu` → `Object` → `Library` → `Make`.

How to unlink objects?
<br class="f">
You can unlink objects, from `Object` → `Relations` → `Make Local` → `All` or any other.

How to show textures in solid shading mode?
<br class="f">
Solid shading mode support textures, check top right menu (shading menu).

How blender store textures?
<br class="f">
Blender (by default) not storing textures in blend files, so be careful. If you move texture somewhere, blender don't track this changes, and then you need to manually relink texture. But you can pack this texture into blend file (File → External Data → Pack Resources).

## 19 - Cameras and Rendering

How to change active camera?
<br class="f">
Render is happens from current active camera (Black triangle on top). You can change active camera in scene settings (Properties panel → Scene tab). Or use `C+NUM0` keybinding.

Proper way to rotate camera?
<br class="f">
You usually need to rotate camera on Z-axis (`R` → `Z`). Or better rotate/transform from local camera orientation (`R` → `X,Y` and `G-Z`)

I see weird artifacts in viewport (Z-fighting), how to fix it?
<br class="f">
Clipping affect to `Z-fighting`, try to change it (Properties `N` menu > `View` tab) if you see weird artifacts.

Is possible render viewport?
<br class="f">
You can render viewport from `View` → `Viewport Render Image`.

Which render engine is used in material preview?
<br class="f">
Material shading mode use EEVEE render.

How to render image with transparency?
<br class="f">
To render image with transparency go to `Render` settings tab → `Film` and enable `Transparent`.

## 20 - Materials and Lighting

Is possible quickly transfer material/colors between objects?
<br class="f">
You can drag & drop colors/materials between material properties.

How to change material representation in viewport?
<br class="f">
You can adjust viewport material in `Viewport Display` tab of `Material` properties.

Can I skip entering zero in input values?
<br class="f">
Yes, you can input values without zero, for example `0.5` can be typed as `.5`.

Yellow dot in `Color` (on left) property usually indicate that you can add some ==node== to this property.

What is alternative to Sky texture?
<br class="f">
Alternative to Sky texture is Environment texture (HDR). Is used to light your scene using an environment map image file as a texture. NOTE: disable transparency in render settings, if you use Environment Texture.

How to rotate HDR texture?
<br class="f">
To rotate HDR texture change `Vector input` (Directions of texture). In `Surface` tab to `Vector Mapping`, then In second `Vector` input set `Texture Coordinates` to `Generated` and adjust required properties.

Use ==`C-M-NUM0`= to snap camera to view (POV to camera).

How to make shadow more soft when using Sunlight type?
<br class="f">
To make shadow more soft, change radius in light properties, or you can use circle control (aviable for selected light source) in viewport.

Which base parameters are control Sunlight type?
<br class="f">
Position is no matter, only rotation and point location is matter.

## 21 - Intro to 3D Animation

How to quickly jump to specific frame?
<br class="f">
You can click on frames number above animation timeline to jump to specific frame.

How to create keyframe animation? (very basic)
<br class="f">
When you create animation, first you select WHEN it starts and then WHEN it finishes. So you need at least 2 keyframes. If you have only 1 keyframe animation starts and will continue forever. You need to change properties before you insert keyframe.

Which visual marks on properties indicate keyframe animation?
<br class="f">
Keyframe animation have visual marks in object properties, yellow - we on some keyframe, green - we are in interpolation between keyframes, orange - we changed some property, and it's not key framed.

How to insert keyframe animation for specific property?
<br class="f">
You can insert keyframes in properties, hover on property and press `I` key.

How to access animation channels from animation timeline?
<br class="f">
You can open channels menu in animation timeline, click on small arrow on left.

How to delete not required keyframe animation properties (for example `x`,`y` location transform)?
<br class="f">
You can delete not required properties from channels menu. And then you are able to change them without key framing.

To quickly toggle `Graph Editor`, press ==`C-TAB`== in any animation mode panel.

To find current frame (zoom & navigate) in graph editor timeline press ==`NUM.`==.

How to quickly add some linear, simple keyframes (way to automate)?
<br class="f">
You can enable auto-keyframing (record button in top bar), to automatically add keyframes when you change properties.

How to move keyframes in Timeline?
<br class="f">
You can move keyframes in Timeline by selecting it and use `G` → `Drag &
Drop`.

## 22 - 2D Animation with Grease Pencil

How to access grease pencil mode?
<br class="f">
You can add `Grease Pencil` object from Add menu (`S-A`), and it's 3D object, and then you can work with it in 2D mode. It allows you to go into draw mode if `Greace Pencil` object selected.

How to change brush in grease pencil mode?
<br class="f">
You can change brush in top left brush control.

How to draw on surface in grease pencil mode?
<br class="f">
You can change draw stroke object origin to face (and tune offset) to draw directly on surface.

Is layering supported in grease pencil?
<br class="f">
Grease pencil support layers, you can add them from top right menu or in `Data` tab in `Properties`. And you can animate each layer separately.

How to make object more stylized for cartoon (material surface type)?
<br class="f">
You can use `Emission Surface` in Material, it will make object more stylized for cartoon.

Can you use materials in grease pencil?
<br class="f">
Yes, Grace pencil object can have materials.

How to disable lighting for grease pencil object?
<br class="f">
Grace pencil objects react to lighting, you can disable this behavior in `Layer` properties → `Turn off Lights`.

How to use raster editors like colors in rendering?
<br class="f">
You can use `Standard` view transform (Rendering → Color Management) to make colors more like in raster editors.

How make grease pencil object more natural, which modifiers can be used?
<br class="f">
You can add `Noise` modifier to grease pencil object to make it more natural. For example these parameters can be used:

- Position: 0.9
- Thickness: 0.5
- Noise scale: 0.2

How to replicate hand-drawn animation (simple method using some modifier)?
<br class="f">
You can apply `Build` modifier to grease pencil object to animate for example how it was drawn (check Timing → Natural Drawing Speed).

## 23 - Intro to Sculpting

To swap direction in sculpting mode, use ==`C-`== key.

To make crease use ==`Draw sharp`== tool (`Space`, `1`).

==`Clay`== tool used to build natural forms (`Space`, `2`).

==`Clay Strips`== used to quickly add volume (`Space`, `3`).

==`Flatten` tool (`Space`, `6`)== - contrast surfaces by pulling and pushing them towards (or away from) a defined medium height.

Similar to the Flatten brush, but only pushes surfaces downward to the medium height?
<br class="f">
`Scrape` (`S-T`)

Grab, like proportion edit, what it does?
<br class="f">
Drag geometry across the screen, following the cursor. Grab only moves the vertices that are under the brush radius at the start of the stroke. This is an essential sculpting brush to be used frequently to build shapes and adjust proportions.

This tool used to simulate realistic deformations such as grabbing or twisting of Elastic objects. For example, this tool works great for modeling the shape of organic objects such as humans or animals. When pressing `C-`, the brush deforms vertices along the normal of the active vertex.
<br class="f">
Elastic Deform, use big radius (more than object) if you want squeeze object.

This brush simulates cloth physics on the mesh under the brush cursor. There are various deformation types and settings to customize the brush.
<br class="f">
Cloth tool.

To see wireframe overlay in object mode, enable it in ==`Overlay
Options`==.

To alter mesh topology in sculpting (add new topology when you use some tool), enable ==`Dyntopo`== (top right).

You can optimize mesh after sculpting by using ==Remesh==, `C-R` (top right), first turn off `Dyntopo`.

In sculpting their own Subdivision Modifier type - ==`Multiresolution`==. You can add it from Modifier tab in Sculpting mode (or just press `C-[Number]`). It allows you work on multiple levels of detail. You can change for example lower resolution detail and then apply it to higher resolution levels. To add more levels of detail, use Subdivide button in modifier settings.

When you **navigate** with `Multiresolution`, by default enabled ==`Show
Low Resolution`== while navigating option (top right → options). You can disable it to see high resolution mesh all time.

How to avoid lumps in sculpting?
<br class="f">
To avoid lumps, prefer to work with low-res mesh and then add more details.

## 24 - Next Steps

Learn basics, before you dive into some specific area.

## External links

- [ ] [Big Idea: Digital Tablets](https://cgcookie.com/posts/big-idea-digital-tablets?utm_source=youtube&utm_campaign=BASICS%204.0%20YT&utm_medium=video&utm_content=Lesson24)
- [ ] [PRESS START: Your Simple First Blender Project](https://cgcookie.com/courses/press-start-your-simple-first-blender-project)
- [ ] [TRACK: The Fundamentals to become a skilled Blender artist](https://cgcookie.com/playlists/15-track-the-fundamentals-to-become-a-skilled-blender-artist?utm_source=youtube&utm_campaign=BASICS%204.0%20YT&utm_medium=video&utm_content=Lesson24)
- [Hotkeys](https://d1tq3fcx54x7ou.cloudfront.net/uploads/store/tenant_161/attachment/2107/file/e3e8067f4de47536246c8439f242ebc5.pdf)
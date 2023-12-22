---
author: Jonathan Lampel
tags:
- inbox
- research
- computer_graphics
date: 2023-12-12
external:
- https://cgcookie.com/courses/blender-basics-an-introduction-to-blender-4-x
directory: ~/Computer/graphics/CG_Cookie-Blender_Basics
---

# An introduction to Blender 4.x

At the end of this course, you will be able to comfortably navigate Blender
3D and have a solid understanding of what's possible.

And I think more important, you can understand basic concepts of 3D
graphics and how to work with it.

# 1 Intro to Blender 4.0

Interface is too small, how I can adjust it?
?
You can adjust resolution scale for UI in `Blender Preferences` → `UI`.
<!--SR:!2023-12-24,4,270-->

# 2: Navigating the 3D View

How to zoom in/out?
?
You zoom-in/zoom-out by using `Magnifier` icon in top right of 3D view and
move by hand icon or just use mouse wheel.

What is basic concept of Orthographic view?
?
[[Orthographic_projection|Orthographic]] view remove our perspective
distortion.
<!--SR:!2023-12-21,1,230-->

How I can find hotkey for some action?
?
If you are not able to remember hotkey, try to check it in panels controls
(hover) or context menus. You can also use `F3` key to search for hotkey.

How to quickly navigate in 3D view (top, bottom, left, front, etc)?
?
You can use `NUM1-9` keys. But using `Pie menu` for navigation (`) I
think more suitable than `Num` keys (on my keyboard at least).

You can enable 3 keys Mouse emulation (`Settings` → `Input`), which might be
useful for tablet and with this mode some additional keybindings will
aviable:
1. `M-LMB` for orbiting
2. `S-M-LMB` for pan navigate
3. `C-A-LMB` for zoom

# 3: Selecting Objects

To deselect everything click on free space, or press ==`M-A`==.

How to select multiple individual objects (outliner and in the 3D view)?
?
In the outliner you can hold `C-` key to select individual objects.
In blender to select multiple items, hold `S-` key and click using `LMB`.
<!--SR:!2023-12-23,3,250-->

How to deselect individual objects (outliner and in the 3D view)?
?
To deselect in the 3D view use `S-` and click `LMB` 2 times, in the
outliner, use `C-` key to deselect individual items.

How to determine active object in 3D view?
?
Blender mark active object using light orange glow (border).

How blender mark hidden toolbars in UI?
?
You can expose additional tools from toolbar, if here small triangle (on
left sidebar for example) and you can extend them by resizing to right.

Can you describe how rotation works (mnemonic/IRL example) per axis (X, Y, Z)?
?
X - is sort of cartwheel exercise, 🤸
Y - is front/backflip
Z - is pirouetting

# 4: Transforming Objects and Adjusting Transformations

Little squares in Gizmo move tool move object in ==2 axes (plane)==.
<!--SR:!2023-12-23,3,250-->

White circle in rotate tool allow you to rotate object at given degree
==`C-`, `C-S-`== keys allow you to work with fixed values of degree.
<!--SR:!2023-12-23,3,250-->

`Scale cage tool` acts like ==`transform tool`== in raster editors, but in
3D space.

In blender when you rotate object, arm is matter, long arm ==slow==
rotation, short arm fast rotation.
<!--SR:!2023-12-23,3,250-->

To reset values, hover on it and press ==`BCK`==.
<!--SR:!2023-12-23,3,250-->

You can use math in input values, for example $2+2$ or $2*2$.

How to transform object with more precision or determine values?
?
You can transform objects using precision (`S-` key) or determine values
using `C-` or `C-S-` keys.
<!--SR:!2023-12-23,3,250-->

You can clear object transformation by ==`M-G, M-R, M-S`== keys.
<!--SR:!2023-12-23,3,250-->

# 5: Adding, Deleting, and the 3D Cursor

Is context menu and object deletion aviable in outliner?
?
In outliner deletion and context menus also works.

How to quickly snap selection or cursor (grid, world origin, etc.)?
?
You can locate 3D cursor from snap menu (`Object` → `Snap` → `Cursor to`). You
can also snap objects in same manner. Or use `S-S` shortcut. Or you can use
new snapping `G` → `B`...

How to quickly add mesh primitives (cube, cylinder, etc.)?
?
Add mesh tools (cube, cylinder, etc.) from left sidebar is useful to
quickly generate meshes and snap them to geometry automatically.

# 6: Local Space and Parenting

How transformation works in blender, is there any specific order?
?
In blender transformation has priorities, for example rotation is calculated
first and then scale.

To change current transformation orientation, use ==`,`== key.

Applying rotation, is sort of make object to use global ==axis (transform
orientation)==.

By default, object origin reference point is ==world origin==.
But you can change this by parenting, when you parent child to parent,
reference point will be parent origin.

You can parent objects by moving them in outliner with ==`S-`== key from
child to parent. And you can clear parent hierarchy by moving them with
`S-` key in outliner, from parent to outside (clear space).

When you parent child object to target object, ==target object== must be
selected and active to make it parent (selected last).

# 7: Editing Object Data

How to open object data in outliner?
?
You can click on object icon or object data icon in outliner and this will
open associated tab in properties.

Object vs Object Data?
?
Object is sort of container, which can store other objects and object data.
You can also change objects data from one to another one. Also object has
own properties and object data (data block) has own properties.

# 8: Edit Mode and Object Origins

Does vertices and edges have size?
?
Vertices haven't size in blender and edges are infinity thin.

If I remove all geometry from object, origin will be still present?
?
Each object has origin, even if you remove all geometry this origin will be
still present.

How to add append geometry to object?
?
You can add additional geometry in edit mode. `S-A` → select something to
add.

You can select specific object, which added in edit mode (for example
multiple cubes), by selecting part of mesh and select ==linked (`C-L`)==.
Then you can separate this object by `P` key and join back (child to
parent) by `C-J` key.

How to set origin to geometry center?
?
Use `Set Origin` → `Origin to Geometry` (or `Origin to Center of Mass`).

How to transform only object origin?
?
Transform tools support additional options (top right corner). For example
`Options` → `Affect Only` → `Origins`. `Only locations`, is useful when you
select two objects and scale for example (object not scaled, changed only
locations). `Parents only`, transform only parent object.

To quickly change current mode for object, you can use PIE menu -
==`C-TAB`==. In keymap settings you can set only `TAB` key for this menu.

You usually need to model object in edit mode, but rotate it in ==object
mode==, to keep its local orientation.

# 9: Duplicate and Instance Objects

How to duplicate object and place it in same place?
?
After duplication of object you can instantly move it. To keep it in exact
same place, use `ESC` key (cancel move operation). Duplication copy object
so if you change one object, another will be not changed.

Duplicate linked (`ALT-D`) create linked copy, it duplicates object but not
their ==data==, and move them. Linked instances much more effective in
terms of memory usage and rendering. And it's working for various objects:
Light, Geometry, Camera, etc.

# 10: Pivot Points, Snapping, and Proportional Editing

How to change pivot point?
?
You can change transform pivot point (center of the header section), for
example rotate around 3D cursor, or bounding box center, or around active
object, or around median point.

How to change grid size?
?
You can change grid scale in `Show Overlays` menu (top right), this is
useful for snapping for example. You can also change scene units, which
also affect to grid and objects (for example location)! (`Scene` tab →
`Unit scale`).

How to quickly set object dimensions to 1 meter for example?
?
Blender support unit prefixes in values, for example 1 mm, 1 cm, 1 m, 1 km,
etc. If you type 1 km in some input it will be automatically converted to
meters.

You can enable absolute snap in snapping settings, to snap object by pivot
center all time, no matter what initial position was.

You can use different modes of snapping: vertex (snap to the nearest
vertex), edge, face (you can also auto-rotate with Align rotation to Target
option). And you can also snap by specific axe (X, Y, Z), this useful in
vertex snapping mode for example to snap near vertices.

Proporation editing allow you to edit multiple vertices or objects, which are in some radius from active vertex/object. You can change radius by mouse wheel or f/F keys. You can also use different fallow-of types (smooth,wsphere, sharp, linear, etc).

Moving 3D cursor with holding S-C and RMB will snap to grid or other snapping mode (useful to snap per verticies for example).

You can select throug objects, by S-LMB.

You can adjust wireframe (and any other) shading in dropdown menu, for example x-ray transparency, background color, etc.

To see plain scene (without UI), you can just disable overlays and gyzmo (top right menu)

You can add extra shading pie (Z) menu items in keymap settings.

You can hide/show multiple objects in outliner, by holding LMB key on eye icon.

Outliner has additional Restriction Toggles (Filter icon), if you not see some object which must be visible, check Disable in viewport toggle.

You can hide entrie collection from all modes and disable selecting items from it by Exclued from View layer toggle in Outliner.

To place objects to multiple collections use Link to Collection (S-M).

You delete collection and objects in it by RMB on collection and Delete Hierarchy.

You can select all objects in collection by RMB on collection and Select Objects.

You can group multiple objects by Empty object and parenting (C-P), useful when
you need able to transform group of items and visualize selection of them in
viewport.

TODO: note backface culling (can be enabled in shading options).

Shade smooth can be applied to individual faces.

You can change shade smooth angle in operations menu (appear in bottom left or F9).

You mark specific edge as sharp, select it, RMB and Mark Sharp.

Shade smooth by Angle very useful to smooth for example cylynder with angle of 30 DEG.

You can flip normal by selecting it and press M-N, then flip.

# 13: The Extrude, Inset, and Knife Tools

Extrusion face (E) - create copy of face, move it and attach back to original face, original face will be deleted.

To really cancel some action, like extrusion press ESC key and then C-Z to undo.

Extrude Mainfold - atempt to extrude face and "trying" not create additional faces.

Extrude alogn normals - extrude face along it's normal vector (check also
offset even option), effect usually visible with mutliple faces.

Knife tool - to confirm press Enter or space key.
Knife tool - A toggle angle constrain.
Knife tool - S toggle distance measurement.
Knife tool - C toggle cut through.
To create multiple cuts, press RMB when you want to finish cut and start new one.
To cut geometry along a planu use Bisect tool, but select firt all
geometry.

M-E open extrude menu, which allow you to extrude along normals, individual faces, etc.

# 14 - Bevel and Edge Loops

You can use bevel tool on edges and vertices (V to toggle, C-S-B to start with vertices). Good shape to training is square.

You can adjust many bevel parameters, for example you can create custom
Profile Type, which allow you to create custom bevel shape.

Usualy befor you bevel object, yoy need to apply scale (C-A).

When  you use Loop-Cut (C-R) you can hold LMB to slide on edge.
To disable slide in loop cut press Esc key.
Before loop cut (LMB key) you can adjust segments amount using mouse
scroll.

To move edge quickly and regardless object rotation use Edge slide tool.

M-LMB C-M-LMB can select edge/face loop (use it in different modes).

Loop cut can't go through face with 5+ edges (ngons) and through triangles.

# 15 - Subdivide, Fill, and Merge

To subdivide Edges, go too Edge and Subdivide (split edges/faces in half), or RMB → Subdivide.
Sometimes it's can replace loop cut, since it allow you subdivide edges more
precisely and solve ngon/triangle loop cut problem (you can select path to
subdivide).

To subdivide Edge ring, go to Edge and Subdivide Edge Ring.

You can't subdivede n-gons, but you can use knife tool to cut it.

You can extrude to cursor from many tools, hold C- and press, this is useful
to create vertex in specific place (Edit mode, vertex mode).

You can create edge (and face too!) from just 2 vertices by selecting them and press F key (Vertex → New Edge/Face from Verticies).
And this is not Knife tool, it's just create edge between 2 vertices or
face, etc.

M-F - fill face (not same as F), it will fill face with triangles (use Face
-> Grid fill to will with quads).

To connect vertecies, create edge and split it use J key.

To use auto-merge (merge verticies moved to same location), enable it in
options menu (top right) or control button (also top right) and usually you
need to enable snapping by vertex.

To create some form from edge loops (for example tunnel), select edges,
then Edge menu → Bridge Edge Loops.

# 16 - Object Modifiers

Where is bevel modifier?
?
Modifiers → Add Modifier → Generate → Bevel.

You can hide displaying modifier in Edit mode by clicking on icon in right
of modifier name.

You can add bevel weight (Edge → Add bevel weight) to edges and use it in bevel modifier to bevel
only edges with specific weight.

If your bevel modifier not working (usually when you add some loop-cut), check Geometry → Clamp Overlap.

Array modifier create copies of shape with some offset. And here mutliple
opitiosn to control, for example offsets.

Mirror modifier mirror object by some axis, and it's working from object origin.

You can enable mesh symmetry in edit mode (top rigth), which working for
moving, but it's not working with adding and removing geometry. But usually
mirror modifer is better. You can cut half of geometry, apply mirror
modifier (enable clipping optionnaly) and then transformations will be applied to
both sides.

You can instatly type someting in menus, to quickly find element.

# 17 - Editors and Windows

You can temporarily hide toolbar by T key.

View menu can be used to quickly show/hide required paneles.

Blender hotkeys working on active editor (mouse hover on which one). For
example you can maximize CURRENT editor by C-space key.

To toggle 4 view mode, use C-ALT-Q.

You can zoom current editor by C-MMB.

You create new window (to place on second monitor for example) from current
editor, View (also aviable in Context Menu) → Area → Duplicate Area into New Window. Or use S-LMB drag
from corner of current editor.

You can adjust current tool mode per various workspace from Workspace tab
in Tool options (N → Tool → Workspace for example).

File → Defaults can help you to permanent save current settings (tools,
workspaces, etc) into
startup file or reset all of them.

# 18 - Working With Blend Files

You can use default UI when opening Blend file (yes they saved in blend
files), in Open dialog click on
Gear icon (top-right) and uncheck Load UI.

You can open autosave file from File → Recover → Autosave window.
Enable it in Settings → Save & Load settings.

Blender support Copy-Paste between same versions (or same major versions),
you can use C-C and C-V between window instances.

Blender support appending blend files (copy) or linking (reference)
objects.

Linked objects properties can be overwritten, to overwrite: Menu → Object → Library ->
Make.

You can unlink objects from Object → Relations → Make Local → All or any
other.

Solid shading mode support textures, check top right menu (shading menu).

Blender (by default) not storing textures in blend files, so be careful. If
you move texture somewhere, blender don't track this changes and then you
need to manually relink texture. But you can pack this texture into blend
file (File → External Data → Pack Resources).

# 19 - Cameras and Rendering

Reneder is happens from current active camera (Black triangle on top).
You can change active camera in scene settings (Properties panel → Scene
tab). Or use C+NUM0 keybinding.

Yousualy you need to rotate camera on Z-axis. Or better rotate/transformCG Cookie  from local
camera orientation (R → X,Y and G-Z)

Clipping affect to Z-fighting, try to change it if you see weried
artifacts.

You can render viewpor from View → Viewport Render Image.

Material shading mode use EEVEE render.

To render image with transparency go to Render settings → Film and enable Transparent.

# 20 - Materials and Lighting

You can drag & drop colors/materials between material properties.

You can adjust viewport material in Viewport Display tab of Material properties.

You can input values without zero, for example 0.5 can be `.5`.

Yellow dot in Color property usualy indicate that you can add some node to
this property.

Alternative to Sky texture is Environment texture (HDR).
Is used to light your scene using an environment map image file as a texture.
NOTE: disable transparency in render settings, if you use Environment
Texture.
To rotate this texture change Vector input (Directions of texture) In Surface tab to Vector Mapping, then
In second verctor input set Texture Coordinates to Generated and adjust
required properties.

Use C-M-NUM0 to snap camera to view.

To make shadow more soft, change radius in light properties or you can use
circle control (aviable for selected light source) in viewport.

Sun light type - position is no matter, only rotation and point location is matter.

# 21 - Intro to 3D Animation

You can click on frames number above animation timeline to jump to specific
frame.

When you create animation, first you select WHEN it starts and then WHEN it
finishes. So you need at least 2 keyframes. If you have only 1 keyframe
animation starts and will continue forever. You need to change properties
before you insert keyframe.

Keyframe animtion have visual marks in object properties, yellow - we on
some keyframe, green - we are in interpolation between keyframes, orange -
we changed some property and it's not keyframed.

You can insert keyframes in properties, hover on property and press I key.

You can open channels menu in animation timeline, click on small arrow on
left.

You can delete not required properties from channels menu. And then you are
able to change them without keyframing.

To quickli toggle Graph Editor, press C-TAB in any animation mode panel.

To fiend current frame (zoom & navigate) in graph editor timeline press `NUM.`

You can enable auto-keyframing (record button in top bar), to automaticali
add keyframes when you change properties.

# 22 - 2D Animation with Grease Pencil

You can add Grease Pencil object from Add menu and it's 3D object, but you
can work with it in 2D mode and it allows you to go into draw mode if
greace pencil object selected.

You can change brush in top left brush control.

You can change draw stroke object origin to face (and tune offset) to draw
directly on surface.

Grease pencil support layers, you can add them from top right menu or in
Data tab in properties. And you can animate each layer separately.

You can use Emision Surface in Material, it will make object more
stylized for cartoon.

You can move keyframes in Timeline by selecting it and use G → Drag &
Drop.

Grace pencil object can have materials.

Grace pencil objects react to lighiting, you can disable this behavior in
Layer properties → Turn off Lights.

You can use Standart display space (Rendering → Color Management) to make
colors more like in raster editors.

You can add noise modifier to grease pencil object to make it more natural.
For example these parameters can be used:
- Position: 0.9
- Thickness: 0.5
- Noise scale: 0.2

You can apply Build modifier to grease pencil object to animate for example
how it was drawn (check Timing → Natural Drawing Speed).

# 23 - Intro to Sculpting

To swap direction in sculpting mode, use C- key.

To make crease use Draw sharp tool (Space, 1).

Clay tool used to build natural forms (Space, 2).

Clay Strips used to quickly add volume (Space, 3).

Flattern: Space, 6

Scrape: S-T

Grab, like propertion edit

Elastic Deform, use big radius (more than object) if you want squeeze object.

Cloth:

To see overay in object mode, enable it Overlay Options.

To alter mesh topology in sculpting, enable Dyntopo (top right).

You can optimize mesh after sculpting by using Remesh, C-R (top right), first turn
of Dyntopo.

In sculpting there own Subdivision Modifier type - Multiresolution. You can
add it from Modifier tab in Sculpting mode (or just press C-[Number]).
It allows you work on multiple levels of detail. You can change for example
lower resolution detail and then apply it to higher resolution levels.
To add more levels of detail, use Subdivide button in modifier settings.

When you navigate with multires, by default enabled show low resolution while navigating option (top right → options). You can disable it to see high resolution mesh all time.

To avoid lumps, prefer to work with low-res mesh and then add more details.

# 24 - Next Steps

Learn basics, before you dive into some specific area.

- [PRESS START: Your Simple First Blender Project - CG Cookie](https://cgcookie.com/courses/press-start-your-simple-first-blender-project)

- [TRACK: The Fundamentals to become a skilled Blender artist - CG Cookie](https://cgcookie.com/playlists/15-track-the-fundamentals-to-become-a-skilled-blender-artist?utm_source=youtube&utm_campaign=BASICS%204.0%20YT&utm_medium=video&utm_content=Lesson24)

- [Big Idea: Digital Tablets - CG Cookie](https://cgcookie.com/posts/big-idea-digital-tablets?utm_source=youtube&utm_campaign=BASICS%204.0%20YT&utm_medium=video&utm_content=Lesson24)

- [Hotkeys](https://d1tq3fcx54x7ou.cloudfront.net/uploads/store/tenant_161/attachment/2107/file/e3e8067f4de47536246c8439f242ebc5.pdf)

- [Blender Market | A Unique Market for Creators that love Blender](https://blendermarket.com/)


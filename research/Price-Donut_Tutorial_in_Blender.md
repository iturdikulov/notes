---
created: 2023-06-05
sr-due: 2023-08-25
sr-interval: 1
sr-ease: 230
external: https://www.youtube.com/playlist?list=PLjEaoINr3zgEPv5y--4MKpciLaoQYZB1Z
directory: ~/Computer/graphics/Price-Donut_Tutorial
tags:
  - inbox
  - research
  - computer_graphics
  - spaced_repetition
---

# Blender Beginner Donut Tutorial

A big part of this tutorial is also in [[Blender_common_shortcuts|blender
shortcuts]] note.

Probably better to place `subdivision modifier` on bottom of the stack
(depends on the situation).

To change world units need change properties, how do it?
?
Scene Properties (properties sidebar) > Units > Metric.

How to apply subdivision modifier (or any modifier)?
?
Modifier tab > Modifiers Properties > Add Modifier.
<!--SR:!2023-12-12,4,270-->

How to move siblings points in edit mode?
?
You need to select point(s) enable proportional editing (`O`) and move
(`G`) To increase/decrease proportional editing radius use mouse wheel.
<!--SR:!2023-12-31,7,250-->

How select random points in edit mode?
?
Select > **S**elect Random.
<!--SR:!2024-01-02,10,270-->

Orthographic mode basically means:
?
That you can't see perspective, only
[[Orthographic_projection|orthographic]] view (no depth, objects same size
regardless of distance).

You can click on circles in axis control widget (top-right) to orbit or
==hold LMB== on it and drag.

Render working from ==point of view== of camera.
<!--SR:!2024-01-06,13,270-->

One method to quickly set camera position:
- Select camera in Scene Collection (right menu).
- Press `N` to open properties' menu.
- Open view tab and check `camera to view` checkbox.
- Select lock to object target.
- Enter into camera view mode (press `Num0`).
- Locate it as needed.
- Uncheck camera to view.

To set material, in properties window (right side), select material tab and
press add new, and set base color and other properties.

# Part 2

After adding new object, in bottom left corner will be temporary (until you
not do any action) available object options, to reopen them press `F9`.

You can quickly change object shading, by ==context menu (right click)==.

One method to smooth object better, is adding ==subdivision surface==
modifier in object properties (right menu).

Subdivision surface split square polygon to additional ==4== polygons.

To move sibling vertices use proportional editing mode `O`, or click on
icon in top right. Change how much vertices affected (circle of influence
size), use mouse scroll or use `PgUP`/`PgDown`.

Sometimes useful to hide part of object. One method to do it is select
edge, use grow selection and hide it.

# Part 3

TODO: add note. **Z-fighting**, also called **stitching** or
**planefighting**, is a phenomenon in 3D rendering that occurs when two or
more primitives have very similar distances to the camera. This would cause
them to have near-similar or identical values in the z-buffer, which keeps
track of depth. This then means that when a specific pixel is being
rendered, it is ambiguous which one of the two primitives are drawn in that
pixel because the z-buffer cannot distinguish precisely which one is
farther from the other.

The ==Solidify== modifier takes the surface of any mesh and adds depth
thickness to it.

Usually solidify modifier is used ==before== subdivision modifier.

One useful property of solidify modifier is ==Edge data -> Crease==, used to create
crease or bevel.
<!--SR:!2023-12-11,3,250-->

You can temporarily hide **modifiers** in edit (and other modes) by toggle
==visibility in modifier properties (on top after modifier name)==.

Here various types of snapping: for example `face project`. This snapping
method working good if you have enough
==geometry (apply subdivision modifier for example)==.

To apply modifier, press arrow button near modifier name and click on
apply.

Blender modifiers work from ==top to bottom== (order).

# Part 4

==Shrink wrap== modifier can help with snapping vertices between two
objects. Select target mesh, which vertices need to be snapped. Usually
need to place this modifier above other ones.
<!--SR:!2023-12-10,3,250-->

## Sculpting

If you have subdivision modifier, which is not applied, sculpting still
working on low-poly mesh, so usually you need to ==apply it==.
<!--SR:!2024-01-08,16,290-->

Subdivision modifier applying will use ==Viewport== level property.

Very handy option for mask tool is =="Front Faces Only"==, which prevent
painting it in opposite faces, you can find it in top toolbar → brush
dropdown.

==Mesh filter== tool can be used to apply inflate/deflate, smooth,
random, etc., for not-masked faces.

You can smooth mask by ==Mask menu (top bar) and select smooth mask==.

To reduce "lumpiness" in model, you can use ==smooth== tool.

# Part 5 - Shading

To set color you need to add material, and usually first you need to set
==Base color==.

To make color less/more "glossy", change ==roughness== parameter.

To parent objects, select child object first, then parent and press
==`C-P`==. BE CAREFUL not to have proportional editing enabled when you
parent objects (otherwise here possible issues with location properties).
<!--SR:!2024-01-05,13,270-->

To set image texture click on ==yellow circle== in base color in material
properties and select image texture.
<!--SR:!2023-12-12,4,270-->

[Poliigon](https://www.poliigon.com ) - Andrew Price's site with
textures/models, they also have an add-on for Blender.

==Shading==  layout allows you to "tune" your texture, properties contains
only basic options for textures.

Nodes are working from ==left to right, input ... output==.

You can add nodes by ==`S-A`==, to quickly add node between 2 just move new
added node into required edge and press LMB.

You can also add new node by dragging ==connector== (part of node) and select required
node in menu. For example drag Roughness in Principled BSDF, select image
texture color and open roughness map.

If you're adding image texture double-check it's color space, sometimes
need to set ==`Non-color`== color space, if you use textures like
roughness/normal maps (here no color only required values).

A normal in 3D modeling is a depiction of the ==orientation== of a
polygon's surface.
<!--SR:!2023-12-25,1,210-->

Usually you need to connect into Principled BSDF ==Normal Map== first and
only then Image Texture.

The Principled BSDF that combines multiple layers into a single easy to use
node. It can model a wide variety of materials. It is based on the OpenPBR
==Surface shading model==, and provides parameters compatible with similar
PBR shaders found in other software, such as the Disney and Standard
Surface models. Image textures painted or baked from software like
Substance Painter may be directly linked to the corresponding input in this
shader.

Shading Models control how your Material will reflect ==incoming light==.

TODO: Shading note.
TODO: Normal note.

Texture Paint require setting
==Image Texture (material base color circle)== on object, and then you are
able to draw on it. And sometimes you want to create new texture instead
using existing one.

In Texture Paint to preview texture, you need to select assigned texture in
top left dropdown (Browse image to be linked).

To apply 2d texture into 3d object you need to?
?
![christmas chocolate](../img/Christmas_chocolate_uvmapping.jpg)
UV unwrap (UV mapping) your 3d object.

If you use eyedropper in texture paint, usually need to select ==Texture==
preview as source of new color. 3D view can contain shading information.

If you changed texture by using Texture Paint don't forget to ==save it==
(they are not part of blend file).

To determine isolate mode, check Top Left status in layout mode `User
Perspective (Local)` means we are in ==isolate mode==.

# Part 6 Geometry Nodes

You can find Geometry Nodes in default layout menu.

Geometry nodes actually are ==modifiers== (type). They have input (some
geometry object), object modification nodes and output. It's also exposing
properties for user and allow modifying them.
<!--SR:!2024-01-05,12,270-->

Distribute points on faces allow adding small objects over
==object surface==. To see it on render, you need link object to be
distributed point using object nodes and instance on points (link object
and distribute points on faces to this node).

To prevent points overlap when you use distribute points node, use
==Poisson disc== scattering method with some distance instead random one.
<!--SR:!2023-12-09,1,230-->

==Join geometry== node is essential to save original object geometry and
add new one. To use it add input geometry and result of modifier nodes.
<!--SR:!2023-12-26,2,210-->

Long vertical rounded rectangle in Geometry Nodes represent point which
allowing to connect ==multiply inputs==.
<!--SR:!2023-12-12,4,270-->

To see Geometry nodes items, when any object selected (not only object with
applied nodes), need ==pin it== (check top center toolbar).
<!--SR:!2023-12-11,3,250-->

You can drag objects from `Outliner` into `Geometry Nodes`, and this will
automatically add ==`Object Info`== node.

What is weight painting?
?
Weight Painting is a method to maintain large amounts of weight
information in a very intuitive way.
It is primarily used for rigging meshes, where the vertex groups are used
to define the relative bone influences on the mesh. But we use it also for
controlling particle emission, hair density, many modifiers, shape keys, in
tutorial how to place sprinkles, etc.
Weights are visualized by a gradient using a cold/hot color system, such
that areas of low value (with weights close to 0.0) are displayed as blue
(cold) and areas of high value (with weights close to 1.0) are displayed as
red (hot). And all in-between values are displayed as rainbow colors (blue,
green, yellow, orange, red).

Is here any indication of weight painting mode?
?
When weight paint activated, selected object became blue (color), and
you can start draw on it.
Here weight color code:
![Weight color code](../img/sculpt-paint_weight-paint_introduction_color-code.png)
<!--SR:!2023-12-12,4,270-->

Where Blender store weight paint data (structure name)?
?
When you start weight painting it automatically create Vertex group (green
icon in right properties window to access it). Vertex groups are mainly
used to tag the vertices belonging to parts of a mesh object or Lattice.
Think of the legs of a chair or the hinges of a door, or hands, arms,
limbs, head, feet, etc. of a character.

You can connect weight paint vertex group into distribute points on faces
as density factor (use ==Named Attribute== node), for example custom
`sprinkle_density` node.

If you clicked with `C-RMB` in weight paint mode will ==pick weight from
cursor==.

How to expose custom property in Geometry Nodes?
?
If you want to make some property independent per object, drag it into
`Group Input` to expose, you can set custom name in right interface menu (N →
Group).

Which dimensions rule (size) prefer to use in Blender or 3d, real or any other?
?
Just use real world dimensions (meters, centimeters, etc.).
Modelling in real size allows you to enter actual real life dimensions for
an object while modelling enabling you to make objects that are more
accurate to scale when taking measurements from a real life object.
Setting dimension of objects from real word can save a lot of time,
especially for complex scenes (where you import other objects, etc.).

When you're scaling objects for example, and this mode is active you can
quickly input custom value using ==`number`== keys chord.

After scaling object, when you sure, apply it (`C-A` → Scale).

I have very big numbers to expose as property, how to make it easier to
edit?
?
You can make values easier to edit using Math node (Multiply/Divide/Etc).
It's useful to control density for example.
<!--SR:!2023-12-12,4,270-->

# Part 7: Geometry Nodes (Long Sprinkles)

Any operations like dragging/scale usually better to do with disabled
==proportional edition mode (`O`) and snapping (`S-TAB`)==.
<!--SR:!2023-12-12,4,270-->

Any new objects placed at 3D cursor, to move it use `S-RMB` or `Cursor
tool` in left toolbar.

If you have very small objects blender default ==clipping== value can be a
problem (objects not rendering), to fix that change clipping value in right
properties window (`N` → `View` → `Clip Start`). TODO: render?

TODO: new note
**Clipping**, in the context of computer graphics, is a method to
selectively enable or disable rendering operations within a defined region
of interest. Mathematically, clipping can be described using the
terminology of constructive geometry. A rendering algorithm only draws
pixels in the intersection between the clip region and the scene model.
Lines and surfaces outside the view volume (aka. frustum) are removed.

To add bevel to cylinder select ==opposite== faces and press `C-B` then
drag mouse. Use mouse scroll to add additional levels.
<!--SR:!2023-12-08,1,230-->

On method to add more geometry is creating ==loop-cut== (C-R). You can use
mouse scroll (or `Page Up`/`Page Down`) to add more levels. In bottom level
corner you will see current level.
<!--SR:!2023-12-08,1,230-->

To set default position of cutting geometry (center) press ==`RMB`==.

Simple ==deform== modifier (Bend mode) allow easily make cylinder little
curved. It's curving object from origin point with specified Angle.

To set origin point position to "default position" (maybe true for simple
geometry), after scaling object, open context menu (RMB) and select
==Set Origin → Origin Geometry==.
<!--SR:!2023-12-25,2,230-->

You can group objects in collections, check outliner panel, click in top
right button to create collection. Double-click on collection name to
rename (or press ==F2==). And drag & drop to organize items.

You can select multiple items in outliner and group them into multiple
collections, drag & drop them or press ==`M`== and select collection to
move items or create new one.

To validate how many objects share Geometry Nodes modifier, you can check
number in Modifier itself, `[Geometry Nodes][2]` for example. To make it
independent ==click on this number==.

DON'T forget to unpin ==`Geometry Nodes`== panel if you work on multiple
objects with different `Gometry Nodes` modifier. You can validate its name
on top in this panel.

TODO: review this
You can use rotation values from `Distribute Points on Faces` nodes and
connect it into `Instance points` node. It allows applying normal vectors
from some faces for each instance point (like get correct rotation values)?

How to link collection into `Instance on Points` node?
?
You can use collection as `Instance source` in `Instance on Points node` (drag
it into nodes editor), and usually you need to set these properties:
- Separate Children (collection).
- Reset Children (collection).
- Pick Instance (node).

You can validate rotation/scale/move (when you're changing them)
values/information in ==top left corner==.

==`Rotate Euler`== node allow adjusting rotation method and value, for
example you can add it between `Distribute Points on Faces` and `Instance
points node`. You can also add random value node into `Rotate By` connector
(in this case it will use radians values, like tau for 360 degree), to make
points rotating randomly.
<!--SR:!2023-12-10,3,250-->

Random value node, in vector mode generate random ==vectors==. Each vector
has x, y, z axis values.
<!--SR:!2023-12-12,4,270-->

You can collapse node by clicking on arrow in ==top left corner== of it.

To change multiple values (for example in node) ==hold `LMB` and drag==.

Blender has some constants, if you type `pi` or `tau` into value field, it
will ==be converted into specific value==.

[Notes](file:///home/inom/Downloads/Part%208%20Rendering.html)

# Part 8: Rendering

You can apply material to multiple objects. Select required objects
(`S-LMB`), as last step select object with material, and then ==link them:
`C-L` → `Link Materials`==. You can validate (check number) how many object
share material after `Material control` toolbar in Properties, for example:
`[Sprinkles][5]`.

==`Object info`== node can be used to generate random colors (0 - 1
values), need to link `Random property` with some optional intermediate
nodes (like `Color Ramp`) to `Base Color` of `Principled BSDF`.

`Color Ramp` - to generate multiple colors with same shading (not
gradients) change `Color Ramp` interpolation mode to ==`Constant`== and add
multiple colors if needed (+ icon on top or `C-LMB` on slider at some
position).

You can also connect `Color Ramp` node into `Metallic` property of
`Principled BSDF` to make some colors looks like `Metallic` with `Less
Roughness` for example. ==Black== color values will be non-metallic,
==white== values metallic.

How precisely control `Color Ramp` values?
?
`Color Ramp` support absolute positions for gradients, you can type them on
bottom. Useful if you have multiple linked `Color Ramps` and need to maintain
same gradient points across multiple nodes.

==`C-S-D`== keybinding in nodes editor will duplicate and retains
connections.

Alternative to lock camera method positioning is ==fly== mode, select
camera and press `S-~`.

Blender default render engine is EEVEE (fast but not accurate). Currently
better to use ==Cycles== engine (more accurate).

What if you have tiny objects in scene, which render options need
to be adjusted?
?
If you use small object in scene, you might need adjust `Render shadows`
(increase cube size in shadows options of render) and `Lamp Bias` in shadow
options of lamp (available in EEVEE render mode).

TODO: render samples note

TODO: denoise note

My viewport render looks noisy, is it possible to make it better?
?
You can also denoise options in viewport, check render properties.

How to validate my rendering device and enable GPU compute method in
Cycles?
?
Before you able to enable GPU compute method for Cycles engine go to System
settings and setup Cycles render devices.

[Blender benchmark](https://opendata.blender.org/) can be used to test your
GPU/CPU and compare it with existing one.

You can reset object position and move it into center of scene, by typing
==M-G==.

Objects like food / human body parts has SSS ==(Subsurface Scattering)==.

TODO: add note about [SSS](https://en.wikipedia.org/wiki/Subsurface_scattering)

To add SSS go to `Material` → `Subsurface` and adjust these parameters:
- `Weight`, for example 1.0.
- `Radius`, for example 1.0 (default values are mostly for skin with blood
inside).
- `Scale (thickness)`, for example 0.002 - 0.005, it's depend on object
dimensions.

# Part 9: Layout

You can quickly split blender layout windows, move cursor to corner of
window, it became + shape, while holding LMB move to create window if there
are no ==opposite windows== and merge if there are (exception, dragging
from top to bottom always create new window).

Which basic shape is better to create a plate?
?
To model plate better shape is circle, since cylinder have unnecessary
parts and his normal's back-flipped (you can validate this in `Overlays` →
`Normals` while you in `Edit` mode), etc.

If you want to extrude and place extruded vertices exactly on position
where they were are created (to scale later for example), just extrude
(`E`) and ==click `LMB`==.

Hold `Z` key and move mouse in specific direction to quickly change
render shading mode in viewport. How they are placed?
?
```
           rendered
wireframe            solid
        material preview
```

To create face of with selected vertices (fill) press ==`F`== key.

To quickly add bevels for multiple edges/vertices, select them and press
==`C-B`==. If you need to avoid adding unnecessary geometry, usually need to work
with edges (`S-M-LMB` to select multiple edges).

How check what shortcuts are available for specific tool?
?
When you work with some tool, like bevel tool you see on status panel
(bottom of window) available current shortcuts, for example - bevel tool to
prevent clamp need press `C`: Clamp Overlap ON/OFF.

When you model some object with extrusion or complex geometry, good
practice is optimizing this model (to prevent artifacts). To do it select
all geometry (edit mode), and `Merge by Distance`: `A` → `M` → `Merge By
Distance`.

To change camera size go to `Camera tab` in properties panel → ==`Viewport
Display`== → `Change Size`.

You can enable tracking mode on rotation (press ==`R` 2 times==)

You can lock movement/scaling/rotate by axis `G/S/R` then press ==`X/Y/Z`
or `X,X/Y,Y,Z,Z` for local axis==.

TODO: Rigid Body note.

# Part 10: Lighting

You can switch lamp type in lamp tab, available these types of light
source: ==Point, Sun, Spot and Area==.

Natural light is not only Sunlight its Skylight. Blender provide `Sky
Texture`, which can be enabled in `World tab` →
==`Color Property` (click on circle) → `Sky Texture`==.

`Render Exposure` option (`Color Management`) allow tune "sensor" of your
camera, to make light ==more/less intensive== in your scene, and it will
not trigger any re-render process. One good default value is -2 (with using
Sky texture).

Sky texture in world settings allow you globally configure lightning, with
parameters like ==sun size, sun elevation, sun rotation, etc.==.

Sun size influence to shadow ==size==, you can increase it to make shadows
"softer".

To activate snapping mode press ==`B`== while you are moving something.

How to work with snapping?
1. First you select origin of object you moving from (snapping point from).
2. And here are few indicators: square - `vertex`, hourglass (crosshair) -
   `edge`, triangle - `center of edge`, circle - `face`, you select
`origin` of object you move from and then to (use same indicators).
3. `M-MMB` will orbit your scene.

To select faces in `wire-frame` mode, click in the ==center of them (small
dot indicator)==.

Inset (`I`) can help you to create ==inner square== on some face (shrink
face into itself).

Can I add multiple materials to object?
?
You can add multiple materials to object, check `+` icon in material list
(top right).

Can I assign material to specific face?
?
You can assign material to face, just select it in edit mode, select
material and press `Assign` button (below materials list).

How to control light intensity in scene using `Sky Texture`?
?
Exposure and Sun Intensity can make you light softer, and you can maintain
sky texture lighting (you usually don't need to change strength).

How to import blend model?
?
To import blend model, don't use File → Import (it's for different model
formats), use `File` → `Link` → Select what you want to Link. And usually
you want to `Link Collection`.

How to install add-on?
?
To install add-on select Zip file with add-on (don't unzip it), then
`Preferences` → `Add-ons` → `Install` → locate file and click install →
enable it (checkbox).

I can't select multiple objects using `LMB`, what's wrong (this is my
personal issue)?
?
If you can't select multiple object, check maybe you have some issues with
linked objects (issues after duplicate for example).

# Part 11: Compositing

TODO: add note about area light.

The area light simulates light originating from a
==surface (or surface-like)== emitter. For example, a TV screen, office
neon lights, a window, or a cloudy sky are just a few types of area light.
The area light produces shadows with soft borders by sampling a light along
a grid the size of which is defined by the user. This is in direct contrast
to point-like artificial lights which produce sharp borders.

How to set size of area lamp?
?
Don't use scaling, just use size of lamp.

Use `MMB` to =="scroll"== in node editor.

Home key usually used to show ==all items==.

In compositing nodes tree input node is `Render Layers` and output node is
`Composite`.

Tune `Max Samples` in render mode, depending on what ==quality== is
required. Usually 600+ samples is enough.

`C-S-LMB` click on `Render Layers` node will add viewer node (to see render
preview, you need render scene first) with render ==preview==. To control
size of it preview select `Viewer Node` and resize preview using mouse (or
use `V`/`M-V`) keys. You can move it by `M-MMB`.

`Color Balance` node (`Color` → `Adjust` → `Color Balance`) can be used to
adjust colors for viewer/composite node (result). With this node you can
adjust ==blacks, mid-tones and highlights==.

As alternative for `Color Balance` node, you can adjust colors using ==`Color
Management`== in `Render properties`. For example, you can set Look to `Medium
High Contrast`, View Transform `AgX` (more realistic).

To delete node and retain its connection press ==`C-X`==.

## Glare

Using compositor you can create `Glare` node.
To add glare node: ==`S-A` → `Filter` → `Glare`==.

Usually you want to add streaks as much as possible and adjust threshold
(apply on ==bright== elements).

To control effect threshold, you can preview only it (`C-S-LMB`) and reduce
==`Mix`== value a little bit (to see original image) and tune it as
required.

Usually if you want to combine glare with other effect (for example fog
glow) you need to follow these steps:
?
- You need to set `Mix` property to 1.0 (see only effect) for all effects, then connect
them with `Mix` node (color → Mix → Mix color), change type to add (ignore
black values) and adjust `Fac` property of Mix color (define how bright
bottom input is), priority is input → output.
- You also usually need to connect original image with new `Add` node (just
duplicate previous one) with `Fac` value and also connect previous effect `Add`
node to it (combine effect + original image).
Some like this:
Edge 1: Original → Add with `Fac` value (center node) → `Viewer`.
Edge 2: Original → Effects → Add with `Fac` 0.010 → Center node.
It's really hard to explain, just check this
[section](https://youtu.be/nxrEV-OUTEg?list=PLjEaoINr3zgEPv5y--4MKpciLaoQYZB1Z&t=810).

You can enable compositor for rendering mode (`Viewport Shading`). Click on
arrow near shading mode button and set Compositor ==`Always` or `Camera`==.

You can also add various `Filter` nodes, for example interesting `Kuwahara`
filter (Paint stile).

To copy properties values across nodes hover on property hit ==`C-C`== and
`C-V` on target property.

Lens distortion node (`Transform` → `Lens Distortion`) can replicate optics
==distortion/dispersion== effects. This effect usually needs to use with
very low values.

You can quickly toggle post-processing like Compositing in ==`Output`== Tab
→ `Post Processing`.

# Part 12: Keyframe animation

In layout mode on bottom exist animation timeline (`Playback`), you can
drag it up. Here some useful controls, like start/end keyframe (animation
length), play navigation buttons, etc.

To animate object, select it and press `I`, select property to animate.
This is Keyframe from. Then set current frame in timeline (for example
`100`), and apply some transformation on object (for example position).
Then press `I` again and select same property which you selected before.

`Spacebar` will play animation, to reverse playback use `C-S-Space`.

Pivot object can help with rotation animation. You can for example lock
camera on it, ==`C-P` → `Object (Keep Transform)`== and generate some
animation on pivot, camera will follow it.

To add pivot object: `S-A` → `Empty` → For example `Plain Axis`.

If you have issues with inserting and select required key frame type,
insert it using `RMB` → `Insert Keyframe with Keying Set`.

You can validate keyframe hotkeys by hovering on ==animation playback==
controls (in center/top above timeline).

How to properly add keyframe?
?
If you want to change some object animation property (animate from/to)
don't forget move to specific frame first, change property and insert
keyframe, otherwise if you change current frame, you lose any changes.

In `dope sheet` panel (animation layout) you have more controls to adjust
animation. Here you see ==long horizontal lines==, which means these
properties are not animated.

What is graph editor?
?
In graph Editor you edit animation/keyframes and interpolation, they are
displayed as 2D curves. You can use here `Home`, `MMB` keys. You can select
keyframes here and adjust them using `LMB` or `R/S` keys.

For easier editing of curves in Graph Editor, you can enable Normalize mode
(on top), this will display curves in normalized range ==(1 to -1)==. Be
careful with moving key frames in this mode, it will work based on relative
normalized values.

By default, in Blender animation plays with 24 FPS. You can change it in
==`Output`== tab of properties panel (Format → Frame Rate). Most common
values are 30 FPS and 60 FPS (online platforms, gaming, etc.). 30 FPS, is
usually enough for animation, 60 FPS for smooth 3D content for example and
24 FPS usually using in films shot (minimal for smooth animation).

# Part 13: Rendering

AI Denoiser work good with high ==Sampling Rate==.

For simple scene 500 - 1000 Samples is usually enough.

Usually you need to turn off `Noise Threshold` (Sampling → Render) since
it's not working well with `Denoiser`. NOTE: this maybe not actual.

To render Animation press ==`C-F12`==, to play `C-F11`.

You can change output directory for animation in ==`Output`== panel
(`Output group` → `Output path`) (for example .../frames/001/).

File format for animation, usually used ==TIFF, PNG and OpenEXR==. Be
careful to use video formats, if you will have some issues with render you
might lose your results.

You can enable DOF (depth of field) in ==`Camera Settings`== in properties
panel. Enable it and pick target. `F-Stop` control focus.

You can Enable motion blur in ==`Render properties`==. And you can adjust
`Shutter` value.

What you usually need to check before rendering?
?
- Validate Face Orientation: `Show overlays` on top left toolbar → `Toggle
Face Orientation`. If needed, recalculate normals (`S-N`/`C-S-N` in Edit
mode).
- Hide items which must be not appeared in render.
- Check all required items are visible in render (Light sources, objects,
etc.).
- Check intersections and fix them if required.
- Check your lighting and exposure. You can change `View transform` to
false (`Render` → `Color Management`) and see here [heat
map](https://docs.blender.org/manual/en/latest/render/color_management.html#bpy-types-colormanagedviewsettings-view-transform)
of image intensities. Usually you want to minimize High Clip values here
(White), good enough yellow/orange values.
- Render Sampling: `500-...`, no `Noise Threshold` (maybe not actual).
- `Denoise` → `OpenImageDenoise` (maybe not actual).
- Output `TIFF` 8-bit, path frames/version.
- Render first, middle and last frame to validate result.

# Part 14: Video Editor

Usually you want to create new blend file especially for video: `File` →
`New` → ==`Video Editing`==.

How to load image sequence in Sequencer panel?
?
`S-A` → `Image Sequence`, navigate to files, sort them by filename select
all (`A` key) and press Add Image Strip.

You can resize sequencer timeline using `C-MMB` or mouse scroll.

Set correct frame-rate: ==`Scene` → `Format`== in right sidebar.

How extend last frame in sequencer?
?
You can extend last frame by selecting it and move with `G` key or holding
`LMB`.

How to add fade-out?
?
- Add color block: `S-A` → `Color`.
- Drag it into the end of scene.
- Select this block and add fading (`S-A` → `Fade-In`).
- In `Output` settings of `Properties` panel, set place where you want to
save video.

Good setup for video (`Output` → `Encoding`)?
?
- Type: FFmpeg.
- Container: MPEG-4/WebM/Matroska.
- Codec: H.264.
- Quality: High or Perceptually Lossless.
- Audion: AAC or No-Audio.

To render video (if `Sequencer` enabled in `Output` tab → `Post Processing`) just
use ==Render Animation (`C-F12`)==.

TODO: copy Andrew nodes schemes into my notes

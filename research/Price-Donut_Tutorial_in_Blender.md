---
description:
tags:
- inbox
- research
- computer_graphics
created: 2023-06-05
sr-due: 2023-08-25
sr-interval: 1
sr-ease: 230
external: https://www.youtube.com/playlist?list=PLjEaoINr3zgEPv5y--4MKpciLaoQYZB1Z
directory: ~/Computer/graphics/Price-Donut_Tutorial
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

How to move siblings points in edit mode?
?
You need to select point(s) enable proportional editing (`O`) and move
(`G`) To increase/decrease proportional editing radius use mouse wheel.

How select random points in edit mode?
?
Select > **S**elect Random.

Orthographic mode basically means:
?
That you can't see perspective, only
[[Orthographic_projection|orthographic]] view (no depth, objects same size
regardless of distance).

You can click on circles in axis control widget (top-right) to orbit or
==hold LMB== on it and drag.

Render working from ==point of view== of camera.

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

Subdivision surface split polygon to additional ==4== polygons.

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

One useful property of solidify modifier is ==Edge data==, used to create
crease or bevel.

You can temporarily hide modifiers in edit (and other modes) by toggle
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

## Sculpting

If you have subdivision modifier, which is not applied, sculpting still
working on low-poly mesh, so usually you need to ==apply it==.

Subdivision modifier applying will use ==Viewport== level.

Very handy option for mask tool is =="Front Faces Only"==, which prevent
painting it in opposite faces, you can find it in top toolbar → brush
dropdown.

==Mesh filter tool== can be used to apply to inflate/deflate, smooth,
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

To set image texture click on ==yellow circle== in base color in material
properties.

[Poliigon](https://www.poliigon.com ) - Andrew Price's site with
textures/models, they also have an add-on for Blender.

==Shading layout== allows you to "tune" your texture, properties contains
only basic options for textures.

Nodes are working from ==left to right, input ... output==.

You can add nodes by ==`S-A`==, to quickly add node between 2 just move new
added node into required edge and press LMB.

You can also add new node by dragging ==connector== and select required
node in menu. For example drag Roughness in Principled BSDF, select image
texture color and open roughness map.

If you're adding image texture double-check it's color space, sometimes
need to set ==`Non-color`== color space, if you use textures like
roughness/normal maps (here no color only required values).

A normal in 3D modeling is a depiction of the ==orientation== of a
polygon's surface.

Usually you need to connect into Principled BSDF ==Normal Map== first and
only then Image Texture.

The Principled BSDF that combines multiple layers into a single easy to use
node. It can model a wide variety of materials. It is based on the OpenPBR
==Surface shading model==, and provides parameters compatible with similar
PBR shaders found in other software, such as the Disney and Standard
Surface models. Image textures painted or baked from software like
Substance Painter may be directly linked to the corresponding input in this
shader.

Shading Models control how your Material will ==reflect incoming light==.

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

Distribute points on faces allow adding small objects over
==object surface==. To see it on render, you need link object to be
distributed point using object nodes and instance on points (link object
and distribute points on faces to this node).

To prevent points overlap when you use distribute points node, use
==Poisson disc== scattering method with some distance instead random one.

==Join geometry== node is essential to save original object geometry and
add new one. To use it add input geometry and result of modifier nodes.

Long vertical rounded rectangle in Geometry Nodes represent point which
allowing to connect ==multiply inputs==.

To see Geometry nodes items, when any object selected (not only object with
applied nodes), need ==pin it== (check top center toolbar).

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

Where Blender store weight paint data?
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

Which dimensions rule (size) prefer to use in Blender?
?
Just use real world dimensions (meters, centimeters, etc.).
Modelling in real size allows you to enter actual real life dimensions for
an object while modelling enabling you to make objects that are more
accurate to scale when taking measurements from a real life object.
Setting dimension of objects from real word can save a lot of time,
especially for complex scenes (where you import other objects, etc.).

When you're scaling objects for example, you can quickly input custom value
using ==`.number`==.

After scaling object, when you sure, apply it (`C-A` → Scale).

I have very big numbers to expose as property, how to make it easier to
edit?
?
You can make values easier to edit using Math node (Multiply/Divide/Etc).
It's useful to control density for example.

# Part 7: Geometry Nodes (Long Sprinkles)

Any operations like dragging/scale usually better to do with disabled
==proportional edition mode (`O`) and snapping (`S-TAB`)==.

Any new objects placed at 3D cursor, to move it use `S-RMB` or `Cursor
tool` in left toolbar.

If you have very small objects blender default ==clipping== value can be a
problem (objects not rendering), to fix that change clipping value in right
properties window (`N` → `View` → `Clip Start`).

TODO: new note
**Clipping**, in the context of computer graphics, is a method to
selectively enable or disable rendering operations within a defined region
of interest. Mathematically, clipping can be described using the
terminology of constructive geometry. A rendering algorithm only draws
pixels in the intersection between the clip region and the scene model.
Lines and surfaces outside the view volume (aka. frustum) are removed.

To add bevel to cylinder select ==opposite== faces and press `C-B` then
drag mouse. Use mouse scroll to add additional levels.

On method to add more geometry is creating ==loop-cut== (C-R). You can use
mouse scroll (or `Page Up`/`Page Down`) to add more levels. In bottom level
corner you will see current level.

To set default position of cutting geometry (center) press ==`RMB`==.

Simple ==deform== modifier (Bend mode) allow easily make cylinder little
curved. It's curving object from origin point with specified Angle.

To set origin point position to "default position" (maybe true for simple
geometry), after scaling object, open context menu (RMB) and select
==Set Origin → Origin Geometry==.

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

Random value node, in vector mode generate random ==vectors==. Each vector
has x, y, z axis values.

You can collapse node by clicking on arrow in ==top left corner== of it.

To change multiple values (for example in node) ==hold `LMB` and drag==.

Blender has some constants, if you type `pi` or `tau` into value field, it
will ==be converted into specific value==.

---
date: 2023-03-04T00:00+03:00
external:
  - https://krita.org/en/
tags:
  - blog
  - cheat-sheets
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 228
---

# Krita

## Mouse shortcuts

Right-click
<br class="f">
Show a palette of brushes, color history and other tools.
Right-click again to hide it.

S-left mouse drag in Brush mode
<br class="f">
resize brush (large when dragging to right, small when dragging to left).

Space+left mouse button
<br class="f">
pan the canvas. Also with middle button (mouse wheel)
click and drag.

S-Space+left mouse button for ==fine canvas rotations==.

C-click:<wbr class="f"> Color pick the pixel under the cursor.

C-M-click:<wbr class="f"> idem, but only if on current layer.

Select Layer Mode. Hold this key, click on a pixel, you select the layer
holding this pixel.
<br class="f">
R

S-R
<br class="f">
Idem, but add the layer to the selection of layers. You can hit C-G to
group the selected layers, for example…

V
<br class="f">
Hold this key, press mouse and hold it, it will trace a straight line between
the press point and the release point.

## Default

D:<wbr class="f"> Default foreground (FG =black) and background (BG = white) colors.

X:<wbr class="f"> Swap FG and BG colors.

E:<wbr class="f"> Set eraser mode

M:<wbr class="f"> Horizontal Mirror Tool.

Num-4:<wbr class="f"> Rotate canvas left of 15°

Num-6:<wbr class="f"> Rotate canvas right of 15°

Num-5:<wbr class="f"> Reset canvas rotation.

+:<wbr class="f"> Zoom in.

-:<wbr class="f"> Zoom out.

Num-1:<wbr class="f"> Zoom at 100 %.

Num-2:<wbr class="f"> Zoom at Fit Page.

Num-3:<wbr class="f"> Zoom at Fit Page Width.

C-I:<wbr class="f"> Invert colors on current layer(s).

Del:<wbr class="f"> Erase everything in current layer.

Backspace:<wbr class="f"> Fill selection with BG color.

S-Backspace:<wbr class="f"> Fill selection with FG color.

C-Backspace:<wbr class="f"> Fill selection with BG color (opacity).

C-S-Backspace:<wbr class="f"> Fill selection with FG color (opacity).

U
<br class="f">
Show common colors (on the left of the palette; allows quick selection;
alternative: right-click…)

H
<br class="f">
Show color history (below the palette; colors used in the current picture)

S-I
<br class="f">
Show color selector.

## Toolbar

B:<wbr class="f"> Freehand Brush Tool

T:<wbr class="f"> Move Tool: move the current layer out the selection, depending on options

C-T
<br class="f">
Transform a layer or selection: beside rotating, inverting or deforming
capabilities, allows moving the selection.
Moreover, if you select a group of layers, it will move the whole group at once.
You can quickly group & ungroup layers to do that (or just keep these useful
groups!)

C:<wbr class="f"> Crop Tool: cut the bounds of the image to what is selected. Keeps the layers.

G:<wbr class="f"> Gradient tool, between FG and BG colors. Better use with a selection…

P:<wbr class="f"> Color Select Tool. I rather use the Ctrl key to go into color picking mode.

F
<br class="f">
Fill Tool. Fill the selection and / or the current color with the FG color.
Play with options for tolerance, growth, feathering, etc.

C-R:<wbr class="f"> Rectangular Selection Tool.

J:<wbr class="f"> Elliptical Selection Tool.

I mostly use the ==Outline Selection Tool (freehand)==, I assigned it the S
shortcut.

When making a rectangular or elliptical selection, press ==Alt== to move the
selection instead of grow / shrink, and Shift constraints to 1:1 aspect ratio.
Also works for rectangular / elliptical drawing tools, BTW.

Once a selection is made, you can make one with ==Shift pressed==: it adds to
the selection; with Alt pressed: it removes from selection.

## Layers

Note: when I write “current layer”, it often applies to a selection of layers.

PageDown:<wbr class="f"> Select next layer.

PageUp:<wbr class="f"> Select previous layer.

When focus is on layers, arrow works too. ==S-arrows== allows to select
consecutive layers. So is Shift+click.

Home:<wbr class="f"> Go to first layer.

End:<wbr class="f"> Go to last layer.

C-PageDown:<wbr class="f"> Move current layer down.

C-PageUp:<wbr class="f"> Move current layer up.

C-G
<br class="f">
Move the current layer, or selected layers, into a group. If all layers of
a group are selected, the group disappears.

C-M-G
<br class="f">
Move the current layer out and above the current group.

C-E
<br class="f">
Merge current layer on layer below (in list), which keeps its name.
Useful after pasting, when you don’t want to keep too many layers.
Warning! Destructive, don’t do it by mistake. But of course, C-Z (undo) fixes
that, if you notice what you have done…
If the layer below is a group of layer, the group and the merged layer are
flattened (making only one layer).
If the layer is the last of its group, it does nothing.

S-Del:<wbr class="f"> Delete current layer.

C-J:<wbr class="f"> Duplicate current layer.

F3:<wbr class="f"> Show layer properties.

## Filters

C-U
<br class="f">
Hue / Saturation / Lightness filter.
Move Saturation to zero to get gray-level image.

C-L:<wbr class="f"> Level filter; allows increasing contrast (move side arrows toward middle).

M-S:<wbr class="f"> initial of blending mode: select the drawing mode.

## Custom Shortcuts

Custom

You can change the keyboard shortcuts via the Settings > Configure Krita menu,
Keyboard Shortcuts tab.
~/.local/share/krita/shortcuts/Inomoz.shortcuts

InteractionTool - M-S-S
<br class="f">
In vector layer, choose the Select Shapes Tool (fat arrow)

PathTool - M-S-E
<br class="f">
In vector layer, choose the Edit Shapes Tool (thin arrow on path)

The Outline Selection Tool:<wbr class="f"> KisToolSelectOutline - S

SvgTextTool - C-S-T:<wbr class="f"> The name is clear

Also clear, useful to check if we painted on right layer
<br class="f">
toggle_layer_visibility - C-S-W

Quickly export that PNG or JPEG file
<br class="f">
file_export_file - C-S-E

TODO: file_close_all tablet_debugger selection_tool_mode_subtract Select Difference
Blending Mode Select Screen Blending Mode flatten_image


## Learning

- [ ] [Krita](https://www.youtube.com/playlist?list=PLhqJJNjsQ7KE3FLHIE31UgmLdcqsZfXTw)

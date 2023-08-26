---
date: 2023-03-04
draft: true
sr-due: 2024-01-03
sr-ease: 270
sr-interval: 231
tags:
- inbox
- computer_graphics
---

# Krita

## Mouse shortcuts

Right-click
?
Show a palette of brushes, color history and other tools.
Right-click again to hide it.

S-left mouse drag in Brush mode
?
resize brush (large when dragging to right, small when dragging to left).

Space+left mouse button
?
pan the canvas. Also with middle button (mouse wheel)
click and drag.

S-Space+left mouse button for ==fine canvas rotations==.

C-click::Color pick the pixel under the cursor.

C-M-click::idem, but only if on current layer.

Select Layer Mode. Hold this key, click on a pixel, you select the layer
holding this pixel.
?
R

S-R
?
Idem, but add the layer to the selection of layers. You can hit C-G to
group the selected layers, for example…

V
?
Hold this key, press mouse and hold it, it will trace a straight line between
the press point and the release point.

## Default

D::Default foreground (FG =black) and background (BG = white) colors.

X::Swap FG and BG colors.

E::Set eraser mode

M::Horizontal Mirror Tool.

Num-4::Rotate canvas left of 15°

Num-6::Rotate canvas right of 15°

Num-5::Reset canvas rotation.

+::Zoom in.

-::Zoom out.

Num-1::Zoom at 100 %.

Num-2::Zoom at Fit Page.

Num-3::Zoom at Fit Page Width.

C-I::Invert colors on current layer(s).

Del::Erase everything in current layer.

Backspace::Fill selection with BG color.

S-Backspace::Fill selection with FG color.

C-Backspace::Fill selection with BG color (opacity).

C-S-Backspace::Fill selection with FG color (opacity).

U
?
Show common colors (on the left of the palette; allows quick selection;
alternative: right-click…)

H
?
Show color history (below the palette; colors used in the current picture)

S-I
?
Show color selector.

## Toolbar

B::Freehand Brush Tool

T::Move Tool: move the current layer out the selection, depending on options

C-T
?
Transform a layer or selection: beside rotating, inverting or deforming
capabilities, allows moving the selection.
Moreover, if you select a group of layers, it will move the whole group at once.
You can quickly group & ungroup layers to do that (or just keep these useful
groups!)

C::Crop Tool: cut the bounds of the image to what is selected. Keeps the layers.

G::Gradient tool, between FG and BG colors. Better use with a selection…

P::Color Select Tool. I rather use the Ctrl key to go into color picking mode.

F
?
Fill Tool. Fill the selection and / or the current color with the FG color.
Play with options for tolerance, growth, feathering, etc.

C-R::Rectangular Selection Tool.

J::Elliptical Selection Tool.

I mostly use the ==Outline Selection Tool (freehand)==, I assigned it the S
shortcut.

When making a rectangular or elliptical selection, press ==Alt== to move the
selection instead of grow / shrink, and Shift constraints to 1:1 aspect ratio.
Also works for rectangular / elliptical drawing tools, BTW.

Once a selection is made, you can make one with ==Shift pressed==: it adds to
the selection; with Alt pressed: it removes from selection.

## Layers

Note: when I write “current layer”, it often applies to a selection of layers.

PageDown::Select next layer.

PageUp::Select previous layer.

When focus is on layers, arrow works too. ==S-arrows== allows to select
consecutive layers. So is Shift+click.

Home::Go to first layer.

End::Go to last layer.

C-PageDown::Move current layer down.

C-PageUp::Move current layer up.

C-G
?
Move the current layer, or selected layers, into a group. If all layers of
a group are selected, the group disappears.

C-M-G
?
Move the current layer out and above the current group.

C-E
?
Merge current layer on layer below (in list), which keeps its name.
Useful after pasting, when you don’t want to keep too many layers.
Warning! Destructive, don’t do it by mistake. But of course, C-Z (undo) fixes
that, if you notice what you have done…
If the layer below is a group of layer, the group and the merged layer are
flattened (making only one layer).
If the layer is the last of its group, it does nothing.

S-Del::Delete current layer.

C-J::Duplicate current layer.

F3::Show layer properties.

## Filters

C-U
?
Hue / Saturation / Lightness filter.
Move Saturation to zero to get gray-level image.

C-L::Level filter; allows increasing contrast (move side arrows toward middle).

M-S::initial of blending mode: select the drawing mode.

## Custom Shortcuts

Custom

You can change the keyboard shortcuts via the Settings > Configure Krita menu,
Keyboard Shortcuts tab.
~/.local/share/krita/shortcuts/Inomoz.shortcuts

InteractionTool - M-S-S
?
In vector layer, choose the Select Shapes Tool (fat arrow)

PathTool - M-S-E
?
In vector layer, choose the Edit Shapes Tool (thin arrow on path)

The Outline Selection Tool::KisToolSelectOutline - S

SvgTextTool - C-S-T::The name is clear

Also clear, useful to check if we painted on right layer
?
toggle_layer_visibility - C-S-W

Quickly export that PNG or JPEG file
?
file_export_file - C-S-E

TODO: file_close_all tablet_debugger selection_tool_mode_subtract Select Difference
Blending Mode Select Screen Blending Mode flatten_image
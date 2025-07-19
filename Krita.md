---
date: 2025-07-19T10:24:17+03:00
created: 2023-03-04T00:00:00+03:00
external:
  - https://krita.org/en/
tags:
  - blog
  - cheat-sheets
sr-due: 2025-07-18
sr-interval: 1
sr-ease: 130
---

# Krita

## Generative AI

https://github.com/Acly/krita-ai-diffusion

## Mouse shortcuts

Toggle a popup widget (palette of brushes, colors history ring, and other tools): <wbr class="f"> `RightMouse`

Resize brush: <wbr class="f"> `S-LeftMouseDrag` in brush mode, large when dragging to right, small when dragging to left.

Pan the canvas: <wbr class="f"> `S-LeftMouse`, or with `MiddleButton` (click and drag).

Fine canvas rotations: <wbr class="f"> `S-Space-LeftMouse` or `S-MiddleMouse`

Color pick the pixel under the cursor: <wbr class="f"> `C-LeftMouse`.

Zoom: <wbr class="f"> `MiddleMouse` scroll, or `+` and `-` keys

Select layer holding some pixel: <wbr class="f"> Hold `R` key, click on a pixel, you select the layer holding this pixel. Hold `S-` to also select those layers.

Trace a straight line between the press point and the release point: <wbr class="f"> hold `V` and draw line.

## General shortcuts

Freehand Brush tool: <wbr class="f"> `B`.

Set eraser mode: <wbr class="f"> `E`, it will use brush size if brush tool active.

Move tool: <wbr class="f"> `T`, move the current layer out of the selection, depending on options.

Transform tool: <wbr class="f"> `C-T`, transform a layer or selection: beside rotating, inverting or deforming capabilities, allows moving the selection, you can transform group of layers.

Crop Tool: <wbr class="f"> `C`, cut the bounds of the image to what is selected. Keeps the layers.

Gradient tool: <wbr class="f"> `G`, set gradient from foreground to background colors, can be used with selection.

Color Select Tool: <wbr class="f"> `P`

Fill Tool: <wbr class="f"> `F`, fill color under mouse cursor with the foreground color, support selection. Play with options for tolerance, growth, feathering, etc.

Rectangular Selection Tool: <wbr class="f"> `C-R`, use `C-S-A` to deselect.

Elliptical Selection Tool: <wbr class="f"> `J`.

Outline Selection Tool (custom key): <wbr class="f"> I assigned it to the `S` shortcut.

Move uncompleted selection: <wbr class="f"> if you started selection, but not released `LeftMouse` you can move it with `M-` key.

Constraints selection with to 1:1 aspect ration: <wbr class="f"> hold `S-` key when you create selection.

Add additional selection to current one: <wbr class="f"> make additional selection with `S-` modifier.

Remove from current selection: <wbr class="f"> make additional selection with `M-` modifier.

Reset foreground and background colors (black/white): <wbr class="f"> `D`

Swap foreground and background colors: <wbr class="f"> `X`

Rotate canvas left by 15°: <wbr class="f"> `4`

Reset canvas rotation: <wbr class="f"> `5`

Rotate canvas right by 15°: <wbr class="f"> `6`

Zoom at 100% (reset zoom): <wbr class="f"> `1`

Zoom to Fit Page: <wbr class="f"> `2`

Zoom to Fit Page Width: <wbr class="f"> `3`

Invert colors on current layer(s): <wbr class="f"> `C-I`

Erase everything in current layer or selection: <wbr class="f"> `DEL`

Fill selection with background color: <wbr class="f"> `BS`

Fill selection with foreground color: <wbr class="f"> `S-BS`

Fill selection with background color and selection opacity: <wbr class="f"> `C-BS`.

Fill selection with foreground color and selection opacity: <wbr class="f"> `C-S-BS`.

Show common colors (on the left of the palette; allows quick selection): <wbr class="f"> `U` 

Show color history (below the palette; colors used in the current picture): <wbr class="f"> `H`, alternative is pop-up widget (`RightMouse`).

Show color selector: <wbr class="f"> `S-I`

TODO: review mirror tools
Horizontal Mirror Tool: <wbr class="f"> ?

## Layers shortcuts

Note: when I write "current layer", it often applies to a selection of layers.

Add paint layer: <wbr class="f"> `Ins`.

Add vector layer: : <wbr class="f"> `S-Ins`.

Delete current layer: <wbr class="f"> `S-DEL`.

Duplicate current layer: <wbr class="f"> `C-J`.

Show layer properties: <wbr class="f"> `F3`.

Select next layer: <wbr class="f"> `PageDown`.

Select previous layer: <wbr class="f"> `PageUp`.

Go to first layer: <wbr class="f"> `Home`.

Go to last layer: <wbr class="f"> `End`.

Activate/Select layers in active Layers dock: <wbr class="f"> Arrows keys or `S-` arrows.

Move current layer down: <wbr class="f"> `C-PageDown`.

Move current layer up: <wbr class="f"> `C-PageUp`.

Move the current layer, or selected layers, into a group. If all layers of a group are selected, the group disappears: <wbr class="f"> `C-G`.

TODO: not working?
Move the current layer out and above the current group: <wbr class="f"> `C-M-G`

Merge current layer on layer below (in list), which keeps its name: <wbr class="f"> `C-E`. Useful after pasting, when you don't want to keep too many layers. Warning! Destructive, don't do it by mistake. But of course, C-Z (undo) fixes that, if you notice what you have done… If the layer below is a group of layer, the group and the merged layer are flattened (making only one layer). If the layer is the last of its group, it does nothing.

## Filters shortcuts (image adjustments)

Hue / Saturation / Lightness filter: <wbr class="f"> `C-U`.
Move Saturation to zero to get gray-level image.

Level filter: <wbr class="f"> `C-L` allows increasing contrast (move side arrows toward middle).

Select some blending mode (part of hotkey): <wbr class="f"> `M-S-...`. `M-S-N` (normal), `M-S-O` (overlay), `M-S-C` (color), etc.

## Custom Shortcuts

You can change the keyboard shortcuts via the `Settings > Configure Krita -> Keyboard Shortcuts`. Custom shortcuts stored in `~/.config/kritashortcutsrc`.

Quickly export into PNG or JPEG file: <wbr class="f"> `C-M-S-E`.

In vector layer, choose the `Select Shapes Tool` (fat arrow): <wbr class="f"> `M-C`.

In vector layer, choose the `Edit Shapes Tool` (thin arrow on path): <wbr class="f"> `M-D`.

SVG text tool: <wbr class="f"> `C-S-T`.

Toggle layer visibility: <wbr class="f"> `C-S-V`, useful to check if we painted on right layer.

## Learning path

- [ ] [Krita](https://www.youtube.com/playlist?list=PLhqJJNjsQ7KE3FLHIE31UgmLdcqsZfXTw)

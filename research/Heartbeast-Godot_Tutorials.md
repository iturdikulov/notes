---
date: 2024-01-01
tags:
  - inbox
  - SR_computer_graphics
  - SR_game
directory: ~/Computer/graphics/Heartbeast-Godot_Tutorials/
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 269
---

## Galaxy Defiance

Display → Window → Stretch → Mode: Canvas items. This mode optimized for pixel
art games.

> In this mode, the base size specified in width and height in the project
> settings is stretched to cover the whole screen (taking the Stretch Aspect
> setting into account). This means that everything is rendered directly at the
> target resolution. 3D is unaffected, while in 2D, there is no longer a 1:1
> correspondence between sprite pixels and screen pixels, which may result in
> scaling artifacts.

Rendering → Textures. Choose the nearest default canvas filter, which more
optimized for pixel art.

## General

Ctrl + F1:: Open 2D Editor

Open 3D Editor Ctrl + F2

Open Script Editor Ctrl + F3

F5 - start project. F7 - pause project. F8 - stop project.

When you use custom components with exporting some properties, don't forget to
set them in editor to avoid errors in your scripts.

Godot has many object types, like Nodes or Resources (textures, scripts, etc).

You can attach script (or create and attach) to node by pressing Attach Script
button (Top left in Scene tab).

To install addon, extract it into `addons/` directory in your project. And
enable it in plugins (AssetLib).

Settings -> Text Editor -> Behaviour -> Indent to set indentation to 4 spaces.

You can debug active running game scene objects in Scene tab (Remote sub-tab).

## Nodes

Timer: Counts down a specified interval and emits a signal on reaching 0. Can be
set to repeat or "one-shot" mode.

`VisibleOnScreenEnabler2D` represents a rectangular region of 2D space. When any
part of this region becomes visible on screen or in a viewport, it will emit a
screen_entered signal, and likewise it will emit a screen_exited signal when no
part of it remains visible.

## Node2D

You can turn on snapping (top toolbar or S-S/S-G keys).

Use Node2D transform properties to set initial position of object.

`func _process` is called ==every frame==.

## AnimatedSprite2D

Ship build using AnimatedSprite2D node (Animation -> Sprite Frames).

You can load frames into Animations by `C-O` or `C-S-O` (sprite sheet).

You can select which frame will be auto-played on load by using AutoPlay button.

## Editor

You can drag & drop nodes into text editor. Before drop hold `Ctrl` (initially
don't hold it) to create `onready` variable. If you want to automatically add
types in this case, enable it in Text Editor -> Completion -> Add Type Hints.

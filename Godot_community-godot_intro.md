---
date: 2025-07-29 22:30
tags:
  - blog
  - research
  - now_art
---

# Introduction to Godot

Notes from [Introduction to Godot](https://docs.godotengine.org/en/stable/getting_started/introduction/introduction_to_godot.html)
and [step by step](https://docs.godotengine.org/en/stable/getting_started/step_by_step/index.html) guide.

Godot supports [[GDScript]] and ==C#== programming languages. And GDExtension technology to write gameplay or high-performance algorithms in C or C++.

Is programming required to work with Godot?
<br class="f">
Yes of course, to master godot you need good understanding of [[programming_foundations]]. Godot relies on the object-oriented programming paradigm.

Core concepts of [[Godot]]: the scene tree which consist scenes (sort of objects), scenes consist of nodes (tree of nodes), and signals brings communication. How basically signals working in Godot?
<br class="f">
Nodes emit signals when some event occurs (click, collision detected, etc.), other nodes connect to this signals to respond with specific functions. When signal fires, all connected functions execute automatically.
For example, buttons emit a signal when pressed. You can connect a piece of code to this signal which will run in reaction to this event, like starting the game or opening a menu.
This feature allows you to make nodes communicate without hard-wiring them in code. It gives you a lot of flexibility in how you structure your scenes.

It is completely normal for a programmer to learn and use multiple languages?
<br class="f">
Yes! Programming languages have more similarities than differences, so once you know one, you can learn another much faster.

## GDScript basics

In video games and generally 2D computer graphics, the vertical axis unlike in geometry points: <wbr class="f"> down. -100 0 100 (top to bottom).

- [ ] https://gdquest.github.io/learn-gdscript/?ref=godot-docs#course/lesson-4-drawing-a-rectangle/lesson.tres
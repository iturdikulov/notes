---
author: Kumsal Obuz
date: 2023-09-14T00:00+03:00
external:
  - https://github.com/PacktPublishing/Game-Development-with-Blender-and-Godot
tags:
  - blog
  - gamedev
directory: ~/Computer/graphics/Obuz_Game_Development_with_Blender_and_Godot/
sr-due: 2024-06-21
sr-interval: 148
sr-ease: 250
---

# Game Development with Blender and Godot

This book is for game developers who are looking to make the transition from 2D
to 3D games. You should have a basic understanding of [[Godot]], and be able to
navigate the UI, understand the Inspector panel, create scenes, add scripts to
game objects, and so on. Previous experience with [[Blender]] is helpful but not
required.

> Seems not 100% for me, but I can learn a lot from this book.

# Creating Low-Poly 3D Models

Main topics:

- Understanding low-poly models
- Advantages of low-poly models
- Creating a low-poly barrel
- Automating with modifiers

In 2D there mostly pixels information, 3D objects are represented by data that
holds the necessary information to render the object in 3D space.
In fact in game-development, 2D and 3D combine to create a game (also final
result is just 2D image).

Edge is what connects ==two vertices==.

Face is a result of connecting edges in a certain pattern. Three edges is enough
to form a face, it's also known as triangle or ==[[polygon]]==.

[Sketchfab](https://sketchfab.com/) is great resource to find 3D models for
inspiration.

Advantages of low-poly models:

- Fewer polygons
- Small file size
- A certain artistic style
- Easy to prototype
- No or minimal texturing

It’s often said that most things in the computer world are a trade-off. And
gamedev is no exception. Sometimes low-poly models are the best choice for a
game, and sometimes they are not. It all depends on the game you are making.

## Creating a low-poly barrel

Creating barrel steps, with lid and metal rings:

1. Start with a primitive, cylinder
2. Edit the model
3. Shape the body
4. Separate the lid (cap)
5. Finish the body
6. Place metal rings
7. Finalized the lid

## Building Materials and Shaders

A shader is a piece of code that tells the rendering engine what to do with
a ==materials== properties.

In blender when you select objects, you have different properties
(context-aware) in the Inspector panel.

In the Blender you can use different viewport shading modes, to toglle between
them use ==`Z`== key.

In the Blender you can rename material by ==`LMB,LMB` / `C-LMB`== in material
name title.

Can I create new material based on existing one in Blender?
<br class="f">
You can create new material based on existing one by clicking on the two sheets
icon in the material properties (toolbar below material list).

In the Blender you can assign materials to specific faces, but need to use
==slots== for this.

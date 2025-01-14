---
date: 2022-12-29T00:00+03:00
tags:
  - inbox
  - productivity
external:
  - https://github.com/hyprwm/Hyprland
sr-due: 2023-01-28
---

# Hyprland

> Hyprland is an independent, highly customizable, dynamic tiling Wayland
> compositor that doesn't sacrifice on its looks.\
> — <cite>[hyprwm/Hyprland](https://github.com/hyprwm/Hyprland)</cite>

## Basic Window Control

- D-hjkl::Move focus between windows.
- D-S-hjkl::Move the active window.
- D-C-S-hjkl::Resize the active window.
- D-LMD::Move a window with the mouse.
- D-RMD::Resize a window with the mouse.
- D-f::Fullscreen

## Workspaces

- D-1-0::Switch to workspace 1-10
- D-S-1-0::Move the current window to workspace 1-10.
- D-Tab::Switch to the last used workspace.
- D-MMW::Switch workspaces.

## Applications & System

- D-S-Enter::Open your terminal.
- D-Space::Open your application launcher.
- D-o::File Browser (Books)
- D-S-o::File Browser (Downloads)
- D-b::Bookmarks
- D-p::Pass, The Password Manager
- D-q::Calculator
- D-a::Active Windows List
- D-\::Unicode Input and Emoji Picker
- D-C-S-DEL::Power Menu
- D-S-C::Close current window

## Screenshots & Recordings

- PrScr::Screenshot a region (copied to clipboard).
- D-PrScr::Start OBS recording.
- S-PrScr::Screenshot the active window (copied to clipboard).
- D-v::Paste "Markdown link" from clipboard.
- D-S-v::Open clipboard history.
- D-c::Speak clipboard contents

## Multimedia (NAV layer)

- Play/Pause::XF86AudioPlay
- Play/Pause main player::S-XF86AudioPlay
- Pause all players::C-XF86AudioPlay
- Next Track::N-XF86AudioNext
- Previous Track::N-XF86AudioPrev
- Seek Forward 5s::Shift-XF86AudioNext
- Seek Backward 5s::Shift-XF86AudioPrev

### Media Playback (ADB)

- ADB Connect::D-Shift-XF86AudioPlay
- Play/Pause::D-XF86AudioPlay
- Stop::D-XF86AudioStop
- Next Track::D-XF86AudioNext
- Previous Track::D-XF86AudioPrev
- Volume Up::D-XF86AudioRaiseVolume
- Volume Down::D-XF86AudioLowerVolume
- Seek Forward::D-Shift-XF86AudioNext
- Seek Backward::D-Shift-XF86AudioPrev

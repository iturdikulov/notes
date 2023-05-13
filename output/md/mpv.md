---
date: 2022-12-29
draft: true
tags:
- mediatip
- outline
title: MPV
---

MPV is a free (as in freedom) [media](./media%20%28communication%29.md)
player for the command line (it has own pseudo-gui). It supports a wide variety
of media file formats (including images), audio and video codecs, and subtitle
types.

MPV also provide GPU video decoding, API, scripts, OSD, OSC, configurable
keybinding and ton of other features.

I use it as my main video player

## Keybindings (keys are sensitive)

Half speed increase/decrease
?
`[`, `]`
<!--SR:!2023-04-16,1,230-->

Double speed
?
`{`, `}`
<!--SR:!2023-04-16,1,230-->

Reset speed
?
`BCK`
<!--SR:!2023-04-16,1,230-->

Seek
?
`h`, `j`, `k`, `l`

Undo last seek
?
`S-BCK`

Frame forward/backward
?
`.`, `,`

Next/Previous in playlist
?
`<`, `>`

Pause/Resume
?
`SPC`

Mute
?
`m`

Quit
?
`q`

Increase/decrease volume
?
`/`, `*`


Switch video / audio tracks
?
`_`, `#`

Toggle on top
?
`T`

Progress bar,
?
`o`

Toggle duration display
?
`O`

Toggle subtitles
?
`v`

Switch subtitles
?
`J` `S`

Adjust subtitles delay +/-
?
`z`, `Z`

Adjust subtitles font
?
`S-g`, `S-f`

Adjust audio delay
?
`C-+`, `C--`

Loop
?
`L`

Take screenshot
?
`s`, `C-s`

Show lists
?
`F8`, `F9`

Show stats
?
`i`, `I`

Contrast
?
`1`, `2`

Brightness
?
`3`, `4`

Gamma
?
`5`, `6`

Saturation
?
`7`, `8`

Resize window
?
`M-0`, `M-1`, `M-2`

# MPV playlist manager

Show playlist
?
`S-Return`

Sort playlist by filename
?
`C-p`

Shuffle playlist
?
`C-P`

Reverse playlist
?
`C-R`

Save playlist
?
`p`

Load all files from current directory
?
`P`

Movement in playlist - up/down
?
`up`, `down`

Movement in playlist - page up/page down
?
`PgUp`, `PgDown`

Movement in playlist - first entry
?
`Home`

Movement in playlist - last entry
?
`End`

Remove selected entry from playlist
?
`BCK`

Open selected entry (or next file is playing)
?
`Enter`

Select or Unselect the file under cursor (to reorder)
?
`Left`, `Right`

Close playlist
?
`Esc`

## Plugins


- <[https://github.com/jonniek/mpv-playlistmanager>](https://github.com/jonniek/mpv-playlistmanager>)
- <[https://github.com/mpv-player/mpv/blob/master/TOOLS/umpv>,](https://github.com/mpv-player/mpv/blob/master/TOOLS/umpv>,) useful
    to add queue, use mpv as music player, emulates \"unique
    application\"

# TODO


- [ ] <[https://github.com/NurioHin/mpv-bookmarker/>](https://github.com/NurioHin/mpv-bookmarker/>)
- [ ] <[https://github.com/zenyd/mpv-scripts>](https://github.com/zenyd/mpv-scripts>)
- [ ] <[https://github.com/occivink/mpv-scripts>](https://github.com/occivink/mpv-scripts>)
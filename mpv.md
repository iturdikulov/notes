---
date: 2022-12-29
tags:
  - SR-productivity
  - inbox
external:
  - https://mpv.io/
sr-due: 2026-02-26
sr-interval: 763
sr-ease: 333
---

# mpv

mpv is a free (as in freedom) [[media]] player for the command line (it has own
pseudo-gui). It supports a wide variety of media file formats (including
images), audio and video codecs, and subtitle types.

mpv also provide GPU video decoding, API, scripts, OSD, OSC, configurable
keybinding and ton of other features.

I use it as my main video player

TODO: need to refactor this page

## Keyboard bindings (keys are sensitive)

- Show progression bar, elapsed time and total duration on the OSD.::`o`
- Resize window::`M-0`, `M-1`, `M-2`
- Half speed increase/decrease::`[`, `]`
- Double speed::`{`, `}`
- Reset speed::`BCK`
- Seek::`h`, `j`, `k`, `l`
- Undo last seek::`S-BCK`
- Frame forward/backward::`.`, `,`
- Next/Previous in playlist::`<`, `>`
- Pause/Resume::`SPC`
- Mute::`m`
- Quit::`q`
- Increase/decrease volume::`/`, `*`
- Switch video / audio tracks::`_`, `#`
- Toggle on top::`T`
- Toggle duration display::`O`
- Toggle subtitles::`v`
- Switch subtitles::`J` `S`
- Adjust subtitles delay +/-::`z`, `Z` <!--SR:!2024-09-22,1,313-->
- Adjust subtitles font::`S-g`, `S-f` <!--SR:!2024-09-22,1,313-->
- Adjust audio delay::`C-+`, `C--`
- Loop::`L`
- Take screenshot::`s`, `C-s`
- Show lists::`F8`, `F9`
- Show OSD state::`F1`
- Show stats::`i`, `I`
- Contrast::`1`, `2`
- Brightness::`3`, `4`
- Gamma::`5`, `6`
- Saturation::`7`, `8`

## mpv playlist manager

- Show playlist::`S-Return`
- Sort playlist by filename::`C-p`
- Shuffle playlist::`C-P`
- Reverse playlist::`C-R`
- Save playlist::`p`
- Load all files from current directory::`P`
- Movement in playlist - up/down::`up`, `down`
- Movement in playlist - page up/page down::`PgUp`, `PgDown`
- Movement in playlist - first entry::`Home`
- Movement in playlist - last entry::`End`
- Remove selected entry from playlist::`BCK`
- Open selected entry (or next file is playing)::`Enter`
- Select or Unselect the file under cursor (to reorder)::`Left`, `Right`
- Close playlist::`Esc`

## Custom hotkeys

- Recent menu::`` ` ``

## Learning

- [Get property using IPC](https://stackoverflow.com/questions/62582594/get-full-path-of-currently-playing-file-in-mpv)
- [A collection of bash scripts to allow easier and programmatic interaction with mpv sockets](https://github.com/seanbreckenridge/mpv-sockets)
- [ ] `man mpv`
- [x] [mpv keyboard shortcuts · GitHub](https://gist.github.com/flatlinebb/07caa79fd3b9f3770788df21756a4611)

## Plugins

TODO: add scripts from my nix dotfiles

- [GitHub - jonniek/mpv-playlistmanager: Mpv lua script to create and manage playlists](https://github.com/jonniek/mpv-playlistmanager)
- [ ] [GitHub - NurioHin/mpv-bookmarker: A bookmarker menu to manage all your bookmarks in mpv](https://github.com/NurioHin/mpv-bookmarker/)
- [ ] [GitHub - zenyd/mpv-scripts: Scripts for the mpv media player](https://github.com/zenyd/mpv-scripts)
- [ ] [GitHub - occivink/mpv-scripts: Various scripts for mpv](https://github.com/occivink/mpv-scripts)
- [umpv](https://github.com/mpv-player/mpv/blob/master/TOOLS/umpv), useful to
add queue, use mpv as music player, emulates "single mpv instance"


---
created: 2022-12-29T00:00+03:00
tags:
  - blog
  - ends
external:
  - https://mpv.io/
sr-due: 2026-02-26
sr-interval: 763
sr-ease: 333
---

# mpv

mpv is a free (as in freedom) [[media]] player for the command line (it has own pseudo-gui). It supports a wide variety of media file formats (including images), audio and video codecs, and subtitle types.

mpv also provide GPU video decoding, API, scripts, OSD, OSC, configurable keybinding and ton of other features.

I use it as my main video player

- [ ] need to refactor this page

## Keyboard bindings (keys are sensitive)

- Show progression bar, elapsed time and total duration on the OSD.:<wbr class="f"> `o`
- Resize window:<wbr class="f"> `M-0`, `M-1`, `M-2`
- Half speed increase/decrease:<wbr class="f"> `[`, `]`
- Double speed:<wbr class="f"> `{`, `}`
- Reset speed:<wbr class="f"> `BCK`
- Seek:<wbr class="f"> `h`, `j`, `k`, `l`
- Undo last seek:<wbr class="f"> `S-BCK`
- Frame forward/backward:<wbr class="f"> `.`, `,`
- Next/Previous in playlist:<wbr class="f"> `<`, `>`
- Pause/Resume:<wbr class="f"> `SPC`
- Mute:<wbr class="f"> `m`
- Quit:<wbr class="f"> `q`
- Increase/decrease volume:<wbr class="f"> `/`, `*`
- Switch video / audio tracks:<wbr class="f"> `_`, `#`
- Toggle on top:<wbr class="f"> `T`
- Toggle duration display:<wbr class="f"> `O`
- Toggle subtitles:<wbr class="f"> `v`
- Switch subtitles:<wbr class="f"> `J` `S`
- Adjust subtitles delay +/-:<wbr class="f"> `z`, `Z` <!--SR:!2024-09-22,1,313-->
- Adjust subtitles font:<wbr class="f"> `S-g`, `S-f` <!--SR:!2024-09-22,1,313-->
- Adjust audio delay:<wbr class="f"> `C-+`, `C--`
- Loop:<wbr class="f"> `L`
- Take screenshot:<wbr class="f"> `s`, `C-s`
- Show lists:<wbr class="f"> `F8`, `F9`
- Show OSD state:<wbr class="f"> `F1`
- Show stats:<wbr class="f"> `i`, `I`
- Contrast:<wbr class="f"> `1`, `2`
- Brightness:<wbr class="f"> `3`, `4`
- Gamma:<wbr class="f"> `5`, `6`
- Saturation:<wbr class="f"> `7`, `8`

## mpv playlist manager

- Show playlist:<wbr class="f"> `S-Return`
- Sort playlist by filename:<wbr class="f"> `C-p`
- Shuffle playlist:<wbr class="f"> `C-P`
- Reverse playlist:<wbr class="f"> `C-R`
- Save playlist:<wbr class="f"> `p`
- Load all files from current directory:<wbr class="f"> `P`
- Movement in playlist - up/down:<wbr class="f"> `up`, `down`
- Movement in playlist - page up/page down:<wbr class="f"> `PgUp`, `PgDown`
- Movement in playlist - first entry:<wbr class="f"> `Home`
- Movement in playlist - last entry:<wbr class="f"> `End`
- Remove selected entry from playlist:<wbr class="f"> `BCK`
- Open selected entry (or next file is playing):<wbr class="f"> `Enter`
- Select or Unselect the file under cursor (to reorder):<wbr class="f"> `Left`, `Right`
- Close playlist:<wbr class="f"> `Esc`

## Custom hotkeys

- Recent menu:<wbr class="f"> `` ` ``

## Learning

- [Get property using IPC](https://stackoverflow.com/questions/62582594/get-full-path-of-currently-playing-file-in-mpv)
- [A collection of bash scripts to allow easier and programmatic interaction with mpv sockets](https://github.com/seanbreckenridge/mpv-sockets)
- [ ] `man mpv`
- [x] [mpv keyboard shortcuts · GitHub](https://gist.github.com/flatlinebb/07caa79fd3b9f3770788df21756a4611)

## Plugins

- [ ] add scripts from my nix dotfiles

- [GitHub - jonniek/mpv-playlistmanager: Mpv lua script to create and manage playlists](https://github.com/jonniek/mpv-playlistmanager)
- [ ] [GitHub - NurioHin/mpv-bookmarker: A bookmarker menu to manage all your bookmarks in mpv](https://github.com/NurioHin/mpv-bookmarker/)
- [ ] [GitHub - zenyd/mpv-scripts: Scripts for the mpv media player](https://github.com/zenyd/mpv-scripts)
- [ ] [GitHub - occivink/mpv-scripts: Various scripts for mpv](https://github.com/occivink/mpv-scripts)
- [umpv](https://github.com/mpv-player/mpv/blob/master/TOOLS/umpv), useful to add queue, use mpv as music player, emulates "single mpv instance"

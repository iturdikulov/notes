---
date: 2025-07-20T17:49:32+03:00
created: 2024-03-17T00:00:00+03:00
tags:
  - blog
  - now_software
  - multimedia
sr-due: 2025-08-28
sr-interval: 49
sr-ease: 242
---

# cmus

My favorite [[my_music|music]] player.

## Views

cmus offers seven different views, which can be accessed using the `1-7` keys:

- **Library**, key is ==`1`== the default view mode, including two tabs (artists/albums and songs in currently selected album).
- **Sorted Library**, key is ==`2`==, which provides a playlist view allowing to jump to specific tracks (this view can be customized in view mode `6`)
- **Playlist**, key is ==`3`==, editable playlist
- **Play Queue**, key is ==`4`==, which displays the track queue
- **File Browser**, key is ==`5`==
- **Filters**, key is ==`6`==, a list of user-defined filters for the library
- **Settings**, key is ==`7`==, which displays key bindings and commands <!--SR:!2000-01-01,1,250!2000-01-01,1,250!2024-09-24,3,262!2000-01-01,1,250!2000-01-01,1,250!2000-01-01,1,250!2000-01-01,1,250-->

## Keyboard shortcuts

- ==`C-r`== toggle repeat current
- ==`s`== toggle shuffle
- ==`m`== toggles the "aaa mode." aaa stands for artist, album, or all. If artist mode is on cmus will shuffle only between songs by the playing artist. In album mode cmus will shuffle between songs on the playing album. If all mode is on, cmus will shuffle between every song in your library. You can see the currently set "aaa mode" in the bottom right, next to where the display of the continue, repeat, and shuffle settings.

- ==`v`== stop playback
- ==`b`== next track
- ==`z`== previous track
- ==`c`== pause playback
- ==`x`== restart current track
- ==`i`== jump view to the currently playing track (handy when in shuffle mode)
- ==`/`== searching cmus works as in many Unix programs. Typing slash, a string, and enter will find the first instance of that string in your library. Press `n` to go to the next string, `N` to go to the previous. cmus's search isn't case-sensitive and is quite smart; a search for damned insurrection will return Bulldozer's "Insurrection of the Living Damned" (rad tune).
- ==`-`== reduce the volume by 10%, aviable in status bar
- ==`+`== increase the volume by 10%, aviable in status bar
- ==`.`== seek 1 minute forward
- ==`,`== seek 1 minute backward
- ==`:add ~/Arts_and_Entertainment/music_raw/`== add all songs from directory

Check also `man cmus` or use view #7 in cmus.

## Playlist creation

How to create a playlist in cmus?
<br class="f">
Press `3`, then use this command `:pl-create main`

How to add a song to a playlist in cmus?
<br class="f">
Highlight playlist (view `#3`) and press `space` to mark it.\
Add songs using either of the following:

- Use command `:add -p ~/Arts_and_Entertainment/music_raw/`
- Use `y` key to add a song/album to the playlist from Library.
- Go to the "Sorted library view" by pressing 2
  - find artist / song / directory / etc. by searching with /
  - select the desired songs with space
  - press y to "copy tracks to the marked playlist"
- Import from line-separated file with paths `:pl-import ~/Arts_and_Entertainment/music_raw/playlist.txt`

## External links

- [ ] [cmus, a really quick guide](https://www.increasinglyadequate.com/cmus.html)

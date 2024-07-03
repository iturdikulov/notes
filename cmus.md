---
date: 2024-03-17
tags:
 - inbox
 - SR_productivity
sr-due: 2024-07-04
sr-interval: 3
sr-ease: 262
---

# cmus

My favorite [[my_music|music]] player.

## Useful keys

Check also `man cmus` and view #7 in cmus.

v::stop playback

b::next track

z::previous track

c::pause playback

s
&#10;
toggle shuffle (read about the m key below if you're going to use shuffle)
m- toggles the "aaa mode." aaa stands for artist, album, or all. If artist mode
is on cmus will shuffle only between songs by the playing artist. In album mode
cmus will shuffle between songs on the playing album. If all mode is on, cmus
will shuffle between every song in your library. You can see the currently set
"aaa mode" in the bottom right, next to where the display of the continue,
repeat, and shuffle settings.

x::restart track

i::jump view to the currently playing track (handy when in shuffle mode)

/::searching cmus works as in many Unix programs. Typing slash, a string, and enter will find the first instance of that string in your library. Press n to go to the next string, N to go to the previous. cmus's search isn't case sensitive and is quite smart; a search for damned insurrection will return Bulldozer's "Insurrection of the Living Damned" (rad tune).

-::reduce the volume by 10%

+::increase the volume by 10%

. seek +1m

, seek -1m

:add ~/music

## Views

cmus offers seven different views, which can be accessed using the 1-7 keys.
Here they are:

1::Library, the default view mode, including two tabs (artists/albums and songs in currently selected album)
2::Sorted Library, which provides a playlist view allowing to jump to specific tracks (this view can be customized in view mode 6
3::Playlist, editable playlist
4::Play Queue, which displays the track queue
5::File Browser
6::Filters, a list of user-defined filters for the library
7::Settings, which displays key bindings and commands

## External links

- [ ] [cmus, a really quick guide](https://www.increasinglyadequate.com/cmus.html)


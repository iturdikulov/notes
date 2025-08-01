---
created: 2023-06-16T00:00+03:00
tags:
  - blog
external:
  - https://ffmpeg.org/
sr-due: 2025-07-22
sr-interval: 3
sr-ease: 252
---

# FFmpeg - A complete, cross-platform solution to record, convert and stream audio and video.

> FFmpeg is the leading multimedia framework, able to decode, encode, transcode, mux, demux, stream, filter and play pretty much anything that humans and machines have created. It supports the most obscure ancient formats up to the cutting edge. No matter if they were designed by some standards committee, the community or a corporation. It is also highly portable: FFmpeg compiles, runs, and passes our testing infrastructure FATE across Linux, Mac OS X, Microsoft Windows, the BSDs, Solaris, etc. under a wide variety of build environments, machine architectures, and configurations.\
> — <cite>[FFmpeg](https://ffmpeg.org/about.html)</cite>

I widely use FFmpeg in various wrappers and sometimes directly. Best example is slightly modified [Luke Smith's](https://lukesmith.xyz/) [ffmpeg screen record script](https://raw.githubusercontent.com/LukeSmithxyz/voidrice/master/.local/bin/dmenurecord).

TODO: place my version here.

## [How to Add Chapters to MP4s with FFmpeg - Kyle Howells](https://ikyle.me/blog/2020/add-mp4-chapters-ffmpeg)

Get existing video metadata:

    ffmpeg -i INPUT.mp4 -f ffmetadata FFMETADATAFILE

Check there are no existing chapters. Watch the video, noting chapters into a `chapters.txt` file as you go. Place `FFMETADATAFILE`, `chapters.txt`, and the video file in the same directory.

chapters.txt example:

    0:23:20 Start
    0:40:30 First Performance
    0:40:56 Break
    1:04:44 Second Performance
    1:24:45 Crowd Shots
    1:27:45 Credits

Run the helper script to append chapters to `FFMETADATAFILE`:

    ffmpeg_chapters_generate

## Usage examples

Create a new video, copying the video and audio from the original without re-encoding:

    ffmpeg -i INPUT.mp4 -i FFMETADATAFILE -map_metadata 1 -codec copy OUTPUT.mp4
    # or
    for i in *.mkv; do ffmpeg -i "$i" -acodec copy -vcodec copy "${i%.*}.mp4"; done

Combine ffmpeg with fd, convert into specific video/audio codec

    fd -d 1 -e avi -x ffmpeg -i {} -vcodec libx264 -acodec aac {.}.mp4

Compine ffmpeg with fd, convert into h264_vaapi with hardware acceleration, vaapi, custom device:

    fd -d 1 -e avi -x ffmpeg -hwaccel vaapi -hwaccel_output_format vaapi -hwaccel_device /dev/dri/renderD128 -i {} -c:v h264_vaapi {.}_.mp4

---
date: 2023-06-18
tags:
  - inbox
  - research
  - SR_software
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 272
---

# Tachiyomi

> Tachiyomi is a free and open source manga reader for Android 6.0 and above. --
> [Tachiyomi](https://tachiyomi.org/)

## Local manga

Follow the steps below to create local manga.

1.  Create a folder named `local` in the `/Tachiyomi/` folder.
    - The `/Tachiyomi/` folder is located in the root of device's **internal
      storage** or **external SD card** and it's **not related** to the
      `eu.kanade.tachiyomi/` folder or the download location in the settings.
    - If you don't have a `/Tachiyomi/` folder located in the folders mentioned
      above, you can simply create it.
2.  Place correctly structured manga inside `/Tachiyomi/local/`.
    - Optional: If adding manga in folders, add a file named `.nomedia` to the
      local folder so images do not show up in the gallery
3.  You can then access the manga in Browse → **Local source**.

If you add more chapters then you'll have to manually refresh the chapter list
(by pulling down the list).

Supported chapter formats are folder with pictures inside (such as `.jpg`,
`.png`, etc), `ZIP`/`CBZ`, `RAR`/`CBR` and `EPUB`. But expect better performance
with directories and `ZIP`/`CBZ`.

While Tachiyomi does support chapters compressed as **RAR** or **CBR**, note
that **RAR** or **CBR** files using the **RAR5** format are not supported yet.

Remember to give the app storage permissions.

## Folder Structure

Tachiyomi requires a specific folder structure for local manga to be correctly
processed. Local manga will be read from the `Tachiyomi/local` folder. Each
manga must have a `Manga` folder and a `Chapter` folder. Images will then go
into the chapter folder. See below for more information on archive files. You
can refer to the following example:

Example (Folder)

```bash
- /sdcard/Tachiyomi/local
  - Manga title
    - ch1
    - ch2
  - ...

- /storage/18F5-2C11/Tachiyomi/local
  - Manga title
    - ch3
    - ch4
  - ...
```

Tachiyomi will see four chapters in a single manga. The path to the folder with
images must contain both the manga title and the chapter name (as seen above).

## Archive Files

Archive files such as `ZIP`/`CBZ` are supported but the folder structure inside
is not. Any folders inside the archive file are ignored. You must place the
archive inside the `Manga` folder where the name will become the `Chapter`
title. All images inside the archive regardless of folder structure will become
pages for that chapter.

Example (ZIP)

```sh
- /sdcard/Tachiyomi/local
  - Manga title
    - ch1.zip
    - ch2.zip
      - ch2
  - ...
```

## Editing local manga details

It is possible to add details to local manga. Like manga from other catalogs,
you add information about the manga such as the author, artist, description, and
genre tags.

To import details along with your local manga, you have to create a json file.
It can be named anything, but it must be placed within the **Manga** folder. A
standard file name is `details.json`. This file will contain the extended
details about the manga in the `JSON` format. You can see the example below on
how to build the file. Once the file is there, the app should load the data when
you first open the manga or you can pull down to refresh the details.

You can copy the following example and edit the details as needed:

```json
{
    "title": "Example Title",
    "author": "Example Author",
    "artist": "Example Artist",
    "description": "Example Description",
    "genre": ["genre 1", "genre 2", "etc"],
    "status": "0",
    "_status values": ["0 = Unknown", "1 = Ongoing", "2 = Completed", "3 = Licensed", "4 = Publishing finished", "5 = Cancelled", "6 = On hiatus"]
}
```

If you don't want to manually create the `details.json` file, you can
alternatively use
[Tachiyomi Local Source JSON Generator](https://tachi-local.netlify.app/?utm_source=tachi-website&utm_medium=referral&utm_campaign=tachi-website)

It is also possible to use a custom image as a cover for each local manga.

To do this, you only need to place the image file, that needs to be named
`cover.jpg`, in the root of the manga folder. The app will then use your custom
image in the local source listing.
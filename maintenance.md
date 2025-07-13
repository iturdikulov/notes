---
created: 2024-11-10T00:00+03:00
tags:
  - blog
sr-due: 2025-07-12
sr-interval: 2
sr-ease: 187
---

# Maintenance

> The routine recurring work required to keep a facility in such condition that
> it may be continuously used, at its original or designed capacity and
> efficiency for its intended purpose.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Maintenance)</cite>

I store tasks, which I need to check constantly, in this file. This helps me to
reduce chaos in my life (at least digital) with this maintenance tasks, I also
collect all my techniques and tools information in this note.

Main goal for maintenance is keep my stuff in some organized state and reduce
entropy with Negentropy.

> Negentropy is reverse entropy. It means things becoming more in order. By
> 'order' is meant organization, structure and function: the opposite of
> randomness or chaos. One example of negentropy is a star system such as the
> Solar System. Another example is life.\
> — <cite>[Simple English Wikipedia](https://simple.wikipedia.org/wiki/Negentropy)</cite>

## Files and directories

Check existence, remove not required files (into Trash first), optimize
filenames, etc.

- Directories - `~/Downloads`, `~/*`
- Maintenance [[my_backup_plan|backups]] - mount and test.
- SSH/GPG keys
- [[pass]]
- `external`, `file`, `directory` frontmatter variables in [[Zettelkasten]]
  files are isn't broken.
- My projects have `README.md` file.
- Broken, empty and  orphaned files from [[Obsidian]], generated with plugin

- Edit and organize my photos and pictures, movies, games and software.
  [[my_pictures]], [[my_movies]], [[my_games]], [[my_awesome_software_list]]

## OS

Need to verify some loges, units, etc. for my [[OS]].

- Backup state - `journalctl -u borgbackup-job-home-inom.service`
- System logs - `journalctl -p warning -b`
- Failed units - `systemctl list-units --failed && systemctl --user list-units --failed`
- Kernel messages - `journalctl --list-boots`, `journalctl --boot=0 --priority=4`
- Clean-up [[Docker]] containers (carefully, maybe something will be lost!) -
`docker system prune; docker volume prune`.
- Broken symlinks `fd -L -t l`.
- Enger to the BIOS: `systemctl reboot --firmware-setup` (`shutdown /r /t 0
  /fw` in Windows).

## Programs and services

- [[spaced_repetition|Spaced repetition]] - review flashcards tags, notes with
  this system.
- [[Calibre]] - optimize tags, fill books metadata.
- [[my_awesome_software_list|Software]] - review and update.
- [[search_engine|Search engines]] - review and update.

- [[dotfiles]] configuration - save configuration not stored in dotfiles, commit
  all changes, verify agenix files, push to remote.
- [[Neovim]] configuration - commit all changes, push to remote.

- Firefox profiles settings verify (`about:config`), at least
`browser.sessionstore.interval`.

## IRL

- Videos and pictures workflow

- [[calendar|Calendar]] - check completed events, save some information.
- [[contacts|Contacts]] - remove old contacts, update entries if required.

- Audio notes (mobile/tablet). Maybe I find some plugin in obsidian, which
support audio to text conversion or build some workflow.
- [[how_do_I_sync_my_data|Sync my data]].

### General cleaning

- Get ready: gather tools, rags, supplies, work area.
- Dust: carpets, tables, ventilation, chandeliers, light bulbs, curtains,
  blinds, furniture, frames, electrical appliances, shelves, books, paintings
  and other surfaces.
- Stains: monitors, furniture, wallpaper, carpets,
- Wash and/or wipe: window sills, windows, door handles and switches
- Floor, baseboards: vacuum or sweep, wash
- Wash: blankets and throws
- Furniture: necessary care, supplies, move and wash the floor underneath.

### Bathroom and toilet cleaning

- Clean: taps, shower head, grout, bathtub deposits, sink.
- Wash: shower stall, cabinets inside and outside, mirrors, curtain, toilet.

### Kitchen cleaning

- Clean: stove top, burners, knobs, oven inside, microwave.
- Dust: hood, refrigerator, move refrigerator and wipe dust.
- Wash: sink and taps, hood grill, refrigerator, cabinets,
dishwasher (wash cycle with vinegar).

## Hardware

- [EIZO ](https://www.eizo.be/monitor-test/) - Online monitor quality test,
  including tests to detect broken pixels, brightness and contrast test, etc.
- [Dead-pixel check](http://lcdtech.info/en/tests/dead.pixel.htm)
- [UFO Test](https://www.testufo.com/framerates-text) - Vertical scrolling text,
  useful to test FPS.
- [Keyboard Tester](https://www.keyboardtester.com/tester.html)
- [Free Online Audio Tests, Test Tones and Tone Generators](https://www.audiocheck.net/)


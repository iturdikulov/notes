---
date: 2023-03-12
tags:
  - inbox
  - outline
  - productivity
---

# Maintenance

> Functional checks, servicing, repairing or replacing of necessary devices,
> equipment, machinery, building infrastructure, and supporting utilities in
> industrial, business, and residential installations. Over time, this has come
> to include multiple wordings that describe various cost-effective practices to
> keep equipment operational; these activities occur either before or after a
> failure.
>
> Any activity—such as tests, measurements, replacements, adjustments, and
> repairs—intended to retain or restore a functional unit in or to a specified
> state in which the unit can perform its required functions.
>
> All action taken to retain material in a serviceable condition or to restore
> it to serviceability. It includes inspections, testing, servicing,
> classification as to serviceability, repair, rebuilding, and reclamation.
>
> All supply and repair action taken to keep a force in condition to carry out
> its mission.
>
> The routine recurring work required to keep a facility (plant, building,
> structure, ground facility, utility system, or other real property) in such
> condition that it may be continuously used, at its original or designed
> capacity and efficiency for its intended purpose.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Maintenance)</cite>

Here I collect all my maintenance tasks/techniques/tools.

- Maintenance downloads (remove old files, etc...)
- Maintenance backups (weekly check)

## Hardware maintenance

Here I collect resources to maintenance my hardware. Mostly
[[Computer|computer]] hardware.

- [EIZO monitor test](https://www.eizo.be/monitor-test/)
- [UFO Test: Vertical Scrolling Text](https://www.testufo.com/framerates-text)
- [Atrise Lutcurve - Визуальная калибровка дисплея](http://www.atrise.com/lutcurve/ru/)
- [Keyboard Tester](https://www.keyboardtester.com/tester.html)
- [Dead-pixel check](http://lcdtech.info/en/tests/dead.pixel.htm)
- [iFixit](https://www.ifixit.com/)
- [Free Online Audio Tests, Test Tones and Tone Generators](https://www.audiocheck.net/)

## Inbox

Here I collect various inbox directories and services, which I need to check
regularly. Main goal is get rid of entropy and use only 3 inboxes. But currently
it's what I have:

- Review [[Dataview_maintenance_queries|dataview]] note.
- Telegram saved messages, need to replace with something else. Can be replaced
with Firefox bookmarks.
- [[Firefox]] bookmarks (mobile/desktop).
- Wiki inbox directory.
- Cloud storage directories (need to do initial clean).
- Downloads directory (mobile/desktop/tablet).
- My old literature inbox: `~/Arts_and_Entertainment/literature/inbox/` need to
clean-up.
- Audion notes (mobile/tablet). Maybe I find some plugin in obsidian, which
support audio to text conversion or build some workflow.
- RNR tasks in [[Taskwarrior|taskwarrior]] and `project:inbox` tasks. Handled by
taskwarrior CLI.
- [[How_do_I_sync_my_data|Sync my data]].

## Wiki clean-up, find "bad files" with [[Ripgrep]] commands

- `rg --files-with-matches -U tags\:\\n-|xargs vi`, find incorrect formatting
tags

### Related

- Calendar events
- Contacts
- Emails (all my inboxes)
- Passwords
- SSH/GPG keys

## Monitoring

- [ ] base monitoring setup
- [ ] how inform about problems? (email, telegram, etc...)
- [ ] backup monitoring setup
- [ ] better arch maintenance script, add `iotop`?

## Other

- [This to That, how glue things to other things](http://www.thistothat.com/)
- [[Dataview_maintenance_queries|Dataview maintenance]], maintenance my
[[Zettelkasten]] system.

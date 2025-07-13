---
created: 2023-03-12T00:00+03:00
tags:
  - blog
sr-due: 2025-09-17
sr-interval: 69
sr-ease: 245
---

# Touch typing

> Touch typing (also called blind typing, or touch keyboarding) is a style of
> typing.
>
> Although the phrase refers to typing without using the sense of sight to find
> the keys—specifically, a touch typist will know their location on the keyboard
> through muscle memory.
>
> The term is often used to refer to a specific form of touch typing that
> involves placing the eight fingers in a horizontal row along the middle of the
> keyboard (the home row) and having them reach for specific other keys. (Under
> this usage, typists who do not look at the keyboard but do not use home row
> either are referred to as hybrid typists.) Both two-handed touch typing and
> one-handed touch typing are possible.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Touch_typing)</cite>

Currently, I have around 70-90 WPM [^1] in [[English]] ([[Colemak_Mod-DH]]) and
60-70 in [[Russian]] (ИЙЦУКЕН, 😥 it's my native language).

For training, I use [ttyper](https://github.com/max-niederman/ttyper). Which
support custom lessons from text files, here is mine:

- [Special Characters](./touch_typing/special_characters.txt)
- [Python Data Class source code](./touch_typing/dataclasses.txt)

I use following commands to train:

```
shuf touch_typing/<lesson_file_name>|ttyper -
```

## Typing games

- Epistory - Typing Chronicles
  [Steam](https://store.steampowered.com/app/398850/Epistory__Typing_Chronicles/)
- [TyprX](https://www.typrx.com/)
- [Nitro Type](https://www.nitrotype.com/)
- [TypeRacer](https://play.typeracer.com/)
- [ZTYPE](https://zty.pe/)
- [Keyboard Jump](https://www.typing.com/student/game/keyboard-jump)

[^1]: WPM - words per minute, CPM - characters per minute. WPM calculation:
$wpm = cpm / 5$.

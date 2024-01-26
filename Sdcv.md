---
date: 2023-08-20
external: https://github.com/Dushistov/sdcv
tags:
  - inbox
  - SR_software
sr-due: 2024-07-10
sr-interval: 167
sr-ease: 329
---

# sdcv

> sdcv is a simple, cross-platform, text-based utility for working with
> dictionaries in StarDict format.\
> — <cite>[sdcv](https://github.com/Dushistov/sdcv)</cite>

## Ordering dictionaries

For example, you can run:

```
$ sdcv -l
Dictionary's name   Word count
oxford    43808
Merriam-Webster's Collegiate    119769
```

you take the first column of output, in other words Dictionary's name,
and put it to ~/.sdcv_ordering line by line:

```sh
# optimal dictionary ordering: Apersyan, Lingvo Universal, Motitsky, Babylon,
# etc
$ cat ~/.sdcv_ordering
Merriam-Webster's Collegiate
oxford
$
```

that's all, at the next run of sdcv, for example sdcv man you get at first
translation from Merriam-Webster's Collegiate and after that from oxford
dictionary and after that all other translations.

## References

- [Index of /Recommend/ dictionaries](https://downloads.freemdict.com/Recommend/)
- [Словариум — Словари для компьютеров и смартфонов](https://dic.1963.ru/)

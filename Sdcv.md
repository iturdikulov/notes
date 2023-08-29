---
date: 2023-08-20
sr-due: 2023-08-25
sr-ease: 230
sr-interval: 1
tags:
- inbox
- software
---

# sdcv

> sdcv is a simple, cross-platform, text-based utility for working with
dictionaries in StarDict format.\
> — <cite>[sdcv](https://github.com/Dushistov/sdcv)</cite>


## Ordering

For example, you can run:

```
$ sdcv -l
Dictionary's name   Word count
oxford    43808
Merriam-Webster's Collegiate    119769
```

you take the first column of output, in other words Dictionary's name,
and put it to ~/.sdcv_ordering line by line:

```
$ cat ~/.sdcv_ordering
Merriam-Webster's Collegiate
oxford
$
```

that's all, at the next run of sdcv, for example sdcv man you get at first
translation from Merriam-Webster's Collegiate and after that from oxford
dictionary and after that all other translations.
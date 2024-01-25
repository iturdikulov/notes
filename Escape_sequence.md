---
date: 2022-12-28
tags:
  - inbox
---

# Escape sequences

Combination of characters, which meaning something other than the literal
characters contained therein.

Usually 2 characters, one is preceding and second is actual character (which
explain that escape sequence).

In C escape sequence is one character (`char` integer type), which is preceded
by backslash.

## Escape sequences in C

```c
printf("\a - alert (bell) character");
printf("\b - backspace");
printf("\f - page break (form feed)");
printf("\n - new line");
printf("\r - carriage return");
printf("\t - horizontal tab");
printf("\v - vertical tab");
printf("\\ - backslash");
printf("\? - question mark");
printf("\' - apostrophe (single quote)");
printf("\" - double quote");
printf("\d - integer");
printf("\014 - the byte, octal number");
printf("\x14 - the byte, hexdecimal number");
printf("\u02E6 - unicode code point below 10000 hexdecimal\n");
printf("\U000002E6 - unicode code point, 8 hexdecimal digits");
```

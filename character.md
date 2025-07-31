---
created: 2025-02-19T22:26+03:00
tags:
  - blog
  - now
  - computer_programming_science
sr-due: 2025-07-25
sr-interval: 4
sr-ease: 211
---

# Character (computing)

> Internal representation of a single character (symbol, sequence of one or more bytes) used within a computer or system.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Character_(computing))</cite>

What represent character in [[computer]]?
<br class="f">
Characters represent letters of the alphabet, punctuation, or other symbols (synonym for code point). <!--SR:!2025-02-27,3,250-->

Example of characters can be found in [[ASCII]] note.

Characters are typically combined into ==[[string|strings]]==. <!--SR:!2025-03-04,8,250-->

Historically character can be used to denote contiguous [[bit|bits]], size of character was various: 4, 5, 6, **8 bits (most popular)**. How modern systems implement characters?
<br class="f">
All modern systems use a varying-size sequence of these fixed-sized pieces, for instance UTF-8 uses a varying number of 8-bit code units to define a "code point" and [[Unicode]] uses varying number of _those_ to define a "character". <!--SR:!2025-02-25,1,210-->

## Character sets, coded character sets, and encodings

Some notes from great w3.org character encodings article[^1].

A coded character set (unlike a character set) is a mapping, when each character assigned to unique ==number==.

Units of a coded character set are known as code ==points==, which represents the position of a character. For example, code point for the letter `á` in the Unicode coded character set is `225` in decimal, or `0xE1` in hexadecimal notation.

How to character encoding connected with coded character set?
<br class="f">
The character encoding reflects **the way** the coded character set is mapped to bytes for manipulation in a computer, some like characters ↔ bytes.
![[./img/character_encoding_process.excalidraw|Diagram of character encoding process for Unicode]]
_The process of character encoding_

Is alphabet character always referring to single code point in Unicode?
<br class="f">
Actually no, for **user-perceived character** (alphabet the smallest component) in complex scenario may actually be a sequence of code points. For example, the Vietnamese letter `ề` will be perceived as a single letter even if the underlying code point sequence is `U+0065 LATIN SMALL LETTER E` + `U+0302
COMBINING CIRCUMFLEX ACCENT` + `U+0300 COMBINING GRAVE ACCENT`.

What is a grapheme cluster in Unicode?
<br class="f">
A grapheme cluster is a collection of symbols that together represent an individual character that the user will see within a string on the screen. Sometimes need to use multiple grapheme clusters to represent one character (ক্ষ).

What is the relationship between glyphs and code points in a font system?
<br class="f">
A [[font]] can be described as collection of glyphs. In simple scenario, a glyph is the visual representation of a code point. In fact, more than one glyph may be used to represent a single code point, and multiple code points may be represented by a single glyph (emoji character for "family" 👨‍👩‍👧‍👧).

[^1]: [Character encodings: Essential concepts](https://www.w3.org/International/articles/definitions-characters/)

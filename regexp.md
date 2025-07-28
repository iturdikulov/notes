---
created: 2023-04-17T00:00+03:00
tags:
  - blog
  - now
  - computer_programming
external:
  - https://github.com/ziishaned/learn-regex
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 228
---

# Regular expression (regex, RegExp, rational expression)

Group of characters used to find a specific pattern in a text. Search is done from left to right.

> Sequence of characters that specifies a match pattern in text. Usually such patterns are used by string-searching algorithms for "find" or "find and replace" operations on strings, or for input validation. Regular expression techniques are developed in theoretical [[computer_science]] and formal language theory.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Regular_expression)</cite>

Typical use-case of regex is replacing text within a string, validate forms inputs, extract a substring from string, etc.

For example, the regular expression `^[a-z0-9_-]{3,15}$`, with it, we can accept the strings `john_doe`, `jo-hn_doe` and `john12_as`.

It does not match `Jo` because that string contains an uppercase letter, and it is too short. And it's one of problem with regex, you need to **know all edge cases** for name, `Jo` can be valid name! So need to use regex very carefully.

![[img/regexp_example.excalidraw|Username regular expression example]]
_Example of a regular expression_

Lines started with `/` in examples are inviting you to test regex expression in [[Neovim]] with search command. For improve interactivity experience need to configure some options (if they aren't default ones):

```vim
:setlocal hlsearch
:nnoremap <silent> <cr> :noh<cr><cr>

:setlocal noignorecase
:setlocal nosmartcase
```

If you need to search in Neovim visual selections, use `\%V` prefix:

```vim
/\%Vfoo
```

## 1. Basic matchers

A regular expression is just a pattern of characters that we use to perform a search in a text. For example, the regular expression `the` means:
<br class="f">
Search the letter `t`, followed by the letter `h`, followed by the letter `e`.
```
/the or /The
The fat cat sat on the mat.
```

The regular expression `123` matches the string ==`123`==. Regular expressions are normally case-sensitive so the regular expression `The` would not match the string `the`.

## 2. Meta characters

Meta characters - special characters which do not stand for themselves but instead are ==interpreted== in some special way. The meta characters are as follows:

- `.` - Period matches any single character except a ==line break==.
- `[a]` - Character class, matches ==any character== contained between the square brackets.
- `[^a]` - Negated character class. Matches any character that ==is not contained== between the square brackets.
- `-` - Matches 0 or more repetitions of the ==preceding== symbol, outside certain contexts (character set for example, `[aA-zZ]`) have not special meaning.
- `*` - Matches 0 or more repetitions of the ==preceding== symbol (greedy).
- `?` - Makes the preceding symbol ==optional==.
- `{n,m}` - Braces. Matches at ==least `n` but not more than `m`== repetitions of the preceding symbol.
- `(xyz)` - Character group. Matches the characters `xyz` in that ==exact order==.
- `|` - Alternation. Matches either the characters ==before or the characters after the symbol==.
- `\` - ==Escapes== the next character. This allows you to match reserved characters `[ ] ( ) { } . * + ? ^ $ \ |`
- `^` - Matches the ==beginning== of the input.
- `$` - Matches the ==end== of the input.

### 2.1 The full stop meta character

The meta character `.` matches any single character. It will not match ==return or newline characters==. For example, the regular expression `.ar` means: any character, followed `ar` sequence.
```
/.ar
The car parked in the garage.
```

### 2.2 Character sets

Character sets are also called character classes. Square brackets are used to specify character sets. Use a ==hyphen== inside a character set to specify the characters' range.

The order of the character range inside the square brackets ==doesn't matter==.

For example, the regular expression `[Tt]he` means:
<br class="f">
Find words that start with `T` or `t` followed by `he` sequence.

The regular expression `ar[.]` means:
<br class="f">
`ar` sequence followed by a period (`.`) character.
```
/[Tt]he
/[ce.]
The car parked in the garage.

"ar[.]"
A garage is a good place to park a car.
```

A period (`.`) inside a character set, however, means a ==literal period==.

Negated Character Sets in general, the caret symbol `^` represents the start of the string, but when it is typed after the opening square bracket it ==negates== the character set.

For example, the regular expression `[^c]ar` means: ==any== character except `c`, followed by `ar` sequence.
```
/[^c]ar
The car parked in the garage.
```

### 2.3 The star repetition

The `*` symbol matches zero or more repetitions of the ==preceding== matcher.

The regular expression `a*` means: zero or more repetitions of the preceding lowercase character `a`. But if we place it after a character set or class, then it finds the repetitions of the ==whole== character set. For example, the regular expression `[a-z]*` means: any number of lowercase letters in a row.
```
/[a-z]*
The car parked in the garage #21.
```

The `*` symbol can be used with the meta character `.` to match ==any== string of characters `.*`.

The `*` symbol can be used with the whitespace character `\s` to match a string of ==whitespace== characters.

For example, the expression `\s*cat\s*` means: zero or more spaces, followed by a lowercase `c`, followed by a lowercase `a`, followed by a lowercase `t`, followed by zero or more spaces.
```
/\s*cat\s*
The fat cat sat on the concatenation.
```

### 2.3 The plus repetition

The `+` symbol matches ==one or more repetitions== of the preceding character.

For example, the regular expression `c.+t` means: a lowercase `c`, followed by at least one character, followed by a lowercase `t`. It needs to be clarified that`t` is the last `t` in the sentence. In vim need to escape `+`.
```
/c.\+t
The fat cat sat on the mat.
```

### 2.4 The question mark

In regular expressions, the meta character `?` makes the preceding character ==optional==.

This symbol matches zero or one instance of the preceding character. For example, the regular expression `[T]?he` means: Optional uppercase `T`, followed by a lowercase `h`, followed by a lowercase `e`. In vim need to escape `?`.
```
/[T]\?he
The car is parked in the garage.
```

### 2.5 Braces

In regular expressions, braces (also called quantifiers) are used to specify the number of times that a character or a group of characters can be ==repeated==.

For example, the regular expression `[0-9]{2,3}` means: Match at least 2 digits, but not more than 3, ranging from 0 to 9. In vim need to escape `{` and `}`. We can leave out the second number. For example, the regular expression `[0-9]{2,}` means: Match 2 or more digits. If we also remove the comma, the regular expression `[0-9]{3}` means: Match exactly 3 digits.
```
/[0-9]\{2,3\}
The number was 9.9997 but we rounded it off to 10.0.

/[0-9]\{2,\}
The number was 9.9997 but we rounded it off to 10.0.
```

### 2.6 Capturing and non-capturing groups

A capturing group is a group of ==subpatterns== that is written inside parentheses `(...)`.

As discussed before, in regular expressions, if we put a quantifier after a character then it will repeat the preceding character. But if we put a quantifier after a capturing group then it repeats the ==whole capturing group==.

For example, the regular expression `(ab)*` matches zero or more repetitions of the character "ab". We can also use the alternation `|` meta character inside a capturing group. For example, the regular expression `(c|g|p)ar` means: a lowercase `c`, `g` or `p`, followed by `a`, followed by `r`. In vim need to escape `|`, `(` and `)`.
```
/\(c\|g\|p\)ar
The car is parked in the garage.
```

Note that capturing groups do not only match, but also capture, the characters for use in the parent language. The parent language could be Python or JavaScript or virtually any language that implements regular expressions in a function definition.

A non-capturing group is a capturing group that matches the characters but ==does not capture the group==. A non-capturing group is denoted by a `?` followed by a `:` within parentheses `(...)`.
For example, the regular expression `(?:c|g|p)ar` is similar to `(c|g|p)ar` in that it matches the same characters but will not create a capture group.
```
TODO: non-capturing group in vim
/\(?:c\|g\|p\)ar
The car is parked in the garage.
```

Non-capturing groups can come in handy when used in find-and-replace functionality or when mixed with capturing groups to keep the overview when producing any other kind of output. See also [[#4. Lookarounds]]

### 2.6 Alternation

In a regular expression, the vertical bar `|` is used to define alternation. Alternation is like an OR statement between multiple expressions. Now, you may be thinking that character sets and alternation work the same way. But the big difference between character sets and alternation is that character sets work at the character level but alternation works at the ==expression== level.

For example, the regular expression `(T|t)he|car` means: either (an uppercase `T` or a lowercase `t`, followed by a lowercase `h`, followed by a lowercase `e`) OR (a lowercase `c`, followed by a lowercase `a`, followed by a lowercase `r`). Note that I included the parentheses for clarity, to show that either expression in parentheses can be met and it will match.
```
/\(T\|t\)he\|car
The car is parked in the garage.
```

### 2.7 Escaping special characters

A backslash `\` is used in regular expressions to ==escape== the next character. This allows us to include reserved characters such as `{ } [ ] / \ + * . $ ^ |
?` as matching characters. To use one of these special character as a matching character, prepend it with `\`.

For example, the regular expression `.` is used to match any character except a newline. Now, to match `.` in an input string, the regular expression `(f|c|m)at\.?` means: a lowercase `f`, `c` or `m`, followed by a lowercase `a`, followed by a lowercase `t`, followed by an optional `.` character.

```
/\(f\|c\|m\)at\.?
The fat cat sat on the mat.
```

### 2.8 Anchors

In regular expressions, we use ==anchors== to check if the matching symbol is the starting symbol or ending symbol of the input string.

Anchors are of two types:

- Caret `^` that checks if the matching character is the first character of the input.
  - `^a` match line start with `a`.
  - `^(T|t)he` match line start with `The` or `the` (first char `t` or `T`, then `he`).
- Dollar sign `$` which checks if a matching character is the last character of the input string.
  - `(at\.)$` matches `at.` in the end of the string.
  - `/\(T\|t\)he` The car is parked in the garage. 
  - `/\(at\.\)$` The fat cat. sat. on the mat.

## 3. Shorthand character sets

There are a number of convenient shorthand's for commonly used character sets/ regular expressions:

TODO: test with some regex test tool.

- `.`:<wbr class="f"> Any character except new line
- `\w`:<wbr class="f"> Matches alphanumeric characters: `[a-zA-Z0-9_]`
- `\W`:<wbr class="f"> Matches non-alphanumeric characters: `[^\w]`
- `\d`:<wbr class="f"> Matches digits: `[0-9]`
- `\D`:<wbr class="f"> Matches non-digits: `[^\d]`
- `\s`:<wbr class="f"> Matches whitespace characters: `[\t\n\f\r\p{Z}]`
- `\S`:<wbr class="f"> Matches non-whitespace characters: `[^\s]`

## 4. Lookarounds

`Lookbehinds` and `lookaheads` (also called `lookarounds`) are specific types of ==non-capturing== groups, they are used to match a pattern but without including it in the matching list.

Lookarounds are used when a pattern must be preceded or followed by another pattern (something before or after your match).

Example: get all numbers that are preceded by the `$` character from the string `$4.44 and $10.88`, we use `(?<=\$)[0-9\.]*` regular expression. Get all the numbers which contain the `.` character and are preceded by the `$` character.

These are the lookarounds that are used in regular expressions:

- `?=` lookahead:<wbr class="f"> positive lookahead
- `?!` lookahead:<wbr class="f"> negative lookahead
- `?<=` lookbehind:<wbr class="f"> positive lookbehind
- `?<!` lookbehind:<wbr class="f"> negative lookbehind

### 4.1 Positive lookahead

The positive lookahead asserts that the ==first part== of the expression `A`, must be followed by the lookahead expression `B`, `A(?=B)`.

The returned match only contains the text that is matched by the first part of the expression. To define a positive lookahead, parentheses are used. Within those parentheses, a question mark with an equals sign is used like this: `(?=...)`.

The lookahead expressions is written after the equals sign inside parentheses. For example, the regular expression `(T|t)he(?=\sfat)` means: match either a lowercase `t` or an uppercase `T`, followed by the letter `h`, followed by the letter `e`. In parentheses, we define a positive lookahead which tells the regular expression engine to match `The` or `the` only if it's followed by the space character and word `fat`.

```sh
echo 'The fat cat sat on the mat.'|rg -Po '[T|t]he(?=\sfat)'
# `The`
```

### 4.2 Negative lookahead

Negative lookaheads are used when we need to get all matches from an input string that are ==not followed by== a certain pattern.

A negative lookahead is written the same way as a positive lookahead. The only difference is, instead of an equals sign ==`=`==, we use an exclamation mark `!` to indicate negation i.e. `(?!...)`.

Let's take a look at the following regular expression `(T|t)he(?!\sfat)` which means: get all `The` or `the` words from the input string that are not followed by a space character and the word `fat`.

```sh
echo 'The fat cat sat on the mat.'|rg -Po '[T|t]he(?!\sfat)'
```

### 4.3 Positive lookbehind

Positive lookbehind's are used to get ==all the matches== that are preceded by a specific pattern.

Positive lookbehind's are written `(?<=...)`. For example, the regular expression `(?<=(T|t)he\s)(fat|mat)` means: get all `fat` or `mat` words from the input string that come after the word `The` or `the`.

```sh
echo 'The fat cat sat on the mat.'|rg -Po '(?<=[T|t]he\s)(fat|mat)'
```

### 4.4 Negative lookbehind

Negative lookbehind's are used to get all the matches that are ==not preceded== by a specific pattern.

Negative lookbehind's are written `(?<!...)`. For example, the regular expression `(?<!(T|t)he\s)(cat)` means: get all `cat` words from the input string that are not after the word `The` or `the`.

```sh
echo 'The cat sat on cat.'|rg -Po '(?<![T|t]he\s)(cat)'
```

## 5. Flags

Flags are also called modifiers because they modify the output of a regular expression. These flags can be used in any order or combination, and are an integral part of the RegExp.

| Flag | Description                                             |
| :--: | ------------------------------------------------------- |
| `i`  | Case insensitive: Match will be case-insensitive.       |
| `g`  | Global Search: Match all instances, not just the first. |
| `m`  | Multiline: Anchor meta characters work on each line.    |

### 5.1 Case insensitive flag

The `i` modifier is used to perform ==case-insensitive== matching.

For example, the regular expression `/The/gi` means: an uppercase `T`, followed by a lowercase `h`, followed by a `e`. And at the end of regular expression the `i` flag tells the regular expression engine to **ignore the case**. As you can see, we also provided `g` flag because we want to search for the pattern in the whole input string.

```sh
# We use rigpgrep options for /gi flags
echo 'The fat cat sat on the mat.'|rg --ignore-case -oP 'The'
```

### 5.2 Global search flag

The `g` modifier is used to perform a ==global== match (finds all matches rather than stopping after the first match).

For example, the regular expression`/.(at)/g` means: any character except a new line, followed by a lowercase `a`, followed by a lowercase `t`. Because we provided the `g` flag at the end of the regular expression, it will now find all matches in the input string, not just the first one (which is the default behavior).

```sh
printf "The fat cat sat on the mat."|rg -Po '.(at)'
```

### 5.3 Multiline flag

The `m` modifier is used to perform a ==multi-line== match.

Anchors `(^, $)` are used to check if a pattern is at the beginning of the input or the end. But if we want the anchors to work on each line, we use the `m` flag.

For example, the regular expression `/at(.)?$/gm` means: a lowercase `a`, followed by a lowercase `t` and, optionally, anything except a new line. And because of the `m` flag, the regular expression engine now matches patterns at the end of each line in a string.

"/.at(.)?$/gm" => The fat cat sat on the mat. [Test the regular expression](https://regex101.com/r/E88WE2/1)

```sh
output="The fat\n"
output+="cat sat\n"
output+="on the mat.\n"
printf "$output"|rg --multiline -Po '.at(.)?$'
```

## 6. Greedy vs lazy matching

By default, a regex will perform a greedy match, which means the match will be as long as possible. We can use `?` to match in a lazy way, which means the match should be as short as possible.

```sh
echo 'The fat
cat sat
on the mat.' > /tmp/rgt
cat /tmp/rgt|rg -Po '.at(.)?$'
```

The key information source of this note content taken from [Learn regex the easy way](https://github.com/ziishaned/learn-regex) repo.

## External links

- [i Hate Regex - The Regex Cheat Sheet](https://ihateregex.io/)
- [regex101: build, test, and debug regex](https://regex101.com/)
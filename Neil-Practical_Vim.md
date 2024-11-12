---
author: Drew Neil
date: 2015
directory: ~/Computer/software/Neil-Practical_Vim
tags:
  - inbox
  - productivity
sr-due: 2024-02-23
sr-interval: 29
sr-ease: 206
---

# Practical Vim: Edit text at the speed of thought

My notes are based on this book + Neovim.

# Cover \1

Coves not great... I also see some artifacts in styling. But content is good.

# Table of Contents \7

Quickly checked it, looks like worth reading.

# Acknowledgments \13

Thanks + contains some story about author's life.

# Foreword to the First Edition \16

# Read Me \17

Practical Vim is for programmers who want to raise their game.

This book focusing on Vim's core features.

## How This Book Is Structured \17

Practical Vim is a recipe book. It's not designed to be read in sequence, you
can read any chapter. Tips can be cross-referred or self-contained.

## A Note on the Examples \18

Many actions in vim can be done in many ways, if you thinking something can be
done faster it can be true, so author just show specific ways, and maybe later
describe how do things with other way.

## Learn to Touch Type, Then Learn Vim \18

Haha... So I probably fit to this (~~only 50wpm right now~~, about 70+wpm, after
I switched from QWERTY to Colemak-DH).

In Vim, everything can be done with keyboard. And for touch typist, that means
Vim does everything faster.

# Read the Forgotten Manual \19

This book more focusing on practices. So need to do examples, rather than read.

## Get to Know Vim's Built-in Documentation \19

How to open vim tutor built-in documentation, interactive tutor?::`:h vimtutor`,
`:Tutor`

Built-in ℹ️ icons in this book are linked to documentation.

## Notation for Simulating Vim on the Page \20

Describe how keybindings working in Vim. Vim combine chords and keybindings with
modifiers.

Get help about key-notations::`:h key-notation`

Here also good example how to represent keystrokes with ranges of keys,
modifiers, etc. `f{char}`, `m{a-zA-Z}`, etc...

## Downloading the Examples \24

Book contains linked examples, so you can download them and play with them.

## Use Vim's Factory Settings \24

To open vim with default settings run this command ==`vim -u NONE -N`==. -N flag
here reverts vi compatible mode (_nocompatible_). Set nocompatible is completely
ignored in nvim, +1 reason to use it 🤔. But butter just use blank `init.lua`
file, to enable built-in plugins.
<!--SR:!2023-06-05,1,239-->

## On the Role of Vim Script \25

This book not about `Vim Script`, but it's used widely across the material.

## On Vim Versions \26

How get vim version and health status of current neovim instance, including
plugins?
&#10;<br>
`:checkhealth`, but it can be slow!

---

# 1. The Vim Way \28

If you know how to craft useful actions using vim, you can reuse them and repeat
effectively.

Big Vim brother is watching you.

## Tip 1. Meet the Dot Command \28

Dot command is sort of "micro" macro.

Dot command help::`:h .`.
<!--SR:!2023-06-07,3,258-->

Test snippet:
```text
Line one
Line two
Line three
Line four
```

`x`::Delete character under cursor.

`u`::Undo.

`dd`::Delete current line.
<!--SR:!2023-06-07,3,266-->

`.`::repeat last command, for example deletion

`>{motion}`::Increase indentation depending on motion.

`>G`
&#10;<br>
Increase indentation from the current line until the end of the file (in
Markdown until section?). You can repeat this command, go down 1 line and press
`.` key.

`>}`::Increase indentation for paragraph forward.

Do vim record keystrokes if we enter insert mode and type something?
&#10;<br>
Yes, we can even repeat or paste these keystrokes - `.`, `".p`
<!--SR:!2023-06-08,3,258-->

## Tip 2. Don't Repeat Yourself \31

DRY - ==Don't Repeat Yourself==.

Difference between `i` and `a`?
&#10;<br>
`i` insert before cursor, `a` insert after cursor.

`$`::Move to the end of the line.

`a;`::Insert semicolon after cursor.

Test snippet:
```javascript
var foo = 1
var bar = "a"
var foobar = foo + bar
```

How run normal mode commands across a range?::use `:normal` command.
<!--SR:!2023-06-05,1,238-->

`C`::Change to the end of the line and set insert mode.

`s`::Delete character under cursor and set insert mode.

`S`::Delete current line and set insert mode.

`I`::Insert at the beginning of the line.

`A`::Insert at the end of the line.

`o`::Insert new line below current line and set insert mode.

`O`::Insert new line above current line and set insert mode.

## Tip 3. Take One Step Back, Then Three Forward \33

How to add space padding for each `+` sign here (dot method)?

```javascript
var foo = "method("+argument1+","+argument2+")";
```
&#10;<br>
1. search first `+` sign - `f+` or `/+<CR>`
2. insert space before and after - `s + <Esc>`
3. search all next `+` signs and repeat - `;.` or `n.`

`f{char}`::Find {char} forward in current line.

`;`::Repeat last `f`, `F`, `t`,

`T` command.

## Tip 4. Act, Repeat, Reverse \35

`@:`::Repeat last ex command.

`&`::Repeat last substitution (on the current line).

`u`::Undo.

`,`::Repeat last `f`, `F`, `t`, `T` command in reverse.

Make a change, repeat, undo::{edit}, `.`, `u`

Scan line for next character, repeat, undo::`f{char}/t{char}`, `;`, `,`

Scan line for previous character, repeat, undo::`F{char}/T{char}`, `;`, `,`

Scan document for next match, repeat, undo::`/pattern<CR>`, `n`, `N`

Scan document for previous match, repeat, undo::`?pattern<CR>`, `n`, `N`

Perform substitution, undoat, undo::`:s/old/new/`, `&`, `u`
<!--SR:!2023-06-06,1,238-->

Execute a sequence of changes (record & execute macro), repeat,
undo::`qx{changes}q`, `@x`, `u`

Difference between `:s` and `:%s`
&#10;<br>
`%` is the range over which the `:s` command (short for `:substitute`) will be
run. `%` itself is short for the range `:1,$`, which means Line 1 to the last
line in the buffer. The Vim help has a couple topics (user manual - `:help
10.3`, reference manual - `:help cmdline-ranges`) describing the forms that
ranges can take.
`:s` also support ranges, like `:1,3s/old/new/`.
_[source - StackOverflow](https://stackoverflow.com/a/22327877)._

## Tip 5. Find and Replace by Hand \36

Goal of this article search and replace interactive.

```
...We're waiting for copy before the site can go live...
...If you are content with this, let's go ahead with it...
...We'll launch as soon as we have the copy...
```

`*`::Search for word under cursor.

`#`::Search for word under cursor in reverse.

`ciw`::Change inner word.

`cw`::Change word from cursor to the end of the word.

## Tip 6. Meet the Dot Formula \38



# Part I—Modes \40

## 2. Normal Mode \41

### Tip 7. Pause with Your Brush Off the Page \42

### Tip 8. Chunk Your Undos \42

### Tip 9. Compose Repeatable Changes \44

### Tip 10. Use Counts to Do Simple Arithmetic \46

### Tip 11. Don't Count If You Can Repeat \48

### Tip 12. Combine and Conquer \50

## 3. Insert Mode \54

### Tip 13. Make Corrections Instantly from Insert Mode \54

### Tip 14. Get Back to Normal Mode \55

### Tip 15. Paste from a Register Without Leaving Insert Mode \56

### Tip 16. Do Back-of-the-Envelope Calculations in Place \58

### Tip 17. Insert Unusual Characters by Character Code \59

### Tip 18. Insert Unusual Characters by Digraph \60

### Tip 19. Overwrite Existing Text with Replace Mode \61

## 4. Visual Mode \63

### Tip 20. Grok Visual Mode \63

### Tip 21. Define a Visual Selection \65

### Tip 22. Repeat Line-Wise Visual Commands \67

### Tip 23. Prefer Operators to Visual Commands Where Possible \69

### Tip 24. Edit Tabular Data with Visual-Block Mode \71

### Tip 25. Change Columns of Text \73

### Tip 26. Append After a Ragged Visual Block \74

## 5. Command-Line Mode \76

### Tip 27. Meet Vim's Command Line \76

### Tip 28. Execute a Command on One or More Consecutive Lines \79

### Tip 29. Duplicate or Move Lines Using ‘:t’ and ‘:m’ Commands \84

### Tip 30. Run Normal Mode Commands Across a Range \86

### Tip 31. Repeat the Last Ex Command \88

### Tip 32. Tab-Complete Your Ex Commands \90

### Tip 33. Insert the Current Word at the Command Prompt \91

### Tip 34. Recall Commands from History \93

### Tip 35. Run Commands in the Shell \95

### Tip 36. Run Multiple Ex Commands as a Batch \99

# Part II—Files \103

## 6. Manage Multiple Files \104

### Tip 37. Track Open Files with the Buffer List \104

### Tip 38. Group Buffers into a Collection with the Argument List \107

### Tip 39. Manage Hidden Files \110

### Tip 40. Divide Your Workspace into Split Windows \113

### Tip 41. Organize Your Window Layouts with Tab Pages \116

## 7. Open Files and Save Them to Disk \119

### Tip 42. Open a File by Its Filepath Using ‘:edit’ \119

### Tip 43. Open a File by Its Filename Using ‘:find’ \122

### Tip 44. Explore the File System with netrw \124

### Tip 45. Save Files to Nonexistent Directories \127

### Tip 46. Save a File as the Super User \128

# Part III—Getting Around Faster \130

## 8. Navigate Inside Files with Motions \131

### Tip 47. Keep Your Fingers on the Home Row \132

### Tip 48. Distinguish Between Real Lines and Display Lines \134

### Tip 49. Move Word-Wise \136

### Tip 50. Find by Character \138

### Tip 51. Search to Navigate \142

### Tip 52. Trace Your Selection with Precision Text Objects \144

### Tip 53. Delete Around, or Change Inside \147

### Tip 54. Mark Your Place and Snap Back to It \149

### Tip 55. Jump Between Matching Parentheses \150

## 9. Navigate Between Files with Jumps \153

### Tip 56. Traverse the Jump List \153

### Tip 57. Traverse the Change List \155

### Tip 58. Jump to the Filename Under the Cursor \156

### Tip 59. Snap Between Files Using Global Marks \159

# Part IV—Registers \161

## 10. Copy and Paste \162

### Tip 60. Delete, Yank, and Put with Vim's Unnamed Register \162

### Tip 61. Grok Vim's Registers \165

### Tip 62. Replace a Visual Selection with a Register \170

### Tip 63. Paste from a Register \172

### Tip 64. Interact with the System Clipboard \175

## 11. Macros \178

### Tip 65. Record and Execute a Macro \179

### Tip 66. Normalize, Strike, Abort \182

### Tip 67. Play Back with a Count \183

### Tip 68. Repeat a Change on Contiguous Lines \185

### Tip 69. Append Commands to a Macro \189

### Tip 70. Act Upon a Collection of Files \190

### Tip 71. Evaluate an Iterator to Number Items in a List \194

### Tip 72. Edit the Contents of a Macro \197

# Part V—Patterns \200

## 12. Matching Patterns and Literals \201

### Tip 73. Tune the Case Sensitivity of Search Patterns \202

### Tip 74. Use the . Pattern Switch for Regex Searches \203

### Tip 75. Use the . Literal Switch for Verbatim Searches \205

### Tip 76. Use Parentheses to Capture Submatches \207

### Tip 77. Stake the Boundaries of a Word \209

### Tip 78. Stake the Boundaries of a Match \210

### Tip 79. Escape Problem Characters \211

## 13. Search \216

### Tip 80. Meet the Search Command \216

### Tip 81. Highlight Search Matches \219

### Tip 82. Preview the First Match Before Execution \220

### Tip 83. Offset the Cursor to the End of a Search Match \221

### Tip 84. Operate on a Complete Search Match \223

### Tip 85. Create Complex Patterns by Iterating upon Search History \226

### Tip 86. Count the Matches for the Current Pattern \229

### Tip 87. Search for the Current Visual Selection \231

## 14. Substitution \233

### Tip 88. Meet the Substitute Command \234

### Tip 89. Find and Replace Every Match in a File \236

### Tip 90. Eyeball Each Substitution \237

### Tip 91. Reuse the Last Search Pattern \239

### Tip 92. Replace with the Contents of a Register \240

### Tip 93. Repeat the Previous Substitute Command \243

### Tip 94. Rearrange CSV Fields Using Submatches \246

### Tip 95. Perform Arithmetic on the Replacement \247

### Tip 96. Swap Two or More Words \248

### Tip 97. Find and Replace Across Multiple Files \250

## 15. Global Commands \254

### Tip 98. Meet the Global Command \254

### Tip 99. Delete Lines Containing a Pattern \255

### Tip 100. Collect TODO Items in a Register \257

### Tip 101. Alphabetize the Properties of Each Rule in a CSS File \259

# Part VI—Tools \263

## 16. Index and Navigate Source Code with ctags \264

### Tip 102. Meet ctags \264

### Tip 103. Configure Vim to Work with ctags \267

### Tip 104. Navigate Keyword Definitions with Vim's Tag Navigation Commands \269

## 17. Compile Code and Navigate Errors with the Quickfix List \273

### Tip 105. Compile Code Without Leaving Vim \274

### Tip 106. Browse the Quickfix List \276

### Tip 107. Recall Results from a Previous Quickfix List \279

### Tip 108. Customize the External Compiler \279

## 18. Search Project-Wide with grep, vimgrep, and Others \283

### Tip 109. Call grep Without Leaving Vim \283

### Tip 110. Customize the grep Program \285

### Tip 111. Grep with Vim's Internal Search Engine \287

## 19. Dial X for Autocompletion \291

### Tip 112. Meet Vim's Keyword Autocompletion \291

### Tip 113. Work with the Autocomplete Pop-Up Menu \293

### Tip 114. Understand the Source of Keywords \295

### Tip 115. Autocomplete Words from the Dictionary \297

### Tip 116. Autocomplete Entire Lines \298

### Tip 117. Autocomplete Sequences of Words \299

### Tip 118. Autocomplete Filenames \301

### Tip 119. Autocomplete with Context Awareness \303

## 20. Find and Fix Typos with Vim's Spell Checker \304

### Tip 120. Spell Check Your Work \304

### Tip 121. Use Alternate Spelling Dictionaries \306

### Tip 122. Add Words to the Spell File \307

### Tip 123. Fix Spelling Errors from Insert Mode \308

# 21. Now What? \310

## Keep Practicing! \310

## Make Vim Your Own \310

## Know the Saw, Then Sharpen It \311

# A1. Customize Vim to Suit Your Preferences \312

## Change Vim's Settings on the Fly \312

## Save Your Configuration in a vimrc File \313

## Apply Customizations to Certain Types of Files \315

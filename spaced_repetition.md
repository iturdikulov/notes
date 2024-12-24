---
date: 2023-03-12
tags:
  - inbox
  - productivity
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 230
---

# Spaced repetition and test flashcards

> Learning technique usually using flashcards, where information that is newer,
> and harder to remember are shown more frequently, while information that is
> older and easier to remember is shown less frequently.
>
> This is done to take advantage of the spacing effect which can be a better way
> and quicker way to learn and keep information.\
> — <cite>[Simple English Wikipedia](https://simple.wikipedia.org/wiki/Spaced_repetition)</cite>

Great thing with spaced repetition is **remembering** things, which can be sort
of foundation to quickly do other things. For example, you need to understand
some high level concept to be able to do some task. If you don't remember
required information, you need to look it up, which can take time and break your
flow. Or sometimes it's not possible to look up information, because you don't
have enough time or resources.

Human brains learn best when information is reviewed at gradually increasing
intervals. This is "spacing effect".

To implement the spaced repetition strategy, you can use tools such as flash
cards or specialized software that can adapt the timing of review intervals
based on your performance.

Right now I'm using [[Obsidian]] plugin
[spaced repetition](https://www.stephenmwangi.com/obsidian-spaced-repetition/)
and various note types to generate flashcards. I also use it to select current
notes to work.

<!-- TODO: describe how I use it (reviewing notes) -->

## Hotkeys

Spaced repetition obsidian plugin custom hotkeys.

- Review flashcards in this note::`C-A-f` <!--SR:!2024-09-24,3,221-->
- Review flashcards from all notes::`C-A-a` <!--SR:!2024-09-30,9,240-->
- Review note as easy::`C-A-1` for file, `1` for current flashcard <!--SR:!2024-09-24,3,221-->
- Review note as good::`C-A-2` for file, `2`/`space` for current flashcard <!--SR:!2024-09-27,11,241-->
- Review note as hard::`C-A-3` for file, `3` for current flashcard <!--SR:!2024-09-29,13,261-->
- Review notes (not flashcards) with spaced repetition::``C-A-` `` <!--SR:!2024-09-22,1,222-->
- View statistics::`A-S` <!--SR:!2024-09-22,1,220-->

## Test spaced repetition plugin

Simple ==highlight==. <!--SR:!2024-10-10,24,279-->

Simple ==highlight== with several ==highlights== show only first.
[Cloze Update](https://github.com/st3v3nmw/obsidian-spaced-repetition/pull/943) <!--SR:!2024-09-24,3,262!2024-09-25,4,270-->

Highlight (Cloze) with new line inside it is not ==work
ing==. Still?

Double::colon. <!--SR:!2024-10-27,36,281-->

Double colon with new line is not working:: <!--SR:!2024-10-08,17,259-->
correctly (empty).

Simple
&#10;<br>
Question <!--SR:!2024-10-14,28,280-->

Simple question
&#10;<br>
With a new
\
Lines <!--SR:!2024-10-13,22,260-->

Simple question with new lines just before
question separator `&#10;<br>`
&#10;<br>
Is working correctly <!--SR:!2024-09-25,9,261-->

Simple question with code block, inside code blocks new lines
&#10;<br>
Test sentence
\
Is good
```python
print(1)

print(2)
```
<!--SR:!2024-09-27,6,261-->

Simple question
&#10;<br>
With Newlines is not working <!--SR:!2024-09-27,6,261-->

as expected

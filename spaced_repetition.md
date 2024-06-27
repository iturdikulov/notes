---
date: 2023-03-12
tags:
  - inbox
  - SR_productivity
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

- Review flashcards in this note::`C-A-f` <!--SR:!2024-07-02,6,241-->
- Review flashcards from all notes::`C-A-a` <!--SR:!2024-06-30,4,240-->
- Review note as easy::`C-A-1` for file, `1` for current flashcard <!--SR:!2024-07-01,5,241-->
- Review note as good::`C-A-2` for file, `2`/`space` for current flashcard <!--SR:!2024-07-01,5,241-->
- Review note as hard::`C-A-3` for file, `3` for current flashcard <!--SR:!2024-06-30,4,241-->
- Open a note for review::``C-A-` ``
- View statistics::`A-c` <!--SR:!2024-06-28,2,240-->


## Test spaced repetition plugin

Simple ==highlight==. <!--SR:!2024-07-03,7,259-->

Simple ==highlight== with several ==highlights== show only first.
[Cloze Update](https://github.com/st3v3nmw/obsidian-spaced-repetition/pull/943) <!--SR:!2000-01-01,1,250!2024-06-28,2,241-->

Highlight (Cloze) with new line inside it is not ==work
ing==. Still?

Double::colon. <!--SR:!2024-07-06,10,261-->

Double colon with new line is not:: <!--SR:!2024-07-03,7,259-->
working correctly (empty).

Simple
&#10;
Question <!--SR:!2024-07-04,8,260-->

Simple question
&#10;
With a new
\
Lines <!--SR:!2024-07-05,9,260-->

Simple question with new lines just before
question separator `&#10;`
&#10;
Is working correctly <!--SR:!2024-06-28,2,241-->

Simple question with code block, inside code blocks new lines
&#10;
Test sentence
\
Is good
```python
print(1)

print(2)
```
<!--SR:!2024-06-28,2,241-->

Simple question
&#10;
With Newlines is not <!--SR:!2024-06-28,2,241-->

working as expected

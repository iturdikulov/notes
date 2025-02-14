---
date: 2023-03-12T00:00+03:00
tags:
  - blog
  - education
external:
  - https://www.stephenmwangi.com/obsidian-spaced-repetition/
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

Where SR technique can be used [^1]:

- Memorizing facts, formulas, historical events, and vocabulary. But don't put
  empty item without context. Make atomic flashcards which you really enjoy
  read.
- Language learning, vocabulary, grammar, and pronunciation.
- Computer science, Programming languages, and protocols.
- Hobbies: drawing (techniques, nuances, etc.), computer graphics or
  cooking (recipes).
- Habit formation, did I do constantly do something?
- IRL activities: remember names, faces, review cool quotes, review interesting
  images, etc.
- Mental Health & Therapy, physical training information.
- To review personal [[quotes]].

Human brains learn best when information is reviewed at gradually increasing
intervals. This is "spacing effect".

To implement the spaced repetition strategy, you can use tools such as flash
cards or specialized software that can adapt the timing of review intervals
based on your performance.

Can I use spaced repetition for forming habbits?
<br class="f">
Yes, you will remember about your habits, and ask youself, I'm following it or
no? With answers: Easy (YES), Medium (not really), Hard (no).

Right now I'm using [[Obsidian]] plugin
[spaced repetition](https://www.stephenmwangi.com/obsidian-spaced-repetition/)
and various note types to generate flashcards. I also use it to select current
notes to work.

Detailed documentation aviable at [Obsidian Spaced
Repetition](https://www.stephenmwangi.com/obsidian-spaced-repetition/) website.

## Programming related flashcards

- #Python
- #Rust
- #Go
- #C
- #computer_programming_web
- #computer
- #computer_programming
- #computer_programming_science
- #computer_terms
- #computer_testing
- #cheat-sheets
- #computer_programming_patterns
- #computer_programming_profession
- #computer_programming_tools
- #DB
- #computer_graphics_programming
- #gamedev
- #cryptography

## Flashcard

- [ ] [Effective Spaced Repetition](https://borretti.me/article/effective-spaced-repetition)


What is a flashcard?
<br class="f">
Card which have information on both sides, first side usually is question, and
back side is answer. Primary used to practice and/or aid memorizatin.

Best flash card format?
<br class="f">
In general, the simpler and more precise the flash card, the easier it is learn
the memory. Personalize and provide examples for flashcards.

Writing effective flashcards is hard, but it's not impossible. There some tips
form Fernando Borretti [^3]:

## 20 rules of knowledge formulation

From article by Dr Piotr Wozniak is part of SuperMemo Guru series on memory,
learning, creativity, and problem-solving [^1].

- Don't learn things that you do not understand, it's not productive.
- Learn before you memorize.
- Start from basics before going into complexities.
- Keep questions simple (spaced repetition, ask yourself), this reduces
  cognitive load.
- Pictures assist memory, useful for flashcards.
- Learn mnemonic techniques, e.g. peg lists.
- Don't try to learn full lists, sets and enumerations, they can be tackled with
  cloze deletion.
- Personalize and provide examples for flashcards.
- Cloze deletion is fast and has a great mnemonic anchor.
- Redundancy is fine (similar items), asking similar questions from different
  angles reduce the cost of learning.
- Use references, your falshcards must be atomic.

## Rules for effective spaced repetition

Similar to [[#20 rules of knowledge formulation]] there are some rules for
effective spaced repetition from Fernando Borretti.

- Understand first, don't try always immediately write solid flashcards, while
  you explore the topic you write drafts, and then you can commit them into
  quality flashcards.
- Be honest, SR software is your nearest friend, you are only accountable to
  yourself.
- Keep It Fun, otherwise you will never form habits. How to make it fun:
  1. You can review cards from many sources (my notes) at same time, this
     reduces boring process.
  2. Make flashcards less complex, split them if needed, it's much easier to
     absorb information granually.
  3. Cards should be easy to recall, put context information, some hints if
     required.
- Repeat yourself. Memory volume can be described as frequency * times.
- Organize by source not by topic. You can't find ideal ontology, much simplier
  make decks for each source. Textbook → chapter source.
- Write Atomic Flashcards, they should focus on one thing. It’s harder to
  objectively grade yourself if flashcard can be answered very ambiguously, if
  you click remembered, you will under-review the parts you forgot.
  Exception: you can have big cards if you also have smaller cards that add up
  to the same information, when you want to test yourself can you collate
  information from the smaller cards.

## Obsidian spaced repetition plugin

I really like approach to have integrated flashcards in my [[Zettelkasten]].
This keep DRY principle, and I can review notes with spaced repetition system.

I use Obsidian Spaced Repetition for this purpose.

### Hotkeys

Spaced repetition obsidian plugin custom hotkeys.

- Review flashcards in this note:<wbr class="f"> `C-A-f` <!--SR:!2024-09-24,3,221-->
- Review flashcards from all notes:<wbr class="f"> `C-A-a` <!--SR:!2024-09-30,9,240-->
- Review note as easy:<wbr class="f"> `C-A-1` for file, `1` for current flashcard <!--SR:!2024-09-24,3,221-->
- Review note as good:<wbr class="f"> `C-A-2` for file, `2`/`space` for current flashcard <!--SR:!2024-09-27,11,241-->
- Review note as hard:<wbr class="f"> `C-A-3` for file, `3` for current flashcard <!--SR:!2024-09-29,13,261-->
- Review notes (not flashcards) with spaced repetition:<wbr class="f"> ``C-A-` `` <!--SR:!2024-09-22,1,222-->
- View statistics:<wbr class="f"> `A-S` <!--SR:!2024-09-22,1,220-->

### Test spaced repetition plugin

Simple ==highlight==. <!--SR:!2024-10-10,24,279-->

Simple ==highlight== with several ==highlights==, will generate multiple cards.

Highlight (Cloze) with new line inside it is not ==work
ing==. Still?

Double:<wbr class="f"> colon. <!--SR:!2024-10-27,36,281-->

Double colon with new line is not working:<wbr class="f">  <!--SR:!2024-10-08,17,259-->
correctly (empty).

Simple
<br class="f">
Question <!--SR:!2024-10-14,28,280-->

Simple question
<br class="f">
With a new
\
Lines <!--SR:!2024-10-13,22,260-->

Simple question with new lines just before
question separator `<br class="f">`
<br class="f">
Is working correctly <!--SR:!2024-09-25,9,261-->

Simple question with code block, inside code blocks new lines
<br class="f">
Test sentence
\
Is good
```python
print(1)

print(2)
```
<!--SR:!2024-09-27,6,261-->

Simple question
<br class="f">
With Newlines is not working <!--SR:!2024-09-27,6,261-->

as expected

Multiple clozes ==1;;this== and ==1;;this==.

Cloze with hint ==this;;hint==.

[^1]: [Using spaced repetition for learning facts, forming habits, and re-reading quotes](https://andrewtmckenzie.com/spaced_repetition#)
[^2]: [20 rules of knowledge formulation - supermemo.guru](https://supermemo.guru/wiki/20_rules_of_knowledge_formulation)
[^3]: [Effective Spaced Repetition](https://borretti.me/article/effective-spaced-repetition)

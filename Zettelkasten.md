---
date: 2023-03-10T00:00+03:00
tags:
  - blog
  - productivity
directory: ~/Wiki/
sr-due: 2024-02-25
sr-interval: 30
sr-ease: 284
---

# Zettelkasten Method

My notes should be organized to evolve, save my time and bring benefits to me
and others.

I took general note ideas from Zettelkasten and
[Evergreen](https://notes.andymatuschak.org/About_these_notes) notes.

Main principles of my note-taking method:

TODO: Need describe these principles

- Notes should be atomic
- Notes should be concept-oriented
- Notes should be linked
- Prefer relationships to hierarchy
- Write notes in personal-aware style, instead public-aware style

Notes can have various [[#Note types (AKA templates)|types]].

## Note types (AKA templates)

I use some templates/note types with [[Zettelkasten]]. I will update it as I
improve my workflow. To set note type need just to apply note type tag.

All new note have a `- blog` tag, this allowing to use [[spaced_repetition]]
system to continuously review and work with notes and allow build web log for my
[[iturdikulov.com|generated website]].

The types will be described below.

## Fleeting notes

I not use fleeting notes, instead I used [[Taskwarrior]] tasks, which
support many things which I like to have. And yes you can organize fleeting
notes system using it.

> [!NOTE]
> Need to avoid placing ideas in fleeting system, you can just create permanent
note.

## Permanent note

When I have some idea, and it's worth to store, I create permanent note. This is
default note type.

This note must meet some criteria:

- Atomic, one general idea per note.
- I need to extract essence of the idea and don't overcomplicate it.
- Write it as if you are writing for someone else or for you in years future.
- Required minimal context to understand note.
- When I add new Zettel note, I check my previous notes and answer to these
questions and if many of them false, I delete or avoiding to create new note.
  - Is this relevant to my requirements/thoughts/interests?
  - How I can use this to update my knowledge and existing notes?
  - Is this information correct, solve some issue or follow my thoughts?
  - Can I combine this idea?
  - Will this idea generate additional questions?
  - Is this missing from my knowledge, does this duplicate something?
  - Do I want to explore this further?

### Additional permanent notes types

TODO: add examples.

- Bridge note, to combine ideas, usually someone else and mine if they different
in terms, or even very different, notes have `bridge` tag.
- Person note, to store someone contacts (public person), biography or some
additional information, notes have `person` tag.
- Personal term, something what very specific to limited amount of users, local
things, etc., notes have `term` tag.
- Log note, to store some log information, such as time tracking. Good example
is [[30_day_drawing_challenge]], notes have `log` tag.

## Literature notes

I have "rich" system to manage my literature notes.
Remember, you are not simply collecting resources you need to process them.

Before you have temptation to create new note, answer following question: Is the
content interesting/useful/relevant to you and/or your existence notes.

Here are some rules:

- Literature notes have `research` tag.
- If required research note can have linked directory, sort of dependencies
(`directory:` YAML frontmatter variable). This can be code, assets, etc.
- Some research notes have `file` frontmatter variable, with link to related
book/article/other resource. Usually these notes haven't `directory` frontmatter
variable.
- Notes are taken specifically on the content. Usually I just use annotating to
  generate initial notes.
- Be selective, store useful information
- Rewrite information in your own words and make sure you understand the
concept, imagine you explain it to someone else.
- Use direct quotes sparingly, don't overuse them.

## Outline or structure notes

Sort of index section from books, it's allow to group notes by topic, concept or
similarity. For example [[my_awesome_software_list]]. These notes have `outline`
tag.

Rules for outline notes:

- Main index note, as entry point, like website index page. For example
[[projects]] note my current working projects, reflect my current interests.
- Topic note, like [[index]].

## Spaced repetition notes

Have special topics tags, used to generate interactive flashcards with
[[spaced_repetition]] system: `base`, `productivity`, etc.

## Frontmatter variables

Notes may have this frontmatter variables:

- `author: name` - author of resource, usually used in literature notes
- `external: https...` - link to external resource, such as web-page, video, etc.
- `book: <link>` - link to book file
- `article: <link>` - link to article file
- `archive: true` - archived note
- `date: <date>` - date of creation/update, mainly used to organize my RSS with
  [[iturdikulov.com]] site.
- `sr*` - spaced repetition related variables

## External links

- [Types of ZT Notes](https://zk.zettel.page/types-of-notes)
- [Taxonomy of note types](https://notes.andymatuschak.org/Taxonomy_of_note_types)
- [Andy Notes](https://notes.andymatuschak.org/About_these_notes)
- [PKM Zettelkasten Wiki](https://zk.zettel.page/)

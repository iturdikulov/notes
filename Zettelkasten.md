---
date: 2025-07-11T09:44:06+03:00
created: 2023-03-10T03:00:00+03:00
directory: ~/Wiki/
tags:
  - blog
  - productivity
sr-due: 2025-07-18
sr-interval: 2
sr-ease: 150
---

# Zettelkasten Method

My notes should be organized to evolve, save my time and bring benefits to me
and others.

I took general note ideas from Zettelkasten and
[Evergreen](https://notes.andymatuschak.org/About_these_notes) notes.

Main principles of my note-taking method:

- Notes should be atomic
- Notes should be concept-oriented
- Notes should be linked
- Prefer relationships to hierarchy
- Write notes in personal-aware style, instead public-aware style

For example, instead of just creating a note named "Closures" perhaps you write
a title "Use closures to retain access to internal scope after a function exits"
and then describe them and provide examples within that note. The "Closures"
note can then become an outline of links on the topic, each pointing to another
note like the one described.

Notes can have various [[#Note types (AKA templates)|types]].

## Note types (AKA templates)

I use some templates/note types with [[Zettelkasten]]. I will update it as I
improve my workflow. To set note type need just to apply note type tag.

All new note have a `- blog` tag, this allowing to use [[spaced_repetition]]
system to continuously review and work with notes and allow build web log for my
[[iturdikulov.com|generated website]].

The types will be described below.

# Zettelkasten Method

Organizing notes to evolve, save time, and bring benefits to both myself and
others is a key goal of my note-taking system. I've drawn inspiration from the
Zettelkasten method and Evergreen notes.

### Main Principles

1. **Atomic Notes**: Each note should focus on a single, distinct idea.
2. **Concept-Oriented**: Notes should be centered around concepts rather than
specific facts or details.
3. **Linked Notes**: Create connections between related notes to build a network
of ideas.
4. **Relationships Over Hierarchy**: Prioritize the relationships between notes
over strict hierarchical organization.
5. **Personal-Aware Style**: Write notes as if for yourself, considering your
future needs and interests.

### Example

Instead of creating a generic note titled "Closures," I might write a more
specific title like "Use closures to retain access to internal scope after a
function exits." This note would then include detailed explanations and
examples. The original "Closures" note could serve as an outline linking to
these more specific notes.

### Note Types (Templates)

I use various templates or note types with Zettelkasten, which I'll update as my
workflow evolves. Applying a note type tag is all that's needed to categorize a
new note.

All new notes are tagged with `- blog`, allowing them to be reviewed using the
spaced repetition system and included in my generated website at
[iturdikulov.com](http://iturdikulov.com).

### Fleeting Notes

I don't use fleeting notes. Instead, I rely on plain To-Do lists that support
features I value. Currently, this approach meets my needs.

> **Note**: Avoid placing ideas in the fleeting system; instead, create
  permanent notes.

### Permanent Notes

When an idea is worth storing, I create a permanent note. This is the default
note type and must meet certain criteria:

- **Atomic**: One general idea per note.
- **Essence Extraction**: Focus on capturing the core concept without complicating it.
- **Personal Writing Style**: Write as if for someone else or for your future self.
- **Minimal Context**: Ensure the note can be understood with minimal context.
- **Relevance Check**: Before creating a new note, review previous notes to ensure relevance and usefulness.

### Additional Permanent Note Types

- **Bridge Notes**: Combine ideas from different sources or perspectives. These have a `bridge` tag.
- **Person Notes**: Store information about individuals, including contacts, biographies, etc. These have a `person` tag.
- **Personal Terms**: Define terms specific to a limited audience or local context. These have a `term` tag.
- **Log Notes**: Record log information such as time tracking. An example is the [[30_day_drawing_challenge]]. These have a `log` tag.

### Literature Notes

I maintain a robust system for managing literature notes, focusing on processing rather than merely collecting resources.

Before creating a new note, consider: Is the content interesting/useful/relevant to you and/or your existing notes?

- **Research Tag**: All literature notes are tagged with `research`.
- **Linked Directory**: Some research notes may have a linked directory (`directory:` YAML frontmatter variable) for dependencies like code or assets.
- **File Frontmatter Variable**: Notes related to specific resources (books, articles) may include a `file` link. These typically don't have a `directory` variable.
- **Selective Storage**: Only store useful information.
- **Rewriting and Understanding**: Rewrite information in your own words to ensure understanding. Imagine explaining the concept to someone else.
- **Direct Quotes**: Use direct quotes sparingly.

### Outline or Structure Notes

These notes serve as indexes, grouping related ideas by topic, concept, or similarity. For example, [[my_awesome_software_list]]. These have an `outline` tag.

- **Main Index Note**: Acts as the entry point, similar to a website index page. Example: [[projects]] reflects current working projects and interests.
- **Topic Notes**: Group notes by specific topics. Example: [[index]].

### Spaced Repetition Notes

Special topic tags are used for generating interactive flashcards with the spaced repetition system. Examples include `base`, `productivity`.

### Frontmatter Variables

Notes may include these frontmatter variables:

- **Author**: Name of the resource author, typically used in literature notes.
- **External Link**: Link to external resources like web pages or videos.
- **Book/Article Links**: Direct links to book or article files.
- **Archive**: Indicates an archived note.
- **Date**: Creation/update date, mainly for organizing RSS feeds on [iturdikulov.com](http://iturdikulov.com).
- **Spaced Repetition Variables**: Used for spaced repetition system.

### External Links

- [Types of ZT Notes](https://zk.zettel.page/types-of-notes)
- [Taxonomy of Note Types](https://notes.andymatuschak.org/Taxonomy_of_note_types)
- [Andy Notes](https://notes.andymatuschak.org/About_these_notes)
- [PKM Zettelkasten Wiki](https://zk.zettel.page/)
## Fleeting notes

I not use fleeting notes, instead I used plain To-Do lists, which
support many things which I like to have, currently it's enough for me.

> [!NOTE]
> Need to avoid placing ideas in fleeting system, you can just create permanent
note.

## Permanent note

When I have some idea, and it's worth to store, I create permanent note. This is
default note type.

This note must meet some criteria:

- Atomic, one general idea per note.
- I need to extract essence of the idea and don't complicate it.
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

To-Do: add examples.

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
- Some research notes have `file` frontmatter variable, with link to relate
book/article/other resource. Usually these notes haven't `directory` frontmatter
variable.
- Notes are taken specifically on the content. Usually I just use annotating to
  generate initial notes.
- Be selective, store useful information
- Rewrite information in your own words and make sure you understand the
concept, imagine you explain it to someone else.
- Use direct quotes sparingly, don't overuse them.

## Outline or structure notes

Sort of index section from books, it's allow to group notes by topic, concept, or
similarity. For example, [[my_awesome_software_list]]. These notes have `outline`
tag.


Rules for outline notes:

- Main index note, as entry point, like website index page. For example,
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
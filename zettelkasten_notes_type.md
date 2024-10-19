---
date: 2023-03-09
tags:
  - inbox
  - productivity
sr-due: 2024-02-03
sr-interval: 6
sr-ease: 226
---

# Notes types which I use with Zettelkasten

This is initial table of notes types which I use with [[Zettelkasten]]. I will
update it as I improve my workflow. To set note type need just apple tag from
left column to note.

All new note have a `- inbox` tag, this allowing to use
[[spaced_repetition|spaced repetition]] system to review and work with notes.

Workflow:

- TODO: Any resource, such as video, article, web-page, picture archived using
[[ArchiveBox|archivebox]] or directly downloaded into own directory.

 - Notes includes links to related notes and sources links. Rich linking
 essential in Zettelkasten system.

## Fleeting notes

I not use fleeting notes, instead I used [[Taskwarrior]] tasks, which
support many things which I like to have. And yes you can organize fleeting
notes system using it.

Need to avoid placing ideas in fleeting system, you can just create permanent
note.

## Literature notes

I have "rich" system to manage my reference note. Some rules:
- Notes are taken specifically on the content. Usually I just use annotating
viewer (such as [[Sioyek]] and [[xodo]]) to
generate initial notes. Then I can write additional literature notes in
`reserach` directory.
- Be selective, rewrite it in your own words and make sure you understand the
concept (or follow up on it if you don’t at first).
- Use direct quotes sparingly (don't overuse them).
- Remember, you are not simply collecting resources you need to process them.
- Answer Question: is the content useful/interesting/relevant to you and/or your
research?

## Permanent notes

When I have some idea, and it's worth to store, I create permanent note.

This note must meet some criteria:
- Atomic, one idea per note. I need to extract essence of the idea and don't
overcomplicate it.
- Write it as if you are writing for someone else or for you in years future.
Use minimal context to understand note.
- When I add new Zettel note, I check my previous notes and answer to this
questions:
    * Is this relevant to my requirements/thoughts/interests?
    * How I can use this to update my knowledge and existing notes?
    * Is this information correct, solve some issue or follow my thoughts?
    * Can I combine this idea?
    * Will this idea generate additional questions?
    * Is this missing from my knowledge, does this duplicate something?
    * Do I want to explore this further?

### Additional permanent notes types

- Bridge note, to combine ideas, usually someone else and mine if they different
  in terms, or even very different.
- Person note, to store someone contacts (public person), biography or some
additional information.
- Personal term, something what very specific to limited amount of users, local
  things, etc.
- Log note, to store some log information, such as time tracking. Good example
is [[30_day_drawing_challenge|30 day draw challenge]].

## Outline or structure notes

Sort of index section from books, it's allow to group notes by topic, concept or
similarity. For example [[my_awesome_software_list|my awesome software list]].

Requirements:
- Main index note, as entry point, like websete index page. For example
[[index|now]] my current working projects, reflect my current interests.
- Topic note, like [[my_art|art]], [[my_videos|videos]], etc.

## Templates

Tags are used to define note type.

- permanent note, default note, tags: bridge, person, term, log
- literature note, tags: research
- person note, tags: person
- log note, tags: log
- outline note, tags: outline

I also have additional topics tags, mainly used for
[[spaced_repetition|spaced repetition]] system:
- SR_development - software related topics, shortcuts, etc.
- SR_computer_science
- SR_computer_graphics
- SR_programming
- SR_vim
- SR_English
- SR_IRL
- SR_mathematics

Also, templates may have this frontamatter variables:
- `external: https...` - link to external resource, such as web-page, video, etc.
- `archive: 0000000000.000000` - [[ArchiveBox]] timestamp, used as unique id
- `author: name` - author of resource, usually used in literature notes

## References

- [ ] [Types of ZT Notes](https://zk.zettel.page/types-of-notes)
- [ ] [Taxonomy of note types](https://notes.andymatuschak.org/Taxonomy_of_note_types)

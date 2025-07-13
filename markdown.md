---
created: 2023-03-13T00:00+03:00
external:
  - https://daringfireball.net/projects/markdown/syntax
tags:
  - blog
  - markdown
sr-due: 2025-09-13
sr-interval: 65
sr-ease: 253
---

> Markdown is a text-to-HTML conversion tool for web writers. Markdown allows
> you to write using an easy-to-read, easy-to-write plain text format, then
> convert it to structurally valid XHTML (or HTML).
>
> [John Gruber](https://daringfireball.net/projects/markdown/)

You can also convert markdown to tons of other formats, including PDF, using
[[Pandoc]].

I use Markdown as my primary format for all my [[Zettelkasten|notes]],
[[documentation]], documentation, etc.

## Basics (which I use)

A paragraph is simply one or more consecutive lines of text, separated by one or
more blank lines. Normal paragraphs should not be indented with spaces or tabs.

---

Atx-style headers (h1, h2, h3, h4, h5, h6) are created by prefixing the line
with `#` characters from one to six.

# H1 header - `# H1 header`

---

Blockquotes are indicated using email-style `>` angle brackets.

> This is a blockquote. - `> This is a blockquote.`

---

For phrase emphasis I use:

- _italic_ - `*italic*`
- ~~stroke~~ - `~~stroke~~`
- **bold** - `**bold**`
- \==highlight== - `\==highlight==`
- <u>underline</u> - `<u>underline</u>`
- <sup>superscript</sup> - `<sup>superscript</sup>`
- <sub>subscript</sub> - `<sub>subscript</sub>`
- <var>variable</var> - `<var>variable</var>`
- <mark>mark</mark> - `<mark>mark</mark>`
- <cite>cite</cite> - `<cite>cite</cite>`
- <ins>inserted</ins> - `<ins>inserted</ins>`

---

For lists, I use `-` as lists marker for unordered lists and `1.` for ordered:

- First item - `- First item`
- Second item - `- Second item`

  This is paragraph between list items.

- Third item - `- Third item`
  - Indented item - ` - Indented item`
  - Indented item - ` - Indented item`
    1. Indented item - ` 1. Indented item`
    2. Indented item - ` 2. Indented item`
- Fourth item - `- Fourth item`

1. First item - `1. First item`
2. Second item - `2. Second item`
3. Third item - `3. Third item`
   1. Indented item - ` 1. Indented item`
   2. Indented item - ` 2. Indented item`
4. Fourth item - `4. Fourth item`

Tables can be created using `|` and `---`:

Formatting:

| foo | bar |
| --- | --- |
| bar | foo |

```markdown
| foo | bar |
| --- | --- |
| bar | foo |
```

Minimal syntax:

| foo | bar |
| --- | --- |
| bar | foo |

```markdown
|foo|bar|
|-|-|
|baz|bim|
```

## Extra

Escape backtick character: `` ` ``, ``List`1``

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

You can also use inline footnotes. ^[notice that the carat goes outside of the brackets on this one.]

### Footnotes

[^1]: meaningful!

[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.

## GitHub Flavored Markdown (GFM)

### Alerts

[Basic writing and formatting syntax, alerts - GitHub Docs](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#alerts)

> [!NOTE]
> Useful information that users should know, even when skimming content.

> [!TIP]
> Helpful advice for doing things better or more easily.

> [!IMPORTANT]
> Key information users need to know to achieve their goal.

> [!WARNING]
> Urgent info that needs immediate user attention to avoid problems.

> [!CAUTION]
> Advises about risks or negative outcomes of certain actions.

## Obsidian-specific

Some markdown features are specific to [[Obsidian]].

### Spoilers

> [!NOTE]- Note: this is custom label
> Useful information that users should know, even when skimming content.

> [!TIP]-
> Helpful advice for doing things better or more easily.

> [!IMPORTANT]-
> Key information users need to know to achieve their goal.

> [!WARNING]-
> Urgent info that needs immediate user attention to avoid problems.

> [!CAUTION]-
> Advises about risks or negative outcomes of certain actions.

### Custom checkbox

- [ ] `[ ]` Unchecked
- [x] `[x]` Checked
- [>] `[>]` Rescheduled
- [<] `[<]` Scheduled
- [!] `[!]` Important
- [-] `[-]` Cancelled
- [/] `[/]` In Progress
- [?] `[?]` Question
- [*] `[*]` Star
- [n] `[n]` Note
- [l] `[l]` Location
- [i] `[i]` Information
- [I] `[I]` Idea
- [S] `[S]` Amount
- [p] `[p]` Pro
- [c] `[c]` Con
- [b] `[b]` Bookmark
- ["] `["]` Quote

[Alternative Checkboxes (Icon Bullets) - Copy and paste - #15 by malhashemi -
Share & showcase - Obsidian
Forum](https://forum.obsidian.md/t/alternative-checkboxes-icon-bullets-copy-and-paste/35962/15)


## TODO

- [ ] [Daring Fireball: Markdown Basics](https://daringfireball.net/projects/markdown/basics)
- [ ] [Daring Fireball: Markdown Syntax Documentation](https://daringfireball.net/projects/markdown/syntax)
- [ ] [GitHub Flavored Markdown Spec](https://github.github.com/gfm/)
- [ ] [MyST - Markedly Structured Text](https://myst-parser.readthedocs.io/en/latest/syntax/typography.html)

---
date: 2024-11-21 18:14
tags:
  - inbox
  - SR-productivity
external:
  - https://jqlang.github.io/jq/
  - https://jqlang.github.io/jq/tutorial/
---

# ./jq, sed for JSON data

> jq is a lightweight and flexible command-line JSON processor.\
> — <cite>https://jqlang.github.io/jq/</cite>

jq allows you to simplify ==[[JSON]]== data processing, it used to slice, filter
and map and transform **structured data**, like [[sed]], [[awk]], [[grep]].

Very detailed information aviable in jq manual: `man jq`, [jq
Manual](https://jqlang.github.io/jq/manual/).

## jq tutorial

Information taken from official
[tutorial](https://jqlang.github.io/jq/tutorial/). Examples are primary made on
[[GitHub]] JSON [[API]].

Exract commits (root):

```sh
# Gets the last 5 commits from the mine notes repo. And use `.` expression,
# takes the input and produces it unchanged/pretty-printed as output.
curl --silent \
'https://api.github.com/repos/iturdikulov/notes/commits?per_page=5' | jq '.'
```

Extract first commit:

```sh
curl --silent \
'https://api.github.com/repos/iturdikulov/notes/commits?per_page=5'|jq '.[0]'
```

The ==`|`== operator in jq feeds the output of one filter into the input of
another (`{...}` which builds an object out of those fields). You can access
nested attributes, such as `.commit.message`.

```sh
curl --silent \
'https://api.github.com/repos/iturdikulov/notes/commits?per_page=5' |\
jq '.[0] | {message: .commit.message, name: .commit.committer.name}'
```

Another example:

```sh
curl --silent \
'https://api.github.com/repos/iturdikulov/notes/commits?per_page=5' |\
jq '[.[] | {message: .commit.message, name: .commit.committer.name}]'
```

==`.[]`== returns each element of the array returned to the response, one at a
time, which are all fed into `{message: .commit.message, name:
.commit.committer.name}`.

Data in jq is represented as streams of ==JSON values== - every jq expression
runs for each value in its input stream, and can produce any number of values to
its output stream.

Streams are serialised by just separating JSON values with whitespace. This is a
`cat`\-friendly format - you can just join two JSON streams together and get a
valid JSON stream.

If you want to get the output as a single array, you can tell jq to "collect"
all the answers by wrapping the filter in square brackets.

Next, let's try getting the URLs of the parent commits out of the API results as
well. In each commit, the GitHub API includes information about "parent"
commits. There can be one or many.

```
"parents": [
  {
    "sha": "f2ad9517c72f6267ae317639ab56bbfd4a8653d4",
    "url": "https://api.github.com/repos/jqlang/jq/commits/f2ad9517c72f6267ae317639ab56bbfd4a8653d4",
    "html_url": "https://github.com/jqlang/jq/commit/f2ad9517c72f6267ae317639ab56bbfd4a8653d4"
  }
]
```

We want to pull out **all** the "html_url" fields inside that array of parent
commits and make a simple list of strings to go along with the "message" and
"author" fields we already have.

```sh
curl --silent \
'https://api.github.com/repos/iturdikulov/notes/commits?per_page=5' |\
jq '[.[] | {message: .commit.message, name: .commit.committer.name, parents: [.parents[].html_url]}]'
```

*Results:*
```
[
  {
    "message": "feat: remove Evans-So_you_want_to_be_a_WizarD.md (renamed before)",
    "name": "Inom Turdikulov",
    "parents": [
      "https://github.com/iturdikulov/notes/commit/237e2dc277532ebf232e4c818d254bf04288a2d8"
    ]
  },
  {
    "message": "feat: update touch typing guide- Add info about current WPM in English and Russian.- Add info about the ttyper tool and lessons.",
    "name": "Inom Turdikulov",
    "parents": [
      "https://github.com/iturdikulov/notes/commit/19afe961cf3b2de2363eca47db0e484492cfbeee"
    ]
  },
  {
    "message": "feat: zettelkasten note types, remove outdated information",
    "name": "Inom Turdikulov",
    "parents": [
      "https://github.com/iturdikulov/notes/commit/1e0afcc93e13495c3072d021fba0a45f8d4253b0"
    ]
  },
  {
    "message": "feat: Add games aspect to useless pages",
    "name": "Inom Turdikulov",
    "parents": [
      "https://github.com/iturdikulov/notes/commit/a1eeff9fef9dd841793a5a8e9ae73b8b7781823e"
    ]
  },
  {
    "message": "Add kindle note",
    "name": "Inom Turdikulov",
    "parents": [
      "https://github.com/iturdikulov/notes/commit/0272bd8ff69acf158d4fc3cd9d2ba29b8105cf05"
    ]
  }
]
```

Here we're making an object as before, but this time the `parents` field is
being set to `[.parents[].html_url]`, which collects all the parent commit
URLs defined in the parents object.

---
date: 2023-04-03T00:00+03:00
tags:
  - inbox
  - productivity
sr-due: 2024-01-29
sr-interval: 1
sr-ease: 130
---

# Search engine

> Software system designed to carry out web searches. They search the World Wide
> Web in a systematic way for particular information specified in a textual web
> search query. The search results are generally presented in a line of results,
> often referred to as search engine results pages (SERPs). When a user enters a
> query into a search engine, the engine scans its index of web pages to find
> those that are relevant to the user's query. The results are then ranked by
> relevancy and displayed to the user.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Search_engine)</cite>

I store in this note some search engines information, specific search operators,
and search engine shortcuts. These search engine list are configured in my
[[web_browser]].

## Site search in web-browser data

My web browser configured to search sites from various sources, with these
keywords (need type keyword in the address bar and then search term)

Browser bookmarks::`*`, `* github`

Browser history::`^`, `^ github`

Search Tabs
&#10;<br>
`%`, `% github`,
In chrome-based browsers you can also use `C-S-a` to search tabs and recently
closed tabs.

## Search engines shortcuts

### General purpose search engines

RSS search, search trhoug my RSS feeds ([[Miniflux]])::`@rss`

Google search, force use. This is useful to avoid search query unnecessary
parsing in the address bar.
&#10;<br>
`@g http://example.com`

DuckDuckGo, privacy-focused, instant answers, bangs, multiple sources (but not
google?).
&#10;<br>
`@d`
[DuckDuckGo !Bangs](https://duckduckgo.com/bangs) to search in different
websites, also good source for category names.

@yandex, own search index, [[Russian]] search results oriented.
&#10;<br>
`@ya яша`

### Wiki-based search engines, community-driven

- Wikipedia - search in the largest encyclopedia::`@w Pi`
- Russian Wikipedia::`@wr штуццер`, `"цы пышка"`
- Simple English Wikipedia::`@sw test`
- ArchWiki - Arch Linux Wiki::`@a archwiki `
- NixWiki - NixOS Wiki::`@n nixos`
- Fandom - search for fandoms::`@f skyrim`
- Reddit - search for subreddits::`@r unixporn`

### Science, programming, code and documentation, archive search engines

- WolframAlpha - computational intelligence search engine::`@wa Turing machine 2506`
- MathWorld - search for math definitions, formulas::`@math topology`
- [[Math_is_fun_community_-_Math_is_fun|Math is Fun]]- search for math definitions, formulas::`@mathf Pi`

- [[GitHub]] - code search::`@gh linux`
- SourceGraph - code search::`@s linkedin api`
- [[GitLab]] - code search::`@glab alpine linux`
- GitHub Gist - code snippets::`@gist linux`
- Your Github Stars::`@star linux`

- DockerHub - search for [[Docker]] images::`@dh alpine linux`
- Nix Packages - search for nix packages::`@nix filezilla`

- StackOverflow - search for programming questions and answers::`@so printf`
- SuperUser - search for computer questions and answers::`@su install linux`
- DevDocs - search for programming docs::`@dd printf`
- Python Docs - search for python docs::`@py comprehension`
- MSDN - Microsoft developer network docs::`@msdn WinMain`
- MDN - Mozzila developer network docs::`@mdn flexbox`

- Web Archive - search for archived pages, need pass [[URL]]::`@cache linux.org.ru`

### Maps

- Google Maps - search for places::`@m moscow`
- OpenStreetMap - search for places::`@osm moscow`
- Yandex Maps - search for places::`@ym moscow`

### Images, Music and Videos

- Google Images - search for images::`@gi роспись`
- Yandex Images - search for images::`@yi танкетки`
- Google Videos - search for videos::`@gv stack`
- Yandex Videos - search for videos::`@yv array`

- Yandex Music - search for music, artists::`@music bethoven`
- Last FM - search for music, artists::`@lastfm bethoven`
- Music Brainz - search for music, artists::`@mb taisha`

- YouTube - search for videos::`@y rickroll`
- Twitch - search for streams::`@tv software`
- IMDb - search for movies, actors::`@imdb titanic`
- Kinopoisk - search for movies, actors::`@kino matrix`
- Rotten Tomatoes - search for movies, actors::`@rt taxi driver`

### Books search engines

- Google Books - search for books::`@gb programming`
- Google Scholar - search for scientific articles, books::`@scholar programming`
- BookFinder - search for books::`@bf computer science`
- Project Gutenberg - search for free books::`@booksg Alice's Adventures`
- Project NN - search for free books::`@anna Alice's Adventures`

### Translation services

- Yandex Translate - translate text::`@tn invictus`
- Foldoc Dict - search for definitions, mostly technical::`@foldoc Inverse Address Resolution Protocol`
- Cambridge Dictionary - search for definitions::`@dict directory`

### Shopping

- eBay - shopping::`@eb usb hub`
- Amazon - shopping::`@am usb hub`
- AliExpress - shopping::`@ali usb hub`
- Wildberries - shopping::`@wb usb hub`
- Ozon - shopping::`@oz usb hub`

## Google

Launched 1995; 29 years ago (first prototype) 1997; 27 years ago (final launch).
Written in [[Python]], [[C]], C++.

PageRank (PR) is an algorithm used by Google Search to rank web pages in their
search engine results.

> PageRank works by counting the number and quality of links to a page to
> determine a rough estimate of how important the website is. The underlying
> assumption is that more important websites are likely to receive more links
> from other websites.\
> — <cite>[Facts about Google and Competition](https://web.archive.org/web/20111104131332/https://www.google.com/competition/howgooglesearchworks.html)</cite>

### Dork cheatsheet (search filters and operators)

[Source of these cheatsheet](https://gist.github.com/sundowndev/283efaddbcf896ab405488330d1bbc06).

#### Search filters

| Filter                       | Example                        | Description                                                                                       |
| :--------------------------- | :----------------------------- | :------------------------------------------------------------------------------------------------ |
| allintext                    | `allintext:"keyword"`          | Searches for occurrences of all the keywords given.                                               |
| intext                       | `intext:"keyword"`             | Searches for the occurrences of keywords all at once or one at a time.                            |
| inurl                        | `inurl:"keyword"`              | Searches for a URL matching one of the keywords.                                                  |
| allinurl                     | `allinurl:"keyword"`           | Searches for a URL matching all the keywords in the query.                                        |
| intitle                      | `intitle:"keyword"`            | Searches for occurrences of keywords in title all or one.                                         |
| allintitle                   | `allintitle:"keyword"`         | Searches for occurrences of keywords all at a time.                                               |
| site                         | `site:"www.google.com"`        | Specifically searches that particular site and lists all the results for that site.               |
| filetype                     | `filetype:"pdf"`               | Searches for a particular filetype mentioned in the query.                                        |
| link                         | `link:"keyword"`               | Searches for external links to pages.                                                             |
| numrange                     | `numrange:321-325`             | Used to locate specific numbers in your searches.                                                 |
| before/after                 | `... & (before:... after:...)` | Used to search within a particular date range, date format is 'YYYY-MM-DD'.                       |
| allinanchor/inanchor         | `inanchor:rat`                 | This shows sites which have the keyterms in links pointing to them, in order of the most links.   |
| allinpostauthor/inpostauthor | `allinpostauthor:"keyword"`    | Exclusive to blog search, this one picks out blog posts that are written by specific individuals. |
| related                      | `related:www.google.com`       | List web pages that are "similar" to a specified web page.                                        |
| cache                        | `cache:www.google.com`         | Shows the version of the web page that Google has in its cache.                                   |

#### Operators

Used to separate search terms and define how the search should be carried out.

OR operator searches for a given search term OR an equivalent term.
&#10;<br>
```
site:facebook.com | site:twitter.com
```

AND operator searches for a given search term AND another search term.
&#10;<br>
```
site:facebook.com & site:twitter.com
```

Operators combination.
&#10;<br>
```
(site:facebook.com | site:twitter.com) & intext:"login"
(site:facebook.com | site:twitter.com) (intext:"login")
```

Include results.
&#10;<br>
This will order results by the number of occurrence of the keyword.
```
-site:facebook.com +site:facebook.*
```

Exclude results.
&#10;<br>
```
site:facebook.* -site:facebook.com
```

Synonyms.
&#10;<br>
Adding a tilde to a search word tells Google that you want it to bring back
synonyms for the term as well. For example, entering "~set" will bring back
results that include words like "configure", "collection" and "change" which are
all synonyms of "set". Fun fact: "set" has the most definitions of any word in
the dictionary.
```
~set
```

Glob pattern (*).
&#10;<br>
Putting an asterisk in a search tells Google ‘I don’t
know what goes here’. Basically, it’s really good for finding half remembered
song lyrics or names of things.
```
site:*.com
```

#### Examples

intext:"index of /" linux
&#10;<br>
Search for the term "index of /" in the body of the SERPs. Usually open
`http/ftp` servers.

`Nina Simone intitle:"index.of" "parent directory" "size" "last modified"
"description" I Put A Spell On You (mp4|mp3|avi|flac|aac|ape|ogg)
-inurl:(jsp|php|html|aspx|htm|cf|shtml|lyrics-realm|mp3-collection) -site:.info`
&#10;<br>
Search for Nina Simone's album "I Put A Spell On You" in the body of the SERPs.
"parent directory" "size" "last modified" "description" are common strings
(patterns) found on open `http/ftp` servers.
Filter file types to `mp4`, `mp3`, `avi`, `flac`, `aac`, `ape`, `ogg` with
OR operator.
Exclude URL's with `jsp`, `php`, `html`, `aspx`, `htm`, `cf`, `shtml`,
`lyrics-realm`, `mp3-collection` and exclude all the results from the site with
the `.info` TLD.

`Bill Gates intitle:"index.of" "parent directory" "size" "last modified"
"description" Microsoft (pdf|txt|epub|doc|docx)
-inurl:(jsp|php|html|aspx|htm|cf|shtml|ebooks|ebook) -site:.info`
&#10;<br>
Search for Bill Gates documents, "parent directory" "size" "last modified"
"description" are common strings (patterns) found on open `http/ftp` servers.
Filter file types to `pdf`, `txt`, `epub`, `doc`, `docx` with OR operator.
Exclude URL's with `jsp`, `php`, `html`, `aspx`, `htm`, `cf`, `shtml`, `ebooks`,
`ebook` and exclude all the results from the site with the `.info` TLD.

`parent directory Mandriva  -xxx -html -htm -php -shtml -opendivx -md5 -md5sums`
&#10;<br>
Search for open directories (`parent directory` pattern) with `Mandriva` text.
Exclude results from unnecessary pages (URL's containing `xxx`, `html`, `htm`,
`php`, `shtml`, `opendivx`, `md5`, `md5sums`).
Instead, Mandriva you can search files (MP3, JPG, etc.) or other Linux
distributions. Music albums, movies, software, etc.

`filetype:config inurl:web.config inurl:ftp`
Search for `web.config` files that contain the word `config` and are located in
ftp directories.

`"Windows XP Professional" 94FBR`
&#10;<br>
Search for serial keys for Windows XP Professional (search education purpose
only, don't pirate anything).

`ext:(doc | pdf | xls | txt | ps | rtf | odt | sxw | psw | ppt | pps | xml)
(intext:confidential salary | intext:"budget approved") inurl:confidential`
&#10;<br>
Find documents (doc, xls, ...) that contain the phrase "confidential salary" and
"budget approved" in the body of the document. The documents are located in
directories or at URL's named "confidential".

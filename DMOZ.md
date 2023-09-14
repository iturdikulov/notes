---
date: 2023-09-14
tags:
  - inbox
directory: ~/Computer/data/dmoz_category/
---

# DMOZ

> DMOZ (from directory.mozilla.org, an earlier domain name, stylized in
> lowercase in its logo) **was** a multilingual open-content directory of World
> Wide Web links. The site and community who maintained it were also known as
> the Open Directory Project (ODP). It was owned by AOL (now a part of Verizon
> Media) but constructed and maintained by a community of volunteer editors.
>
> DMOZ used a hierarchical ontology scheme for organizing site listings.
> Listings on a similar topic were grouped into categories which then included
> smaller categories.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/DMOZ)</cite>

Personally I have DMOZ categories data files, which I use as inspiration to
organize my files. It's sort of [[Filesystem_Hierarchy_Standard_FHS|FHS]] but
for my local files.

Usually use [[Ripgrep]] to find required categories.

```sh
rg figlet ~/Computer/data/dmoz_category
rg Finance ~/Computer/data/dmoz_category/categories.txt|bat
```


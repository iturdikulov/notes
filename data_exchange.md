---
created: 2023-10-03T00:00+03:00
tags:
  - blog
sr-due: 2025-07-22
sr-interval: 5
sr-ease: 228
---

# Data exchange

> Data exchange is the process of taking [[data_structure|data structured]] under a source schema and transforming it into a target schema, so that the target data is an accurate representation of the source data. Data exchange allows data to be shared between different [[computer_program|computer programs]].
>
> It is similar to the related concept of data integration except that data is actually restructured (with possible loss of content) in data exchange. There may be no way to transform an instance given all of the constraints. Conversely, there may be numerous ways to transform the instance (possibly infinitely many), in which case a "best" choice of solutions has to be identified and justified.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Data_exchange)</cite>

## Popular languages used for data exchange

| Name/Abbreviation | Schemas | Flexible | Semantic verification | Dictionary | Information Model | Synonyms and homonyms | Dialecting | Web standard | Transformations | Lightweight | Human readable | Compatibility          |
| ----------------- | ------- | -------- | --------------------- | ---------- | ----------------- | --------------------- | ---------- | ------------ | --------------- | ----------- | -------------- | ---------------------- |
| RDF               | Yes     | Yes      | Yes                   | Yes        | Yes               | Yes                   | Yes        | Yes          | Yes             | Yes         | Partial        | Subset of Semantic web |
| XML               | Yes     | Yes      | No                    | No         | No                | No                    | Yes        | Yes          | Yes             | No          | Yes            | subset of SGML, HTML   |
| Atom              | Yes     | Un­known  | Un­known               | Un­known    | No                | Un­known               | Yes        | Yes          | Yes             | No          | No             | XML dialect            |
| JSON              | No      | Un­known  | Un­known               | Un­known    | No                | Un­known               | No         | Yes          | No              | Yes         | Yes            | subset of YAML         |
| YAML              | No      | Un­known  | Un­known               | Un­known    | No                | Un­known               | No         | No           | No              | Yes         | Yes            | superset of JSON       |
| REBOL             | Yes     | Yes      | No                    | Yes        | No                | Yes                   | Yes        | No           | Yes             | Yes         | Yes            |                        |
| Gellish           | Yes     | Yes      | Yes                   | Yes        | No                | Yes                   | Yes        | ISO          | No              | Yes         | Partial        | SQL, RDF/XML, OWL      |

## External links

- [ ] [OpenDDL](https://openddl.org/openddl.pdf)

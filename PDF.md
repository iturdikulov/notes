---
created: 2023-03-28T00:00+03:00
tags:
  - blog
sr-due: 2025-09-16
sr-interval: 68
sr-ease: 250
---

# Portable Document Format (PDF)

> File format developed by Adobe in 1992 to present documents, including text
> formatting and images, in a manner independent of application software,
> hardware, and operating systems. Based on the PostScript language, each PDF
> file encapsulates a complete description of a fixed-layout flat document,
> including the text, fonts, vector graphics, raster images and other
> information needed to display it.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Portable_Document_Format)</cite>

My E-library is consisting mostly of PDF files. This format not "flexible",
unlike epub for example, so usually it's looking good on large screens, on phone
there some zooming issues.

Some [[vector_graphics|vector]] ([[Inkscape]], Adobe Illustrator) and
[[raster_graphics_editor|raster]] graphics editors (GIMP) can export to PDF,
it's useful as intermediate format especially for vector graphics.

<!-- NEXT: add link -->

I also have resume in this format.

## Recipes

Resize PDF pages, as dimensions used `pdfinfo` information:

```sh
input_file="./Evans-want_to_be_a_wizard.pdf"
input_file_dimensions="$(LC_ALL=C pdfinfo $input_file| LC_ALL=C awk '/^Page size:/ {printf "{%fbp,%fbp}", $3, $5}')"
echo $input_file_dimensions

# Start acutual conversion after verification
pdfjam --papersize "$input_file_dimensions" "$input_file" --outfile output.pdf
```

## To-do

- [ ] PostScript → PDF conversion example.
- [ ] PostScript's information
- [ ] Review PDF libraries, client-side, JS-based, etc.

## Tools

- pdfunite (part of poppler) - merge PDF files, usage:
  `pdfunite file1.pdf file2.pdf merged.pdf`

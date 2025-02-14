---
date: 2023-08-12T00:00+03:00
tags:
  - blog
  - computer_programming_tools
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 273
---

# xxd

> Make a `hexdump` ([[hexadecimal]] data) or do the reverse.\
> — <cite>`man xxd`</cite>

How to print first 32 bytes of file in hex format.
<br class="f">
`xxd -l 32 -p <filename>`

How to revert a plaintext hexdump from xxd (`xxd -p input_file`) back into
binary, and save it as a binary file?
<br class="f">
`xxd -r -p input_file output_file`

You can also able to integrate xxd with vim `:h hex-editing`.

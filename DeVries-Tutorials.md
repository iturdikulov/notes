---
author: TJ DeVries
created: 2023-06-05T00:00+03:00
external:
  - https://www.youtube.com/@teej_dv/videos
directory: ~/Computer/programming/DeVries-Tutorials/
tags:
  - blog
  - computer_programming
  - annotation_video
sr-due: 2025-08-01
sr-interval: 20
sr-ease: 210
---

# Debugging In Neovim (ft BashBunni)

Indent paragraph:<wbr class="f"> `>ip`

Delete paragraph:<wbr class="f"> `dip`

`:map`:<wbr class="f"> List of all maps for all modes

`:nmap`:<wbr class="f"> List of all maps for normal mode

`:nmap <leader>`:<wbr class="f"> List of all maps for normal + leader key

`:verbose :nmap <leader>`:<wbr class="f"> List of all maps for normal + leader key + source

To debug, like `LSP`, dap-debug require debug server.

You can set up `dap-u` to use different tabs/windows.

`F1-F..` can be used as mapping for step's in progression (into/out...)

One of useful plugin is `nvim-dap-virtual-text`

Breakpoint condition how to use them?
<br class="f">
For example: `i == 1` - only trigger breakpoint when `i` is equal to `1`

Dap-ui can be start automatically on starting debug session, nvim-dap trigger event and dap-ui listen it.

Key name for dap-ui events `dapui_config` is not important/strict rule.

Dap-debug support REPL.

Dap is created by Microsoft.

You can use `ඞ` as symbol for breakpoint

TODO:<wbr class="f"> check remote debugging / attach to process.

TODO:<wbr class="f"> check LSP-symbols and start really use them

TODO:<wbr class="f"> <leader>td to run test?

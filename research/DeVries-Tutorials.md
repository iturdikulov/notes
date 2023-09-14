---
author: TJ DeVries
tags:
- inbox
- research
- vim
created: 2023-06-05
sr-due: 2023-08-25
sr-interval: 1
sr-ease: 230
external: https://www.youtube.com/@teej_dv/videos
directory: ~/Computer/programming/DeVries-Tutorials/
---

# Debugging In Neovim (ft BashBunni)

Indent paragraph::`>ip`

Delete paragraph::`dip`

`:map`::List of all maps for all modes

`:nmap`::List of all maps for normal mode

`:nmap <leader>`::List of all maps for normal + leader key

`:verbose :nmap <leader>`::List of all maps for normal + leader key + source

To debug, like `LSP`, dap-debug require debug server.

You can set up `dap-u` to use different tabs/windows.

`F1-F..` can be used as mapping for step's in progression (into/out...)

One of useful plugin is `nvim-dap-virtual-text`

Breakpoint condition how to use them?
?
For example: `i == 1` - only trigger breakpoint when `i` is equal to `1`

Dap-ui can be start automatically on starting debug session, nvim-dap trigger
event and dap-ui listen it.

Key name for dap-ui events `dapui_config` is not important/strict rule.

Dap-debug support REPL.

Dap is created by Microsoft.

You can use `ඞ` as symbol for breakpoint

TODO::check remote debugging / attach to process.

TODO::check LSP-symbols and start really use them

TODO::<leader>td to run test?

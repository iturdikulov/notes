---
external:
  - https://github.com/nvim-neotest/neotest
created: 2023-03-19T00:00+03:00
tags:
  - blog
  - WEAPON
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 223
---

# Neotest - A framework for interacting with tests within NeoVim.

A framework for interacting with [[software_testing|tests]] within [[Neovim]].

Has core to run tests runners, interact with them, and display results (interact with user).

Has plugins to interact with specific test runners. Currently, I use `neotest-python` with `pytest` runner.

Usage pretty standard, it can run/stop the nearest test, run all tests in file, debug tests and attach to tests.

Core documentation is here:

- `:h neotest` - details of neotest design and how to interact with it programmatically
- `:h neotest.Config` - configuration options
- `:h neotest.setup()` - default setup values for neotest
- `:h neotest.run.xxx` - run and stop tests
- `:h neotest.output` - displays output of tests
- `:h neotest.output_panel` - records all output of tests over time in a single window
- `:h neotest.summary` - displays test suite structure from project root
- `:h neotest.diagnostic` - use vim.diagnostic to display error messages where they occur while running
- `:h neotest.status` - displays the status of a test/namespace beside the beginning of the definition.

## Usage

```lua examples
-- Run the nearest test
require("neotest").run.run()

-- Run the current file
require("neotest").run.run(vim.fn.expand("%"))

-- Debug the nearest test (requires nvim-dap and adapter support)
require("neotest").run.run({strategy = "dap"})

-- Stop the nearest test, see :h neotest.run.stop()
require("neotest").run.stop()

-- Attach to the nearest test, see :h neotest.run.attach()
require("neotest").run.attach()

-- Open the output of a test result
lua require("neotest").output.open({ enter = true })

-- Toggle the output panel
lua require("neotest").output_panel.toggle()

-- Toggle the summary window
lua require("neotest").summary.toggle()

-- Jump to the next/previous test
lua require("neotest").jump.prev({ status = "failed" })
lua require("neotest").jump.next({ status = "failed" })
```

## Strategies

Neotest use 2 strategies to run tests:

1. **integrated**, default strategy that will run a process in the background and allow opening a floating terminal to attach.
2. **dap**, Uses nvim-dap to debug tests (adapter must support providing an nvim-dap configuration).

To write adapter check official documentation: [neotest#writing-adapters](https://github.com/nvim-neotest/neotest/blob/master/README.md#writing-adapters).

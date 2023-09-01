---
date: 2023-06-08
sr-due: 2023-08-25
sr-ease: 130
sr-interval: 1
tags:
- inbox
- software
---

# Leetgo

> leetgo is a command-line tool for LeetCode that provides almost all the
> functionality of [[LeetCode]], allowing you to do all of your [[LeetCode]]
> exercises without leaving the terminal. It can automatically generate skeleton
> code and test cases, support local testing and debugging, and you can use any
> IDE you like to solve problems.
>
> — <cite>[Leetgo](https://github.com/j178/leetgo)</cite>

## Features

- Generate description, skeleton code and testing code for a question
- Customize the code template for generated code, use modifiers to pre-process
  code
- Execute test cases on your local machine
- Wait and generate contest questions just in time, test and submit all at once
- Support for both leetcode.com and leetcode.cn
- Automatically read cookies from browser, no need to enter password
- Automatically open question files in your favourite editor
- Use OpenAI to automatically discover and fix issues in the code (Experimental)

## Quick Start

1. Install leetgo
2. Initialize leetgo: `leetgo init`
3. Edit leetgo config file: `~/.config/leetgo/config.yaml`
4. Pick a question: `leetgo pick <id or name or today>`
5. Test your code: `leetgo test last -L `
6. Submit your code: `leetgo submit last`

You can test and submit in one command: `leetgo test last -L -s`

You can edit the question file in your favorite editor: `leetgo edit last`

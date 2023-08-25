---
date: 2023-08-05
tags:
  - inbox
  - definition
  - dev-tip
sr-due: 2023-08-25
sr-interval: 1
sr-ease: 230
---

# Termdown

> Countdown timer and stopwatch in your terminal\
> - <cite>[trehn/termdown](https://github.com/trehn/termdown)</cite>

Start a stopwatch::`termdown`

Start a 1 minute and 30 seconds countdown::`termdown 1m30s`

Start a 1 minute 30 seconds countdown with blinking the terminal at the end
?
`termdown 1m30s --blink`, `-b` is short for `--blink`

Show a title above countdown:
?
`termdown 1m30s --title "Interesting title"`, `-T` is short for `--title`

Display current time
?
`termdown --time`, `-z` is short for `--time`

Start a 1 minute and speak something when 5 seconds left.
?
I use custom `piper_speak` program, you may need change `then/fi` part for your
system.
`termdown 10s --exec-cmd "if [ '{0}' == '5' ]; then piper_speak '{1} left, Row! Row! Fight the Power!'; fi"`

TODO: write piper_speak and termdown wrapper.

---
date: 2023-08-05T00:00+03:00
tags:
  - blog
  - productivity
external:
  - https://github.com/trehn/termdown
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 272
---

# Termdown

> Countdown timer and stopwatch in your terminal\
> - <cite>[trehn/termdown](https://github.com/trehn/termdown)</cite>

Start a stopwatch:<wbr class="f"> `termdown`

Start a 1 minute and 30 seconds countdown:<wbr class="f"> `termdown 1m30s`

Start a 1 minute 30 seconds countdown with blinking the terminal at the end
<br class="f">
`termdown 1m30s --blink`, `-b` is short for `--blink`

Show a title above countdown:
<br class="f">
`termdown 1m30s --title "Interesting title"`, `-T` is short for `--title`

Display current time
<br class="f">
`termdown --time`, `-z` is short for `--time`

Start a 1 minute and speak something when 5 seconds left.
<br class="f">
I use custom `piper_speak` program, you may need change `then/fi` part for your
system.
`termdown 10s --exec-cmd "if [ '{0}' == '5' ]; then piper_speak '{1} left, Row! Row! Fight the Power!'; fi"`

TODO: write piper_speak and termdown wrapper.

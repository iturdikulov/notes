---
date: 2023-06-04T00:00+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2024-02-21
sr-interval: 26
sr-ease: 287
---

# Vimium - The Hacker's Browser

> Vimium is a browser extension that provides keyboard-based navigation and
> control of the web in the spirit of the Vim editor.\
> — <cite>[Vimium](https://vimium.github.io/)</cite>

**Installation instructions:**

Install via the [Chrome web store](https://chrome.google.com/extensions/detail/dbepggeogbaibhgnhhndojpepiihcmeb) or the [Firefox Add-ons site](https://addons.mozilla.org/en-GB/firefox/addon/vimium-ff/).

## Keyboard bindings

Modifier keys are specified as `<c-x>`, `<m-x>`, and `<a-x>` for ctrl+x, meta+x, and alt+x
respectively. For shift+x and ctrl-shift-x, just type `X` and `<c-X>`. See the next section for how to
customize these bindings.

Once you have Vimium installed, you can see this list of key bindings at any time by typing `?`.

`C-?`:<wbr class="f"> show the help dialog for a list of all available keys

`yy`:<wbr class="f"> copy the current url to the clipboard
<!--SR:!2024-01-27,7,265-->

`H`:<wbr class="f"> go back in history

`L`:<wbr class="f"> go forward in history

`<C-6>`:<wbr class="f"> Go to previously-visited tab (visitPreviousTab)

`gi`
<br class="f">
focus the first (or n-th) text input box on the page. Use <tab> to cycle through
options.

`i`:<wbr class="f"> enter insert mode -- all commands will be ignored until you hit Esc to exit

`C-;`:<wbr class="f"> open a link in the current tab

`C-:`:<wbr class="f"> open a link in a new tab

`b`:<wbr class="f"> Open bookmark

`B`:<wbr class="f"> Open bookmark in a new tab

`C-S-1` (brave custom hotkey):<wbr class="f"> move current tab to new window. NOTE: this is sometimes very useful.

`C-S-A` (brave default hotkey):<wbr class="f"> search through your open tabs

`ma, mA`:<wbr class="f"> set local mark "a" (global mark "A")

Jump to local mark "a" (global mark "A")
<br class="f">
`\`a, \`A`

"\`\`"
<br class="f">
jump back to the position before the previous jump, that is, before the previous
`gg, G, n, N, /` or `\`a`

`]], [[`:<wbr class="f"> Follow the link labeled 'next' or '>' ('previous' or '<')

`<a-f>`:<wbr class="f"> open multiple links in a new tab

## Custom Key Mappings

You may remap or unmap any of the default key bindings in the "Custom key
mappings" on the options page.

Enter one of the following key mapping commands per line:

- ==`map key command`==: Maps a key to a Vimium command. Overrides Chrome's
  default behavior (if any).
- ==`unmap key`==: Unmaps a key and restores Chrome's default behavior (if any).
- ==`unmapAll`==: Unmaps all bindings. This is useful if you want to completely
  wipe Vimium's defaults and start from scratch with your own setup.

Examples:

- `map <c-d> scrollPageDown` maps ctrl+d to scrolling the page down. Chrome's
  default behavior of bringing up a bookmark dialog is suppressed.
- `map r reload` maps the r key to reloading the page.
- `unmap <c-d>` removes any mapping for ctrl+d and restores Chrome's default
  behavior.
- `unmap r` removes any mapping for the r key.

Available Vimium commands can be found via the "Show available commands" link
near the key mapping box on the options page. The command name appears to the
right of the description in parentheses.

You can add comments to key mappings by starting a line with `"` or `#`.

The following special keys are available for mapping:

- `<c-*>`, `<a-*>`, `<s-*>`, `<m-*>` for ctrl, alt, shift, and meta (command on
  Mac) respectively with any key. Replace `*` with the key of choice.
- `<left>`, `<right>`, `<up>`, `<down>` for the arrow keys.
- `<f1>` through `<f12>` for the function keys.
- `<space>` for the space key.
- `<tab>`, `<enter>`, `<delete>`, `<backspace>`, `<insert>`, `<home>` and
  `<end>` for the corresponding non-printable keys (version 1.62 onwards).

Shifts are automatically detected so, for example, `<c-&>` corresponds to
ctrl+shift+7 on an English keyboard.

## External links

- Many of the more advanced or involved features are documented on
  [Vimium's GitHub wiki](https://github.com/philc/vimium/wiki).

- Also see the [FAQ](https://github.com/philc/vimium/wiki/FAQ).

---
date: 2023-06-04
tags:
  - bridge
  - SR_vim
  - inbox
sr-due: 2024-02-21
sr-interval: 26
sr-ease: 287
---

# Vimium - The Hacker's Browser

> Vimium is a browser extension that provides keyboard-based navigation and
> control of the web in the spirit of the Vim editor.\
> — <cite>[Vimium](https://vimium.github.io/)</cite>

<!-- NEXT: outdated -->

**Installation instructions:**

Install via the [Chrome web store](https://chrome.google.com/extensions/detail/dbepggeogbaibhgnhhndojpepiihcmeb) or the [Firefox Add-ons site](https://addons.mozilla.org/en-GB/firefox/addon/vimium-ff/).

## Keyboard Bindings

Modifier keys are specified as `<c-x>`, `<m-x>`, and `<a-x>` for ctrl+x, meta+x, and alt+x
respectively. For shift+x and ctrl-shift-x, just type `X` and `<c-X>`. See the next section for how to
customize these bindings.

Once you have Vimium installed, you can see this list of key bindings at any time by typing `?`.

## Navigating the current page

`?`::show the help dialog for a list of all available keys

`gg`::scroll to top of the page

`G`::scroll to bottom of the page

`d`::scroll down half a page

`u`::scroll up half a page

`C-'`::open a link in the current tab

`C-"`::open a link in a new tab

`r`::reload

`gs`::view source

`i`::enter insert mode -- all commands will be ignored until you hit Esc to exit

`yy`::copy the current url to the clipboard
<!--SR:!2024-01-27,7,265-->

`yf`::copy a link url to the clipboard

`gf`::cycle forward to the next frame

`gF`::focus the main/top frame

## Navigating to new pages

`C-h`::Open URL, bookmark, or history entry

`C-H`::Open URL, bookmark, history entry in a new tab
<!--SR:!2023-06-06,1,225-->

`b`::Open bookmark

`B`::Open bookmark in a new tab

## Using find

`/`::enter find mode, `enter` to search, or `Esc` to cancel

`n`::cycle forward to the next find match

`N`::cycle backward to the previous find match

For advanced usage, see [regular expressions](https://github.com/philc/vimium/wiki/Find-Mode) on the wiki.

Navigating your history:

`H`::go back in history
`L`::go forward in history

Manipulating tabs:

`J, gT`::go one tab left

`K, gt`::go one tab right

`g0`::go to the first tab. Use ng0 to go to n-th tab
<!--SR:!2023-06-06,1,225-->

`g$`::go to the last tab

`^`::visit the previously-visited tab

`t`::create tab

`yt`::duplicate current tab

`x`::close current tab

`X`::restore closed tab (i.e. unwind the 'x' command)
<!--SR:!2023-06-07,2,245-->

`T`::search through your open tabs

`W`::move current tab to new window. NOTE: this is sometimes very useful.

`<c-q>`::pin/unpin current tab

## Using marks

`ma, mA`::set local mark "a" (global mark "A")

Jump to local mark "a" (global mark "A")
&#10;
`\`a, \`A`

"\`\`"
&#10;
jump back to the position before the previous jump, that is, before the previous
`gg, G, n, N, /` or `\`a`

## Additional advanced browsing commands

`]], [[`::Follow the link labeled 'next' or '>' ('previous' or '<')

`<a-f>`::open multiple links in a new tab

`gi`
&#10;
focus the first (or n-th) text input box on the page. Use <tab> to cycle through
options.

`gu`::go up one level in the URL hierarchy
<!--SR:!2023-06-06,2,245-->

`gU`::go up to root of the URL hierarchy

`ge`::edit the current URL
<!--SR:!2023-06-05,1,228-->

`gE`::edit the current URL and open in a new tab
<!--SR:!2024-01-21,1,225-->

`zH`::scroll all the way left

`zL`::scroll all the way right

`v`::enter visual mode; use p/P to paste-and-go, use y to yank

`V`::enter visual line mode

Vimium supports command repetition so, for example, hitting ==`5t`== will open 5
tabs in rapid succession. `<Esc>` (or `<c-[>`) will clear any partial commands
in the queue and will also exit insert and find modes.

There are some advanced commands which aren't documented here; refer to the help
dialog (type ==`?`==) for a full list.
<!--SR:!2023-06-05,1,230-->

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

## References

- Many of the more advanced or involved features are documented on
  [Vimium's GitHub wiki](https://github.com/philc/vimium/wiki).

- Also see the [FAQ](https://github.com/philc/vimium/wiki/FAQ).

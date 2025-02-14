---
date: 2023-09-22T00:00+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2024-01-29
sr-interval: 4
sr-ease: 274
---

# Web browser

> A web browser is an application for accessing websites. When a user requests a
> web page from a particular website, the browser retrieves its files from a web
> server and then displays the page on the user's screen. Browsers are used on a
> range of devices, including desktops, laptops, tablets, and smartphones. In
> 2020, an estimated 4.9 billion people have used a browser. The most used
> browser is Google Chrome, with a 65% global market share on all devices,
> followed by Safari with 18%.
>
> A web browser is not the same thing as a search engine, though the two are
> often confused. A search engine is a website that provides links to other
> websites. However, to connect to a website's server and display its web pages,
> a user must have a web browser installed. In some technical contexts, browsers
> are referred to as user agents.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Web_browser)</cite>

Currently, I use and [[Brave]] and [[Firefox]] as fallback browser.

I also recommend checking and integrate [[search_engine|search engines]] into
your browser.

## Chromium Command Line Switches

Since I using mostly chromium-based browsers, I can use command line switches to
customize my browser behaviour, this is useful for debugging and testing.

List of auto-generated command line switches can be found in
[Beverloo](https://peter.sh/experiments/chromium-command-line-switches/) page.

Alternative source is
[Kapeli](https://kapeli.com/cheat_sheets/Chromium_Command_Line_Switches.docset/Contents/Resources/Documents/index)
documentation.

## Shortcuts

This is a list of keyboard shortcuts which I use in my web browser.

### Tabs and Windows

- Open a new window:<wbr class="f"> `C-n`
- Open a new window in Private mode:<wbr class="f"> `C-S-n`
- Open a new tab, and jump to it:<wbr class="f"> `C-t`
- Reopen the last closed tab, and jump to it:<wbr class="f"> `C-S-t`
- Search for the last closed tab or active:<wbr class="f"> `C-S-a`
- Jump to the next open tab:<wbr class="f"> `C-Tab`
- Jump to the previous open tab:<wbr class="f"> `C-S-Tab`
- Jump to a specific tab:<wbr class="f"> `M-#` where `#` is 1-8 key.
- Jump to the last tab:<wbr class="f"> `M-9`. Jump to first tab with `M-1`.
- Open your home page in the current tab:<wbr class="f"> `M-home`
- Open the previous page:<wbr class="f"> `M-left`
- Open the next page:<wbr class="f"> `M-right`
- Close the current tab:<wbr class="f"> `C-w`
- Close all tabs and window:<wbr class="f"> `C-S-w`
- Close all tabs except the current one:<wbr class="f"> `C-M-w`

### Browser

- Open the Main menu:<wbr class="f"> `M-e`
- Show or hide the Bookmarks bar:<wbr class="f"> `C-S-b`
- Open the Bookmarks Manager:<wbr class="f"> `C-S-o`
- Open the History page in a new tab:<wbr class="f"> `C-h`
- Open the Downloads page in a new tab:<wbr class="f"> `C-j`
- Open the Task Manager:<wbr class="f"> `S-Esc`
- Set focus on the last item in the toolbar:<wbr class="f"> `F10`
- Switch focus to unfocused dialog (if showing)
<br class="f">
`F6`. If you press `F6` 2 times in focused address bar, you restore focus to the
page, this is useful to use with extensions like vimium.
- Open the Find Bar to search the current page:<wbr class="f"> `C-f` or `F3`
- Jump to the next match to your Find Bar search:<wbr class="f"> `C-g`
- Jump to the previous match to your Find Bar search:<wbr class="f"> `C-S-g`
- Open Developer Tools:<wbr class="f"> `C-S-j` or `F12` or `C-S-c` (this also allow selecting elements).
- Open the Clear Browsing Data options
<br class="f">
`C-S-Delete`. This is dangerous. Much safer just clear this data in `Devtools ->
Application -> Storage`.
- Open the Help Center in a new tab:<wbr class="f"> `F1`
- Open Profile menu:<wbr class="f"> `C-S-m`

### Address bar

- Search with your default search engine in current tab:<wbr class="f"> Type a search term `CR`
- Search with custom search engine
<br class="f">
Type a search engine name (`@nix`) and press `tab` or `space`.
- Add .com to a site name, and open it:<wbr class="f"> Type a site name and press `C-CR` <!--SR:!2024-09-24,3,274-->
- Open a new tab, focus it and perform a search:<wbr class="f"> Type a search term `M-CR`
- Jump to the address bar:<wbr class="f"> `C-l` or `meta-d` or `f6`
- Remove predictions from your address bar
<br class="f">
`down` arrow to highlight, `S-delete`. Useful if you have annoying items.

### Webpage

- Open options to print the current page:<wbr class="f"> `C-p`
- Open options to save the current page:<wbr class="f"> `C-s`
- Reload the current page:<wbr class="f"> `F5` or `C-r`
- Reload the current page, ignoring cached content:<wbr class="f"> `S-F5` or `C-S-r`
- Stop the page loading:<wbr class="f"> `Esc`
- Browse clickable items moving forward:<wbr class="f"> `tab`
- Browse clickable items moving backward:<wbr class="f"> `S-tab`
- Open a file from your computer:<wbr class="f"> `C-o`
- Display non-editable HTML source code for the current page:<wbr class="f"> `C-u`
- Save your current webpage as a bookmark:<wbr class="f"> `C-d`, to cancel select `Remove`
- Save all open tabs as bookmarks in a new folder:<wbr class="f"> `C-S-d`, required > 2 tabs
- Toggle full-screen mode:<wbr class="f"> `f11`, rare use. I use DWM full-screen. <!--SR:!2024-09-24,3,274-->
- Make everything on the page bigger:<wbr class="f"> `C-+`
- Make everything on the page smaller:<wbr class="f"> `C--`
- Return everything on the page to default size:<wbr class="f"> `C-0`
- Scroll down a webpage, a screen at a time:<wbr class="f"> `space` or `pgdn` (preferable)
- Scroll up a webpage, a screen at a time:<wbr class="f"> `S-space` or `pgup` (preferable)
- Go to the top of the page:<wbr class="f"> `home`
- Go to the bottom of the page:<wbr class="f"> `end`
- Scroll horizontally on the page:<wbr class="f"> `S-scroll` your mouse wheel
- Move your cursor to the front of the previous word in a text field:<wbr class="f"> `C-left` arrow
- Move your cursor to the back of the next word in a text field:<wbr class="f"> `C-right` arrow
- Delete the previous word in a text field:<wbr class="f"> `C-backspace`

### Mouse

- Open a link in a current tab (mouse only)
<br class="f">
Drag a link to a tab. Also, useful to drag links into search input on page
- Open a link in new background tab:<wbr class="f"> `C-click` a link
- Open a link, and jump to it:<wbr class="f"> `C-S-click` a link
- Open a link, and jump to it (mouse only):<wbr class="f"> Drag a link to a blank area of the tab strip
- Open a link in a new window:<wbr class="f"> S-Click a link
- Open a tab in a new window (mouse only):<wbr class="f"> Drag the tab out of the tab strip
- Move a tab to a current window (mouse only)
<br class="f">
Drag the tab into an existing window, Press `esc` while dragging to cancel.
- Save the current webpage as a bookmark with mouse:<wbr class="f"> Drag the web address to the Bookmarks Bar
- Display your browsing history:<wbr class="f"> `right-click` on `back` and `next` buttons or hold them
- Make everything on the page bigger with mouse:<wbr class="f"> `C-scroll` your mouse-wheel up
- Make everything on the page smaller with mouse:<wbr class="f"> `C-scroll` your mouse-wheel down

## Development tools

DevTools allowing you edit web pages in live mode, debug [[JavaScript]] code and
examine page source and structure (DOM tree).

Since my primary browser is Brave, I take more attention to Chrome DevTools
details. [Chrome DevTools](https://developer.chrome.com/docs/devtools) are
supported in Brave, so it's recommended to use them for debugging and testing
when working with web development (frontend). Check link above for more
information.

All shortcuts aviable in `shortcuts` section in DevTools settings or on
[this](https://developer.chrome.com/docs/devtools/shortcuts) web page.

### Global shortcuts

- Open general settings:<wbr class="f"> `?` or `F1`
- Switch back to whatever docking position you last used:<wbr class="f"> `C-S-d` <!--SR:!2024-09-22,1,254-->
- Toggle Device Mode:<wbr class="f"> `C-S-m`
- Toggle Developer Tools and Inspect Element Mode:<wbr class="f"> `C-S-c`
- Open the Command Menu:<wbr class="f"> `C-S-p`
- Toggle Last Used Panel:<wbr class="f"> `C-S-i`
- Toggle console:<wbr class="f"> `C-S-j`
- Next/previous panel:<wbr class="f"> `C-]` and `C-[`
- Jump to panel `#1-9`:<wbr class="f"> `C-#` where `#` is 1-9 key.
- Backward/forward in panel history:<wbr class="f"> `C-M-]`, `C-M-[`
- Toggle console:<wbr class="f"> `Esc`
- Text search across all sources:<wbr class="f"> `C-S-f`
- Go to source (open file):<wbr class="f"> `C-o`
- Go to line in source editor:<wbr class="f"> `C-g`
- Run snippet:<wbr class="f"> `C-o`, then type `!` <!--SR:!2024-09-24,3,274-->
- Expand or collapse node and all of its children:<wbr class="f"> `C-M-LMB`
- Select the next / previous attribute in attr edit mode:<wbr class="f"> `Tab`, `S-Tab`

### Styles pane keyboard shortcuts

### Sources panel keyboard shortcuts

### Elements panel

- Expand node:<wbr class="f"> double-click on tag
- Edit attribute:<wbr class="f"> `<CR>` or double-click on attribute
- Hide element:<wbr class="f"> `h`
- Toggle edit as HTML:<wbr class="f"> `F2`
- Open context menu, to change attribute, set breakpoint, etc.:<wbr class="f"> `RMB`

## Extensions

- Toggle PIP:<wbr class="f"> `M-S-p`
- Activate proxy switcher:<wbr class="f"> `M-S-p`
- Full page export (offline copy):<wbr class="f"> `M-S-s`
- Copy selection as Markdown:<wbr class="f"> `M-S-c`

### Vimium

- Copy current tab's URL:<wbr class="f"> `yy` <!--SR:!2024-09-24,3,274-->
- Visit previous tab:<wbr class="f"> `<C-6>`
- Focus input:<wbr class="f"> `gi`
- Enter insert mode:<wbr class="f"> `i` <!--SR:!2024-11-20,7,274-->
- Activate link hints:<wbr class="f"> `<C-;>`
- Activate link hints to open in new foreground tab:<wbr class="f"> `<C-:>`

## External links

- [ ] [How browsers work](https://web.dev/howbrowserswork/)
- [ ] [Populating the page: how browsers work - Web performance | MDN](https://developer.mozilla.org/en-US/docs/Web/Performance/How_browsers_work)
- [ ] [Preload, Prefetch, Preconnect in WordPress: the Browser Resource Hints](https://wp-rocket.me/blog/preload-prefetch-preconnect-speed-site-browser-resource-hints/)

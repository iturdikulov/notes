---
date: 2023-09-22T00:00+03:00
tags:
  - inbox
  - productivity
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

- Open a new window::`C-n`
- Open a new window in Private mode::`C-S-n`
- Open a new tab, and jump to it::`C-t`
- Reopen the last closed tab, and jump to it::`C-S-t`
- Search for the last closed tab or active::`C-S-a`
- Jump to the next open tab::`C-Tab`
- Jump to the previous open tab::`C-S-Tab`
- Jump to a specific tab::`M-#` where `#` is 1-8 key.
- Jump to the last tab::`M-9`. Jump to first tab with `M-1`.
- Open your home page in the current tab::`M-home`
- Open the previous page::`M-left`
- Open the next page::`M-right`
- Close the current tab::`C-w`
- Close all tabs and window::`C-S-w`
- Close all tabs except the current one::`C-M-w`

### Browser

- Open the Main menu::`M-e`
- Show or hide the Bookmarks bar::`C-S-b`
- Open the Bookmarks Manager::`C-S-o`
- Open the History page in a new tab::`C-h`
- Open the Downloads page in a new tab::`C-j`
- Open the Task Manager::`S-Esc`
- Set focus on the last item in the toolbar::`F10`
- Switch focus to unfocused dialog (if showing)
&#10;<br>
`F6`. If you press `F6` 2 times in focused address bar, you restore focus to the
page, this is useful to use with extensions like vimium.
- Open the Find Bar to search the current page::`C-f` or `F3`
- Jump to the next match to your Find Bar search::`C-g`
- Jump to the previous match to your Find Bar search::`C-S-g`
- Open Developer Tools::`C-S-j` or `F12` or `C-S-c` (this also allow selecting elements).
- Open the Clear Browsing Data options
&#10;<br>
`C-S-Delete`. This is dangerous. Much safer just clear this data in `Devtools ->
Application -> Storage`.
- Open the Help Center in a new tab::`F1`
- Open Profile menu::`C-S-m`

### Address bar

- Search with your default search engine in current tab::Type a search term `CR`
- Search with custom search engine
&#10;<br>
Type a search engine name (`@nix`) and press `tab` or `space`.
- Add .com to a site name, and open it::Type a site name and press `C-CR` <!--SR:!2024-09-24,3,274-->
- Open a new tab, focus it and perform a search::Type a search term `M-CR`
- Jump to the address bar::`C-l` or `meta-d` or `f6`
- Remove predictions from your address bar
&#10;<br>
`down` arrow to highlight, `S-delete`. Useful if you have annoying items.

### Webpage

- Open options to print the current page::`C-p`
- Open options to save the current page::`C-s`
- Reload the current page::`F5` or `C-r`
- Reload the current page, ignoring cached content::`S-F5` or `C-S-r`
- Stop the page loading::`Esc`
- Browse clickable items moving forward::`tab`
- Browse clickable items moving backward::`S-tab`
- Open a file from your computer::`C-o`
- Display non-editable HTML source code for the current page::`C-u`
- Save your current webpage as a bookmark::`C-d`, to cancel select `Remove`
- Save all open tabs as bookmarks in a new folder::`C-S-d`, required > 2 tabs
- Toggle full-screen mode::`f11`, rare use. I use DWM full-screen. <!--SR:!2024-09-24,3,274-->
- Make everything on the page bigger::`C-+`
- Make everything on the page smaller::`C--`
- Return everything on the page to default size::`C-0`
- Scroll down a webpage, a screen at a time::`space` or `pgdn` (preferable)
- Scroll up a webpage, a screen at a time::`S-space` or `pgup` (preferable)
- Go to the top of the page::`home`
- Go to the bottom of the page::`end`
- Scroll horizontally on the page::`S-scroll` your mouse wheel
- Move your cursor to the front of the previous word in a text field::`C-left` arrow
- Move your cursor to the back of the next word in a text field::`C-right` arrow
- Delete the previous word in a text field::`C-backspace`

### Mouse

- Open a link in a current tab (mouse only)
&#10;<br>
Drag a link to a tab. Also, useful to drag links into search input on page
- Open a link in new background tab::`C-click` a link
- Open a link, and jump to it::`C-S-click` a link
- Open a link, and jump to it (mouse only)::Drag a link to a blank area of the tab strip
- Open a link in a new window::S-Click a link
- Open a tab in a new window (mouse only)::Drag the tab out of the tab strip
- Move a tab to a current window (mouse only)
&#10;<br>
Drag the tab into an existing window, Press `esc` while dragging to cancel.
- Save the current webpage as a bookmark with mouse::Drag the web address to the Bookmarks Bar
- Display your browsing history::`right-click` on `back` and `next` buttons or hold them
- Make everything on the page bigger with mouse::`C-scroll` your mouse-wheel up
- Make everything on the page smaller with mouse::`C-scroll` your mouse-wheel down

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

- Open general settings::`?` or `F1`
- Switch back to whatever docking position you last used::`C-S-d` <!--SR:!2024-09-22,1,254-->
- Toggle Device Mode::`C-S-m`
- Toggle Developer Tools and Inspect Element Mode::`C-S-c`
- Open the Command Menu::`C-S-p`
- Toggle Last Used Panel::`C-S-i`
- Toggle console::`C-S-j`
- Next/previous panel::`C-]` and `C-[`
- Jump to panel `#1-9`::`C-#` where `#` is 1-9 key.
- Backward/forward in panel history::`C-M-]`, `C-M-[`
- Toggle console::`Esc`
- Text search across all sources::`C-S-f`
- Go to source (open file)::`C-o`
- Go to line in source editor::`C-g`
- Run snippet::`C-o`, then type `!` <!--SR:!2024-09-24,3,274-->
- Expand or collapse node and all of its children::`C-M-LMB`
- Select the next / previous attribute in attr edit mode::`Tab`, `S-Tab`

### Styles pane keyboard shortcuts

### Sources panel keyboard shortcuts

### Elements panel

- Expand node::double-click on tag
- Edit attribute::`<CR>` or double-click on attribute
- Hide element::`h`
- Toggle edit as HTML::`F2`
- Open context menu, to change attribute, set breakpoint, etc.::`RMB`

## Extensions

- Toggle PIP::`M-S-p`
- Activate proxy switcher::`M-S-p`
- Full page export (offline copy)::`M-S-s`
- Copy selection as Markdown::`M-S-c`

### Vimium

- Copy current tab's URL::`yy` <!--SR:!2024-09-24,3,274-->
- Visit previous tab::`<C-6>`
- Focus input::`gi`
- Enter insert mode::`i` <!--SR:!2024-11-20,7,274-->
- Activate link hints::`<C-;>`
- Activate link hints to open in new foreground tab::`<C-:>`

## External links

- [ ] [How browsers work](https://web.dev/howbrowserswork/)
- [ ] [Populating the page: how browsers work - Web performance | MDN](https://developer.mozilla.org/en-US/docs/Web/Performance/How_browsers_work)
- [ ] [Preload, Prefetch, Preconnect in WordPress: the Browser Resource Hints](https://wp-rocket.me/blog/preload-prefetch-preconnect-speed-site-browser-resource-hints/)

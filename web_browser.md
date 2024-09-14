---
date: 2023-09-22
tags:
  - inbox
  - SR_productivity
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

## Development tools

DevTools allowing you edit web pages in live mode, debug [[research/JavaScript]] code and
examine page source and structure (DOM tree).

Since my primary browser is Brave, I take more attention to Chrome DevTools
details. [Chrome DevTools](https://developer.chrome.com/docs/devtools) are
supported in Brave, so it's recommended to use them for debugging and testing
when working with web development (frontend). Check link above for more
information.

To toggle DevTools press `C-S-i` or `F12`, it will open small window with
previously opened component (specific tab on top). You can also toggle it by
right-clicking on the page element and selecting "Inspect" from the context
menu, or press `C-S-c` to enter into interactive selection mode.

### Shortcuts

This is a list of keyboard shortcuts which I use in my web browser.

## Tabs and Windows

Open a new window
&#10;
<kbd>C-n</kbd>

Open a new window in Private mode
&#10;
<kbd>C-S-n</kbd>

Open a new tab, and jump to it
&#10;
<kbd>C-t</kbd>. You can also use <kbd>O</kbd>
&#10;
to open selected [[URL]] or search term in a new tab.

Reopen the last closed tab, and jump to it. Works even after restarting Brave.
&#10;
<kbd>C-S-t</kbd>
&#10;
or <kbd>X</kbd>. You can also use <kbd>C-S-a</kbd> to search for the last closed tab or active tabs.

Jump to the next open tab
&#10;
<kbd>C-Tab</kbd>
&#10;
or <kbd>C-PgDn</kbd>.

Jump to the previous open tab
&#10;
<kbd>C-S-Tab</kbd>

Jump to a specific tab
&#10;
<kbd>M-#</kbd>
&#10;
where `#` is 1-8 key.

Jump to the last tab
&#10;
<kbd>M-9</kbd>. Jump to first tab with <kbd>M-1</kbd>.

Open your home page in the current tab
&#10;
<kbd>M-home</kbd>. Useful if you have sort of dashboard.

Open the previous page from your browsing history in the current tab
&#10;
<kbd>M-left</kbd>, or use <kbd>H</kbd>.

Open the next page from your browsing history in the current tab
&#10;
<kbd>M-right</kbd>, or use <kbd>L</kbd>.

Close the current tab
&#10;
<kbd>C-w</kbd>
&#10;
or <kbd>x</kbd>.

Close the current window
&#10;
<kbd>C-S-w</kbd>

## Browser

Open the Main menu
&#10;
<kbd>M-e</kbd>

Show or hide the Bookmarks bar
&#10;
<kbd>C-S-b</kbd>

Open the Bookmarks Manager
&#10;
<kbd>C-S-o</kbd>

Open the History page in a new tab
&#10;
<kbd>C-h</kbd>

Open the Downloads page in a new tab
&#10;
<kbd>C-j</kbd>

Open the Task Manager
&#10;
<kbd>S-Esc</kbd>

Set focus on the first item in the toolbar
&#10;
<kbd>S-M-t</kbd>. Can be used to click on certificate info.

Set focus on the last item in the toolbar
&#10;
<kbd>F10</kbd>. Can be used to access to extension buttons.

Switch focus to unfocused dialog (if showing)
&#10;
<kbd>F6</kbd>. If you press <kbd>F6</kbd>
&#10;
in focused address bar, you restore focus to the page, this is useful to use with extensions like vimium.

Open the Find Bar to search the current page
&#10;
<kbd>C-f</kbd>
&#10;
or <kbd>F3</kbd>

Jump to the next match to your Find Bar search
&#10;
<kbd>C-g</kbd>

Jump to the previous match to your Find Bar search
&#10;
<kbd>C-S-g</kbd>

Open Developer Tools
&#10;
<kbd>C-S-j</kbd>
&#10;
or <kbd>F12</kbd> or <kbd>C-S-c</kbd> (this also allow selecting elements).

Open the Clear Browsing Data options
&#10;
<kbd>C-S-Delete</kbd>. This is dangerous. Much safer just clear this data in `Devtools -> Application -> Storage`.

Open the Brave Help Center in a new tab
&#10;
<kbd>F1</kbd>

Open Profile menu
&#10;
<kbd>C-S-m</kbd>. Probably not working if you have one profile.


## Address bar

Search with your default search engine
&#10;
Type a search term <kbd>CR</kbd>

Search using a different search engine
&#10;
Type a search engine name and press <kbd>Tab</kbd>.

Add www. and .com to a site name, and open it in the current tab
&#10;
Type a site name <kbd>C-CR</kbd>

Open a new tab and perform a search
&#10;
Type a search term <kbd>M-CR</kbd>

Jump to the address bar
&#10;
<kbd>ctrl</kbd>+<kbd>l</kbd>
&#10;
or <kbd>meta</kbd>+<kbd>d</kbd> or <kbd>f6</kbd>

Remove predictions from your address bar
&#10;
<kbd>down</kbd>
&#10;
arrow to highlight, <kbd>shift</kbd>+<kbd>delete</kbd>. Useful if you have annoying items.

## Webpage

Open options to print the current page
&#10;
<kbd>ctrl</kbd>+<kbd>p</kbd>

Open options to save the current page
&#10;
<kbd>ctrl</kbd>+<kbd>s</kbd>

Reload the current page
&#10;
<kbd>f5</kbd>
&#10;
or <kbd>ctrl</kbd>+<kbd>r</kbd>

Reload the current page, ignoring cached content
&#10;
<kbd>shift</kbd>+<kbd>f5</kbd>
&#10;
or <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>r</kbd>

Stop the page loading
&#10;
<kbd>esc</kbd>

Browse clickable items moving forward
&#10;
<kbd>tab</kbd>

Browse clickable items moving backward
&#10;
<kbd>shift</kbd>+<kbd>tab</kbd>

Open a file from your computer in Brave
&#10;
<kbd>ctrl</kbd>+<kbd>o</kbd>
&#10;
Select a file

Display non-editable HTML source code for the current page
&#10;
<kbd>ctrl</kbd>+<kbd>u</kbd>

Save your current webpage as a bookmark
&#10;
<kbd>ctrl</kbd>+<kbd>d</kbd>

Save all open tabs as bookmarks in a new folder. Work if you opened a 2+ tabs.
&#10;
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>d</kbd>

Turn full-screen mode on or off
&#10;
<kbd>f11</kbd>

Make everything on the page bigger
&#10;
<kbd>Ctrl</kbd>
&#10;
and <kbd>+</kbd>

Make everything on the page smaller
&#10;
<kbd>Ctrl</kbd>
&#10;
and <kbd>-</kbd>

Return everything on the page to default size
&#10;
<kbd>ctrl</kbd>+<kbd>0</kbd>

Scroll down a webpage, a screen at a time
&#10;
<kbd>space</kbd>
&#10;
or <kbd>pgdn</kbd>

Scroll up a webpage, a screen at a time
&#10;
<kbd>shift</kbd>+<kbd>space</kbd>
&#10;
or <kbd>pgup</kbd>

Go to the top of the page
&#10;
<kbd>home</kbd>

Go to the bottom of the page
&#10;
<kbd>end</kbd>

Scroll horizontally on the page
&#10;
<kbd>shift</kbd>+<kbd>scroll</kbd>
&#10;
your mouse wheel

Move your cursor to the front of the previous word in a text field
&#10;
<kbd>ctrl</kbd>+<kbd>left</kbd>
&#10;
arrow

Move your cursor to the back of the next word in a text field
&#10;
<kbd>ctrl</kbd>+<kbd>right</kbd>
&#10;
arrow

Delete the previous word in a text field
&#10;
<kbd>ctrl</kbd>+<kbd>backspace</kbd>

Open the Home page in the current tab
&#10;
<kbd>meta</kbd>+<kbd>home</kbd>

## Mouse

Open a link in a current tab (mouse only)
&#10;
Drag a link to a tab. Also useful to search images in Google lens.

Open a link in new background tab
&#10;
<kbd>ctrl</kbd>+<kbd>click</kbd>
&#10;
a link

Open a link, and jump to it
&#10;
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>click</kbd>
&#10;
a link

Open a link, and jump to it (mouse only)
&#10;
Drag a link to a blank area of the tab strip

Open a link in a new window
&#10;
S-Click a link

Open a tab in a new window (mouse only)
&#10;
Drag the tab out of the tab strip

Move a tab to a current window (mouse only)
&#10;
Drag the tab into an existing window

Return a tab to its original position
&#10;
Press <kbd>esc</kbd>
&#10;
while dragging

Save the current webpage as a bookmark
&#10;
Drag the web address to the Bookmarks Bar

Download the target of a link
&#10;
<kbd>meta</kbd>+<kbd>click</kbd>
&#10;
a link

Display your browsing history
&#10;
<kbd>right</kbd>+<kbd>click</kbd>
&#10;
on  <kbd>back</kbd>or <kbd>click</kbd> & hold <kbd>back</kbd> button
<kbd>right</kbd>+<kbd>click</kbd>
&#10;
on  <kbd>next</kbd>or <kbd>click</kbd> & hold <kbd>next</kbd> button

Switch between maximized and windowed modes
&#10;
Double <kbd>click</kbd>
&#10;
a blank area of the tab strip

Make everything on the page bigger
&#10;
<kbd>ctrl</kbd>+<kbd>scroll</kbd>
&#10;
your mouse-wheel up

Make everything on the page smaller
&#10;
<kbd>ctrl</kbd>+<kbd>scroll</kbd>
&#10;
your mouse-wheel down

# Extensions

Toggle Responsive Design Mode::`C-S-m`

Also, would be useful to check [[Vimium]] note.

Fill form with Browserpass
&#10;
<kbd>meta</kbd>+<kbd>shift</kbd>+<kbd>f</kbd>

Toggle dark mode for site
&#10;
<kbd>meta</kbd>+<kbd>shift</kbd>+<kbd>a</kbd>

Togle PIP
&#10;
<kbd>meta</kbd>+<kbd>p</kbd>

Copy tab url as markdown link::`C-S-y`

Copy selection into Obsidian note::`C-S-c`

## Chromium Command Line Switches

Since I using mostly chromium-based browsers, I can use command line switches to
customize my browser behaviour, this is useful for debugging and testing.

List of auto-generated command line switches can be found in
[Beverloo](https://peter.sh/experiments/chromium-command-line-switches/) page.

Alternative source is
[Kapeli](https://kapeli.com/cheat_sheets/Chromium_Command_Line_Switches.docset/Contents/Resources/Documents/index)
documentation.

## External links

- [ ] [How browsers work](https://web.dev/howbrowserswork/)
- [ ] [Populating the page: how browsers work - Web performance | MDN](https://developer.mozilla.org/en-US/docs/Web/Performance/How_browsers_work)
- [ ] [Preload, Prefetch, Preconnect in WordPress: the Browser Resource Hints](https://wp-rocket.me/blog/preload-prefetch-preconnect-speed-site-browser-resource-hints/)

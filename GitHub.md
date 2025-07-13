---
external:
  - https://github.com/
created: 2023-03-12T00:00+03:00
tags:
  - blog
  - VCS
sr-due: 2025-07-22
sr-interval: 6
sr-ease: 231
---

# GitHub

Internet hosting service for software development and version control using
[[Git]].

Like [[GitLab]] it provides the distributed version control of Git
plus access control, bug tracking, software feature requests, task management,
continuous integration, and wikis for every project.

You can optimize working with GitHub by using described tips/shortcuts in the
next sections.

## GitHub CLI

GitHub CLI brings GitHub to your terminal.

Auth through browser:<wbr class="f"> `gh auth login`

## Site wide shortcuts

- Show keyboard shortcuts for current page:<wbr class="f"> `?`
- Focus the search bar.:<wbr class="f"> `s`
- Go to your notifications.:<wbr class="f"> `g  n`
- Close hovercard and refocus on the element the hovercard is in:<wbr class="f"> `esc`
- Opens the GitHub Command Palette.:<wbr class="f"> `ctrl + k`
- Opens the GitHub Command Palette while editing Markdown:<wbr class="f"> `ctrl + alt + k`

## Repositories

- Go to the Code tab:<wbr class="f"> `g  c`
- Go to the Issues tab.:<wbr class="f"> `g  i`
- Go to the Pull requests tab.:<wbr class="f"> `g  p`
- Go to the Projects tab.:<wbr class="f"> `g  b`
- Go to the Wiki tab.:<wbr class="f"> `g  w`

## Source code editing

- Opens a repository or pull request in the web-based editor.:<wbr class="f"> `.`
- Open source code file in the Edit file tab:<wbr class="f"> `e` <!--SR:!2024-09-17,1,211-->
- Start searching in file editor:<wbr class="f"> `ctrl + f`
- Find next:<wbr class="f"> `ctrl + g`
- Find previous:<wbr class="f"> `ctrl + shift + g`
- Replace:<wbr class="f"> `ctrl + shift + f`
- Replace all:<wbr class="f"> `ctrl + shift + r`
- Jump to line:<wbr class="f"> `alt + g`
- Undo:<wbr class="f"> `ctrl + z`
- Redo:<wbr class="f"> `ctrl + y`
- Toggles between the Edit file and Preview changes tabs:<wbr class="f"> `n/a`

## Source code browsing

- Activates the file finder:<wbr class="f"> `t`
- Jump to a line in your code:<wbr class="f"> `l`
- Switch to a new branch or tag:<wbr class="f"> `w`
- Expand a URL to its canonical form.:<wbr class="f"> `y`
- Show or hide comments on diffs.:<wbr class="f"> `i`
- Open blame view.:<wbr class="f"> `b`

## Comments

- Inserts Markdown formatting for bolding text:<wbr class="f"> `ctrl + b`
- Inserts Markdown formatting for italicizing text:<wbr class="f"> `ctrl + i`
- Inserts Markdown formatting for creating a link:<wbr class="f"> `ctrl + k`
- Toggles between the Write and Preview comment tabs:<wbr class="f"> `ctrl + shift + p`
- Submits a comment:<wbr class="f"> `ctrl + enter`
- Open saved replies menu and then autofills comment field with saved reply 1.:<wbr class="f"> `ctrl + .  ctrl + 1`
- Insert a suggestion.:<wbr class="f"> `ctrl + g`
- Quote the selected text in your reply.:<wbr class="f"> `r`

## Issue and pull request lists

- Create an issue:<wbr class="f"> `c`
- Focus your cursor on the issues or pull requests search bar.:<wbr class="f"> `ctrl + /`
- Filter by author:<wbr class="f"> `u` <!--SR:!2024-09-17,1,211-->
- Filter by or edit labels.:<wbr class="f"> `l`
- While filtering by labels, exclude labels.:<wbr class="f"> `alt`
- Filter by or edit milestones.:<wbr class="f"> `m`
- Filter by or edit assignee.:<wbr class="f"> `a`
- Open issue:<wbr class="f"> `o`

## Issues and pull requests

- Request a reviewer.:<wbr class="f"> `q`
- Set a milestone.:<wbr class="f"> `m`
- Apply a label.:<wbr class="f"> `l`
- Set an assignee.:<wbr class="f"> `a`
- Toggles between the Write and Preview tabs:<wbr class="f"> `ctrl + shift + p`

## Changes in pull requests

- Open the list of commits in the pull request (files changed tab):<wbr class="f"> `c` <!--SR:!2024-09-17,1,211-->
- Open the list of changed files in the pull request:<wbr class="f"> `t`
- Move selection down in the list:<wbr class="f"> `j`
- Move selection up in the list:<wbr class="f"> `k`
- Add a single comment on a pull request diff:<wbr class="f"> `ctrl + shift + enter`
- Toggle between collapsing and expanding all outdated review comments in a pull request.:<wbr class="f"> `alt`
- Comment on multiple lines of a pull request:<wbr class="f"> `click  shift + click`

## Project boards

- Start moving the focused column:<wbr class="f"> `space`
- Cancel the move in progress:<wbr class="f"> `esc`
- Complete the move in progress:<wbr class="f"> `enter`
- Move column to the left:<wbr class="f"> `left`
- Move column to the leftmost position:<wbr class="f"> `ctrl + h`
- Move column to the right:<wbr class="f"> `right`
- Move column to the rightmost position:<wbr class="f"> `ctrl + l`
- Start moving the focused card:<wbr class="f"> `space`
- Cancel the move in progress:<wbr class="f"> `esc`
- Complete the move in progress:<wbr class="f"> `enter`
- Move card down:<wbr class="f"> `down`
- Move card to the bottom of the column:<wbr class="f"> `ctrl + j`
- Move card up:<wbr class="f"> `up`
- Move card to the top of the column:<wbr class="f"> `ctrl + k`
- Move card to the bottom of the column on the left:<wbr class="f"> `left`
- Move card to the top of the column on the left:<wbr class="f"> `shift + left`
- Move card to the bottom of the leftmost column:<wbr class="f"> `ctrl + left`
- Move card to the top of the leftmost column:<wbr class="f"> `ctrl + shift + left`
- Move card to the bottom of the column on the right:<wbr class="f"> `right`

## Project boards

- Move card to the top of the column on the right:<wbr class="f"> `shift + right`
- Move card to the bottom of the rightmost column:<wbr class="f"> `ctrl + right`
- Move card to the bottom of the rightmost column:<wbr class="f"> `ctrl + shift + right`

## Previewing a card

- Close the card preview pane:<wbr class="f"> `esc`

## GitHub Actions

- In the workflow editor, get suggestions for your workflow file.:<wbr class="f"> `ctrl + space`

## Notifications

- Mark as done:<wbr class="f"> `e`
- Mark as unread:<wbr class="f"> `shift + u`
- Mark as read:<wbr class="f"> `shift + i`
- Unsubscribe:<wbr class="f"> `shift + m`

## Network graph

- Scroll left:<wbr class="f"> `left`
- Scroll right:<wbr class="f"> `right`
- Scroll up:<wbr class="f"> `up`
- Scroll down:<wbr class="f"> `down`
- Scroll all the way left:<wbr class="f"> `shift + left`
- Scroll all the way right:<wbr class="f"> `shift + right` <!--SR:!2024-09-18,2,231-->
- Scroll all the way up:<wbr class="f"> `shift + up` <!--SR:!2024-09-18,2,231-->
- Scroll all the way down:<wbr class="f"> `shift + down` <!--SR:!2024-09-19,3,251-->

## External links

- [GitHub Docs](https://docs.github.com/en)

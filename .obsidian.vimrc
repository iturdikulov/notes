""""""""""""""""""""""
" Leader
""""""""""""""""""""""
" let mapleader=" "
" can't set leaders in Obsidian vim, so the key just has to be used consistently.
" However, it needs to be unmapped, to not trigger default behavior: https://github.com/esm7/obsidian-vimrc-support#some-help-with-binding-space-chords-doom-and-spacemacs-fans
"
" If you just type :obcommand you'll get in the Developer Console
" (Ctrl+Shift+I) the list of commands that are currently defined by the app.
" The simple syntax :obcommand [commandName] will execute the named command.
"
unmap <Space>

exmap openGraph obcommand graph:open
nmap <Space>gg :openGraph

exmap openSwitcher obcommand switcher:open
nmap <Space>tf :openSwitcher

" map ; to : in normal mode, so that I don’t rely on the shift key
" nmap ; :

" no modifier key for jumping to next word
nmap + *

" Have j and k navigate visual lines rather than logical ones
nmap j gj
nmap k gk

" I like using H and L for beginning/end of line
nmap H ^
nmap L $
" nmap J 5j
" nmap K 5k

" Moving to next/prev paragraph
nmap [ {
nmap ] }

" Go back and forward with Ctrl+O and Ctrl+I
" (make sure to remove default Obsidian shortcuts for these to work)
exmap back obcommand app:go-back
nmap <C-o> :back<CR>
exmap forward obcommand app:go-forward
nmap <C-i> :forward<CR>

" " Yank to system clipboard
" set clipboard=unnamed

vmap <Space>y "+y

exmap search obcommand global-search:open
nmap <Space>fs :search<cr>

exmap command obcommand command-palette:open
nmap <Space>fk :command<cr>

exmap files obcommand file-explorer:open
nmap <Space>pv :files<cr>

exmap outline obcommand outline:open
nmap <Space>po :outline<cr>

exmap sr_review obcommand obsidian-spaced-repetition:srs-note-review-open-note
nmap <Space>pr :sr_review<cr>

exmap sr_review obcommand obsidian-spaced-repetition:srs-review-flashcards
nmap <Space>pf :sr_review<cr>

exmap sr_note_review obcommand obsidian-spaced-repetition:srs-review-flashcards-in-note
nmap <Space>pF :sr_note_review<cr>

exmap sidebar obcommand app:toggle-left-sidebar
nmap <Space>ps :sidebar<cr>

" Follow Link under cursor
exmap followLinkUnderCursor obcommand editor:follow-link
nmap gd :followLinkUnderCursor<cr>

" " Link Jump (similar to Vimium's f)
exmap linkjump obcommand mrj-jump-to-link:activate-lightspeed-jump
nmap <C-;> :linkjump<cr>

" " g; go to last change - https://vimhelp.org/motion.txt.html#g%3B
nmap g; u<C-r>

" Emulate Tab Switching https://vimhelp.org/tabpage.txt.html#gt
" requires Pane Relief: https://github.com/pjeby/pane-relief
exmap tabnext obcommand pane-relief:go-next
nmap gt :tabnext
exmap tabprev obcommand pane-relief:go-prev
nmap gT :tabprev
" Same as CMD+\
nmap g\ :tabnext

"
" " Surround
" exmap surround_wiki surround [[ ]]
" exmap surround_double_quotes surround " "
" exmap surround_single_quotes surround ' '
" exmap surround_brackets surround ( )
" exmap surround_square_brackets surround [ ]
" exmap surround_curly_brackets surround { }
" exmap surround_chinese_double_quotes surround “ ”
" exmap surround_chinese_brackets surround 「 」
"
" " NOTE: must use 'map' and not 'nmap'
" map [[ :surround_wiki
" nunmap s
" vunmap s
" map s" :surround_double_quotes
" map s' :surround_single_quotes
" map s( :surround_brackets
" map s) :surround_brackets
" map s[ :surround_square_brackets
" map s{ :surround_curly_brackets
" map s} :surround_curly_brackets
" " Surround 中文双引号
" map s] :surround_chinese_brackets
" map s\ :surround_chinese_brackets
" map ss :surround_chinese_double_quotes
" map sy :surround_chinese_double_quotes
"
" " Surround Admonition https://github.com/esm7/obsidian-vimrc-support/discussions/146
" exmap CodeBlockAdmonitionNote obcommand code-block-from-selection:17f30753-d5f4-4953-abed-5027a25ede58
" map san :CodeBlockAdmonitionNote
" exmap CodeBlockSelectionAdmonitionNote jscommand { editor.setSelections([selection]); this.app.commands.commands['code-block-from-selection:17f30753-d5f4-4953-abed-5027a25ede58'].callback() }
" vmap san :CodeBlockSelectionAdmonitionNote
"
" exmap CodeBlockAdmonitionBrainstorm obcommand code-block-from-selection:36a8b91d-c4f1-4ac4-999c-7bfc53c998c1
" map sab :CodeBlockAdmonitionBrainstorm
" exmap CodeBlockSelectionAdmonitionBrainstorm jscommand { editor.setSelections([selection]); this.app.commands.commands['code-block-from-selection:36a8b91d-c4f1-4ac4-999c-7bfc53c998c1'].callback() }
" vmap sab :CodeBlockSelectionAdmonitionBrainstorm
"
" exmap CodeBlockAdmonitionQuote obcommand code-block-from-selection:91dc799c-4f7e-4d75-9cde-d9e6db990a5a
" map saq :CodeBlockAdmonitionQuote
" exmap CodeBlockSelectionAdmonitionQuote jscommand { editor.setSelections([selection]); this.app.commands.commands['code-block-from-selection:91dc799c-4f7e-4d75-9cde-d9e6db990a5a'].callback() }
" vmap saq :CodeBlockSelectionAdmonitionQuote
"
" exmap CodeBlockAdmonitionContext obcommand code-block-from-selection:cb332ef3-8053-42b0-88c9-a233e6dae6d0
" map sac :CodeBlockAdmonitionContext
" exmap CodeBlockSelectionAdmonitionContext jscommand { editor.setSelections([selection]); this.app.commands.commands['code-block-from-selection:cb332ef3-8053-42b0-88c9-a233e6dae6d0'].callback() }
" vmap sac :CodeBlockSelectionAdmonitionContext
"
" exmap CodeBlockAdmonitionRoutine obcommand code-block-from-selection:31f32950-d8df-4d8a-9ca3-91a34d2a67ab
" map sar :CodeBlockAdmonitionRoutine
" exmap CodeBlockSelectionAdmonitionRoutine jscommand { editor.setSelections([selection]); this.app.commands.commands['code-block-from-selection:31f32950-d8df-4d8a-9ca3-91a34d2a67ab'].callback() }
" vmap sar :CodeBlockSelectionAdmonitionRoutine
"
" exmap CodeBlockAdmonitionThink obcommand code-block-from-selection:655b28f0-353f-479e-bc5a-c0b422b987c9
" map sat :655b28f0-353f-479e-bc5a-c0b422b987c9
" exmap CodeBlockSelectionAdmonitionThink jscommand { editor.setSelections([selection]); this.app.commands.commands['code-block-from-selection:655b28f0-353f-479e-bc5a-c0b422b987c9'].callback() }
" vmap sat :CodeBlockSelectionAdmonitionThink
"
" " Emulate Folding https://vimhelp.org/fold.txt.html#fold-commands
" exmap togglefold obcommand editor:toggle-fold
" nmap zo :togglefold
"
" exmap unfoldall obcommand editor:unfold-all
" nmap zR :unfoldall
"
" exmap foldall obcommand editor:fold-all
" nmap zM :foldall
"
"
" " exmap cursorBackward obcommand heycalmdown-navigate-cursor-history:cursor-position-backward
" " exmap cursorForward heycalmdown-navigate-cursor-history:cursor-position-forward
" " nmap g; :cursorBackward
" " nmap g' :cursorForward
"
"
" exmap scrollToCenterTop70p jsfile .obsidian.markdown-helper.js {scrollToCursor(0.7)}
" nmap zz :scrollToCenterTop70p
"
" " rename file
" exmap renameFile obcommand Obsidian-VimEx:file-rename-modal
" nmap gr :renameFile
"
" " mapping vs/hs as workspace split
" exmap vs obcommand workspace:split-vertical
" exmap sp obcommand workspace:split-vertical
" exmap hs obcommand workspace:split-horizontal
" nmap <C-w>v :vs
" nmap <C-w>s :hs
"
" " window controls
" exmap wq obcommand workspace:close
" exmap q obcommand workspace:close
"
" " focus
" exmap focusLeft obcommand editor:focus-left
" exmap focusRight obcommand editor:focus-right
" exmap focusBottom obcommand editor:focus-bottom
" exmap focusTop obcommand editor:focus-top
" nmap <C-w>h :focusLeft
" nmap <C-w>l :focusRight
" nmap <C-w>j :focusBottom
" nmap <C-w>k :focusTop
"
" " Blockquote
" exmap toggleBlockquote obcommand editor:toggle-blockquote
" nmap ,< :toggleBlockquote
" nmap ,> :toggleBlockquote
"
" " complete a Markdown task
" exmap toggleTask obcommand editor:toggle-checklist-status
" nmap ,x :toggleTask
"
" Zoom in/out
" exmap zoomIn obcommand obsidian-zoom:zoom-in
" exmap zoomOut obcommand obsidian-zoom:zoom-out
" nmap zi :zoomIn
" nmap zo :zoomOut
"
" nmap &a :zoomOut
" nmap &b :nextHeading
" nmap &c :zoomIn
" nmap &d :prevHeading
" nmap z] &a&b&c
" nmap z[ &a&d&c
"
" " Stille Mode
" exmap toggleStille obcommand obsidian-stille:toggleStille
" nmap zs :toggleStille
" nmap ,s :toggleStille
"
"

" Aviable commands at 2024-11-01
" editor:save-file
" editor:follow-link
" editor:open-link-in-new-leaf
" editor:open-link-in-new-window
" workspace:toggle-pin
" editor:open-link-in-new-split
" editor:focus-top
" editor:focus-bottom
" editor:focus-left
" editor:focus-right
" workspace:split-vertical
" workspace:split-horizontal
" workspace:toggle-stacked-tabs
" workspace:edit-file-title
" workspace:copy-path
" workspace:copy-url
" workspace:undo-close-pane
" workspace:export-pdf
" editor:rename-heading
" workspace:open-in-new-window
" workspace:move-to-new-window
" workspace:next-tab
" workspace:goto-tab-1
" workspace:goto-tab-2
" workspace:goto-tab-3
" workspace:goto-tab-4
" workspace:goto-tab-5
" workspace:goto-tab-6
" workspace:goto-tab-7
" workspace:goto-tab-8
" workspace:goto-last-tab
" workspace:previous-tab
" workspace:new-tab
" workspace:close
" workspace:close-window
" workspace:close-others
" workspace:close-tab-group
" workspace:close-others-tab-group
" workspace:show-trash
" app:go-back
" app:go-forward
" app:open-vault
" theme:use-dark
" theme:use-light
" theme:switch
" app:open-settings
" app:show-release-notes
" markdown:toggle-preview
" markdown:add-metadata-property
" markdown:add-alias
" markdown:edit-metadata-property
" markdown:clear-metadata-properties
" app:delete-file
" app:toggle-ribbon
" app:toggle-left-sidebar
" app:toggle-right-sidebar
" app:toggle-default-new-pane-mode
" app:open-help
" app:reload
" app:show-debug-info
" app:open-sandbox-vault
" window:toggle-always-on-top
" window:zoom-in
" window:zoom-out
" window:reset-zoom
" file-explorer:new-file
" file-explorer:new-file-in-current-tab
" file-explorer:new-file-in-new-pane
" open-with-default-app:open
" file-explorer:move-file
" file-explorer:duplicate-file
" open-with-default-app:show
" editor:toggle-source
" editor:open-search
" editor:open-search-replace
" editor:focus
" editor:toggle-fold-properties
" editor:toggle-fold
" editor:fold-all
" editor:unfold-all
" editor:fold-less
" editor:fold-more
" editor:insert-wikilink
" editor:insert-embed
" editor:insert-link
" editor:insert-tag
" editor:set-heading
" editor:set-heading-0
" editor:set-heading-1
" editor:set-heading-2
" editor:set-heading-3
" editor:set-heading-4
" editor:set-heading-5
" editor:set-heading-6
" editor:toggle-bold
" editor:toggle-italics
" editor:toggle-strikethrough
" editor:toggle-highlight
" editor:toggle-code
" editor:toggle-inline-math
" editor:toggle-blockquote
" editor:toggle-comments
" editor:clear-formatting
" editor:toggle-bullet-list
" editor:toggle-numbered-list
" editor:toggle-checklist-status
" editor:cycle-list-checklist
" editor:insert-callout
" editor:insert-codeblock
" editor:insert-horizontal-rule
" editor:insert-mathblock
" editor:insert-table
" editor:swap-line-up
" editor:swap-line-down
" editor:attach-file
" editor:delete-paragraph
" editor:add-cursor-below
" editor:add-cursor-above
" editor:toggle-spellcheck
" editor:table-row-before
" editor:table-row-after
" editor:table-row-up
" editor:table-row-down
" editor:table-row-copy
" editor:table-row-delete
" editor:table-col-before
" editor:table-col-after
" editor:table-col-left
" editor:table-col-right
" editor:table-col-copy
" editor:table-col-delete
" editor:table-col-align-left
" editor:table-col-align-center
" editor:table-col-align-right
" editor:context-menu
" file-explorer:open
" file-explorer:reveal-active-file
" file-explorer:new-folder
" global-search:open
" switcher:open
" graph:open
" graph:open-local
" graph:animate
" backlink:open
" backlink:open-backlinks
" backlink:toggle-backlinks-in-document
" outgoing-links:open
" outgoing-links:open-for-current
" tag-pane:open
" properties:open
" properties:open-local
" insert-template
" insert-current-date
" insert-current-time
" note-composer:merge-file
" note-composer:split-file
" note-composer:extract-heading
" command-palette:open
" bookmarks:open
" bookmarks:bookmark-current-view
" bookmarks:bookmark-current-search
" bookmarks:unbookmark-current-view
" bookmarks:bookmark-current-section
" bookmarks:bookmark-current-heading
" bookmarks:bookmark-all-tabs
" outline:open
" outline:open-for-current
" slides:start
" audio-recorder:start
" audio-recorder:stop
" file-recovery:open
" obsidian-spaced-repetition:srs-note-review-open-note
" obsidian-spaced-repetition:srs-note-review-easy
" obsidian-spaced-repetition:srs-note-review-good
" obsidian-spaced-repetition:srs-note-review-hard
" obsidian-spaced-repetition:srs-review-flashcards
" obsidian-spaced-repetition:srs-cram-flashcards
" obsidian-spaced-repetition:srs-review-flashcards-in-note
" obsidian-spaced-repetition:srs-cram-flashcards-in-note
" obsidian-spaced-repetition:srs-open-review-queue-view
" find-unlinked-files:find-unlinked-files
" find-unlinked-files:find-unresolved-link
" find-unlinked-files:delete-unlinked-files
" find-unlinked-files:create-files-of-broken-links
" find-unlinked-files:find-files-without-tags
" find-unlinked-files:find-empty-files
" find-unlinked-files:delete-empty-files
" dataview:dataview-force-refresh-views
" dataview:dataview-drop-cache
" dataview:dataview-rebuild-current-view
" obsidian-excalidraw-plugin:excalidraw-convert-image-from-url-to-local-file
" obsidian-excalidraw-plugin:excalidraw-unzip-file
" obsidian-excalidraw-plugin:excalidraw-publish-svg-check
" obsidian-excalidraw-plugin:excalidraw-embeddable-poroperties
" obsidian-excalidraw-plugin:excalidraw-embeddables-relative-scale
" obsidian-excalidraw-plugin:open-image-excalidraw-source
" obsidian-excalidraw-plugin:excalidraw-disable-autosave
" obsidian-excalidraw-plugin:excalidraw-enable-autosave
" obsidian-excalidraw-plugin:excalidraw-download-lib
" obsidian-excalidraw-plugin:excalidraw-open
" obsidian-excalidraw-plugin:excalidraw-open-on-current
" obsidian-excalidraw-plugin:excalidraw-insert-transclusion
" obsidian-excalidraw-plugin:excalidraw-insert-last-active-transclusion
" obsidian-excalidraw-plugin:excalidraw-autocreate
" obsidian-excalidraw-plugin:excalidraw-autocreate-newtab
" obsidian-excalidraw-plugin:excalidraw-autocreate-on-current
" obsidian-excalidraw-plugin:excalidraw-autocreate-popout
" obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed
" obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed-new-tab
" obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed-on-current
" obsidian-excalidraw-plugin:excalidraw-autocreate-and-embed-popout
" obsidian-excalidraw-plugin:run-ocr
" obsidian-excalidraw-plugin:rerun-ocr
" obsidian-excalidraw-plugin:run-ocr-selectedelements
" obsidian-excalidraw-plugin:search-text
" obsidian-excalidraw-plugin:fullscreen
" obsidian-excalidraw-plugin:disable-binding
" obsidian-excalidraw-plugin:disable-framerendering
" obsidian-excalidraw-plugin:frame-settings
" obsidian-excalidraw-plugin:copy-link-to-drawing
" obsidian-excalidraw-plugin:disable-frameclipping
" obsidian-excalidraw-plugin:export-image
" obsidian-excalidraw-plugin:save
" obsidian-excalidraw-plugin:toggle-lock
" obsidian-excalidraw-plugin:scriptengine-store
" obsidian-excalidraw-plugin:delete-file
" obsidian-excalidraw-plugin:convert-text2MD
" obsidian-excalidraw-plugin:insert-link
" obsidian-excalidraw-plugin:insert-command
" obsidian-excalidraw-plugin:insert-link-to-element
" obsidian-excalidraw-plugin:insert-link-to-element-group
" obsidian-excalidraw-plugin:insert-link-to-element-frame
" obsidian-excalidraw-plugin:insert-link-to-element-frame-clipped
" obsidian-excalidraw-plugin:insert-link-to-element-area
" obsidian-excalidraw-plugin:toggle-lefthanded-mode
" obsidian-excalidraw-plugin:flip-image
" obsidian-excalidraw-plugin:reset-image-to-100
" obsidian-excalidraw-plugin:reset-image-ar
" obsidian-excalidraw-plugin:open-link-props
" obsidian-excalidraw-plugin:convert-card-to-file
" obsidian-excalidraw-plugin:insert-active-pdfpage
" obsidian-excalidraw-plugin:crop-image
" obsidian-excalidraw-plugin:annotate-image
" obsidian-excalidraw-plugin:insert-image
" obsidian-excalidraw-plugin:import-svg
" obsidian-excalidraw-plugin:release-notes
" obsidian-excalidraw-plugin:tray-mode
" obsidian-excalidraw-plugin:insert-md
" obsidian-excalidraw-plugin:insert-pdf
" obsidian-excalidraw-plugin:universal-add-file
" obsidian-excalidraw-plugin:universal-card
" obsidian-excalidraw-plugin:insert-LaTeX-symbol
" obsidian-excalidraw-plugin:toggle-excalidraw-view
" obsidian-excalidraw-plugin:convert-to-excalidraw
" obsidian-excalidraw-plugin:convert-excalidraw
" file-cleaner-redux:clean-files

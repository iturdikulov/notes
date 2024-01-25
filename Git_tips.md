---
date: 2023-03-31
tags:
  - outline
  - SR_development
  - inbox
---

# Git tips

My personal [[Git]] cheat sheet, tips and tricks.

## General
Check the Git version:
?
`git --version`

Show general help:
?
`git --help`

Show help on a Git subcommand (like `clone`, `add`, `push`, `log`, etc.):
?
`git help subcommand`

Execute a Git subcommand:
?
`git subcommand`
<!--SR:!2023-06-07,3,252-->

Execute a Git subcommand on a custom repository root path:
?
`git -C path/to/repo subcommand`

Execute a Git subcommand with a given configuration set:
?
`git -c 'config.key=value' subcommand`

## Create repository
Create a new local repository, _project_name_ is optional. If no project name specified you'll create git repository in current directory. You can also use non-existing **nested** directories, git automatically create needed structure.
?
`git init [project_name]`
<!--SR:!2024-06-21,153,312-->

Download from an existing repository. URL can be `http[s]...` or `git@...` (require specific private ssh key). If project path specified, git will clone into this directory.
?
`git clone URL [project_path]`

Perform a shallow clone, to only get the latest commits, which helps to save data (good for limited data connections) when cloning large repos.
?
`git clone --depth 1 <remote-url>`

Unshallow a clone.
?
`git pull --unshallow`

## Git aliases
Alternative commands, like `git s` and `g` are special aliases, require specific git alias configuration.

Check your aliases:

`bat ~/.gitconfig`

## Observe a Repository
List new or modified files not yet committed (changes from last commit)
?
`git status` or `git s`

Show the changes to files not yet staged (committed before).
Pretty useful to see what you changed before stage it.
?
`git diff`

<!--SR:!2023-03-31,1,208-->

Show the changes to staged files (not committed)
?
`git diff --cached`

Show all staged and unstaged file changes
?
`git diff HEAD`

Show the changes between two commit ID's
?
`git diff commit_id_1 commit_id_2` Can be used with `HEAD` as well.

Show changes to files WITHOUT considering them a part of git. This can be used to diff files which are not part of a git repo!
?
`git diff --no-index path/to/file/A path/to/file/B`

List the change dates and authors (who committed) for a file
?
`git blame [file]`

Show the file changes for a commit ID and/or file
?
`git show [commit]:[file]`

Show full change history
?
`git log`
`git l` - custom alias

Find git commit that introduced a string in any branch
?
`git log -S <string> --source --all`

View commits which would be pushed (commits in current local branch).
?
`git log @{u}..`

View changes which are new on a feature branch.
?

```sh
git log -p feature --not main
git diff main...feature
```

Show change history for file/directory including diffs
?
`git log -p [file/directory]`

View differences of branches/stash with meld other tool?
?
```sh
# To get list of toolname runt this:
# git difftool --tool-help

# Compare current branch with another branch
git difftool -d branchname -t toolname

# Compare current branch with stash
git difftool -d stash -t toolname
```
YOU CAN EDIT files in meld and save them!


## Branches
Working With Branches List all local branches
?
`git branch`

List all branches, local and remote
?
`git branch -a[v]`

Create a new branch called new **branch**
?
`git branch new_branch`

Delete the branch called my **branch**
?
`git branch -d my_branch`

Force Delete the branch "branch_name".
?
`git branch -D [branch_name]`

Branches: To delete a remote branch "branch_name":
?
`git push --delete origin [branch_name]`


Continue merge after resolving conflicts
?
`git merge --continue`
And if you don't want to edit the message when continuing/resuming the merge:
`git merge --continue --no-edit`

Branches: To delete all branches on remote that are already merged:
?
`git branch --merged | egrep -v "(^*|main|dev)" | xargs git branch -d`

Switch to a branch, my **branch**, and update working directory
?
`git checkout my_branch`

Merge branch **foo** into branch **bar**
?
`git checkout bar; git merge foo`

Create a bare branch; without any commits.
?
`git checkout --orphan branch_name`

Checkout a new branch from a different starting point.
?
`git checkout -b main upstream/main`

Reset local branch to upstream branch, then checkout it.
?
`git checkout -B main upstream/main`

Undo parts of the last commit in a specific file.
?
`git checkout -p HEAD^ -- /path/to/file`

Revert a commit, but keep the history of the event as a separate commit.
?
`git revert <commit SHA>`

Perform an interactive rebase for the last (prior) 7 commits:
?
`git rebase -i @~7`

Tag the current commit
?
`git tag my_tag`
`git tag -a <tag> <commit> -m "<commit message>"`

Push a tag to remote:
?
`git push origin <tagname>`

To delete a tag locally
?
`git tag -d <tagname>`

Sign new tags:
?
`git tag -s v1.5 -m 'my signed 1.5 tag'`

Delete a tag `<tagname>` on remote
?
`git push --delete origin <tagname>`

Make an existing branch track a remote branch.
?
`git branch -u upstream/foo`

## Changes into repository
Stages the file, ready for commit
?
`git add [file]`
`git fza` - custom alias, interactive add

Stage all changed files, ready for commit
?
`git add .`
`git add [--all|-A]`
<!--SR:!2023-06-20,16,252-->

Stop tracking the file completely (leave it on disk) and remove from repo!
?
`git rm --cached [file]`
Here exist alternative `"un-track"` and `"track"` commands, with this solution
file will stay in repo, but will not be tracked (updated) anymore, e.g., a
dev.properties file that you would need to change for your local environment but
you would never want to check in these changes:
`git update-index --assume-unchanged <file>`
If you want to start tracking changes again:
`git update-index --no-assume-unchanged <file>`

To list untracked files.
?
`git ls-files --others --exclude-standard`

Remove untracked files.
?
Use it with `-n` to see what will be removed.
`git clean -f -d``

Remove untracked and ignored files.
?
Use it with `-n` to see what will be removed.
`git clean -f -d -x`

Commit all staged files (staged changes) to versioned history
?
`git commit -m "Your commit message"`

Edit previous commit message.
?
`git commit --amend`

Change author of a commit.
?
`git commit --amend --author="Author Name <email@address.com>"`

Commit in the past. Newer versions of Git allow `--date="2 days ago"` usage.
?

```sh
# more recent versions of Git also support --date="2 days ago" directly
git commit --date="`date --date='2 day ago'`"
git commit --date="Jun 13 18:30:25 IST 2015"
```

Commit all your tracked files to versioned history
?
`git commit -am "commit message`

Sign a commit
?
`git commit -a -S -m 'Signed commit'`

Unstaged file, keeping the file changes
?
`git reset [file]`

Undo last commit but keep the changes
?
`git reset --soft HEAD~1`

Revert everything to the last commit.
So it removes staged and working directory changes.
?
`git reset --hard` but be careful, you can lose your changes. Maybe need stash them first.

Undo last commit. If you want to nuke commit C to never see it again:
(F)
A-B-C
↑
main
?
`git reset --hard HEAD~1`

Undo last commit. If you want to undo the commit, but keep your changes:
(F)
A-B-C
↑
main
?
`git reset HEAD~1`

Go 2 commits back.
?
`git reset --hard HEAD~2`

Checkout the current branch, and rebase from `<remote>`
?
`git reset --hard <remote>/<branch>`

Apply only the changes made within a given commit. This is different to the `merge` command, as it would otherwise apply all commits from a branch.
`git cherry-pick [HASH]`

## Synchronize changes
Get the latest changes from origin (no merge)
?
`git fetch`

Pull changes, while overwriting any local commits.
?

```sh
git fetch --all
git reset --hard origin/master
```

Fetch the latest changes from origin and merge
?
`git pull`

Fetch the latest changes from origin and rebase
?
`git pull --rebase`
<!--SR:!2023-07-08,34,270-->

Pull down a remote branch, but rebase any locally differing commits onto the top of the incoming commits:
?
`git pull <remote> <branch> --rebase`

Push local changes to the origin
?
`git push`

To force a push, when you know what you're doing!
?
`git push -f`

Push to the tracked main branch.
?
`git push origin main`

<!--SR:!2023-04-02,3,248-->

Push to a specified repository.
?
`git push git@github.com:[USER_NAME]/[REPO_NAME].git`

## Git stash
Stash changes locally. This will keep the changes in a separate changelist, - called 'stash', and the working directory is cleaned. You can apply changes from the stash at any time.
?
`git stash`

Stash changes with a message.
?
git stash push accepts the message with option -m and accepts a list of files to stash as arguments.
`git stash push -m <message>`

List all the stashed changes.
?
`git stash list`

Apply the most recent change and remove the stash from the stash list.
?
`git stash pop`

Apply stash from the stash list, but does not remove the stash from the list.
?
`git stash apply stash@{6}`

## Git remote
Remove all stale branches; ones that have been deleted on remote. So if you have a lot of useless branches, delete them on GitHub and then run this.
?
`git remote prune origin`

Prune all remotes at once.
?
`git remote prune $(git remote | tr '\n' ' ')`

## Tips
List files changed in a given commit.
?
`git diff-tree --no-commit-id --name-only -r [HASH]`

Revisions can also be identified with `:/text`. So, this will show the first
commit that has the string "cool" in its message body.
?
`git show :/cool`

List files changed in a given commit; user-facing approach.
?
`git show --pretty="" --name-only bd61ad98`

See everything you have done, across branches, in a glance, then go to the place right before you broke everything.
?
`git reflog`
`git reset HEAD@{hash}`

To revert first/initial commit on a branch:
Running git reset --hard HEAD~1 will give error:
fatal: ambiguous argument `'HEAD~1'`: unknown revision or path not in the working tree.
?
`git update-ref -d HEAD`

To import commits from another repo:
?
`git --git-dir=../some_other_repo/.git format-patch -k -1 --stdout <commit SHA> | git am -3 -k`

Update all submodules.
?
`git submodule update --init --recursive`

Check any signatures it finds and list them in its output:
`git log --pretty="format:%h %G? %aN %s"`

Sync a fork with the master repo.

```sh
git remote add upstream git@github.com:name/repo.git # <-- Set a new repo.
git remote -v # <-- Confirm new remote repo.
git fetch upstream # <-- Get branches.
git branch -va # <-- List local - remote branches.
git checkout master # <-- Checkout local master branch.
git checkout -b new_branch # <-- Create and checkout a new branch.
git merge upstream/master # <-- Merge remote into local repo.
git show 83fb499 # <-- Show what a commit did.
git show 83fb499:path/to/file.ext # <-- Show the file as it was in 83fb499.
git diff branch_1 branch_2 # <-- Check difference between branches.
git log # <-- Show all of the commits.
git status # <-- Show the changes from the last commit.
```

Set your identity.

```sh
git config --global user.name "John Doe"
git config --global user.email johndoe@example.com
```

The GPG key used for signing your commits
`git config --global user.signingkey 0A46826A`

Set signing of commits globally
`git config --global commit.gpgsign true`

Set your editor.
`git config --global core.editor nvim`

Enable color support for commands like `git diff`.
`git config --global color.ui true`

Remove file from git after adding it into `.gitignore`

```sh
# Check, you committed all required changes before
git rm -r --cached .
git add .
git commit -m "Fix untracked files"
```

Change the date of an existing commit.

```sh
git filter-branch --env-filter \
    'if [ $GIT_COMMIT = 119f9ecf58069b265ab22f1f97d2b648faf932e0 ]
     then
         export GIT_AUTHOR_DATE="Fri Jan 2 21:38:53 2009 -0800"
         export GIT_COMMITTER_DATE="Sat May 19 01:01:01 2007 -0700"
     fi'
```

Display the commit history of a set of files.
`git log --pretty=email --patch-with-stat --reverse --full-index -- Admin\*.py > Sripts.patch`

Move your most recent commit from one branch, to stage it on [BRANCH].

```sh
git reset HEAD~ --soft
git stash
git checkout [BRANCH]
git stash pop
git add .
```

## Resources

- [ ] [[research/Linux_Community-Submitting_patches]]
- [ ] [GitHub - conventional-commits/conventionalcommits.org: The conventional commits specification](https://github.com/conventional-commits/conventionalcommits.org)

- [ ] [The ULTIMATE Git workflow using Neovim's Fugitive, Telescope & Git-Signs!](https://www.youtube.com/watch?v=IyBAuDPzdFY)
- [ ] [pre-commit](https://pre-commit.com/)
- [ ] [GitHub - jsirex/git-tutorial: Day to day git tutorial]( https://github.com/jsirex/git-tutorial/tree/master)
- [ ] [Removing sensitive data from a repository - GitHub Docs](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/removing-sensitive-data-from-a-repository)
- [ ] [ThePrimeagen/git-worktree.nvim](https://github.com/ThePrimeagen/git-worktree.nvim)
- [ ] [arslanbilal/git-cheat-sheet: :octocat: git and git flow cheat sheet](https://github.com/arslanbilal/git-cheat-sheet)
- [ ] [version control - How to remove/delete a large file from commit history in the Git repository? - Stack Overflow](https://stackoverflow.com/questions/2100907/how-to-remove-delete-a-large-file-from-commit-history-in-the-git-repository/61602985#61602985)
- [ ] [Git Cheat Sheet, by GitLab](https://about.gitlab.com/images/press/git-cheat-sheet.pdf)
- [ ] [git index - Git - Difference Between 'assume-unchanged' and 'skip-worktree' - Stack Overflow](https://stackoverflow.com/questions/13630849/git-difference-between-assume-unchanged-and-skip-worktree)
- [ ] [bennadel/git-cheat-sheet: A small git cheat sheet of common use-cases for my future self.](https://github.com/bennadel/git-cheat-sheet)
- [ ] [github - How to remove file from Git history? - Stack Overflow](https://stackoverflow.com/questions/43762338/how-to-remove-file-from-git-history)
  `git filter-repo --invert-paths --path <path to the file or directory>`
- [ ] [cirosantilli/test-git-conflict: Generate various kinds of Git conflicts, including conflicts suitable to interactively test a merge resolution tool. More fun stuff at: https://github.com/cirosantilli/test-git-web-interface](https://github.com/cirosantilli/test-git-conflict)

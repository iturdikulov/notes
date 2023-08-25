#!/bin/sh

# Config
git_output="/home/inom/Projects/main/wiki_html"

# Cd current folder
cd "$(dirname "$0")"

# Check no uncommited changes if yes, abort
if [ -n "$(git status --porcelain)" ]; then
    echo "There are uncommited changes. Aborting."
    exit 1
fi

# Make sure project it is up to date
git pull
git push

# Convert Obsidian to HTML
python -m obsidianhtml -i config.yaml
# ^ the config file will output the html to $git_output

# Push changes
cd "$git_output"

if [ $? -ne 0 ]; then
    echo "Python script failed. Exited."
    exit 1
else
    echo "Successfully created html code"
fi

# Create CNAME file
echo "notes.iturdikulov.com" > docs/CNAME

git add . --all
git commit -m "autopush"
git push

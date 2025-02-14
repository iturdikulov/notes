---
date: 2023-03-14T00:00+03:00
tags:
  - blog
  - computer_programming_tools
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 268
---

# GNU sed (stream editor) is a non-interactive command-line text editor

> sed is commonly used to filter text or edit, i.e., it takes text input,
> performs some operation (or set of operations) on it, and outputs the modified
> text.
>
> sed is typically used for extracting part of a file using pattern matching or
> substituting multiple occurrences of a string within a file.\
> — <cite>[GNU sed](https://www.gnu.org/software/sed/)</cite>

## Examples

Replace all `apple` occurrences with `mango` and print the result to `stdout`
(don't do any file modifications):
<br class="f">
```sh
echo "I have 1 apple and he has 2 apples." | sed 's/apple/mango/g'
```

*Results:* `I have 1 mango and he has 2 mangos.`

Replace all `apple` occurrences with `mango` in a
specific file and overwrite the original file in place:

```sh
# -i[SUFFIX], --in-place[=SUFFIX]
#   edit files in place (makes backup if SUFFIX supplied).
# /g - global replacement flag

echo "I have 1 apple and he has 2 apples." > /tmp/sed_test
sed -i 's/apple/mango/g' /tmp/sed_test
cat /tmp/sed_test
```

*Results:* `I have 1 mango and he has 2 mangos.`

Replace all `apple` (extended regex) occurrences with `APPLE` (extended regex)
in all input lines and print the result to `stdout`:
<br class="f">
```sh
# -E, --regexp-extended
#   use extended regular expressions.

echo "I have 1 apple and he has 2 apples." | sed -E 's/(apple)/\U\1/g'
```

*Results:* `I have 1 APPLE and he has 2 APPLEs.`

Remove leading spaces:

```sh
printf "  One\n  Two\n  Three\n  Four\n  Five"|sed -E 's/^\s+//g'
```

*Results:*
```
One
Two
Three
Four
Five
```

Remove empty lines and print results to stdout:

```sh
printf "One\n\n\nTwo\nThree\nFour\nFive\nSix\nSeven\nEight\nNine\n"|sed '/^$/d'
```

*Results:*
```
One
Two
Three
Four
Five
Six
Seven
Eight
Nine
```

Special characters:

```sh
# It can become necessary to escape special characters in your string.
fd Wiki -a -d 1 | sed 's/\/home//'

# # Change your sed delimiter to a pipe to avoid escaping slashes.
fd Wiki -a -d 1 | sed 's|/home||'
```

*Results:*
```
/inom/Wiki/Wikipedia-Glossary_of_computer_science.md
/inom/Wiki/Wikipedia-Glossary_of_computer_science.md
```

Execute a specific script file (sed script) and print the result to `stdout`:

```sh
# -f script-file, --file=script-file
#   add the contents of script-file to the commands to be executed
cat >/tmp/script.sed <<EOL
s/public/shared/g
s/System/User/g
s/println/echo/g
EOL

cat >/tmp/data.txt <<EOL
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
EOL
sed -i -f /tmp/script.sed /tmp/data.txt
cat /tmp/data.txt
```

*Results:*
```
shared class Main {
  shared static void main(String[] args) {
    User.out.echo("Hello World");
  }
}
```

Print just the first line to `stdout`:

```sh
# -n, --quiet, --silent
#   suppress automatic printing of pattern space
printf "I have 1 apple and he has 2 apples.\nAnd you?" | sed -n '1p'
```

*Results:* `I have 1 apple and he has 2 apples.`

Delete the first line of a file:

```sh
# -i[SUFFIX], --in-place[=SUFFIX] - edit files in place (makes backup if SUFFIX
# supplied).
# d - Delete pattern space.  Start next cycle.

printf "One\nTwo\nThree\nFour\nFive\nSix\nSeven\nEight\nNine\n" > /tmp/sed_test
sed -i 1d /tmp/sed_test
cat /tmp/sed_test
```

*Results:*
```
Two
Three
Four
Five
Six
Seven
Eight
Nine
```

Delete the 4th line in a file and print the result to `stdout`:

```sh
# d - Delete pattern space.  Start next cycle.

printf "One\nTwo\nThree\nFour\nFive\nSix\nSeven\nEight\nNine\n" > /tmp/sed_test
sed '4d' /tmp/sed_test
```

*Results:*
```
Two
Three
Four
Five
Six
Seven
Eight
Nine
/tmp/mdeval//GNUSedmd_152_181.sh: line 13: *Results:*: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 12: Two: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 13: Three: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 14: Four: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 15: Five: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 16: Six: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 17: Seven: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 18: Eight: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 19: Nine: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 26: Delete: command not found
/tmp/mdeval//GNUSedmd_152_181.sh: line 24: stdoutsh: command not found
One
Two
Three
Five
Six
Seven
Eight
Nine
```

Insert a new line at the first line of a file:

```sh
# -i[SUFFIX], --in-place[=SUFFIX] - edit files in place (makes backup if SUFFIX
# supplied).
# i\text - Insert text, which has each embedded newline preceded by a backslash.

sed -i '1i\your new line text\' path/to/file
```

*Results:* `sed: can't read path/to/file: No such file or directory`

Replace every occurrence of 'hello' with 'world' on lines 10-20:

```sh
# s/regexp/replacement/ - Attempt to match regexp against the pattern space.  If
# successful, replace that portion matched with replacement.

printf "hello\nhello\nhello\nhello\nhello\nhello\nhello\nhello\nhello\n" >\
/tmp/sed_test
sed '1,2s/hello/world/' /tmp/sed_test
```

*Results:*
```
world
world
hello
hello
hello
hello
hello
hello
hello
```

```
# To replace newlines in multiple lines:
sed ':a;N;$!ba;s/\n//g' <file>

# To insert a line before a matching pattern:
sed '/Once upon a time/i\Chapter 1'

# To add a line after a matching pattern:
sed '/happily ever after/a\The end.'
```

Replace mulitline substrngs in multiple files:

```sh
for i in ./appmanifest_*.acf; do
    sed -i 's/"AutoUpdateBehavior"\t\t"0"/"AutoUpdateBehavior"\t\t"1"/g' $i;
done
```

Replace `&#10;<br>` with `<br>` in all *.md files in current directory:

```sh
find . -type f -name '*.md' -exec sed -i 's/&#10;<br>/<br>/g' {} \;
```

## External links

- [sed, a stream editor](https://www.gnu.org/software/sed/manual/sed.html)

/*
 * Exercise 1-16. Revise the main routine of the longest-line program so it will
correctly print the length of arbitrarily long input lines, and as much as possible
of the text.
*
* My thoughts:
* I think it's possible, but need rewrite custom_getline function, it will
* automaticaly detect line width...
*
* Solution:
*
* NOT SURE IF THIS CORRECT solution
*
* I just use MAXLINE sizeof(char)
*
* Propably need to use sort of dynamic arrays and pointers or exist simlper solution
* or use malloc/etc
*
*/

#include <stdio.h>
#include <limits.h>

#define MAXLINE sizeof(char) /* maximum input line size */

int custom_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = custom_getline(line, MAXLINE)) > 0) {
        printf("len: %d\n", len);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int custom_getline(char s[], int lim)
{
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c; /* line still in boundaries */
            ++j;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

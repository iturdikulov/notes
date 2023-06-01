/*
 * Write a program to print all input lines that are longer than 80 characters.
 *
 * My solution is just compare current line length with maximum
 * and if it's longer than 80 characters, print it otherwise do nothing
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

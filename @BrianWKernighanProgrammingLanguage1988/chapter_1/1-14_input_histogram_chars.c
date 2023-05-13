/*
 * Write a program to print a histogram of the frequencies of different characters in its input
 */

#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
    // get current word length
    // print horizontally using some like "="
    int c, state, word_length;
    int chars_stat[256] = {0}; // we support only words with 100 char max width

    while ((c = getchar()) != EOF) {
        ++chars_stat[c];
    }

    for (int i = 0; i < 256; ++i)
    {
        if (chars_stat[i] > 0) {
            printf("char %c frequency: [%3d] ", i, chars_stat[i]);
            for (int j = 0; j < chars_stat[i]; ++j)
            {
                putchar('=');
                if (j > 30) {
                    break;
                }
            }
            putchar('\n');
        }
    }
}

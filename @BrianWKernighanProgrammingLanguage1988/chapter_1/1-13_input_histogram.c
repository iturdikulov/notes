/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 */

#include <stdio.h>

#define OUT 0
#define IN 1
#define HORIZONTAL 0
#define VERTICAL 1

int main() {
    // get current word length
    // print horizontally using some like "="
    int c, state, word_length;
    int words_stat[100] = {0}; // we support only words with 100 char max width

    int mode = HORIZONTAL;

    while ((c = getchar()) != EOF) {
      if (c == ' ' || c == '\t' || c == '\\') {
        state = OUT;
      } else if (state == OUT) {
        state = IN;
        words_stat[word_length] += 1;
        word_length = 0;
      } else {
        ++word_length;
      }
    }

    // Output of histogram
    if (mode == HORIZONTAL) {
        for (int i = 0; i < 100; ++i)
        {
            if (words_stat[i] > 0) {
                printf("words with len %3d: [%3d] ", i + 1, words_stat[i]);
                for (int j = 0; j < words_stat[i]; ++j)
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
}

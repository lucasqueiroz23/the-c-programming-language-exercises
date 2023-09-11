/**
 * Program that prints its input one word per line.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c;
    char prev;
    while((c = getchar()) != '\n') {
        if(c == ' ') {
            if(prev == ' ') continue;
            putchar('\n');
            prev = c;
        } else {
            putchar(c);
            prev = c;
        }
    }
    putchar('\n');
    exit(0);
}

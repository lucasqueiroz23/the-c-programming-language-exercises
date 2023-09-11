/**
 * Program that copies input to output, but replaces some special 
 * characters with their respective escape characters.
 */
#include <stdio.h>
#include <stdlib.h>

#define NEWLINE '\n'

void replace(char c) {
    putchar('\\');
    putchar(c);
}

int main(void) {
    char c;
    while((c = getchar()) != NEWLINE) {
        if(c == '\t') {
            replace('t');
        } else if(c == '\\') {
            replace('\\');
        } else if(c == '\b') {
            replace('b');
        } else putchar(c);
    }
    putchar('\n');
    exit(0);
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c;
    char prev;
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(prev == ' ') continue;
        }
        putchar(c);
        prev = c;
    }
    exit(0);
}

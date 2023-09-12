#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 5

const char MAP[] = {'l', 'u', 'c', 'a', 's'};

void put_asterisk() {
    putchar('*');
    putchar(' ');
}

int check_map(char target) {
    for(unsigned int i = 0; i < MAXLENGTH; i++) {
        if(target == MAP[i]) return i;
    }
    return -1;
}

int main(void) {

    char c;
    int* lengths = malloc(MAXLENGTH * sizeof(int));

    for(short i = 0; i < MAXLENGTH; i++) {
        lengths[i] = 0;
    }

    int biggest = 0;

    while((c = getchar())) {
        int pos = check_map(c);

        if(pos >= 0) {
            lengths[pos]++;
            if(lengths[pos] > biggest) biggest = lengths[pos];
        }

        if(c == '\n') break;
    }

    for(unsigned int i = 0; i < MAXLENGTH; i++) {
        printf("%c| ", MAP[i]);

        for(int j = 1; j <= lengths[i]; j++) 
            put_asterisk();

        putchar('\n');
    }

    putchar('\n');
    printf("%3c", ' ');

    for(int i = 1; i <= biggest; i++) {
        printf("%d ", i);
    }
    
    putchar('\n');

    free(lengths);
    exit(0);
}

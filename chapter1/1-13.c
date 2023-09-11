#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 30
#define HASH(U) U - 1

void check_if_biggest(int* biggest, int* to_increment, int* count) {
    (*to_increment)++;
    if(*biggest < *to_increment) *biggest = *to_increment;
    *count = 0;
}

void put_asterisk() {
    putchar('*');
    putchar(' ');
}

int main(void) {

    char c;
    int* lengths = malloc(MAXLENGTH * sizeof(int));

    for(short i = 0; i < MAXLENGTH; i++) {
        lengths[i] = 0;
    }

    int biggest = 0;
    int count = 0;
    int more_than_30 = 0;

    while((c = getchar())) {
        if(c != ' ' && c != '\n') count++;

        int pos = HASH(count);
        if(c == ' ' || c == '\n'){
            if(pos >= 0 && pos < MAXLENGTH) {
                check_if_biggest(&biggest, &lengths[pos], &count);
            }
            if(pos > MAXLENGTH) {
                check_if_biggest(&biggest, &more_than_30, &count);
            }
        }
        
        if(c == '\n') break;
    }

    for(unsigned short i = 0; i < MAXLENGTH; i++) {
        printf("%4d| ", i + 1);

        for(int j = 1; j <= lengths[i]; j++) 
            put_asterisk();

        putchar('\n');
    }

    printf("%3d+| ", MAXLENGTH);
    for(int i = 0; i < more_than_30; i++) put_asterisk();

    putchar('\n');
    printf("%6c", ' ');

    for(int i = 1; i <= biggest; i++) {
        printf("%d ", i);
    }
    
    free(lengths);
    exit(0);
}

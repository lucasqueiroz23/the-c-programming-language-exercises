#include <stdio.h>
#include <stdlib.h>

typedef struct count {
    int blanks;
    int tabs;
    int new_lines;
} count;

int main(void) {
    count* cnt = malloc(sizeof(count)); 
    cnt->blanks = 0;
    cnt->tabs = 0;
    cnt->new_lines = 0;

    char c;
    while((c = getchar()) != EOF) {
        if(c == '\n') cnt->new_lines++;
        if(c == ' ') cnt->blanks++;
        if(c == '\t') cnt->tabs++;
    }

    printf("There are %d blanks, %d new lines and %d tabs.", 
            cnt->blanks, cnt->new_lines, cnt->tabs);

    printf("\n");
    free(cnt);
    exit(0);
}

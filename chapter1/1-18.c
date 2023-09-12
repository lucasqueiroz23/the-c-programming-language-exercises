#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000 /* maximum input line size */

int _getline(char line[], int maxline);

/* print longest input line */
int main(void) {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    while((len = _getline(line, MAXLINE)) > 0){
        printf("%s", line);
    }
    exit(0);
}

/* getline: read a line into s, return length */
int _getline(char s[], int lim) {
    bool trailing_blank = true;
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ){
        if(c != ' ' && c != '\t') trailing_blank = false;
        if(!trailing_blank)
            s[i++] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


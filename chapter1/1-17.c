#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define LOWER_BOUND 80

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void) {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    while((len = _getline(line, MAXLINE)) > 0){
        if(len > LOWER_BOUND) printf("%s", line);
    }
    exit(0);
}

/* getline: read a line into s, return length */
int _getline(char s[], int lim) {
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


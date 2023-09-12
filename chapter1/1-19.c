#include <stdio.h>
#include <stdlib.h>


void reverse(char* string, int left, int right) {
    while(left < right) {
        // swap
        char temp = string[left];
        string[left] = string[right];
        string[right] = temp;

        left++;
        right--;
    }
}

int main(void) {
    unsigned long MAXSIZE = 1000;
    char* input = malloc(MAXSIZE * sizeof(char));
    int length = 0;
    while((length = getline(&input, &MAXSIZE, stdin)) != EOF) {
        reverse(input, 0, length - 2); // -2 because of \0 and \n
        printf("%s", input);
    }
    free(input);
    exit(0);
}

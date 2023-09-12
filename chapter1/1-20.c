#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE 1000

int main() {
    unsigned long max = MAX_INPUT_SIZE;
    char* input = malloc(MAX_INPUT_SIZE * sizeof(char));

    int size = getline(&input, &max, stdin);
    for(int i = 0; i < size; i++) {
        if(input[i] == '\t') 
            printf("    ");
        else putchar(input[i]);
    }
    

    free(input);
    exit(0);
}

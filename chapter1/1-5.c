#include <stdio.h>
#include <stdlib.h>

#define STEP 20
#define UPPER 300
#define LOWER 0

/* print Fahrenheit-Celsius table */
int main(void) {

    int fahr;
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

    exit(0);
}

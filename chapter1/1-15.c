#include <stdio.h>
#include <stdlib.h>

float fahrenheit_to_celsius(float fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point versio
 */

int main(void) {
    int lower = 0;
    int upper = 300;
    int step = 20;

    float fahr = lower;
    float celsius;

    printf("FAHRENHEIT\tCELSIUS\n");
    while(fahr <= upper) {
        celsius = fahrenheit_to_celsius(fahr);
        printf("%.0f\t\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    exit(0);
}

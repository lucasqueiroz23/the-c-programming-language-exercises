#include <stdio.h>
#include <stdlib.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300; floating-point version
 */

int main(void) {

    int lower = 0;
    int upper = 300;
    int step = 20;

    float fahr;
    float celsius = lower;

    printf("CELSIUS\t\tFAHRENHEIT\n");
    while(celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%.0f\t\t %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    exit(0);
}

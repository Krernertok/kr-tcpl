#include <stdio.h>

/* print Fahrenheit-Celsius table
    in reverse order */

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}

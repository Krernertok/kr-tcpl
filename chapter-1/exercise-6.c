#include <stdio.h>

int main() {
    int c, d;

    while ((c = getchar()) != EOF) {
        printf("Result of comparison '%c != EOF': %d\n", c, (c != EOF));
        /* Remove the newline from stdin */
        getchar();
    }
    printf("Result of comparison '%c != EOF': %d\n", c, (c != EOF));
}

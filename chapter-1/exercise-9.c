#include <stdio.h>

int main() {
    int priorBlanks = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && priorBlanks) {
            continue;
        }

        if (c == ' ' && !priorBlanks) {
            priorBlanks = 1;
        } else if (c != ' ' && priorBlanks) {
            priorBlanks = 0;
        }

        putchar(c);
    }
}

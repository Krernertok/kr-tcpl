#include <stdio.h>

#define MAX_LENGTH 80

int print_long_lines();

int main() {
    /*
     * read characters into line until MAX_LENGTH reached
     * then print line and putchar() characters until EOF
     * or newline reached
     * if newline reached, reset char counter and line
     */

    while (print_long_lines() > 0);
}

int print_long_lines() {
    int c;
    int i = 0;
    char line[MAX_LENGTH];

    while ((c = getchar()) != EOF && c != '\n') {
        if (i < MAX_LENGTH) {
            line[i] = c;
            ++i;
            continue;
        }

        if (i == MAX_LENGTH) {
            printf("%s", line);
        }

        putchar(c);
        ++i;
    }

    if (c == '\n' && i > MAX_LENGTH) {
        putchar(c);
        ++i;
    }

    return i;
}

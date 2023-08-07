#include <stdio.h>

#define MAX_BUFFER 1000

int remove_trailing_whitespace();

int main() {
    while (remove_trailing_whitespace() > 0);
}

int remove_trailing_whitespace() {
    int i = 0;
    int i_trailing = 0;
    int c;
    char buffer[MAX_BUFFER];

    while ((c=getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            if (i_trailing > 0) {
                for (int j = 0; j < i_trailing; j++) {
                    putchar(buffer[j]);
                }
                i_trailing = 0;
            }
            putchar(c);
            ++i;
            continue;
        }

        if (c == ' ' || c == '\t') {
            buffer[i_trailing] = c;
            ++i;
            ++i_trailing;
            continue;
        }

        if (i != 0 || (i != i_trailing)) {
            putchar(c);
        }

        return 1;
    }

    return 0;
}

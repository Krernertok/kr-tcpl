#include <stdio.h>

#define MAX_LENGTH 1000

int get_line(char line[], int maxlength);
void reverse(char s[]);

int main() {
    char line[MAX_LENGTH];

    while (get_line(line, MAX_LENGTH) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int get_line(char line[], int maxlength) {
    int i = 0;
    char c;

    while ((c=getchar()) != EOF && c != '\n' && i <  maxlength-1) {
        line[i] = c;
        ++i;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void reverse(char s[]) {
    char c;
    int length = 0;

    while ((c = s[length]) != '\0' && c != '\n')
        ++length;

    // reduce length by 1 to account for \0 or \n
    --length;

    int midpoint = length/2;
    if (length % 2 == 0) {
        midpoint += 1;
    }

    for (int i=0; i<midpoint; i++) {
        char tmp = s[i];
        s[i] = s[length-i];
        s[length-i] = tmp;
    }
}

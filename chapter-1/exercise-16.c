#include <stdio.h>

#define MAXLINE 1000

int get_next_line(char line[], int line_length);
void copy(char to[], char from[]);

int main() {
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = get_next_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }

    printf("Longest line: %d\nLine:\n%s\n", max, longest);
}

int get_next_line(char line[], int max_len) {
    int c;
    int i = 0;

    while ((c=getchar())!=EOF && c!='\n') {
        if (i < max_len-1) {
            line[i] = c;
        }
        ++i;
    }

    if (c == '\n' && i < max_len) {
        line[i] = c;
        ++i;
    }

    if (i >= max_len) {
        line[max_len-1] = '\0';
    } else {
        line[i] = '\0';
    }

    return i;
}


void copy(char from[], char to[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}

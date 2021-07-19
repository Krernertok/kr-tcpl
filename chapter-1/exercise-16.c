#include <stdio.h>

#define MAXLINE 1000

int get_next_line(char line[], int line_length);
void copy(char to[], char from[]);

int main() {
	int len;
	int prev_len = 0;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	while ((len = get_next_line(line, MAXLINE)) > 0) {
		// 1. line does not end
		//		a. there is previous not ended line
		//		b. there is no previous not ended line
		//		DOESN'T matter -> append len to prev_len
		if (line[len] != '\0') {
			prev_len += len;
			continue;
		}
		// 2. line ends
		//		a. there is previously not ended line
		//			prev_len != 0
		//		b. there is no previously not ended line
		//			prev_len == 0
		if (prev_len != 0) {
			len += prev_len;
			prev_len = 0;
		}

		if (len > max) {
			max = len;
			copy(line, longest);
		}
	}

	printf("Longest line: %d\nLine:\n%s\n", max, longest);
}

int get_next_line(char line[], int len) {
	int c, i;

	for (i = 0; i < (len - 1) && ((c = getchar()) != EOF && c != '\n'); ++i) {
		line[i] = c;
	}

	if (c != EOF && c != '\n') {
		return i;
	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}


void copy(char from[], char to[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0') {
		++i;
	}
}

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

	int c, state, isWhitespace;

	state = IN;

	while ((c = getchar()) != EOF) {
		isWhitespace = (c == ' ' || c == '\t' || c == '\n');
		if (isWhitespace) {
			state = OUT;
		} else if (state == IN) {
			putchar(c);
		} else {
			state = IN;
			putchar('\n');
			putchar(c);
		}
	}
}

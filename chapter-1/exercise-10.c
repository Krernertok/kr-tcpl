#include <stdio.h>

int main() {

	int c;
	
	/* looks like reading backspaces is not easy
		because of terminal interference */
	while ((c = getchar()) != EOF) {
		if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}

}

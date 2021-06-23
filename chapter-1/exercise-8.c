#include <stdio.h>

int main() {

	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blanks++;
		}

		if (c == '\t') {
			tabs++;
		}

		if (c == '\n') {
			newlines++;
		}
	}

	printf("Number of blanks: %d\n", blanks);
	printf("Number of tabs: %d\n", tabs);
	printf("Number of newlines: %d", newlines);
	
}

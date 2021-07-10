#include <stdio.h>

#define NUM_LETTERS 26

int main() {
	int c, i, j;
	int letterCounts[NUM_LETTERS];

	for (i = 0; i < NUM_LETTERS; i++) {
		letterCounts[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		++letterCounts[c - 'a'];
	}
	
	printf("\nHistogram of letters:\n");

	for (i = 0; i < NUM_LETTERS; i++) {
		printf("%c: ", ('a' + i));
		for (j = 0; j < letterCounts[i]; j++) {
			printf("#");
		}
		printf("\n");
	}
}

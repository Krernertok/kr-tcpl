#include <stdio.h>

#define OUT 0
#define IN 1

int main() {

	int c, state, nc, nw, nl;

	state = OUT;
	nc = nw = nl = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nc, nw, nl);
}

/* 	
	I would test this with an input file with a known
	number of characters, words and lines. The input
	file should mix blanks, tabs and newlines to make
	sure that the state and word counts are determin-
	ed correctly.
*/

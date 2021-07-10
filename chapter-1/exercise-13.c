#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

	int c, i, j, isWhitespace, state, len;
	int hist[10];

	for (i = 0; i < 10; i++) {
		hist[i] = 0;
	}

	len = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		isWhitespace = (c == ' ' || c == '\t' || c == '\n');

        if (!isWhitespace) {
            state = IN;
        }

		if (isWhitespace && state == IN) {
			state = OUT;
			if (len > 0 && len < 10) {
				++hist[len-1];
			} else if (len >= 10) {
				++hist[9];
			}
			len = 0;
		} else if (state == IN) {
			++len;
		}
	}

    printf("Histogram of word lengths:\n");

	for (i = 0; i < 10; i++) {
        if (i < 9) {
		    printf("%3d: ", i+1);
        } else {
            printf("10+: ");
        }

        for (j = 0; j < hist[i]; j++) {
            printf("#");
        }
        printf("\n");
	}
}

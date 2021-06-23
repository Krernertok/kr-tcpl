#include <stdio.h>

int main() {
	int nc;

	/* All three of these work the same */
	for (nc = 0; getchar() != EOF; ++nc) {}
	for (nc = 0; getchar() != EOF; ++nc);
	for (nc = 0; getchar() != EOF; ++nc)
		;

	printf("Number of characters: %d\n", nc);
}

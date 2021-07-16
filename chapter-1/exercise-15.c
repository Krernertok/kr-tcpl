#include <stdio.h>

int fahr_to_cels(int fahr);

int main() {
	for (int i = 0; i <= 300; i += 20) {
		printf("%3d\t%3d\n", i, fahr_to_cels(i));
	}
}


int fahr_to_cels(int fahr) {
	return (5.0 / 9.0) * (fahr - 32);
}

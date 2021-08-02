#include <stdio.h>

int main() {

	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}
	printf("\n\n");

	int j = 0;
	int k = 0;
	do {
		printf("%d\n", j);
			j++;
	} while (j < 10);

	printf("\n\n");
	while (k < 10){
		printf("%d\n", k);
			k++;
	}
	printf("\n\n");
	for (int i = 1, j = 10; i < 10, j>0; i++, j--) {
		printf("%d <---> %d\n", i, j);
	}
}
#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int numberOfElements = 100;

void print(int *a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main() {
	int *a = (int*) malloc(sizeof(int) * numberOfElements);
	int loop;

	for (int i = 0; i < numberOfElements; i++) {
		a[i] = rand() % (numberOfElements * numberOfElements);
	}

	print(a, numberOfElements);
	quicksort(a, 0, numberOfElements - 1);
	print(a, numberOfElements);

	return 0;
}

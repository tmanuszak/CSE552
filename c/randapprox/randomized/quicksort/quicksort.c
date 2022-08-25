#include <stdlib.h>
#include "quicksort.h"

void swap(int *a, int x, int y) {
	int temp;
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

int getPivot(int l, int r) {
	return (rand() % (r - l + 1)) + l;
}

void quicksort(int *a, int l, int r) {
	if (l > r) return;

	int i, pos, pivot;

	// Choose a random element
	
	pivot = getPivot(l, r);
	swap(a, l, r);

	// quicksort the array
	
	pos = l;

	for(i = l + 1; i <= r; i++)		
		if(a[i] < a[l])
			swap(a, ++pos, i);

	swap(a, l, pos);

	quicksort(a, l, pos-1);
	quicksort(a, pos+1, r);
}

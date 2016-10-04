#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SWAP(a,b,t) t=a; a=b; b=t;

typedef struct _element
{
	int key;
	char data;
} element;
typedef element *elemP;

void gen_data(int amount);
void qsort(element a[], int left, int right);

int main(void)
{
	srand(time(NULL));


	return 0;
}

void gen_data(int amount)
{
	int i;

	return;
}

void qsort(element a[], int left, int right)
{
	int pivot, i, j;
	element tmp;
	if (left < right) {
		i = left; j = right + 1;
		pivot = a[left].key;
		do {
			do i++; while (a[i].key < pivot);
			do j--; while (a[j].key > pivot);
			if (i < j) SWAP(a[i], a[j], tmp);
		} while (i < j);
		SWAP(a[left], a[j], tmp);
		qsort(a, left, j - 1);
		qsort(a, j + 1, right);
	}
	return;
}
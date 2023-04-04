#include "main.h"
#include <stdio.h>
/**
 * print_diagnosis - prints the sum of 2 diagonals
 * @a: integers in a mt=atrix
 * @size: size of a matrix
 */
void print_diagnosis(int *a, int size)
{
	int b;
	int sum1 = 0;
	int sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b];
		a += size;
	}

	a -= size;

	for (b = 0; b < size; b++)
	{
		sum2 += a[b];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}

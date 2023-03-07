#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of two diagonals
 *
 * @a: matrix of integers
 * @size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int g;
	int k;
	int j;
	int m;

	k = 0;
	m = 0;

	for (g = 0; g < size; g++)
	{
		k = k + a[g * size + g];
	}

	for (j = size - 1; j >= 0; j--)
	{
		m = m + a[j * size + (size - j - 1)];
	}

	printf("%d, %d\n", k, m);
}



#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int g;
	int p;
	int tempInt;

	g = n - 1;

	for (p = 0; p < g/2; p++)
	{
		tempInt = a[p];
		a[p] = a[g];
		a[g--] = tempInt;
	}

}

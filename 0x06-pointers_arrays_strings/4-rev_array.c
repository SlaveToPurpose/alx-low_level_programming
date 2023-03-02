#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int g;

	for (g = n - 1; g >= 0; g--)
	{
		_putchar(a[g]);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of array
 *
 * @j: array to be printed
 * @n: number of elements to print
 */

void print_array(int *j, int n)
{
	int g;
	int a;

	if (n > 0)
	{
		for (g = 0; g < n; g++)
		{
			a = j[g];

			if (g < (n - 1))
			{
				printf("%d, ", a);
			}
			else
				printf("%d", a);
		}
	}

	printf("\n");
}

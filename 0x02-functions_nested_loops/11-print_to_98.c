#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print digits from n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	int g;

	if (n <= 98)
	{
		for (g = n; g <= 97; g++)
		{
			printf("%d, ", g);
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		for (g = 98; g < n; g++)
		{
			printf("%d, ", g);
		}
		printf("%d\n", n);
	}
}

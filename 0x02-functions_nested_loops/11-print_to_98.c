#include "main.h"

/**
 * print_to_98 - print digits from n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	int g;

	for (g = n; g <= 97; g++)
	{
		printf("%d, ",g);
	}
	printf("98");
	printf("\n");
}

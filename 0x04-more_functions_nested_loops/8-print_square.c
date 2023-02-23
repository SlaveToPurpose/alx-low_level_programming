#include "main.h"

/**
 * print_square - print a square with #
 * @size: integer for size
 */

void print_square(int size)
{
	int j, k;

	for (k = 0; k < size; k++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

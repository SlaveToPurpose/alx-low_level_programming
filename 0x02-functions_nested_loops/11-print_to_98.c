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
		_putchar(g + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - prints a line as long as n
 * @n: integer
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int g;

		for (g = 0; g < n; g++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

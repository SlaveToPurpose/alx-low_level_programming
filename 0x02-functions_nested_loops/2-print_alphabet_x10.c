#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 and \n
 */

void print_alphabet_x10(void)
{
	int c, d;

	for (d = 0; d < 10; d++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}

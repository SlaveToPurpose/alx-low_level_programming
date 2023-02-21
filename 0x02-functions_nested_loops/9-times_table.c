#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
        {
			_putchar((0 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((1 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((2 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((3 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((4 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((5 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((6 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((7 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((8 * num1) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((9 * num1) + '0');

			_putchar('\n');
	}
}

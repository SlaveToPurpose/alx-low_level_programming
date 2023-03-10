#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int num1, num2, y;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar((0 * num1) + '0');
		_putchar(',');
		_putchar(' ');

		for (num2 = 1; num2 <= 9; num2++)
		{
			y = num2 * num1;
			if (y > 9)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(y + '0');
			}

			if (num2 < 9 && num2 > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

		}

			_putchar('\n');
	}
}

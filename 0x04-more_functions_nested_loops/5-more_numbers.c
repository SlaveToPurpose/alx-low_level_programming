#include "main.h"

/**
 * more_numbers - print ten times 0 to 14
 */

#include "main.h"

void more_numbers(void)
{
	int k, h, j;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(49);
			}

			h = j % 10;

			_putchar(h + 48);
		}
		_putchar('\n');
	}
}

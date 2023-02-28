#include "main.h"

/**
 * puts_half - prints second half of string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int k;
	int j;
	int g;

	for (k = 0; str[k] != '\0'; k++)
	{}

	if ((k % 2) == 0)
	{
		for (j = (k / 2); j < k; j++)
		{
			g = str[j];
			_putchar(g);
		}
	}
	else
	{
		for (j = (k - 1) / 2; j < k; j++)
		{
			g = str[j];
			_putchar(g);
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string variable
 */

void _puts(char *str)
{
	int g;
	int h;

	for (g = 0; str[g] != '\0'; g++)
	{
		h = str[g];

		_putchar(h);
	}

	_putchar('\n');
}

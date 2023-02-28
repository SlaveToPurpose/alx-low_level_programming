#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	int g;
	int j;
	int p;
	int t;

	t = 0;

	for (g = 0; str[g] != '\0'; g++)
	{
		t++;
	}

	for (j = 0; j <= t; j = j + 2)
	{
		p = str[j];
		_putchar(p);
	}

	_putchar('\n');
}

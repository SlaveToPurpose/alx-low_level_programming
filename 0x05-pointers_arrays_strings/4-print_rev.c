#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string char
 */

void print_rev(char *s)
{
	int g;
	int h;
	int a;
	
	for (a = 0; s[a] != '\0'; a++)
	{}

	for (g = a - 1; g >= 0; g--)
	{
		h = s[g];

		_putchar(h);
	}

	_putchar('\n');

}

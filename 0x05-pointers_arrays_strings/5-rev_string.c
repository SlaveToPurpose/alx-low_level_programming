#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: array of chars
 */

void rev_string(char *s)
{
	int g;
	int a;
	char k;

	for (a = 0; s[a] != '\0'; a++)
	{}

	for (g = a - 1; g >= 0; g--)
	{
		k = s[g];
		_putchar(k);
	}

	_putchar('\n');
}

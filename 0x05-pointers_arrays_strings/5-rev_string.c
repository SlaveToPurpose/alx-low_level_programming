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
	char jk;

	for (a = 0; s[a] != '\0'; a++)
	{}

	for (g = a - 1; g >= 0; g--)
	{
		jk = s[g];
		_putchar(jk);
	}

	_putchar('\n');
}

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

	a -= 1;

	for (g = 0; g <= a; g++)
	{
		k = s[g];
		s[g] = s[a];
		s[a] = k;
		a--;
	}
}

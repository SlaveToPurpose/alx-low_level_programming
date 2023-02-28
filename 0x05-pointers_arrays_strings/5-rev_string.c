#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: array of chars
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

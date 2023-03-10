#include "main.h"

/**
 * _memset - fill block of memory with a specific value
 *
 * @s: starting address
 * @b: value to fill memory with
 * @n: number of bytes to be filled
 *
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int g;

	for (g = 0; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}

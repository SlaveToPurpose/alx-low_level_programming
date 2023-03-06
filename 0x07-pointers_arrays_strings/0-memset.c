#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: points to memory area s
 * @b: constant byte to fill memory area
 * @n: maximum bytes of memory area to be filled
 *
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}

	return (s);
}

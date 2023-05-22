#include "main.h"

/**
 * _memcpy - copy n bytes from one memory area to another memory area
 *
 * @dest: pointer to string where src was copied to
 * @src: pointer to source string
 * @n: n bytes to be copied
 *
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		dest[h] = src[h];
	}

	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenate n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: n bytes to use from src
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int c;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (c = 0; c < n ; c++)
	{
		dest[j] = src[c];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}

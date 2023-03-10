#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int g;
	int a;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}

	a = 0;

	while (src[a] != '\0')
	{
		dest[g] = src[a];
		g++;
		a++;
	}

	dest[g] = '\0';
	return (dest);
}

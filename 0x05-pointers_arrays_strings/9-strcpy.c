#include "main.h"

/**
 * _strcpy - copy string from src to dest
 *
 * @dest: destination array
 * @src: source array
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int g;
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		g = src[a];
		dest[a] = g;
	}
	if (a > 0)
	{
		dest[a +1] = '\0';
	}
	else
	{
		dest[0] = '\0';
	}

	return (dest);
}

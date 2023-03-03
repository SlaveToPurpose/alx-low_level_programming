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
	{}

	for (g = 0; g < a; g++)
	{
		dest[g] = src[g];
	}

	dest[a] = '\0';

	return (dest);
}

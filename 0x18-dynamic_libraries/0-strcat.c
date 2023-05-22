#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	/* length of destination string */
	for (j = 0; dest[j] != '\0'; j++)
	{}

	/* add source string to destination string */
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[j] = src[k];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}

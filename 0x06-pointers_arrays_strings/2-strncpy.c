#include "main.h"

/**
 * _strncpy - copy n characters from one string to another
 *
 * @dest: string to copy to
 * @src: string to copy from
 * @n: maximum characters to copy
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;


	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k] = src[k];
	}


	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}

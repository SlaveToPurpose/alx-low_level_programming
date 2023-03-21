#include "dog.h"

/**
 *_strcpy - copy string
 * @dest: pointer to the buffer where we copy the string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

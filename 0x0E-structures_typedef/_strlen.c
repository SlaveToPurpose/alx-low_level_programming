#include "dog.h"

/**
 * _strlen - find length of string
 * @s: string to be used
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}

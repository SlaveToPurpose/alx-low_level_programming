#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialise with specific char
 *
 * @size: size of array
 * @c: thecharacter to initialise with
 *
 * Return: NULL if size is zero or functoin fails
 * else pointer to array on success
 */

char *create_array(unsigned int size, char c)
{
	int g;
	char *pArray;

	pArray = malloc(size * 1);

	if (size == 0 || *pArray == '\0')
	{
		return ('\0');
	}

	for (g = size; g >= 0; size--)
	{
		pArray[g] =  c;
	}

	return (pArray);
}


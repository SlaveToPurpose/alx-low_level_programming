#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialise with specific char
 *
 * @siZe: size of array
 * @c: thecharacter to initialise with
 *
 * Return: NULL if size is zero or functoin fails
 * else pointer to array on success
 */

char *create_array(unsigned int siZe, char c)
{
	unsigned int g;
	char *pArray;

	g = siZe;
	pArray = malloc(g * sizeof(char));

	if (g == 0 || pArray == 0)
	{
		return (NULL);
	}

	while (g--)
	{
		pArray[g] = c;
	}

	return (pArray);
}

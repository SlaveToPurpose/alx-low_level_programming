#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for array using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: Null if parameters are 0 or malloc fails
 * pointer to memory on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mallocSpace;
	unsigned int glory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mallocSpace = malloc(nmemb * size);
	if (mallocSpace == NULL)
		return (NULL);
	for (glory = 0; glory < (nmemb * size); glory++)
		mallocSpace[glory] = 0;
	return (mallocSpace);
}

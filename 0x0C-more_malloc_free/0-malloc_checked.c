#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: space to be allocated
 *
 * Return: pointer to allocated memory on succes, terminate with status
 * value of 98 upon failure
 */

void *malloc_checked(unsigned int b)
{
	int *pVar;

	pVar = malloc(b);

	if (pVar == NULL)
		exit(98);
	return (pVar);
}

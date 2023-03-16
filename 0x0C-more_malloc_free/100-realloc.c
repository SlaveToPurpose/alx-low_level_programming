#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate mem block using malloc and free
 * @ptr: pointer to memory space to be reallocated
 * @old_size: size of old array
 * @new_size: size of new array
 * Return: pointer on success to memory block, NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL || new_size > old_size || old_size > new_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}

	return (ptr);
}




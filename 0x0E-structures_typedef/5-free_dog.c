#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees mem allocated dog
 * @d: struct dog memory to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

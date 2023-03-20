#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises dog structure
 * @d: pointer to struct to be initialised
 * @name: struct var name to be initialised
 * @age: struct var age to be initialised
 * @owner: struct var owner to be initialised to
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog) * 1);

	d->name = name;
	d->age = age;
	d->owner = owner;
}

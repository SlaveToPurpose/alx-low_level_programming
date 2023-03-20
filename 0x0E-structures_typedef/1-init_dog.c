#include "dog.h"

/**
 * init_dog - initialises dog structure
 * @d: pointer to struct to be initialised
 * @name: struct var name to be initialised
 * @age: struct var age to be initialised
 * @owner: struct var owner to be initialised to
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

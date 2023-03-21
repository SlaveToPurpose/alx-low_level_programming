#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name var
 * @age: age var
 * @owner: owner var
 * Return: pointer to  new dog on sucess, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *minty;
	int lenName;
	int lenOwner;

	minty = malloc(sizeof(dog_t));
	if (minty == NULL)
		return (NULL);

	lenName = _strlen(name);
	minty->name = malloc((lenName + 1) * sizeof(char));
	if (minty->name == NULL)
	{
		free(minty);
		return (NULL);
	}

	lenOwner = _strlen(owner);
	minty->owner = malloc(sizeof(char) * (lenOwner + 1));
	if (minty->owner == NULL)
	{
		free(minty);
		free(minty->name);
		return (NULL);
	}

	minty->age = age;

	_strcpy(minty->name, name);
	_strcpy(minty->owner, owner);

	return (minty);
}


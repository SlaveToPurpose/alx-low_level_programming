#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to destination string
 * @src: string to be copied
 * Return: the pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int itterator;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (itterator = 0; itterator < len; itterator++)
	{
		dest[itterator] = src[itterator];
	}
	dest[itterator] = '\0';

	return (dest);
}

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

	lenName = 0;
	while (name[lenName] != '\0')
	{
		lenName++;
	}
	minty->name = malloc((lenName + 1) * sizeof(char));
	if (minty->name == NULL)
	{
		free(minty);
		return (NULL);
	}

	lenOwner = 0;
	while (owner[lenOwner] != '\0')
	{
		lenOwner++;
	}
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


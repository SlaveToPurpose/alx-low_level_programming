#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: string to be measured
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;
	int counteR;
	char h;

	counteR = 0;

	for (a = 0; h != '\0'; a++)
	{
		h = s[a];
		counteR++;
	}

	return (counteR);
}



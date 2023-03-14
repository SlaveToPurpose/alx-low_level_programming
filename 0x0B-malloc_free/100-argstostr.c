#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string on success, null upon failure
 */

char *argstostr(int ac, char **av)
{
	int elohim;
	int eloHim;
	int highPriest;
	int jehovah;
	int spaceToFree;
	int jireh;

	char *newStr;

	jireh = 0;
	elohim = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (highPriest = 0; highPriest < ac; highPriest++)
	{
		for (jehovah = 0; av[highPriest][jehovah] != '\0'; jehovah++)
		{
			spaceToFree++;
		}
		spaceToFree++;
	}
	spaceToFree++;
	newStr = malloc(spaceToFree * sizeof(char));
	for (elohim = 0; elohim < ac; elohim++)
	{
		for (eloHim = 0; av[elohim][eloHim] != '\0'; eloHim++)
		{
			newStr[jireh] = av[elohim][eloHim];
			jireh++;
		}
		newStr[jireh] = '\n';
		jireh++;
	}
	return (newStr);
}

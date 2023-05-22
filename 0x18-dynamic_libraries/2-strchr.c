#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string s
 * @c: character to be located in string
 *
 * Return: pointer to first occurance of c
 */

char *_strchr(char *s, char c)
{
	int y;
	int lengte;

	char *pBingoChar;

	for (lengte = 0; s[lengte] != '\0'; lengte++)
	{}

	for (y = 0; y < lengte; y++)
	{
		if (s[y] == c)
		{
			pBingoChar = &s[y];
			return (pBingoChar);

		}
	}
	return (NULL);
}

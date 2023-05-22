#include "main.h"

/**
 * _strspn - gets length of prefix substring
 *
 * @s: source string
 * @accept: substring to check
 *
 * Return: number of bytes in intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int lengte;
	int bolelele;
	int i;
	int j;
	unsigned int count;

	count = 0;

	for (lengte = 0; s[lengte] != '\0'; lengte++)
	{}

	for (bolelele = 0; accept[bolelele] != '\0'; bolelele++)
	{}

	for (i = 0; i < lengte; i++)
	{
		for (j = 0; j < bolelele; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
	}

	return (count);
}

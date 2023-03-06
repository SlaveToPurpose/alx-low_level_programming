#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 *
 * @s: string to be searched
 * @accept: bytes to be searched for
 *
 * Return: pointer to byte in s that matches accept, NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int lengteS;
	int boleleleAccept;
	char *t;
	int i;
	int j;

	t = &s[0];


	for (lengteS = 0; s[lengteS] != '\0'; lengteS++)
	{}

	for (boleleleAccept = 0; accept[boleleleAccept] != '\0'; boleleleAccept++)
	{}

	for (i = 0; i < lengteS; i++)
	{
		for (j = 0; j < boleleleAccept; j++)
		{
			if (s[i] == accept[j])
			{
				t = &s[i];
				return (t);
			}
		}
	}
	return (NULL);
}

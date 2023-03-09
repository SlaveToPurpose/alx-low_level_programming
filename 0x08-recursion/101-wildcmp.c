#include "main.h"

/**
 * wildcmp - check if strings are the same when using wildcard
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if identical, 0 if not identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 00)
	{
		if (*s2 != 00 && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == 00);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
		return (0);
}

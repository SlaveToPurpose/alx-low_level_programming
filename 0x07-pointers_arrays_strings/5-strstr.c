#include "main.h"

/**
 * _strstr - locates a substring in string
 *
 * @haystack: string to be searched
 * @needle: string to be searched for
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *pHaystack = haystack;
		char *pNeedle = needle;

		while (*pNeedle != '\0' && *pHaystack == *pNeedle)
		{
			pHaystack++;
			pNeedle++;
		}
		if (*pHaystack == '\0')
			return (haystack);
	}

	return ('\0');
}

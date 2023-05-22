#include "main.h"

/**
 * _strcmp - compares s1 with s2
 *
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 *
 * Return: 0 if strings are the same,
 * >0 if first non matching char in s1 is bigger than that of s2
 * <0 if first non matching char in s1 is smaller than that of s2
 */

int _strcmp(char *s1, char *s2)
{
	int g;
	int a;

	g = 0;
	a = 0;

	do {
		a = s1[g] - s2[g];
		g++;
	} while (a == 0 && s1[g] != '\0' && s2[g] != '\0');

	return (a);
}

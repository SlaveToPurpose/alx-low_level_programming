#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string2
 *
 * Return: pointer to newly created memory space on succes, null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concattedStr;
	int lengthofStr1;
	int lengthofStr2;

	i = 0;
	j = 0;

	for (lengthofStr1 = 0; s1[lengthofStr1] != '\0'; lengthofStr1++)
	{}
	for (lengthofStr2 = 0; s2[lengthofStr2] != '\0'; lengthofStr2++)
	{}
	concattedStr = malloc((lengthofStr1 + 1 + lengthofStr2) * sizeof(char));

	if (s1)
	{
		while (s1[i] != '\0')
		{
			concattedStr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (s2[j] != '\0')
		{
			concattedStr[i] = s2[j];
			i++;
			j++;
		}
	}
	concattedStr[i] = '\0';
	return (concattedStr);

}


#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings to newly allocated space
 * @s1: string 1
 * @s2: string 2
 * @n: copy n bytes from string 2
 * Return: null if function fails, pointer to new space on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1, count2;
	char *newPointer;
	unsigned int itter1, itter2, final;

	if (s1 == NULL)
	{
		s1 = "";
		count1 = 0;
	}
	else
	{
		for (count1 = 0; s1[count1] != '\0'; count1++)
		{}
	}
	if (s2 == NULL)
	{
		s2 = "";
		count2 = 0;
	}
	else
	{
		for (count2 = 0; s2[count2] != '\0'; count2++)
		{}
	}
	if (n >= count2)
	{
		final = count1 + count2 + 1;
		newPointer = malloc(final);
	}
	else
	{
		final = count1 + n + 1;
		newPointer = malloc(final);
	}
	if (newPointer == NULL)
		return (NULL);

	itter1 = 0;
	itter2 = 0;
	while (itter1 < final)
	{
		if (itter1 < count1)
			newPointer[itter1] = s1[itter1];
		else
		{
			newPointer[itter1] = s2[itter2];
			itter2++;
		}
		itter1++;
	}
	newPointer[itter1] = '\0';
	return (newPointer);
}

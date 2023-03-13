#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to newly allocated space in memory
 *
 * @str: source string to be copied to memory space
 *
 * Return: Null if str is empty, on success return pointer
 * to new string
 */

char *_strdup(char *str)
{
	char *str2;
	int i;
	int lengthofStr;

	lengthofStr = 0;

	/*check if str is empty*/
	if (str == NULL)
		return (NULL);

	/*Find length of str*/
	while (str[lengthofStr])
		lengthofStr++;

	/*Assign memory for new string*/
	str2 = malloc((lengthofStr + 1) * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}

	return (str2);
}

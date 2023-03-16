#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: NULL if min>max, and if malloc fails, pointer to array on sucess
 */

int *array_range(int min, int max)
{
	int *intArray;
	int yeshua, hamashiach;

	if (min > max)
		return (NULL);

	yeshua = max - min + 1;
	intArray = malloc(yeshua * sizeof(int));

	if (intArray == NULL)
	{
		return (NULL);
	}
	else
	{
		for (hamashiach = 0; hamashiach < yeshua; hamashiach++)
		{
			intArray[hamashiach] = min;
			min++;
		}
	}
	return (intArray);
}

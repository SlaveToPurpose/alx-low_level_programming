#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array to be searched
 * @size: number of elements in array
 * @cmp: the function that will be called to compare
 * Return: -1 upon failure, else index of first element to match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int encounter;
	int destiny;

	destiny = 0;

	/*check for nulls*/
	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);


	/*loop through array*/
	for (encounter = 0;  encounter < size; encounter++)
	{
		destiny = cmp(array[encounter]);
		if (destiny)
			return (encounter);
	}
	return (-1);
}

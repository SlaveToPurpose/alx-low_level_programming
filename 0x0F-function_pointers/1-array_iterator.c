#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute function given as param to each element
 *
 * @array: array to iterate through
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int glory;

	/*check for NULLS*/
	if (array == NULL || action == NULL || size == 0)
		return;

	/*iterate through array*/
	glory = 0;
	while (glory < size)
	{
		action(array[glory]);
		glory++;
	}

}

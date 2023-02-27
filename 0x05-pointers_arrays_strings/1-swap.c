#include "main.h"

/**
 * swap_int - swaps the values of two inntegers
 *
 * @a: integer 1 to be swapped
 * @b: integer 2 to  be swapped
 */

void swap_int(int *a, int *b)
{
	int tmpPtr = *a;

	*a = *b;
	*b = tmpPtr;
}

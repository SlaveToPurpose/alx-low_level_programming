#include "main.h"

/**
 * clear_bit - clears bit at given index
 * @n: pointer to number
 * @index: index to be cleared
 * Return: 1 on sucess else -1
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n & ~(1 << index));

	return (1);
}

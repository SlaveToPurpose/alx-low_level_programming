#include "main.h"

/**
 * set_bit - set bit of given index to 1
 * @index: index of bit to set
 * @n: the number to be manipulated
 * Return: 1 on succes else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}

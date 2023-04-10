#include  "main.h"

/**
 * get_bit - fetch value of bit at given index
 * @n: decimal number to evaluate
 * @index: index of bit to evaluate
 * Return: value of evaluated bit on success else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (n == 0)
		return (0);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}

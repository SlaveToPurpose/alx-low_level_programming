#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: decimal number to be converted
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int k;

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

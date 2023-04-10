#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: decimal number to be converted
 */

void print_binary(unsigned long int n)
{
		if (n >> 0)
		{
			if (n >> 1)
			{
				print_binary(n >> 1);
			}

			_putchar((n & 1) + 48);
		}
		else
			_putchar('0');
}

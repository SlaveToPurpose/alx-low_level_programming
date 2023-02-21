#include "main.h"

/**
 * print_last_digit - print last digit of given num
 * @r: integer
 * Return: 0
 */

int print_last_digit(int r)
{
	int h = r % 10;

	if (h < 0)
	{
		h = h * (-1);
		_putchar(h + '0');
	}
	else
	{
		_putchar(h + '0');
	}

	return (0);
}

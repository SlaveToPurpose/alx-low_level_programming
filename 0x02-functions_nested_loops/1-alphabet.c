#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by \n
 * Return: 0
 */

void print_alphabet(void)
{
	int g;

	for (g = 97; g <= 122; g++)
	{
		_putchar(g);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

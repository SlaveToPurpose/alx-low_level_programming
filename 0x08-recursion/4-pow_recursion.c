#include "main.h"

/**
 * _pow_recursion - find x to power y
 *
 * @x: base
 * @y: power
 *
 * Return: x to power y if successful, else -1 for error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}

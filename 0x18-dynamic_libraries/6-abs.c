#include "main.h"

/**
 * _abs - print absolute value of number
 * @c: integer
 * Return: absolute value of c
 */

int _abs(int c)
{
	if (c < 0)
	{
		return ((-1) * c);
	}
	else
		return (c);
}

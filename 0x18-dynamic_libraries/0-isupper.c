#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @j: integer
 * Return: 1 if uppercase, 0 otherise
 */

int _isupper(int j)
{
	if (j >= 65 && j <= 90)
	{
		return (1);
	}
	else
		return (0);
}

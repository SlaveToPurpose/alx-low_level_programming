#include "main.h"

/**
 * _isalpha - checks if char is an alphabet
 * @c: char
 * Return: 1 if alphabetci char 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

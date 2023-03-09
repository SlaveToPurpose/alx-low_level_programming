#include "main.h"

/**
 * _strlen_recursion - return the length of the string
 *
 * @s: string whose length must be calculated
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * isPalindromE - determines if string is palindrome
 *
 * @s: the string to be tested
 * @leftIndx: index of first character
 * @rightIndx: index of last character
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int isPalindromE(char *s, int leftIndx, int rightIndx)
{
	if (s == 00)
		return (0);
	else if (leftIndx >= rightIndx)
		return (1);
	else if (s[leftIndx] == s[rightIndx])
		return (isPalindromE(s, leftIndx + 1, rightIndx - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks for palindromacy
 *
 * @s: string to be tested
 *
 * Return: 0 if not palindrome, 1 if palindrome
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (isPalindromE(s, 0, _strlen_recursion(s)));
}

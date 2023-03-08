#include "main.h"

/**
 * guess_sqrt - use integer to guess the roots of squareroot
 *
 * @num: integer to find square root of
 * @guess: integer to increment to find roots
 *
 * Return: -1 if guess is too big,
 * return num if guess is accurate,
 * call itself recursively to increment guess integer
 */

int guess_sqrt(int num, int guess)
{
	if (guess * guess == num)
		return (guess);
	else if (guess * guess > num)
		return (-1);
	else
		return (guess_sqrt(num, guess + 1));
}

/**
 * _sqrt_recursion - use recursive guessing function to find sqaureroot
 *
 * @n: integer to find square root of
 *
 * Return: -1 if n is < 0, otherwise return square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (guess_sqrt(n, 0));
}

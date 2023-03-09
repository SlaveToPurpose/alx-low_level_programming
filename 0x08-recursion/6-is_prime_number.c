#include "main.h"

/**
 * guess_prim - check for prime using iteration
 * @num: int of which prime should be fouund
 * @guess: iterative guess
 *
 * Return: On success 1, else -1
 */
int guess_prim(int num, int guess)
{
	if (num == guess)
		return (1);
	else if (num % guess == 0)
		return (0);
	return (guess_prim(num, guess + 1));
}
/**
 * is_prime_number - checks for prime
 * @num: integer to be evaluated
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (guess_prim(num, 2));
}

#include "3-calc.h"

/**
 * op_add - sum a and b
 * @a: integer 1
 * @b: integer 2
 * Return: sum of a and b on  success
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find difference between a and b
 * @a: integer 1
 * @b: integer 2
 * Return: difference between a and b on success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: integer 1
 * @b: integer 2
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: numerator
 * @b: denominator
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find remainder of a/b
 * @a: numerator
 * @b: denominator
 * Return: remainder of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

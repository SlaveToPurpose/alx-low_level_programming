#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of digits to sum
 * @...: variable number ofarguments
 * Return: 0 upon failure, sum of parameters on success
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list arguments;
		int summation;
		unsigned int itterator;
		unsigned int sumNum;

		va_start(arguments, n);
		summation = 0;

		for (itterator = 0; itterator < n; itterator++)
		{
			sumNum = va_arg(arguments, int);
			summation += sumNum;
		}

		va_end(arguments);
		return (summation);
	}
}

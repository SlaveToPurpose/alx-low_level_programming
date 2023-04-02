#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * @...: A variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int itterator;

	va_start(arguments, n);
	for (itterator = 0; itterator < n; itterator++)
	{
		printf("%d", va_arg(arguments, int));
		if (itterator != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}

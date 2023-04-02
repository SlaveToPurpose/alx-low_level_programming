#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int itterator;
	char *strVar;

	va_start(strings, n);

	for (itterator = 0; itterator < n; itterator++)
	{
		strVar = va_arg(strings, char *);

		if (strVar == NULL)
			printf("(nil)");
		else
			printf("%s", strVar);

		if ((itterator != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

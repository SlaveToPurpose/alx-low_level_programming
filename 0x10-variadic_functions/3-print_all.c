#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything given
 * @format: list of types of arguments to be passed to func
 */

void print_all(const char * const format, ...)
{
	int i;
	char *strVar, *sep = "";
	va_list arguments;

	i = 0;
	va_start(arguments, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arguments, double));
					break;
				case 's':
					strVar = va_arg(arguments, char *);

					if (!strVar)
						strVar = "(nil)";
					printf("%s%s", sep, strVar);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}

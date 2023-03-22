#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prints a name
 *
 * @name: pointer to name string
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	/*Check if string of function call is equal to NULL*/
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	/*call function f that does print work*/
	f(name);
}

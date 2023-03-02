#include "main.h"

/**
 * string_toupper - changes all lowercase characters to uppercase in a string
 * @paramString: string to be passed as parameter
 * Return: string with uppercase letters
 */

char* string_toupper(char *paramString)
{
	int g;
	char l;

	/* loop through given string */
	for (g = 0; paramString[g] != '\0'; g++)
	{
		/* check if element is lowercase */
		if (paramString[g] > 96 && paramString[g] < 123)
		{
			/* swap lowercase with uppercase */
			l = paramString[g] - 32;
			paramString[g] = l;
		}
	}
	return (paramString);
}

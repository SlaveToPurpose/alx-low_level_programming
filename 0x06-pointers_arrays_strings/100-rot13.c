#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @paramStr: string to be encoded
 * Return: pointer to encrypted string
 */

char *rot13(char *paramStr)
{
	int g;
	int m;
	int s;
	char temp;

	/* find length of input */
	for (s = 0; paramStr[s] != '\0'; s++)
	{}

	/* loop through string to encrypt */
	for (m = 0; m < s; m++)
	{
		g = paramStr[m];
		g += 13;

		if (g > 90)
		{
			g = g + 64 - 90;
			temp = g;
			paramStr[m] = temp;
		}
		else
		{
			temp = g;
			paramStr[m] = temp;
		}
	}
	return (paramStr);
}

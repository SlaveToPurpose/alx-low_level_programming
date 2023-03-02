#include "main.h"
/**
 * leet - encrypt string into 1337
 *
 * @paramStr: parameter string
 * Return: parameter string with encryption
 */

char *leet(char *paramStr)
{
	int k;
	int g;

	char code[] = "aAeEoOtTlL";
	char encryption[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	k = 0;

	while (paramStr[k] != '\0')
	{
		for (g = 0; g < 10; g++)
		{
			if (paramStr[k] == code[g])
			{
				paramStr[k] = encryption[g];
			}
		}
		k++;
	}
	return (paramStr);
}

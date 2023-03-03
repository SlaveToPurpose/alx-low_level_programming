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

	char alphaB[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char encrypT[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (g = 0; paramStr[g] != '\0'; g++)
	{
		for (m = 0; m < 52; m++)
		{
			if (paramStr[g] == alphaB[m])
			{
				paramStr[g] = encrypT[m];
				break;
			}
		}
	}


	return (paramStr);
}

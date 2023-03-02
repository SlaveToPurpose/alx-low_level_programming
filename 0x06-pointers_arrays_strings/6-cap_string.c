#include "main.h"

/**
 * cap_string - capitalise all words
 *
 * @strToCap: string parameter to capitalise
 * Return: capitalised string
 */


char *cap_string(char *strToCap)
{
	int g;
	int a;

	/* find length of string */
	for (g = 0; strToCap[g] != '\0'; g++)
	{}

	if (g == 0)
	{
		if (strToCap[g] < 123 && strToCap[g] > 96)
			return (strToCap - 32);
		else
			return (strToCap);
	}

	/* loop through string to test for word seperators */
	for (a = 1; a < g; a++)
	{
		if (strToCap[a] == ' '
				|| strToCap[a] == '\t'
				|| strToCap[a] == '\n'
				|| strToCap[a] == ','
				|| strToCap[a] == ';'
				|| strToCap[a] == '.'
				|| strToCap[a] == '!'
				|| strToCap[a] == '?'
				|| strToCap[a] == 34
				|| strToCap[a] == '('
				|| strToCap[a] == ')'
				|| strToCap[a] == '{'
				|| strToCap[a] == '}')
		{
			if (strToCap[a + 1] != '\0'
					&& strToCap[a + 1] < 123
					&& strToCap[a + 1] > 96)
			{
				strToCap[a + 1] = strToCap[a + 1] - 32;
			}
		}
	}

	return (strToCap);
}

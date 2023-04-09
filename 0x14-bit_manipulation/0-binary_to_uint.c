#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: string of chars to be converted
 * Return: 0 on failure, converted number on success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int strLength;
	unsigned int decimal_num;
	unsigned int bin_base;
	unsigned int i;

	i = 0;
	strLength = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		strLength++;
	}

	while (strLength > 0)
	{
		if (b[strLength] == '1')
			decimal_num += bin_base;
		bin_base *= 2;
		strLength--;
	}

	return (decimal_num);
}

#include "main.h"

/**
 * flip_bits - counts number of bits flipped to get from a to b
 * @n: number 1 to compare
 * @m: number 2 to compare
 * Return: number of its flipped on sucess
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipCount;
	unsigned int bitCompareN;
	unsigned int bitCompareM;

	flipCount = 0;
	bitCompareN = 0;
	bitCompareM = 0;

	while (n > 0 || m > 0)
	{
		bitCompareN = (n & 1);
		bitCompareM = (m & 1);

		if (bitCompareN != bitCompareM)
		{
			flipCount++;
		}

		n = n >> 1;
		m = m >> 1;
	}

	return (flipCount);
}

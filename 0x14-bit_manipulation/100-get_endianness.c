#include "main.h"

/**
 * get_endianness - determine endianness of computer
 * Return: 1 for little endian, 0 for big endian
 */

int get_endianness(void)
{
	unsigned int jesu;
	char *c;

	jesu = 1;
	c = (char*) &jesu;

	return (int)*c;
}


#include <stdio.h>
#include <stdlib.h>

/**
 * main - putchar single digits of base ten
 * Return: 0
 */

int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		putchar(dig%10);

	putchar('\n');

	return (0);
}

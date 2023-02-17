#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digits using putchar
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		putchar('0' + ch);

	putchar('\n');

	return (0);
}

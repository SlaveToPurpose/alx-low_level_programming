#include <stdio.h>
#include <stdlib.h>

/**
 * main - putchar hexadecimals
 * Return: 0
 */

int main(void)
{
	int hex;
	char ch;

	for (hex = 0; hex < 10; hex++)
		putchar('0' + hex);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

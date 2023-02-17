#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lower and upper case alphabet
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

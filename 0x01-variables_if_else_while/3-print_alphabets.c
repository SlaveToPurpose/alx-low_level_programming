#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lower and upper case alphabet
 * Return: 0
 */

int main(void)
{
	int ch, cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

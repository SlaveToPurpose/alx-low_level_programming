#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in reverse using putchar
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}

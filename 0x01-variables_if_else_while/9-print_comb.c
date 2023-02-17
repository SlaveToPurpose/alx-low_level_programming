#include <stdio.h>
#include <stdlib.h>

/**
 * main - print digits with comma using putchar
 * Return: 0
 */

int main(void)
{
	int finally;

	for (finally = 0; finally < 10; finally++)
	{
		putchar('0' + finally);
		if (finally < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

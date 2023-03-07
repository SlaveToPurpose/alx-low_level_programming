#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: key pieces on board
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int g;
	int i;

	for (i = 0; a[i][8] != '\0'; i++)
	{}

	for (k = 0; k < i; k++)
	{
		for (g = 0; g < 8; g++)
			_putchar(a[k][g]);


		_putchar('\n');
	}
}

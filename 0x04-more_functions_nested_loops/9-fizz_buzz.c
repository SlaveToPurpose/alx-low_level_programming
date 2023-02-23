#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - print fizz(*3) print buzz(*5) print fizzbuzz(*15)
 */

void fizz_buzz(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if ((k % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((k % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((k % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", k);
		}

		if (k > 0 && k < 100)
			printf(" ");
	}
		printf("\n");
}

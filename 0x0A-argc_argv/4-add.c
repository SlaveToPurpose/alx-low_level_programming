#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum;
	int counteE;
	int additions;

	sum = 0;
	additions = 0;

	for (counteE = 1; counteE < argc; counteE++)
	{
		additions = atoi(argv[counteE]);

		if (isdigit(argv[counteE]))
		{
			sum += additions;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", sum);
	return (0);
}

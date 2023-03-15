#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argv: argument vector
 * @argc: argument count
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

	counteE = 1;
	while (counteE < argc)
	{
		if (isdigit(argv[counteE]))
		{
			additions = atoi(argv[counteE]);
			sum += additions;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counteE++;

	}

	printf("%d\n", sum);
	return (0);
}

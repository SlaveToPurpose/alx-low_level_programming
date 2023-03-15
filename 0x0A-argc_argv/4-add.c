#include <stdio.h>
#include <stdbool.h>
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
	bool boolVar;

	sum = 0;
	additions = 0;

	for (counteE = 1; counteE < argc; counteE++)
	{
		additions = atoi(argv[counteE]);
		boolVar = isdigit(additions);

		if (boolVar)
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

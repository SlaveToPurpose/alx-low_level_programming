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
	int counter;

	sum = 0;
	counter = 1;

	while (counter <= argc)
	{
		if (isdigit(argv[counter]))
		{
			sum += atoi(argv[counter]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		counter++;
	}

	printf("%d\n", sum);
	return (0);
}

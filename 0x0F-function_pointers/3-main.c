#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int potter;
	char *operation;

	/*check number of arguments*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/*set and check operator*/
	operation = argv[2];

	if (get_op_func(operation) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((*operation == '/' || *operation == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/*print result*/
	potter = get_op_func(operation)(num1, num1);
	printf("%d\n", potter);
	return (0);
}

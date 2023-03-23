#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
}

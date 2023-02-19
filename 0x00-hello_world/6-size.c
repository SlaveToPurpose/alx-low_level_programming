/*Print sizes of variables*/

#include <stdio.h>

/**
 * main - print size of var
 * Return: 0
 */

int main(void)
{
	char ch;
	int num;
	long int lnum;
	long long int llnum;
	float dec;
	printf("Size of a char: %i byte(s)\n", sizeof(ch));
	printf("Size of an int: %i byte(s)\n", sizeof(num));
	printf("Size of a long int: %i byte(s)\n", sizeof(lnum));
	printf("Size of a long long int: %i byte(s)\n", sizeof(llnum));
	printf("Size of a float: %i byte(s)\n", sizeof(dec));
	return (0);
}

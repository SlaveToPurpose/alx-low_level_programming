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

        printf("Size of a char: %zu byte(s)\n", sizeof(ch));
        printf("Size of an int: %zu byte(s)\n", sizeof(num));
        printf("Size of a long int: %zu byte(s)\n", sizeof(lnum));
        printf("Size of a long long int: %zu byte(s)\n", sizeof(llnum));
        printf("Sizeof a float: %zu byte(s)\n", sizeof(dec));
        return (0);

}

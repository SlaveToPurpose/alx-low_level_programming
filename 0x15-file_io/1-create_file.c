#include "main.h"

/**
 * create_file - function to create file
 * @filename: name of file to create
 * @text_content: string to be written to file
 * Return: 1 on sucess, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int openFunc;
	int letterCount;

	letterCount = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	openFunc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (openFunc == -1)
		return (-1);

	while (text_content[letterCount] != '\0')
		letterCount++;

	write(openFunc, text_content, letterCount);

	return (1);
}

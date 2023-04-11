#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of file
 * @text_content: string to be added at the end of file
 * Return: 1 on sucess else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int letterCount;
	int openFunc;

	letterCount = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	openFunc = open(filename, O_WRONLY | O_APPEND);
	if (openFunc == -1)
		return (-1);

	while (text_content[letterCount] != '\0')
		letterCount++;

	write(openFunc, text_content, letterCount);

	return (1);
}

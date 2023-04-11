#include "main.h"


/**
 * read_textfile - reads a text file
 * @filename: pointer to file to be read
 * @letters: number of letters to be written to stdout
 * Return: number of letters it could read on success, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFunc;
	ssize_t readFunc;
	ssize_t writeFunc;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	openFunc = open(filename, O_RDONLY);
	if (openFunc == -1)
	{
		free(temp);
		return (0);
	}

	readFunc = read(openFunc, temp, letters);

	writeFunc = write(STDOUT_FILENO, temp, readFunc);

	close(openFunc);
	free(temp);

	return (writeFunc);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text files then prints them to POSIX stdout
 * @filename: The pointer to the name of file
 * @letters: pointer to number of letters a
 *           function should read and print.
 *
 * Return: -0 if the function fails and also filename is NULL
 *         O/w - the number of bytes a function can read and output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}

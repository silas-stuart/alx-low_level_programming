#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function to allocate 1024 bytes to a buffer stream
 * @file: name of file the buffer stream is storing chars
 *
 * Return: pointer to the newly-allocated buffer stream for (SUCCESS).
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - this section is to close file descriptors.
 * @fd: variable id of file descriptor to be closed.
 */
void close_file(int fd)
{
	int cr;

	cr = close(fd);

	if (cr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main section copies content from one file to another
 * @argc: num of args supplied to the session
 * @argv: array of pointer to the args(arguments)
 *
 * Return: 0 (SUCCESS)
 *
 * Description: If the argument count is incorrect then - exit code 97.
 *              If file_from doesn't exist then - exit code 98.
 *              If file_to cannot be created then - exit code 99.
 *              If file_to or file_from cannot be closed then - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frm, tol, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	re = read(frm, buff, 1024);
	tol = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(tol, buff, re);
		if (tol == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(frm, buff, 1024);
		tol = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buff);
	close_file(frm);
	close_file(tol);

	return (0);
}

#include "main.h"

/**
 * create_file - create_file to make file name NULL terminated
 * string
 * @filename: pointer file_name to be created.
 * @text_content: pointer to string of the file created
 *
 * Return: if function fails return -1.
 *         Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wrr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrr = write(op, text_content, len);

	if (op == -1 || wrr == -1)
		return (-1);

	close(op);

	return (1);
}

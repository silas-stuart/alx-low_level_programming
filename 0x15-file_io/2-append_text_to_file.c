#include "main.h"

/**
 * append_text_to_file - Function appends text to the end of files
 * @filename: pointer to the name of file to execute
 * @text_content: string to be added to the end of the file after execution
 *
 * Return: If the function fails: -1.
 *         If the file does not exist the user lacks write permissions: -1.
 *         Otherwise - 1 for (SUCCESS)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}

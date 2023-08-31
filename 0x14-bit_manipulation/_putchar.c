#include "main.h"
#include <unistd.h>
/**
 * _putchar - function writes the character c to stdout
 * @c: character for printing
 *
 * Return: On success 1.
 * On error, -1 is returned, and if errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

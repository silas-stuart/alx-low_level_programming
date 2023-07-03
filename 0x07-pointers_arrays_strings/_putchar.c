#include "main.h"
#include <unistd.h>

/**
 * _putchar - it will write the character c to the stdout
 * @c : Is the printing character
 * Return: On success to 1
 * On error, -1 will be returned, and erno is set appproprietly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

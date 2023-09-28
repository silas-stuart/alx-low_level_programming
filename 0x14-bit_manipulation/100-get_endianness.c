#include "main.h"

/**
 * get_endianness - getEnd checks if a machine is little endian
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int intA = 1;
	char *c = (char *) &intA;

	return (*c);
}

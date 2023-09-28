#include "main.h"

/**
 * set_bit - function sets a bit of an index to one (algo)
 * @n: pointer of a number to be changed
 * @index: index of a bit to set to one(indexing)
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


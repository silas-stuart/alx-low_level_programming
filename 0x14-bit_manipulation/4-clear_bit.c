#include "main.h"

/**
 * clear_bit - function to set the value of a given bit to 0
 * @n: pointer of the number to be changed
 * @index: is the index of the bit to format
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

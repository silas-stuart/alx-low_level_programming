#include "main.h"

/**
 * get_bit - returns value of bits at index in a baseTen number
 * @n: number to search (algorithm)
 * @index: index of a bit
 *
 * Return: value of the bit at index or return -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int intA;

	if (index > 63)
		return (-1);

	intA = (n >> index) & 1;

	return (intA);
}

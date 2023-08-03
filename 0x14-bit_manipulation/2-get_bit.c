#include "main.h"
#include <stdio.h>
/**
 * get_bit - collect the value of a bit at a given index
 * @n: numbr to be evaluated
 * @index: index from 0, of the bit to be fetched
 * Return: bit at index(SUCCESS), or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}

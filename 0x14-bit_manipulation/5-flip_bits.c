#include "main.h"

/**
 * flip_bits - flip bits counts the number of bits to be changed
 * to get from one index to another
 * @n: first number
 * @m: 2nd number
 *
 * Return: the number of that'll change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int intA, indexZero = 0;
	unsigned long int longInt;
	unsigned long int exclusive = n ^ m;

	for (intA = 63; intA >= 0; intA--)
	{
		longInt = exclusive >> intA;
		if (longInt & 1)
			indexZero++;
	}

	return (indexZero);
}


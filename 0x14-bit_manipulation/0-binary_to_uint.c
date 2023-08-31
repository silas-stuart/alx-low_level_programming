#include "main.h"

/**
 * binary_to_uint - function converts a base two number to unsigned int
 * @b: str that contains the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int expo = 1;

	if (!b)
		return (0);

	for (expo = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		number = 2 * number + (b[i] - '0');
	}
	return (number);
}

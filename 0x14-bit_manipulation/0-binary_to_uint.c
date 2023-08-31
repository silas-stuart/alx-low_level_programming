#include "main.h"

/**
 * binary_to_uint - function converts a base two number to unsigned int
 * @b: str that contains the binary number
 *
 * Return: number conversation
 */
unsigned int binary_to_uint(const char *b)
{
	int expo;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (expo = 0; b[expo]; expo++)
	{
		if (b[expo] < '0' || b[expo] > '1')
			return (0);
		number = 2 * number + (b[expo] - '0');
	}
	return (number);
}

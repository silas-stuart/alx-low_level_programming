#include "main.h"

/**
 * print_binary - conversion of decimal number to base two
 *
 * @n: int to print in binary
 */
void print_binary(unsigned long int n)
{
	int in, count = 0;
	unsigned long int current;

	for (in = 63; in >= 0; in--)
	{
		current = n >> in;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}


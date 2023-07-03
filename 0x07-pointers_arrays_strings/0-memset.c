#include "main.h"

/**
 * *_memset - will fill memory with a constant byte
 * @s: memory area filled
 * @b: character copy
 * @n: number of times to copy the character s
 * Return: pointer to memory c
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

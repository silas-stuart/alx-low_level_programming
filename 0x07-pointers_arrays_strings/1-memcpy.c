#include "main.h"

/**
 * *_memcpy - copies to memory area
 * @dest: destination of the memory area
 * @src: memory area will copy from
 * @n: number of the bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

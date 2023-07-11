#include "main.h"
#include <stdlib.h>

/**
 * create_array - array of characters initializes it with a specific bar
 * @size: size of array
 * @c: character to be assigned
 * Description: create array of size and assign char c
 * Return: SUCCESS, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

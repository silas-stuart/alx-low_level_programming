#include "main.h"

/**
 * 5string_toupper - changes all lowercase of the string
 * to uppercases
 * @s: string expected to modify
 * Return: the result string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * 5string_toupper - changes all lowercase of the string
 * to uppercases
 * @s: string expected to modify
 *
 * Return: the result string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}

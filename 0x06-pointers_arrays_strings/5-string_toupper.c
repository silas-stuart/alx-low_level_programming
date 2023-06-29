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
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

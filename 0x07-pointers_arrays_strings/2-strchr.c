#include "main.h"

/**
 * _strchar - session execution
 * @s: input
 * @c: input2
 * Return: the pointer to the first occurence of the character c.
 */

char *_strchar(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return (0);

}

#include "main.h"

/**
 * _strchar - session execution
 * @s: input
 * @c: input2
 * Return: 0 (success)
 */

char *_strchar(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}

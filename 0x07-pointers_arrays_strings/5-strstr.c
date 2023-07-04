#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates the substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of a located substring
 * or NULL if the substring is not detected
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

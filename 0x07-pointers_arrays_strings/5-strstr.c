#include "header.h"
#include <stdio.h>

/**
 * _strstr - locate a substring.
 *
 * @haystack: string to search from.
 * @needle: substring to look for.
 *
 * Return: pointer to beginning of located substring or NULL.
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
	return (0);
}

#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: source string.
 * Return: pointer to array of char.
 */
char *_strdup(char *str)
{
	char *arr;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = _strlen(str);
		arr = malloc(sizeof(char) * len + 1);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < len; i++)
			{
				arr[i] = str[i];
			}
			arr[i] = '\0';
			return (arr);
		}
	}
}
/**
 * _strlen - swap parameter values.
 *
 * @s: pointer to a string.
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}

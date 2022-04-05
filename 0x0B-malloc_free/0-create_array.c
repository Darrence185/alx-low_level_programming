#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char and initialize with specific char.
 * @size: array length.
 * @c: character to be initialized in array.
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
			return (arr);
		}
	}
}
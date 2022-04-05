#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  returns pointer of pointer to newly allocated space in mem
 * which contains a 2D array whose value is initialized to 0.
 * @width: row of array.
 * @height: column of array.
 * Return: pointer to 2d array of int.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width);
			if (arr[i] == NULL)
			{
				free(arr);
				for (j = 0; j <= i; j++)
				{
					free(arr[j]);
				}
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
		return (arr);
	}
}

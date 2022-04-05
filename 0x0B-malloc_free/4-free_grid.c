#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2D int array previously created by alloc_grid
 * @grid: pointer to array of ints.
 * @height: height grid displayed.
 * Return: nothing.
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

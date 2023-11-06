#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - calls alloc_grid
 * @width:  str
 * @height:  str
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid, j, n, i;

	i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (n = 0; n < i; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
		i = i + 1;
	}

	return (grid);
}

#include "main.h"
#include <stdio.h>
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

	i = j = n = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	 /* Allocate memory for the array of int pointers */

	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		/* Allocate memory for each row */

		if (grid[i] == NULL)
		{
			/*clean up previously allocated memory */
			while (n++ < i)
			{
				free(grid[n - 1]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize elements to 0 */
		while (j++ < width)
		{
			grid[i][j - 1] = 0;
		}
		i = i + 1;
	}

	return (grid);
}

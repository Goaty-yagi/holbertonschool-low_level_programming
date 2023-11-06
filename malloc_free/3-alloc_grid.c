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

	i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *)); /* Allocate memory for the array of int pointers */

	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int)); /* Allocate memory for each row */

		if (grid[i] == NULL)
		{
			/* Memory allocation for a width failed, so clean up previously allocated memory */
			for (n = 0; n < i; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
		i = i + 1;
	}

	return (grid);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - calls alloc_grid
 * @str:  str
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid, j, n, i;

	if (width <= 0 || height <= 0)
	{
		return NULL; // Check for invalid dimensions
	}

	grid = malloc(width * sizeof(int *)); // Allocate memory for the array of int pointers

	if (grid == NULL)
	{
		return NULL;
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int)); // Allocate memory for each row

		if (grid[i] == NULL)
		{
			// Memory allocation for a width failed, so clean up previously allocated memory
			for (n = 0; n < i; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return NULL;
		}

		// Initialize elements to 0
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - calls free_grid
 * @grid:  nested int
 * @height:  int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int counter;

	counter = 0;

	while (counter < height)
	{
		free(grid[counter]);
		counter = counter + 1;
	}
	free(grid);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees memory allocated for a 2-dimensional grid
 * @grid: the 2-dimensional grid
 * @height: height dimension of the grid
 * Description: This function frees the memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}

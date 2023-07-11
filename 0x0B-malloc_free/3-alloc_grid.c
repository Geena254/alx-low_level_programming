#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2-dimensional grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Pointer to the created grid, or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);

	if (grd == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grd[a] = malloc(sizeof(int) * width);

		if (grd[a] == NULL)
		{
			for (; a >= 0; a--)
				free(grd[a]);

			free(grd);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grd[a][b] = 0;
	}
	return (grd);
}

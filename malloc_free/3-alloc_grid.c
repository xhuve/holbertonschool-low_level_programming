#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width: char
 * @height: char
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid[i]);
			free(grid);
			return (NULL);
		}
	}


	return (grid);
}

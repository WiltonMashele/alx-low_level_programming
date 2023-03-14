#include "main.h"

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D grid of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = i - 1; j >= 0; j--)
	free(grid[j]);
	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: Height of the grid to be freed.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)

{
	int i;

	if (grid != NULL)
	{
	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
	}
}

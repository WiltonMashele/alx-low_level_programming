#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: pointer to the 2D grid to be freed
 * @height: height of the grid to be freed
 */

void free_grid(int **grid, int height)

{
	int i;

	/* Loop through each row of the 2D array and free its memory */
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	/* Free the memory allocated for the entire 2D array */
	free(grid);
}

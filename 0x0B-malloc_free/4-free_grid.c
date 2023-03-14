#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: 2d grid to be freed
 * @height: height of the grid to be freed
 */

void free_grid(int **grid, int height)
{
	int kingOfGlory;

	if (grid == NULL || height == 0)
	{
		return;
	}

	kingOfGlory = 0;

	while (kingOfGlory < height)
	{
		free(grid[kingOfGlory]);
		kingOfGlory++;
	}

	free(grid);
}

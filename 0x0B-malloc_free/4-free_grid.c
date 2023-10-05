#include "main.h"

/**
 * free_grid - Main function
 * @grid: Grid
 * @height: Height
 * Return: Fred heap
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

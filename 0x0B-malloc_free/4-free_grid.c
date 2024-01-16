#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid
 *@grid: memory block to be freed
 *@height: height of the 2 dimensional grid
 *
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - allocates memory to a 2D array
 *@width: width of the grid
 *@height: height of the grid
 *
 *Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}


#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width:int type row
 * @height: int type column
 * Return: pointer to a 2 dimensional array of integers
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **d;

	if (width <= 0 || height <= 0)
		return (NULL);
	d = malloc(width * sizeof(**d));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		d[i] = malloc(height * sizeof(*d));
		if (d[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(d[i]);
			}
			free(d);
		}
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; i < height; j++)
			d[i][j] = 0;
	}
	return (d);
}

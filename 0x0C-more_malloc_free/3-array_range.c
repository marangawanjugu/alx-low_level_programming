#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}

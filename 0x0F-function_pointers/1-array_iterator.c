#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - iterates through the array
 * @array: pointer to array of integers
 * @size: size of array
 * @action: pointer function to array_iterator() function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array != NULL && action != NULL)
	{
		for (k = 0; k < size; k++)
			action(array[k]);
	}
}

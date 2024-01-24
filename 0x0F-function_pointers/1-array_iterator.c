#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array
 *@array: array
 *@size: size of the array
 *@action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	for (n = 0; n < (size - 1); n++)
	{
		action(array[n]);
	}
	if (n == (size - 1))
	{
		action(array[size - 1]);
	}
}

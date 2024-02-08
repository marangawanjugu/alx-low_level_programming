#include "main.h"
#include <stdlib.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: pointer to the values
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, size;

	size = sizeof(unsigned long int) * 8;
	if (index >= size)
	{
		return (-1);
	}
	mask = 1 << index;
	*n |= mask;
	return (1);
}

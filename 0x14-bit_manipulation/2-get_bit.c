#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, size;

	size = sizeof(unsigned long int) * 8;
	if (index >= size)
	{
		return (-1);
	}
	mask = 1 << index;
	if (n & mask)
		return (1);
	else
		return (0);
}

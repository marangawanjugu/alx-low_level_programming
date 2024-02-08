#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: number
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value;
	unsigned int counter = 0;

	xor_value = n ^ m;
	while (xor_value != 0)
	{
		xor_value = xor_value & (xor_value - 1);
		counter++;
	}
	return (counter);
}

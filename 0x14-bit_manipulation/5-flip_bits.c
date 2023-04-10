#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: number
 * Return: total number of flipped bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int total = 0;

	while (x)
	{
		x &= (x - 1);
		total++;
	}
	return (total);
}

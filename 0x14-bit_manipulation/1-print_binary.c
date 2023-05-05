#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = n, j = 0; (i = i >> 1) > 0; j++)
		;

	for (; j >= 0; j--)
	{
		if ((n >> j) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

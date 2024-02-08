#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 *
*/

void print_binary(unsigned long int n)
{
	unsigned long int msb = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (msb <= n)
	{
		msb <<= 1;
	}
	msb >>= 1;
	while (msb > 0)
	{
		if (n & msb)
			_putchar('1');
		else
			_putchar('0');
		msb >>= 1;
	}
}

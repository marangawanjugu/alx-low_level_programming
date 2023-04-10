#include "main.h"
#include <stdio.h>

/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;

	for (i = 8; i >= 0; i--)
	{
		num = (n >> i) & 1 ? 1 : 0;
		if ((n == 0) | (n == 1))
			_putchar('0' + num);
	}
}

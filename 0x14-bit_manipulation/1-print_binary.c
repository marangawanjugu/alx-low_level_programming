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

	for (i = 31; i >= 0; i--)
	{
		num = (1 << i);
		if (n & num)
			_putchar('1');
		else
			_putchar('0');
	}
}

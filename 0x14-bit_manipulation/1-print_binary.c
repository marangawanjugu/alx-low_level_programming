#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;

	for (i = 7; i >= 0; i--)
	{
		num = (n >> i) & 1;
		_putchar('0' + num);
	}
}

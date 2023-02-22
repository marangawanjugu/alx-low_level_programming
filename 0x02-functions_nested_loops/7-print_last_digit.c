#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: number
 * Return: last digit, m
 *
 */

int print_last_digit(int i)
{
	int m;

	if (i < 0)
	{
		m = (i % 10) * -1;
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = i % 10;
		_putchar(m + '0');
		return (m);
	}
}


#include "main.h"

/**
 * print_sign - print sign of number
 * @n: The character to be checked
 * Return: 1 for greater than zero, -1 for less than zero or 0 otherwise
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

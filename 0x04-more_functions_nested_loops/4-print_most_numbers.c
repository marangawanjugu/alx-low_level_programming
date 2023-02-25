#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int i, f, t;

	f = 4;
	t = 2;
	for (i = 0; i < 10; i++)
	{
		if (i != t && i != f)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

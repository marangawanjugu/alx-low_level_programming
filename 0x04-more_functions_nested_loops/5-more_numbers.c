#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 *
 */

void more_numbers(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * times_table - 9 times table
 * @i,j - numbers
 * Return: void
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int z = i * j;

			if (z == 0)
			{
				_putchar('0');
			}
			else if (z <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

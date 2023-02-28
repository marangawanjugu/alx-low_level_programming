#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: char type pointer
 * Return: void
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (i /= 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

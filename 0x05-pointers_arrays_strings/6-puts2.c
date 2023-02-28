#include "main.h"
#include "2-strlen.c"

/**
 *puts2 -  prints every other character of a string
 *@str: char type pointer
 * Return: void
 *
 */

void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}

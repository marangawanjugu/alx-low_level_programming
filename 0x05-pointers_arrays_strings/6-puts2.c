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
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

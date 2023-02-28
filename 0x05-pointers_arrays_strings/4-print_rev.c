#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string in reverse
 * @s: char type pointer
 * Return: void
 *
 */

void print_rev(char *s)
{
	int g, leng;

	leng = _strlen(s);
	for (g = leng - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}

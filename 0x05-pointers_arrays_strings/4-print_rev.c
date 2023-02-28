#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char type pointer
 * Return: void
 *
 */

void print_rev(char *s)
{
	int i, b;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (b = i; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

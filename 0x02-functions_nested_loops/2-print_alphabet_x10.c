#include "main.h"

/**
 * print_alphabet_x10 - 10 times the alphabet
 * return void
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

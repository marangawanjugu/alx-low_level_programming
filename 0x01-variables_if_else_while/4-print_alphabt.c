#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always returns 0(success)
 *
 */

int main(void)
{
	int ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

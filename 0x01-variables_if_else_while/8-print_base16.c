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
	int i;
	int ch;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

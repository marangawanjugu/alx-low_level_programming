#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 *
 * Return: always returns 0(success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

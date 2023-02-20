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

	for (i = 0; i < 10; i++)
		putchar(i +'0');
	putchar(i);
	return (0);
}

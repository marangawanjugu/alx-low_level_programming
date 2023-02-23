#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main block
 * Return: 0
 *
 */

int main(void)
{
	unsigned long long n, first = 1, second = 2, next, i;

	n = 98;
	for (i = 0 ; i < n ; i++)
	{
		if (i <= 1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%llu\n", next);
	}
	return (0);
}

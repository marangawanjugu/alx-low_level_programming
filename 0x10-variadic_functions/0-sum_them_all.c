#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of integers passed to the function
 *
 *Return: the total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list total;

	va_start(total, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(total, int);
	va_end(total);
	return (sum);
}

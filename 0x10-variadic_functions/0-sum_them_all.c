#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: total sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(param, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(param, int);
	va_end(param);
	return (sum);
}

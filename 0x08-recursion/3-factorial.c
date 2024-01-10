#include "main.h"
#include <stdio.h>

/**
 *factorial - print the factorial of a given number
 *@n: the number to calculate factorial
 *
 *Return: the factorial of the number given
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

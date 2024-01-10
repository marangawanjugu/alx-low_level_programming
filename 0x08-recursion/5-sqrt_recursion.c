#include <stdio.h>
#include "main.h"

/**
 *helper - found by squaring y to check with val
 *@val: base value
 *@y: number squared and compared to val
 *Return: the natural square root of a number
 */

int helper(int val, int y)
{
	if ((y * y) > val)
		return (-1);
	else if ((y * y) == val)
		return (y);
	else
		return (helper(val, y + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 *@n: value used to check for square roots
 *
 *Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(n, 0));
}

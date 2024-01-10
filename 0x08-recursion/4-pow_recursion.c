#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - gives the value of x raised to the power of y
 *@x: base value
 *@y: power value
 *
 *Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}

#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int type character
 * Return: 1 for a digit else 0
 *
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

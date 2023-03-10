#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int type character
 * Return: 1 for uppercase else 0
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

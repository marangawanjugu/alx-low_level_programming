#include "main.h"

/**
 *_isalpha - check for alphabetic character
 *@c: The character to be checked
 *Return: 1 for alphabet character or 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

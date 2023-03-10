#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: char type, memory address to be filled
 * @b: char type, value to be filled
 * @n: unsigned int type, number of bytes to be filled
 * Return: s as the value
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

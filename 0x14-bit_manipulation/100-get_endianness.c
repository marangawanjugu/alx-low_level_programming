#include "main.h"
#include <stdio.h>

/**
 *get_endianness - checks the endianness
 *Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)
{
	unsigned int z = 1;
	char *c;

	c = (char *) &z;
	if (*c == 1)
		return (1);
	else
		return (0);
}

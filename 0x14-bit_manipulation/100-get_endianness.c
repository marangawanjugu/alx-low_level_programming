#include "main.h"
#include <stdlib.h>

/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *ptr = (unsigned char *)&x;

	if (*ptr)
		return (1);
	else
		return (0);
}

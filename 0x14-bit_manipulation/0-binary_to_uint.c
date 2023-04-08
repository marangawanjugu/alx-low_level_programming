#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to a string
 *Return: the converted number, or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int weight = 1;
	int i, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += weight;
		}
		weight *= 2;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (decimal);
}

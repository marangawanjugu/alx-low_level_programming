#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
*malloc_checked - allocates memory using malloc
*@b: size in bytes
*
*Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}

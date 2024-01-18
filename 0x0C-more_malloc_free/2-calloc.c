#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements in the array
 *@size: size of array in bytes
 *
 *Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int arr_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_size = nmemb * size;
	arr = malloc(sizeof(char) * arr_size);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, arr_size);
	return (arr);
}

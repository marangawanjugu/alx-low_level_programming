#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicates a string
 *@str: string to duplicate
 *
 *Return: a pointer to the duplicated string
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int len, i;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{}
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[len] = '\0';;
	return (copy);
}

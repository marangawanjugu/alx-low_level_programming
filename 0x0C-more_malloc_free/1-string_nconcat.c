#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int, number of bytes
 * Return: pointer to heap memory else Null
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (unsigned int)_strlen(s1);
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[c++];
	}
	ptr[i] = '\0';

	return (ptr);
}

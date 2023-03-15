#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	s = malloc(sizeof(*s) * len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}

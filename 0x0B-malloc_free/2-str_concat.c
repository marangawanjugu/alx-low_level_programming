#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to appended string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, size;
	char *ptr;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	size = len1 + len2 + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];
	ptr[size - 1] = '\0';
	return (ptr);
}

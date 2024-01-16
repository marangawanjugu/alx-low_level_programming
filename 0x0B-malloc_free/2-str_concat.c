#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type  pointer
 * @src: char type pointer
 * Return: a char value
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: NULL on failure or pointer to the new string on success
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2;
	char *link;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{}
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	{}
	link = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (link == NULL)
		return (NULL);
	_strcpy(link, s1);
	_strcpy(link + len_s1, s2);
	return (link);
}

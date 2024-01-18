#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: char type pointer
 * Return: int value
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * _memcpy - copies memory area
 * @dest: destination array where content is to be copied
 * @src: source of data to be copied
 * @n: number of bytes to be copied
 * Return: a pointer to destination
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 *string_nconcat - concatenates two strings
 *@s1: destination of the string
 *@s2: source of the string
 *@n: size in bytes
 *
 *Return: pointer shall point to a newly allocated space
 * in memory, which contains s1, followed by the first n bytes
 * of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	char *link;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (n >= len_s2)
		n = len_s2;
	link = malloc(sizeof(char) * (len_s1 + n + 1));
	if (link == NULL)
		return (NULL);
	_memcpy(link, s1, len_s1);
	_memcpy(link + len_s1, s2, n);
	link[len_s1 + n] = '\0';
	return (link);
}

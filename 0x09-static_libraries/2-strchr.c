#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string in which the character is to be searched
 * @c: character being searched for in the string
 * Return: pointer to c  else Null if character not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (s + 1);
	}
}

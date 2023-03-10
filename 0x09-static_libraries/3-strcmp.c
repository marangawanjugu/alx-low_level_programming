#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: char type pointer
 * @s2: char type pointer
 * Return: 0 if its the same, -1 if lesser than else 1
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

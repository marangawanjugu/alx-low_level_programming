#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to be scanned
 *@accept: string containing the characters to match
 *Return: pointer to the byte in s that matches one of the bytes in accept
 *else NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: char value
 *
 */

char *leet(char *s)
{
	int i, j;
	char z1[] = "aAeEoOtTlL";
	char z2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == z1[j])
			{
				s[i] = z2[j];
			}
		}
	}
	return (s);
}

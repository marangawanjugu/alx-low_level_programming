#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: sub-string
 *Return: pointer to the beginning of the located substring
 *or NULL if the substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}


#include "main.h"

/**
 *_indexof - returns a boolean if special character is present
 *@a: char type
 *Return: True or False
 *
 */

int _indexof(char a)
{
	int i;
	char sep[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (sep[i] == a)
			return (1);
	}
	return (0);
}
/**
 *cap_string - capitalizes the first letter of all words
 *@s: string
 *Return: capitalized string
 *
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indexof(s[i]))
			continue;
		if (s[i] >= 97 && s[i] <= 122 && (_indexof(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}

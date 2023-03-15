#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * digitcheck - check if the characters are digits
 * @s: string to check
 * Return: zero if not a digit else non-zero
 *
 */

int digitcheck(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: argument counts
 * @argv: argument vector
 * Return: if function runs properly else 1 if error
 *
 */
int main(int argc, char  *argv[])
{
	int i;
	int result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (digitcheck(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}

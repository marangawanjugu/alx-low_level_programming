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

int main(int argc, char *argv[])
{
	int i;
	char *s;

	int long x;

	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (digitcheck(argv[i]))
			{
				x = strtol(argv[i], &s, 10);
				sum += x;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}

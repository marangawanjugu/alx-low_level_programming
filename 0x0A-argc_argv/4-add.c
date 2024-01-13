#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int type character
 * Return: 1 for a digit else 0
 *
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: zero on success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int p, z;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (p = 1; p < argc; p++)
	{
		for (z = 0; argv[p][z] != '\0'; z++)
		{
			if (!_isdigit(argv[p][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[p]);
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@ac: argument count
 *@av: argument vector
 *
 *Return: 0 on success
 */
int main(__attribute__((unused))int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}

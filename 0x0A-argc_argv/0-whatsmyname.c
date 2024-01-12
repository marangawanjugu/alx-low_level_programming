#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints the program's name
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: zero on success
 *
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: zero on success
 *
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: zero on success
 */

int main(int argc, char *argv[])
{
	int num_1 = atoi(argv[1]);
	int num_2 = atoi(argv[2]);
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", num_1 * num_2);
		return (0);
	}
}

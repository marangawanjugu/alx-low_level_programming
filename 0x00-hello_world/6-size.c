#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int i;
	long int lint;
	long long int lon;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(ch));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(lint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lon));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}

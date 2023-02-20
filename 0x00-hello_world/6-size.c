#include <stdio.h>
#include <dtdlib.h>

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

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d bytes(s)\n", sizeof(lint));
	printf(Size of a long long int: %d byte(s)\n", sizeof(lon));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 *_prime - check if n is prime
 *@n: value to check
 *@z: iterator value
 *Return:returns 1 if the input integer is a prime number, otherwise return 0
 */

int _prime(int n, int z)
{
	if (z == 1)
		return (1);
	else if (n % z == 0)
		return (0);
	else
		return (_prime(n, z - 1));
}

/**
 *is_prime_number - checks if a value is a prime number
 *@n: value to check
 *
 *Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime(n, 2));
}

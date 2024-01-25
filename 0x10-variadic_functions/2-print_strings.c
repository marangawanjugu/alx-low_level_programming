#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings, followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}

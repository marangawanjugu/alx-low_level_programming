#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_char - print a character
 *@list: argument list
 *
 */

void print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	printf("%c", c);
}

/**
 *print_int - print an integer
 *@list: argument list
 *
 */

void print_int(va_list list)
{
	int i;

	i = va_arg(list, int);
	printf("%d", i);
}

/**
 *print_float - print a float
 *@list: argument list
 *
 */

void print_float(va_list list)
{
	float f;

	f = va_arg(list, double);
	printf("%f", f);
}

/**
 *print_string - print a string
 *@list: argument list
 *
 */

void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s", s);
}

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	format_specifier specifiers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};
	va_list list;
	int counter, j;
	char *separator = "";

	va_start(list, format);
	counter = 0;
	j = 0;
	while (format != NULL && format[counter] != '\0')
	{
		while (specifiers[j].type)
		{
			if (specifiers[j].type == format[counter])
			{
				printf("%s", separator);
				specifiers[j].f(list);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++counter;
	}
	printf("\n");
	va_end(list);
}

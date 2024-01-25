#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int counter;
	va_list data;

	va_start(data, format);
	counter = 0;
	while (format[counter] != '\0')
	{
		if (format[counter] == 'c')
		{
			c = (char)va_arg(data, int);
			printf("%c, ", c);
		}
		else if (format[counter] == 'i')
		{
			i = va_arg(data, int);
			printf("%d, ", i);
		}
		else if (format[counter] == 'f')
		{
			f = (float)va_arg(data, double);
			printf("%f, ", f);
		}
		else if (format[counter] == 's')
		{
			s = va_arg(data, char*);
			if (s == NULL)
				printf("(nil), ");
			else
				printf("%s, ", s);
		}
		counter++;
	}
	va_end(data);
	printf("\n");
}


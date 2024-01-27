#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_anything - print
 *@type: specifier
 *@f: function pointer
 *Description - contains the information on specifiers
 */
typedef struct print_anything
{
	char type;
	void (*f)(va_list list);
}format_specifier;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

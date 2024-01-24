#include "function_pointers.h"
#include <stdio.h>

/**
*print_name - prints a name
*@name: name to be printed
*@f: function pointer to a function
*
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - prints the name through thefn f
 * @name: name to be printed
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{	
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

#include <stdlib.h>
#include "function_pointers.h"

/**
 *Print_name - Prints a name
 *@name: Name to be printed
 *@f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

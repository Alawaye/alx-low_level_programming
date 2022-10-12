#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - 
 *@name:.....
 *@f: ....
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == Null || f == Null)
		return;
	f(name);
}
	

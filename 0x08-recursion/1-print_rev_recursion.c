#include "main.h"

/**
 *_print_rev_recursion - Uses recursion to print a string in reverse
 *@s: String to print
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_print_rev_recursion(s);
	}
}

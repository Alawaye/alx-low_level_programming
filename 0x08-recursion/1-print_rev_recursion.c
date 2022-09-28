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
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}

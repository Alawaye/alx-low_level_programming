#include "main.h"

/**
 *_print_rev_recursion - prints a string in reversE
 *@s: String to print in reverse
 *Return: void
 */
void _print_rev_recursion(char *s)
{
		char str;
		if (*s == '\0')
		{
			return;
		}
		else
		{
			str = *s;
			s++;
			_print_rev_recursion(s);
			_putchar(str);
		}
}

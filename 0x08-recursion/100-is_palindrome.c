#include "main.h"
/**
 * is_palindrome - checking if string is palindrome or not
 * @s: evauating char
 * Return: always 0(sucess)
 */
int is_palindrome(char *s)
{
	if (*s ==  _print_rev_recursion(s))
	{
		return (1);
	}

	return (0);
}

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

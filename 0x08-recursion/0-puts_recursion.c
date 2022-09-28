#include "main.h"
/**
 * _puts_recursion - printing out string using puts
 * @s: character
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

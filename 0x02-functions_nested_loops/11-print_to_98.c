#include "main.h"
/**
 * print_to_98 - printing natural numbers
 * @n: evaluating the integer
 * Decription: creating function to print all natural numbers
 * Return:void
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n <= 98)
		{
			_putchar(n + '0');
			_putchr(',');
			_putchar(' ');
		}
		_putchar('\n');
		else if (n >= 98)
		{
			for (n = n; n >= 98; n--)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
}

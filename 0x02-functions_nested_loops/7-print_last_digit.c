#include "main.h"
/**
 * print_last_digit - getting the last digit
 * @i: Evaluate the integer
 * Description: a function that is getting the ast digit
 * Return: i (last digit)
 */
int print_last_digit(int i)
{
	int i = n % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar (i + '0');
	return (i);
}

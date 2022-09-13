#include "main.h"
/**
 * print_sign - Determine if number is signed
 * @n: Number to be evaluated
 * Description: checking if number taken is sign
 * Return: 1(if n > 0), 0(n == 0), -1(n < 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else
	{
		_putchar('45');
		return (-1);
	}
}

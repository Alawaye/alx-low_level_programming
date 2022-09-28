#include "main.h"
/**
 * factorial - getting factorial of a given number
 * @n:number to be evaluated
 * Return: -1(if n lower than 0)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}

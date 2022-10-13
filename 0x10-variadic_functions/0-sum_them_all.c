#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of n arguments to a function
 *@n: required argument
 *Return: summation of all arguments
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list ap;
	unsigned int count = 0;
	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = va_arg(ap, int); count <= n;)
	{
		sum += va_arg(ap, int);
		count++;

	}

	va_end(ap);
	return (sum);
}

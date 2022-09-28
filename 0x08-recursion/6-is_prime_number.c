#include "main.h"
/**
 * is_prime_number - checking for prime numbers
 * @n: evaluating numbers
 * Return: always 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	i++;
	return (is_prime_number(n));
}

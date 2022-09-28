#include "main.h"
#include <stdio.h>

int checkPrime(int num, int i);



/**
 * is_prime_number - checking for prime numbers
 * @n: evaluating numbers
 * Return: always 0
 */

int is_prime_number(int n)
{
	return (CheckPrime(n, 1));
}

/**
 * CheckPrime - checking for prime numbers
 * @n : number to evaluate
 * @i: iterate number
 * Return: 0(not prime) 1(prime)
 */


int CheckPrime(int n, int i)
{
	if (i == n)
	{
		return (0);
	}

	else if (i % n == 0)
	{
		return (1);
	}

	else
	{
		return (CheckPrime(n + 1, i));
	}
}

#include "main.h"
#include <stdio.h>

int checkPrime(int i, int num);



/**
 * is_prime_number - checking for prime numbers
 * @n: evaluating numbers
 * Return: always 0
 */

int is_prime_number(int n)
{
	return (CheckPrime(2, num));
}

/**
 * CheckPrime - checking for prime numbers
 * @i : number to evaluate
 * @n: iterate number
 * Return: 0(not prime) 1(prime)
 */


int CheckPrime(int i, int num)
{
	if (num == i)
	{
		return (0);
	}

	else if (num % i == 0)
	{
		return (1);
	}

	else
	{
		return (CheckPrime(i + 1, num));
	}
}

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
	return (CheckPrime(num, num / 2));
}

/**
 * CheckPrime - checking for prime numbers
 * @num : number to evaluate
 * @i: iterate number
 * Return: 0(not prime) 1(prime)
 */


int CheckPrime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}

	else if (num % i == 0)
	{
		return (0);
	}

	else
	{
		return (CheckPrime(num, i - 1));
	}
}

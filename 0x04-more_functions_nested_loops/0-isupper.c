#include "main.h"
/**
 * _isupper - using ascii to determine uppercase letters
 * @c: evaluating integer
 * Return: 1(if c is uppercase) 0(if c is not uppercase)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

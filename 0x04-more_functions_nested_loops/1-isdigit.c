#incude "main.h"
/**
 * _isdigit - using ascii get digits from 0-9
 * @c: evaluating integer
 * Return: 1(if digits from 0-9) 0(if digits is not from 0-9)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

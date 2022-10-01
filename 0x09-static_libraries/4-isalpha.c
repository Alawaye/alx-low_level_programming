#include "main.h"
/**
 * _isalpha - Dtermine alphabetic characters
 * @c: Character to be evaluated
 * Description: uses ASCII code to determine alpahbets
 * Return: Always 1(alphabet) or 0(not letter)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}

#include "main.h"
/**
 * _islower - check holberton
 * @c: an input char
 * Description: lowercase
 * Return: always 0 if it is not lowercase 1 if lowercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (lower);
}

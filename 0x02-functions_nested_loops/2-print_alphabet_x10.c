#include "main.h"
/**
 * print_alphabet- check description
 * Description: print alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

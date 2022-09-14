#include "main.h"
/**
 * jack_bauer - jack time
 * Description: function prints every minute in one day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (m = 0; 0 < 60; m++)
		{
			_putchar((i / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}


}

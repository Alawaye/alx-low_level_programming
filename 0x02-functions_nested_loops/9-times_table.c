#include "main.h"
/**
 * times_table - printing 9 times table, strting from with 0
 * Return:void
 */
void times_table(void)
{
	int i, j, z, u, d;

	for (i = 9; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			z = (i * j);
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
		}

		_putchar('\n')
	}
}


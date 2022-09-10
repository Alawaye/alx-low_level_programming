#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if (b != a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8'  && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}

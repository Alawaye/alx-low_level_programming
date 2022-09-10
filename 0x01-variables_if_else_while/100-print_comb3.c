#include <stdio.h>
/**
 * main- entry point
 * Return: always 0
 */
int main(void)
{
	int num;
	int nu;

	for (num = '0'; num < '9'; num++)
	{
		for (nu = num + 1; nu <= '9'; nu++)
		{
			if (nu != num)
			{
				putchar(num);
				putchar(nu);
				if (num == '8' && nu == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

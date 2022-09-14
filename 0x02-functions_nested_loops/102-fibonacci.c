#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	long int a;
	long int b;
	long int c;
	long int results;

	a = 1;
	b = 2;

	for (c = 0; c <= 50; c++)
	{
		if (c == 50)
		{
			printf("%ld\n", a);
		}
		else
		{
			printf("%ld, " a);
		}
		results = a + b;
		a = b;
		b = results;
	}
	return (0);

}

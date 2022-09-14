#include <stdio.h>
/**
 * main - print the sum of the mulyiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, sum;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

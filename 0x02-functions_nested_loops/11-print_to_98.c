#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing natural numbers
 * @n: evaluating the integer
 * Decription: creating function to print all natural numbers
 * Return:void
 */
void print_to_98(int n)
{
		if (n < 98)
		{
			for (n = n; n < 97; n++)
				printf("%d, ", n);
		}
		else if (n > 98)
		{
			for (n = n; n > 98; n--)
				printf("%d, ", n);
		}
		printf("98\n");
}

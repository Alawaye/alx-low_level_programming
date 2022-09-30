#include "main.h"
#include <stdio.h>
/**
 * main - printing multiples of two numbers
 * @argc: argument count
 * @argv: argument vector/array
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

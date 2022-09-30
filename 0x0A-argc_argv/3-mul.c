#include <stdlib.h>
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
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}

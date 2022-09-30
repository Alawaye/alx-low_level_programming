#include "main.h"
#include <stdio.h>

/**
 * main - printing out the program name
 * @argc: argument count
 * @argv: argument vector/array of string
 * Return: always 0(sucess)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return(0);
}

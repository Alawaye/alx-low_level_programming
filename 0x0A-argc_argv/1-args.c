#include <stdio.h>
#include <stdio.h>

/**
 * main - printing number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(sucess)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}

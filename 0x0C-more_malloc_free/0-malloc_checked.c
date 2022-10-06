#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocating memory using malloc
 * @b : unisigned integer
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	int *ptr = malloc(b);

	if (ptr == Null)
		exit(98);

	return (ptr);
}

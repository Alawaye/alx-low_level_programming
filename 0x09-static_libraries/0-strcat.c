#include "main.h"

/**
 *_strcat - Concatenates two strings
 *@dest: The destination string
 *@src: The source string
 *Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
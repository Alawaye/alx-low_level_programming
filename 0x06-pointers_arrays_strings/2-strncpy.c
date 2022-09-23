#include "main.h"
/**
 * _strncpy - copying strings
 * @dest: destination string
 * @src: source string
 * @n: limit of copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	src[i] = '\0';

	return (dest);

}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenating string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

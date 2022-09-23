#include "main.h"
/**
 * _strncat - concatenating two string
 * @dest: destination string
 * @src:limit of concatenating
 * @n: integer
 * Return: a pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int dlen = 0, j = 0;

		while (dest[dlen])
		{
			dlen++;
		}

		while (j < n && src[j])
		{
			dest[dlen] = src[j];
			dlen++;
			j++;
		}

		dest[dlen + n + 1] = '\0';

		return (dest);
}

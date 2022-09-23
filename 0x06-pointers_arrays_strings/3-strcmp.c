#include "main.h"
/**
 * _strcmp - comparing two string
 * @s1: first character
 * @s2: secound chracter
 * Return: always 0 (sucess)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			i = 1;
			break
		}
		j++;
	}

	if (i == 0)
	return (0);
}

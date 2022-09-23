#include "main.h"
/**
 * _strcmp - comparing two string
 * @s1: first character
 * @s2: secound chracter
 * Return: 0 (same ) 1(not the same)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	for (i = 0;  *s1[i] != '\0' || *s2[i] != '\0'; i++)
	{
		if (*s1[i] != *s2[i])
		{
			flag = 1;
			break
		}
	}
	if (flag == 1)
		return (1);
	else
		return (0);
}

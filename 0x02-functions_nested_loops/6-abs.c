#include "main.h"
/**
 * _abs - Getiing the abs of an interger number
 * @r: Evaluate intger
 * Description: Creating a function to detemine if an integer is abs or not
 * Return: absolute value of 'r'
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r * 1);
	}
}

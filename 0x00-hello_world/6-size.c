#include <stdio.h>
/**
 * main - entry point
 *Description: printing out the size of various data types depending on ones system  
 * Return: Always 0(sucess)
 */
int main(void)
{
	int a;
	float b;
	long int c;
	long long int d;
	char f;

	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)\n",sizeof(long));
	printf("Size of a long long int: %d byte(s)\n",sizeof(long long));
	printf("Size of a float: %d byte(s)\n",sizeof(float));
	return (0);
}

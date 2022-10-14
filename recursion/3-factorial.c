#include "main.h"
/**
 *factorial - calculate the factorial
 *@n: factorial
 *Return: factorial
 **/
int factorial(int n)
{
	int i, n = 1;

	for (i = 1; i <= n ; i++)
	{
		n = n * i;
	}
	return (n);
}

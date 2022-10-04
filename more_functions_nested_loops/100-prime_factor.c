#include "main.h"
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, n1;

	n = 612852475143;
	for (n1 = 2; n1 <= n; fp++)
	{
		if (n % n1 == 0)
		{
			n /= n1;
			n1--;
		}
	}
	printf("%ld\n", n1);
	return (0);
}

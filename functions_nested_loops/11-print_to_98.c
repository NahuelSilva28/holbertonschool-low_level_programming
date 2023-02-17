#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98
 *
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n = (n > 98) ? n - 1 : n + 1;
	}
	printf("%d\n", n);
}

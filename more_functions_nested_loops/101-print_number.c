#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int x, a, count;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	a = x;
	count = 1;

	while (a > 9)
	{
		a /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((x / count) % 10) + 48);
	}
}

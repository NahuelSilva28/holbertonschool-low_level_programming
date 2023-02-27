#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int n;

	while (*(s + len) != '\0')
	{
	len++;
	}

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(*(s + n));
	}

_putchar('\n');
}

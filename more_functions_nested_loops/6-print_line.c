#include "main.h"
/**
 ** print_line - Write a function that draws a straigh line
 ** @n: fisrt imput
 ** Return: result
 **/
void print_line(int n)
{
	int n1;

	if (n > 0)
	{
		for (n1 = 0; n1 < n; n1++)
		_putchar('_');
	}

	_putchar('\n');
}

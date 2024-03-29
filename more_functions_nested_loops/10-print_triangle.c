#include "main.h"

/**
* print_triangle - prints a triangle.
* @size: number of lines.
* Return: no return.
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		return;
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - a)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

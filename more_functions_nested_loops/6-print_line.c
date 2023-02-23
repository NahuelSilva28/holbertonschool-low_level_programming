#include "main.h"

/**
 *print_line - draws a straight line
 *@n: number of times the character '_' should be printed
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');

	_putchar('\n');
}

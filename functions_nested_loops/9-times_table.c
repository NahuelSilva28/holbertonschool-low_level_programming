#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int n1, mult, prod;

	for (n1 = 0; n1 <= 9; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n1 * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

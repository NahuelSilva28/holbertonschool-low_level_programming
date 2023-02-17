#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*
* Return: void.
*/
void times_table(void)
{
	int row;
	int column;
	int pro;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			pro = row * column;

			if (pro <= 9)
			{
				_putchar(' ');
				_putchar(pro + '0');
			}
			else
			{
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

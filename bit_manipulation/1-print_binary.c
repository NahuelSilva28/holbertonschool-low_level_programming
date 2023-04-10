#include "main.h"
/**
* print_binary - Prints the binary representation of an unsigned long int
* @n: The number to print
* Return: None
*/
void print_binary(unsigned long int number)
{
	if (number >> 0)
	{
		if (number >> 1)
			print_binary(number >> 1);
		_putchar((number & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

#include "main.h"
/**
* main - void print_alphabet(void);
* print_alphabet
*
* Return: (0) Success
*/
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	putchar('\n');
}

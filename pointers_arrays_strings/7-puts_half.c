#include "main.h"

/**
* puts_half - print the second half of a string
* @str: The string to be treated
*/
void puts_half(char *str)
{
	int len = 0;
	int half = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		half = (len + 1) / 2;
	}
	else
	{
		half = len / 2;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}

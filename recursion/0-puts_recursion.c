#include "main.h"
/**
 *_puts_recursion - Puts with recursion print a string
 *@s: pointer a string
 *Return: nothing
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

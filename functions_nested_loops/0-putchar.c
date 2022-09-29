#include <stdio.h>
#include <unistd.h>
/**
* main - Write a program that prints _putchar
*
*
* Return: (0) Success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>

/**
** main - Entry point.
** This program prints the alphabet in lowercase and then in
** uppercase, followed by a new line.
** Return: 0 (Success)
**/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);

	putchar('\n');
return (0);
}

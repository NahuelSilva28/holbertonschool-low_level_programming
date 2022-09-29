#include <stdio.h>
/**
* main - base diez y seis
*
*
* Return: (0) Success
*/
int main(void)
{
	int n;
	char s;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
		putchar('\n');
return (0);
}

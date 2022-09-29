#include <stdio.h>
#include <unistd.h>
/**
* main - Write a program that prints _putchar
*
*
* Return: (0) Success
*/
int main(void)
{
	int a;
	char x[] = "_putchar";
	for (a = 0; a < 9; a++)
	{
		putchar(x[a]);
	}
		putchar('\n');
return (0);
}

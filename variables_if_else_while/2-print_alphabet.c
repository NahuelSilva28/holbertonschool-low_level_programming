#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* putchar
* Return: Always 0 (Success)
*/
int print(void)
{
	int n, s;

	s = 0;

	while (s < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
		putchar(n);
		}
		s++;
		putchar('\n');
	}
}

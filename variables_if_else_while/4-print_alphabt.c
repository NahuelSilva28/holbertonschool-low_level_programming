#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
* abc a Z
* Return: Always 0 (Success)
*/
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
	if (abc != 'e' && abc != 'q')
	putchar(abc);
	}
	putchar('\n');

return (0);
}

#include <stdio.h>

/**
* main - Entry point.
* Prints all lowercase letters of the alphabet in reverse order.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

return (0);
}


#include "main.h"

/**
* rev_string - reverses a string
* @s: char
*/
void rev_string(char *s)
{
	int a, b, tmp, len;
	
	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;
	a--;
	
	while (b < len / 2)

	{
		tmp = s[b];
		s[b] = s[a];
		s[a] = tmp;
		a--;
		b++;
	}
}

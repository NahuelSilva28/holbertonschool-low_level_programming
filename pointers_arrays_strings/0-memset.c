#include "main.h"
/**
 *_memset -  Fills the first n bytes of the memory area
 *@s: pointer char 1
 *@b: char 2
 *@n: unsigned int
 *Return: s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s + n) = b;
	}
	return (s);
}

#include "main.h"
/**
 **_strspn - gets the length of a prefix substring
 **@s: string
 **@accept: contein bytes
 **Return: bytes that compose the length
 **/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;

	while (*s && strchr(accept, *s))
	{
		s++;
		a++;
	}
	return (a);
}

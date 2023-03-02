#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
*
* @s: the string to search
* @accept: the bytes to accept in the substring
*
* Return: the number of bytes that make up the len of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && strchr(accept, *s))
	{
		s++;
		len++;
	}

return (len);
}

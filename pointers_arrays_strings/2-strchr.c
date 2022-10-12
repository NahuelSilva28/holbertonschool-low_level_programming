#include "main.h"
/**
 *_strchr - locate a character
 *@s: the string
 *@c: character
 *Return: a pointer
 */
char *_strchr(char *s, char c)
{
while (*s)
{
	if (*s == c)
		return (s);
	s++;
}
return (!c ? s : NULL);
}

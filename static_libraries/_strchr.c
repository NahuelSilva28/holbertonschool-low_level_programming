#include "main.h"
#include <stddef.h>
/**
* _strchr - locates the first occurrence of the character c in the string s.
*
* @s: pointer to the string
* @c: the character to search for
*
* Return: a pointer to the first character c in the string s,
* or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
		return (s);
	s++;
	}

	return (c == '\0' ? s : NULL);
}

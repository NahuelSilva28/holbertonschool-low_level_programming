#include "main.h"
/**
*string_nconcat - concat 2 stings
*@s1: first str
*@s2: second str
*@n: limit of s2
*Return: concatenated string
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size, len1, len2;
	char *ptr;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		len1 = _strlen(s1);
		len2 = _strlen(s2);
		if (n > len2)
			n = len2;
		size = len1 + n;
		ptr = malloc(sizeof(char) * size + 1);
		if (!ptr)
			return (NULL);
		for (i = 0; i < len1; i++)
			ptr[i] = s1[i];
		for (j = 0; j < n; j++, i++)
			ptr[i] = s2[j];
		ptr[i] = 0;
		return (0);
}
/**
*_strlen - return the len
*@s: str s
*Return: s -p
**/
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

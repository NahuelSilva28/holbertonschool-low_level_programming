#include "main.h"
/**
*_strdup - copy a string to a newly allocated space in memory
*@str: string to copy
*Return: pointer to duplicated string or NULL if error
**/
char *_strdup(char *str)
{
	char *st;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
	;

	a++;
	st = malloc(a * sizeof(char));
	if (st == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		st[b] = str[b];
	}
return (st);
}

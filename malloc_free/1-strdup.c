#include "main.h"

/**
* _strdup - creates a duplicate of a string in newly allocated memory
* @str: the string to be duplicated
* *sstr: pointer  used to store the address of the memory block
* that will be allocated to hold a copy of the original string.
* Return: a pointer to duplicated string or NULL if error
*/

char *_strdup(char *str)
{
char *sstr;
unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	;
	len++;

	sstr = malloc(len * sizeof(char));
	if (sstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		sstr[i] = str[i];

return (sstr);
}

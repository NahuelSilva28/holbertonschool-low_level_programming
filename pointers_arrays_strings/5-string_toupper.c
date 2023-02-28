The code you provided is already quite simple and clear. However, here's a version with some minor changes to improve readability:

c
Copy code
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 **/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}

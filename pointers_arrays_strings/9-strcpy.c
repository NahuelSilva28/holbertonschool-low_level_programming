#include "main.h"

/**
* _strcpy - copy the string pointed to by src to dest
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
*
* @dest: pointer to destination buffer
* @src: pointer to source string
* Return: dest
*/
char *_strcpy(char *dest, const char *src);
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

return (dest);
}

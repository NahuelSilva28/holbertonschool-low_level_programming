#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 **/
char *strcat(char *dest, const char *src)
{
int arr1;
int arr2;

for (arr2 = 0; dest[arr2] != '\0'; arr2++)
{}
for (arr1 = 0; src[arr1] != '\0'; arr1++)
{
	dest[arr2 + arr1] = src[arr1];
}
dest[arr2 + arr1] = '\0';
return (dest);
}

#include "main.h"

/**
* _strstr - locates the first occurrence of a substring in a string
*
* @haystack: the string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the found substring,
* or NULL.
*/
char *_strstr(char *haystack, char *needle)
{
    int i, j;

if (needle[0] == '\0')

return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
j = 0;
while (needle[j] != '\0' && haystack[i + j] == needle[j])
j++;
if (needle[j] == '\0')

return (haystack + i);
}
}

return (NULL); /* no match */
}

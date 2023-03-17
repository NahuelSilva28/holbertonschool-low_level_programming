#include "main.h"
/**
* string_nconcat - concatenates two strings up to n bytes
* @s1: first string
* @s2: second string
* @n: maximum number of bytes to concatenate from s2
* Return: pointer to the concatenated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, size, i, j;
char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + ((n < len2) ? n : len2) + 1;

	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n && j < len2; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

return (result);
}

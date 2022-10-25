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
char *abcd;
unsigned int a, b, c, d;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (a = 0; s1[a] != '\0'; a++)
{
}
for (b = 0; s2[b] != '\0'; b++)
{
}
if (n > b)
{
n = b;
}
c = a + n;

wtvr = malloc(c + 1);

if (wtvr == NULL)
{
return (NULL);
}
for (d = 0; d < c; d++)
{
if (d < a)
abcd[d] = s1[d];
else
abcd[d] = s2[d - a];
}
abcd[d] = '\0';
return (abcd);
}


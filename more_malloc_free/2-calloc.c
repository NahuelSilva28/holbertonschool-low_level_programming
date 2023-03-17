#include "main.h"

/**
* _calloc - allocates memory for an array and initializes it to 0
* @nmemb: number of elements in the array
* @size: size of each element
* Return: pointer to the allocated memory, or NULL on fail.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *n;
unsigned int i, totalsize;

if (nmemb == 0 || size == 0)
return (NULL);

totalsize = nmemb * size;
n = malloc(totalsize);
if (n == NULL)
return (NULL);

for (i = 0; i < totalsize; i++)
n[i] = 0;

return ((void *)n);
}

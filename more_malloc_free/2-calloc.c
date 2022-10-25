#include "main.h"
/**
*_calloc - call ok
*@nmemb: n
*@size: size
*Return: 0
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(n + i) = 0;
	return ((void *)n);
}

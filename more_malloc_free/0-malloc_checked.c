#include "main.h"
/**
*malloc_checked - allocated memory
*@b: size to be allocated
*Return: ret
**/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

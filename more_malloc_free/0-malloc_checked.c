#include "main.h"
/**
* malloc_checked - allocates memory and exits if allocation fails
* @b: size of memory to allocate
* Return: pointer to the allocated mem
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
return (ptr);
}

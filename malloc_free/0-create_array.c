#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of characters
* and initializes it with a specific value
* @size: the size of the array to create
* @c: the value to initialize the array with
*
* Return: a pointer to the new created array,
* or NULL if size is 0 or if malloc fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

	if (size == 0)
	return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

return (arr);
}

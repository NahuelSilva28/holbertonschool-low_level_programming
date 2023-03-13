#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of characters and initializes it with a specific value
* @size: the size of the array to create
* @c: the value to initialize the array with
*
* Return: a pointer to the new created array, or NULL if size is 0 or if malloc fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	/* check for invalid size */
	if (size == 0)
return (NULL);

	/* allocate memory for array */
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
return (NULL);

	/* initialize array with given value */
	for (i = 0; i < size; i++)
		arr[i] = c;

return (arr);
}

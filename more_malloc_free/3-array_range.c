#include "main.h"
/**
* array_range - creates an array of integers
* @min: minimum value of the range
* @max: maximum value of the range
* Return: pointer to the array, or NULL on fail
*/
int *array_range(int min, int max)
{
int *arra;
int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arra = malloc(sizeof (int) * size);
	if (arra == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arra[i] = min++;

return (arra);
}

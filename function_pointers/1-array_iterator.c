#include "function_pointers.h"
/**
* array_iterator - iterates through an array
* and executes a function on each element
* @array: pointer to an array of integers
* @size: number of elements in the array
* @action: pointer to a function that
* takes an integer argument and returns void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

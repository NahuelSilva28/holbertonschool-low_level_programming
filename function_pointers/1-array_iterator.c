#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function executes a function on array
 * @array: pointer
 * @size: number elements in array
 * @action: pointer
 * Return: 0
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

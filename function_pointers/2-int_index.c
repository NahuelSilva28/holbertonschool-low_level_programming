#include "function_pointers.h"
/**
*int_index - serie for an integer
*@array: array
*@size: size array
*@cmp: compar funct
*Return: -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}

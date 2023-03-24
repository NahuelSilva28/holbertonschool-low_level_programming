#include "function_pointers.h"

/**
* int_index - searches for an integer in an array using a comparison function
* @array: the array
* @size: size of the array
* @cmp: the comparison function to use
*
* Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}

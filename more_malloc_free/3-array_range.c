#include "main.h"
/**
*array_range - range
*@min: minimo
*@max: max
*Return: pointer
**/
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size  = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && mim <= max; i++, min++)
		*(p + i) = min;
	return (p);
}

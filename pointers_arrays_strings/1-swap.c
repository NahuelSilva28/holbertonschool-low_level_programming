#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @x: function that swap
 * @a: a
 * @b: b
 * Return: void
 **/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

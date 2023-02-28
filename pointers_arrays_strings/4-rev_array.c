#include "main.h"

/**
* reverse_array - Reverses an array of integers.
* @a: Pointer to the array.
* @n: Number of elements in the array.
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int temp, counter;

	n--;

	for (counter = 0; counter <= n; counter++, n--)
	{
		temp = a[counter];
		a[counter] = a[n];
		a[n] = temp;
	}
}

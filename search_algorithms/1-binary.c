#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array using binary search
* @array: pointer to the first element of the sorted array
* @size: number of elements in the array
* @value: value to search for
* Return: index of the value, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;
size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

return (-1);
}

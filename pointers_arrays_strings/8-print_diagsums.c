#include "main.h"

/**
* print_diagsums - prints sums of diagonals in a matrix
* @matrix: pointer to the matrix
* @size: size of the matrix
*/
void print_diagsums(int *matrix, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;

	for (int i = 0; i < size * size; i += size + 1)
	{
	diagonal_sum_1 += matrix[i];
	}

	for (int i = size - 1; i < size * size - 1; i += size - 1)
	{
	diagonal_sum_2 += matrix[i];
	}

	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}

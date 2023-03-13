#include"main.h"
/**
* alloc_grid - allocate memory for a 2D array of integers and initialize to 0
* @width: width of the array
* @height: height of the array
* Return: pointer to the 2D array of integers, or NULL if width or height is < 1
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

return (grid);
}

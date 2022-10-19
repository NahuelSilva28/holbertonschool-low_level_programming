#include "main.h"
#include <stdlib.h>

/**
*create_array - :)
*@size: :))
*@c: :)))
*Return: :))))
*/

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *haha;

	if (size == 0)
	{
		return (NULL);
	}
	haha = malloc(size * sizeof(char));
	if (haha == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		haha[a] = c;
	}
	return (haha);
}

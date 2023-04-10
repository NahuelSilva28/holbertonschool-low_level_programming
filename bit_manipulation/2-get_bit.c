#include "main.h"
/**
* get_bit - Returns the value of a bit at a given index
* @n: The unsigned long int to check
* @index: The index of the bit to check
* Return: The value of the bit (0 or 1), or -1 if an error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n >> index) & 1)
		return (1);

return (0);
}

#include "main.h"
/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: Binary number as a string
* Return: Converted number as unsigned int,
* or 0 if b is NULL or contains
* non-binary digits
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int len, base = 1;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (len--; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			result += base;
	}

return (result);
}

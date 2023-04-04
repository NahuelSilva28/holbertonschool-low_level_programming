#include "variadic_functions.h"

/**
* sum_them_all - calculates the sum of parameters
* @n: the number of parameters
* Return: the sum of the parameters, or 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list args;

if (n == 0)
return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

return (sum);
}

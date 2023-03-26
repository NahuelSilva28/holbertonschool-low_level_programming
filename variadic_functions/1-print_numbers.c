#include "variadic_functions.h"

/**
* print_numbers - prints a series of numbers separated by a given string
* @separator: the separator string to use between numbers
* @n: the number of integers to print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%i", va_arg(args, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}

va_end(args);
printf("\n");
}

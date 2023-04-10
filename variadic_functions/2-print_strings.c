#include "variadic_functions.h"

/**
* print_strings - prints a series of strings separated by a given string
* @separator: the separator string
* @n: the number of strings to print
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		{
			printf("%s", str);
			if (separator != NULL && i != n - 1)
			printf("%s", separator);
		}
	}

	va_end(args);

printf("\n");
}
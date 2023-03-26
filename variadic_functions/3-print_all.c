#include "variadic_functions.h"

/**
* print_all - prints all
* @format: arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *str;
	const char t_arg[] = "cifs";
	char arg;

va_start(args, format);

while (format && format[i])
{
arg = format[i];
j = 0;

while (t_arg[j])
{
if (arg == t_arg[j])
{
switch (arg)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
printf("(nil)");
else
printf("%s", str);
break;
}

if (format[i + 1])
printf(", ");

break;
}

j++;
}

i++;
}

printf("\n");
va_end(args);
}

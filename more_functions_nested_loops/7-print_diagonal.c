#include "main.h"

/**
*print_diagonal - draws a diagonal line in the terminal
*@n: number of times the backslash character should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (int a = 0; a < n; a++)
{
for (int b = 0; b < a; b++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
}
}

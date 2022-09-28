#include <stdio.h>
/**
* main -  prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* putchar 
* for
* for
* Return: (0) Success
*/
int main(void)
{
char ns;

for (ns = 'a' ; ns <= 'z' ; ns++)
{
putchar(ns);
}
for (ns = 'A' ; ns <= 'Z' ; ns++)
{
putchar(ns);
}
putchar('\n');
return (0);
}

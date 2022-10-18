#include"main.h"
/**
*main - program that adds positive numbers.
*@argc: number of arguments passed to the function
*@argv: argument vector of pointers to strings
*Return: si 0 error, else 1
**/
int main(int argc, char *argv[])
{
int a = 0, i, j;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
puts("Error");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
a += atoi(argv[i]);
}
printf("%d\n", a);
return (0);
}


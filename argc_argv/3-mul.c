#include"main.h"
/**
* main - Multiplies two numbers.
*
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int a, b, result;

if (argc != 3)
{
printf("Usage: %s <num1> <num2>\n", argv[0]);
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%d\n", result);

return (0);
}

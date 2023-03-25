#include "3-calc.h"

/**
* main - performs simple arithmetic operations
* @argc: argument count
* @argv: argument vector containing numbers and operator
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (*func_ptr)(int, int);


if (argc != 4)
{
printf("Error\n");
return (98);
}


func_ptr = get_op_func(argv[2]);
if (func_ptr == NULL)
{
printf("Error\n");
return (99);
}


num1 = atoi(argv[1]);
num2 = atoi(argv[3]);


printf("%d\n", func_ptr(num1, num2));

return (0);
}

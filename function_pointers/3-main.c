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

// Check if there are enough arguments
if (argc != 4)
{
printf("Error\n");
return (98);
}

// Get the correct arithmetic function
func_ptr = get_op_func(argv[2]);
if (func_ptr == NULL)
{
printf("Error\n");
return (99);
}

// Convert string arguments to integers
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

// Perform the arithmetic operation and print the result
printf("%d\n", func_ptr(num1, num2));

return (0);
}

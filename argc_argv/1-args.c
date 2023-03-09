#include <stdio.h>

/**
*main - program that prints the number of arguments
*@argc: argument count
*@argv: vector
*Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
if (argc < 2)
{
printf("Usage: %s <argument1> <argument2> ... <argumentN>\n", argv[0]);
return 1;
}
int num_arguments = argc - 1;
printf("Number of arguments: %d\n", num_arguments);
return 0;
}

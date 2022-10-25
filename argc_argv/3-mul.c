#include"main.h"
/**
 *main - Write a program that multiplies two numbers.
 *@argc: arg count
 *@argv: array of pointers
 *Return: 1
 **/
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
	printf("Error\n");
return (1);
	}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%d\n", result);
return (0);
}

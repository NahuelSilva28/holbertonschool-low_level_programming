#include"main.h"
/**
 *main - Write a program that prints all arguments it receives.
 *@argc: arg count
 *@argv: array of pointers
 *Return: 0
 **/
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("argv[%2d]: %s\n", counter, argv[counter]);
return (0);
}

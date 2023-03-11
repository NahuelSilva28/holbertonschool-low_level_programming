#include "main.h"

/**
* main - Prints all the arguments received by the program.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
return (0);
}

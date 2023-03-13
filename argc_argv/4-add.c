#include"main.h"

/**
* main - Adds positive numbers.
*
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
	{
		if (!isdigit(argv[i][j]))
	{
		puts("Error");
		return 1;
	}
	}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

return 0;
}

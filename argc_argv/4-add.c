#include"main.h"
<<<<<<< HEAD

=======
>>>>>>> 6793c8f29b2092ee0e2f5bf87615480c00e628bc
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
<<<<<<< HEAD

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
=======
int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
>>>>>>> 6793c8f29b2092ee0e2f5bf87615480c00e628bc
	{
		if (!isdigit(argv[i][j]))
	{
		puts("Error");
<<<<<<< HEAD
		return 1;
=======
		return (1);
>>>>>>> 6793c8f29b2092ee0e2f5bf87615480c00e628bc
	}
	}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

<<<<<<< HEAD
return 0;
=======
return (0);
>>>>>>> 6793c8f29b2092ee0e2f5bf87615480c00e628bc
}

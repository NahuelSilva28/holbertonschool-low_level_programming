#include"main.h"
/**
 * main - Prints the minimum number of coins for an amount of money.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins = n / 25;

	n %= 25;
	coins += n / 10;
	n %= 10;
	coins += n / 5;
	n %= 5;
	coins += n / 2;
	n %= 2;
	coins += n;

	printf("%d\n", coins);

return (0);
}

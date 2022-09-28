#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* If and else
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%dis zero\n", n);
	else if (n < 0)
		printf("%dis negative\n", n);
	else
		printf("%dis positive\n", n);
	return (0);
}

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
	/* your code goes there */
	if ((n % 10) == 0)
	       printf("Last digit of %d is %d and is 0\n",n, n % 10); 	
	return (0);
}

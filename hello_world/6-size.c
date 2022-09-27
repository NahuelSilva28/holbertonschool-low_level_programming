#include <stdio.h>
/**
 **main - Entry point
 **printf bytes
 **Return: Always 0 (Success)
 **/
int main(void)
{
	printf("\nSize of char: %lu bytes(s)", sizeof (char));
	printf("\nSize of int: %lu bytes(s)", sizeof (int));
	printf("\nSize of long int: %lu bytes(s)", sizeof (long int));
	printf("\nSize of long long int: %lu bytes(s)", sizeof (long long int));
	printf("\nSize of float: %lu bytes(s)", sizeof (float));
	return (0);
}      

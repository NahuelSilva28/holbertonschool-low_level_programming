#include <stdio.h>
/**
 **main - Entry point
 **printf bytes
 **Return: Always 0 (Success)
 **/
int main(void)
{
	printf("\nSize of char: %lu byte(s)", sizeof(char));
	printf("\nSize of int: %lu byte(s)", sizeof(int));
	printf("\nSize of long int: %lu byte(s)", sizeof(long int));
	printf("\nSize of long long int: %lu byte(s)", sizeof(long long int));
	printf("\nSize of float: %lu byte(s)", sizeof(float));
	return (0);
}      

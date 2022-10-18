#include"main.h"
/**
 *main - program that prints the number of arguments
 *@argc: arg count
 *@argv: array of pointers
 *Return: 0
 **/
int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc);
for (i = 1; i < argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}

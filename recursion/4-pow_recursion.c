#include "main.h"
/**
 *_pow_recursion - raise x to power y
 *@x: number
 *@y: power
 *Return: return valor of x or -1
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

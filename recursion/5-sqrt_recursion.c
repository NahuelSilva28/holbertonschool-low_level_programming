#include "main.h"

/**
* find_root - helper function to find the natural square root of n
* @n: the number to find the square root of
* @root: the current root test
*
* Return: the natural square root of n, or -1 if not a natural
*/
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

return (find_root(n, root + 1));
}


/**
* _sqrt_recursion - finds the natural square root of n
* @n: the number to find the square root of
*
* Return: the natural square root of n, or -1 if n < 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

return (find_root(n, 0));
}

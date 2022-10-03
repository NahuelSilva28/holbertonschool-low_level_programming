#iinclude "main.h"
/**
* _isdigit - checks whether a character is numeric character (0-9) or not.
* @c: input
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isdigit(int c)
{
		if ((c >= 48) && (c <= 57))
					return (1);
			else
						return (0);
}

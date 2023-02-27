/**
 * _strlen - returns the length of a string.
 * @s: string to determine the len
 *
 * Return: the length of the string TLOFTS
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

return (length);
}

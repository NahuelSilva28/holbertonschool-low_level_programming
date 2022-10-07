#include "main.h"
#include <stdio.h>
/**
 * _strcpy - See description asd
 * @dest: char type string
 * @src: char type strin
 * Return: dest
 **/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

		while (src[index])
		{
			dest[index] = src[index];
			index++;
		}

		return (dest);
}

#include "main.h"
/**
* _memcpy - copies n bytes from the memory area pointed to by src into
* the memory area pointed to by dest
*
* @dest: pointer to the destination buffer
* @src: pointer to the source buffer
* @n: number of bytes to copy from src
*
* Return: pointer to the destination buffer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

return (dest);
}

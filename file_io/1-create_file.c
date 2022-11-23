#include "main.h"
int create_file(const char *filename, char *text_content)
{

	int fd, lenght;
	ssize_t res_write;

	if (filname == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WEONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		

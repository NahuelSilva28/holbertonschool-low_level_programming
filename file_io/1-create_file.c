#include "main.h"

/**
* create_file - creates a file and writes content to it
* @filename: the name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length;
	ssize_t write_result;

	if (filename == NULL)
	return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
	return (-1);

	if (text_content != NULL)
	{
	length = 0;
	while (*(text_content + length) != '\0')
		length++;
	write_result = write(file_descriptor, text_content, length);
		if (write_result == -1)
		{
			write(1, "Failed to write", 15);
			return (-1);
		}
	}

	close(file_descriptor);
return (1);
}

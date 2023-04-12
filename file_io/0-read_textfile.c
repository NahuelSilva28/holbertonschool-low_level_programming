#include "main.h"

/**
* read_file - reads a text file and prints its content
* @filename: name of the file to read
* @num_chars: maximum number of characters to print
* Return: number of characters printed, or 0 if an error occurred
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int filedesc;
ssize_t num_read, num_written;
char *buffer;

if (!filename)
return (0);

filedesc = open(filename, O_RDONLY);
if (filedesc == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);

num_read = read(filedesc, buffer, letters);
num_written = write(STDOUT_FILENO, buffer, num_read);

close(filedesc);
free(buffer);

return (num_written);
}

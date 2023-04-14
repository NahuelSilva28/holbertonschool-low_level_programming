#include "main.h"
/**
* _handle_error - Prints an error message and exits the program.
* @error_code: The error code.
* @filename: The name of the file causing the error.
*/
void _handle_error(int error_code, char *filename)
{
	if (error_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	if (error_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
* cp_file - Copies the contents of one file to another.
* @src_filename: The name of the source file.
* @dest_filename: The name of the destination file.
* Return: 1 on success, -1 on failure.
*/
int cp_file(char *src_filename, char *dest_filename)
{
	int src_fd, dest_fd, bytes_read, bytes_written;
	char buf[1024];

	/* Open source file for reading. */
	src_fd = open(src_filename, O_RDONLY);
	if (src_fd < 0)
		_handle_error(98, src_filename);

	/* Open destination file for writing. */
	dest_fd = open(dest_filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd < 0)
	{
		close(src_fd);
		_handle_error(99, dest_filename);
	}

	/* Copy contents of source file to destination file. */
	do {
		bytes_read = read(src_fd, buf, 1024);
		if (bytes_read < 0)
			_handle_error(98, src_filename);

		bytes_written = write(dest_fd, buf, bytes_read);
		if (bytes_written < bytes_read)
			_handle_error(99, dest_filename);

	} while (bytes_written == 1024);

	/* Close files. */
	if (close(src_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		close(dest_fd);
		exit(100);
	}
	if (close(dest_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

return (1);
}

/**
* main - Copies the contents of one file to another.
* @argc: The number of arguments.
* @argv: An array of pointers to the arguments.
* Return: 0 on success, -1 on error.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(argv[1], argv[2]);

return (0);
}

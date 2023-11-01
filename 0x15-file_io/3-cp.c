#include "main.h"

/**
 * print_error - prints error
 * @message: error message
 * @arg: the argument to be includd in the message
 */
void print_error(const char *message, const char *arg)
{
	dprintf(2, message, arg);
	exit(97);
}

/**
 * open_source_file - open the source of the file for reading
 * @filename: name of the source file
 *
 * Return: the file descriptor of the source file
 */
int open_source_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error("Error: Can't read from the filexx %s\n", filename);
	return (fd);
}

/**
 * open_dest_file - open destination file for writing
 * @filename: name of the destination file
 *
 * Return: file descriptor of the det file
 */
int open_dest_file(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
		print_error("Error: Can't write to %s\n", filename);
	return (fd);
}

/**
 * copy_file - copy content from source to dest
 * @fd_from: file descriptor of source file
 * @fd_to: file descriptor of dest file
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
			print_error("Error: Can't write to destination file\n", "");
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from the source file\n", "");
}

/**
 * main - entry point for the cp program
 * @argc: argument count
 * @argv: array of command line arguments
 *
 * Return: 0 on success, exit with 1on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		print_error("Usage: %s file_from file_to\n", argv[0]);

	fd_from = open_source_file(argv[1]);
	fd_to = open_dest_file(argv[2]);

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %s\n", strerror(errno));
	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %s\n", strerror(errno));

	return (0);
}

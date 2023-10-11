#include "main.h"

/**
 * error_msg - Print an error message to the standard error.
 * @exit_code: The exit code for the program.
 * @format: The format string for the error message.
 * @...: Variable number of arguments for the error message.
 */
void error_msg(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - copies the contents of one file to another
 * @argc: argument count
 * @argv: arguent vector
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, nread;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		error_msg(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_msg(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		error_msg(99, "Error: Can't write to file %s\n", argv[2]);

	while ((nread = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
			error_msg(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (nread == -1)
		error_msg(98, "Error: Can't read from file %s\n", argv[1]);

	close(fd_from);
	close(fd_to);
	return (0);
}

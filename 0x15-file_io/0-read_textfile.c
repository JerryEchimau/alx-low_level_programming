#include "main.h"

/**
 * read_textfile - read and print text from a file to standard output
 * @filename: name of the file to be read
 * @letters: the number of letters to read and print
 *
 * Return: no of letters read and printed, 0 in failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char buffer[1024];
	ssize_t bytes_read, bytes_written, total_written = 0;

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (letters < (size_t)bytes_read)
			bytes_read = (ssize_t)letters;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}

		total_written += bytes_written;
		letters -= (size_t)bytes_written;
		if (letters <= 0)
			break;
	}

	close(fd);
	return (total_written);
}

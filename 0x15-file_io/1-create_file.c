#include "main.h"

/**
 * create_file - create a file and write content
 * @filename: name of the file to create
 * @text_content: text to be written on the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

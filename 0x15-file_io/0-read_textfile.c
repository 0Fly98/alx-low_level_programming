#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to be read and printed.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (nwritten);
}

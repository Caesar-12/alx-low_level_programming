#include "main.h"

/**
 * read_textfile - Reads a text file and prints out to stdout
 *
 * @filename: pointer to file
 * @letters: Number of characters to read
 *
 * Return: Actual number of characters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wc, rc;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	rc = read(fd, buf, letters);

	if (rc == -1)
	{
		free(buf);
		return (0);
	}

	wc = write(STDOUT_FILENO, buf, rc);

	if (wc == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (wc);
}

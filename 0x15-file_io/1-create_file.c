#include "main.h"

/**
 * create_file - Create and writes to a file
 *
 * @filename: Name of file to be created
 * @text_content: Content to be written to newly created file
 *
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wc, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	wc = write(fd, text_content, len);
	if (wc == -1 || wc != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

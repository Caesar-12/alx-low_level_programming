#include "main.h"

/**
 * append_text_to_file - Create and writes to a file
 *
 * @filename: Name of file to be created
 * @text_content: Content to be written to newly created file
 *
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wc, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

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

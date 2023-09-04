#include "main.h"

/**
 * create_file - Creates a file and writes to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the content string to write to the file.
 *
 * Return: On failure or if filename is NULL - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, content_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_len = 0; text_content[content_len]; content_len++)
			;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd, text_content, content_len);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

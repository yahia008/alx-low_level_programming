#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 if successful, -1 on failure or if the file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int content_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd  == -1)
		return (-1);

	if (text_content)
	{
		content_len = _strlen(text_content);

		if (write(fd, text_content, content_len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: String to count.
 *
 * Return: String length.
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	return (counter);
}

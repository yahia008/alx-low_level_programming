#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 * @filename: Pointer to the file name.
 * @text_content: Pointer to the content string to write to the file.
 *
 * Return: On failure or if filename is NULL - (-1).
 * Otherwise - (1).
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, result = -1, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	result = write(file_des, text_content, length);

	if (result < 0)
	{
		close(file_des);
		return (-1);
	}

	close(file_des);
	return (1);
}


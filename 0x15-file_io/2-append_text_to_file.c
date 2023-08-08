#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the file created.
 * @text_content: The string to add to the end of the file.
 *
 * Return: (1) if successful, (-1) on failure or if the file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int length;

	if (!filename)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);

	if (text_content)
	{
		length = strlen(text_content);

		if (write(file_des, text_content, length) == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}

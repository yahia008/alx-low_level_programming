#include "main.h"

/**
 * read_textfile - This function reads the content of a file.
 * @filename: A pointer to a string containing the name of the file to be read.
 * @letters: The total number of letters to be read.
 * Return: 0 on failure or filename is NULL,
 * otherwise, the actual bytes read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_des, reader, writter;
	char *my_buff;

	if (filename == NULL)
		return (0);

	my_buff = malloc(sizeof(char) * letters);
	if (my_buff == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		free(my_buff);
		return (0);
	}

	reader = read(file_des, my_buff, letters);
	if (reader == -1)
	{
		free(my_buff);
		close(file_des);
		return (0);
	}

	writter = write(STDOUT_FILENO, my_buff, reader);
	if (writter == -1)
	{
		free(my_buff);
		close(file_des);
		return (0);
	}

	free(my_buff);
	close(file_des);

	return (writter);
}

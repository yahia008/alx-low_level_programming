#include "main.h"

/**
 * main - Starting point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 on successful completion.
 */

void content_copy(const char *file, const char *dest);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	content_copy(argv[1], argv[2]);
	exit(0);
}

/**
 * content_copy - Copies the contents from one file to another.
 * @file: The source file name.
 * @dest: The destination file name.
 *
 * Return: Nothing.
 */
void content_copy(const char *file, const char *dest)
{
	int file_des, dest_locator, reader;
	char my_buff[1024];

	file_des = open(file, O_RDONLY);
	if (!file || file_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}

	dest_locator = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((reader = read(file_des, my_buff, 1024)) > 0)
	{
		if (write(dest_locator, my_buff, reader) != reader || dest_locator == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (close(file_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
	if (close(dest_locator) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_locator);
		exit(100);
	}
}

#ifndef FILE_HEADER
#define FILE_HEADER


#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
void file_copy(const char *src, const char *dest);
int _strlen(char *s);

#endif

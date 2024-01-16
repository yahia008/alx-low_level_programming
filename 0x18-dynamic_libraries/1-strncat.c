#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes from src to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

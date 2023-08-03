#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to a string,
 * containing only '0' and '1' characters.
 *
 * Return: If binary_string is NULL or contains characters,
 * other than '0' or '1', the function returns 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0,  baseVal = 1;
	int biLen = strlen(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = (biLen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		total += baseVal;
		baseVal *= 2;

	}

	return (total);

}

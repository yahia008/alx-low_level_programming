#include "main.h"

/**
 * binary_to_uint - Change a binary string to an unsigned int.
 * @b: A pointer to a string,
 * containing only '0' and '1' characters.
 *
 * Return: If binary_string is NULL or contains characters,
 * other than '0' or '1', the function returns 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, decVal = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)

		;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total += (b[i] - '0') * decVal;
		decVal *= 2;
	}

	return (total);
}

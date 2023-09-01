#include "main.h"

/**
 * binary_to_uint - Changes a binary string to an unsigned int.
 * @b: A pointer to a string,
 * containing only '0' and '1' characters.
 *
 * Return: If b is NULL or contains characters,
 * other than '0' or '1', the function returns 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, base = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)

		;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		result += (b[len] - '0') * base;
		base *= 2;
	}

	return (result);
}i

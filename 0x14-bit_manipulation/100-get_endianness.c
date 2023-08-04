#include "main.h"

/**
 * get_endianness - Determines the endiannes if little or big.
 *
 * Return: If the system is big - Returns 0.
 *         If the system is little - Returns 1.
 */

int get_endianness(void)
{
	int num = 1;
	char *byte_iterator = (char *)&num;

	if (*byte_iterator == 1)
		return (1);

	return (0);
}

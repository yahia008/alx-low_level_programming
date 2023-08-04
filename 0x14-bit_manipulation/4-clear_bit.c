#include "main.h"

/**
 * clear_bit - Clears a particular bit at the given index,
 * setting its value to 0.
 * @n: A pointer to the number from which the bit will be cleared.
 * @index: The index of the bit to be cleared (indices start at 0).
 *
 * Return: 1 if working, or -1 when error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

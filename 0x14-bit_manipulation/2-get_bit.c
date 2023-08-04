#include "main.h"

/**
 * get_bit - Fetch the value of a specific bit at the given index.
 * @n: The number from which the bit is to be fetched.
 * @index: The index of the bit to be fetched (indices start at 0).
 *
 * Return: If the index is out of range - Returns -1.
 * Otherwise - Returns the value of the bit at the given index (0 or 1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
		int result = 0;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}


		result = (n & (1UL << index)) ? 1 : 0;


	return (result);
}

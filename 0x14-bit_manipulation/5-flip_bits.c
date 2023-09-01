#include "main.h"

/**
 * flip_bits - Determines the count of bits that need to be flipped
 *             to convert one number into another.
 * @n: The first number.
 * @m: The target number to convert n into.
 *
 * Return: The count of bits that must be flipped to transform n into m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_operation  = n ^ m;
	unsigned int count = 0;

	while (xor_operation > 0)
	{
		count += (xor_operation & 1);
		xor_operation >>= 1;
	}
	return (count);
}

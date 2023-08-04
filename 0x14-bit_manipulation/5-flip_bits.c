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
	unsigned long int xor = (n ^ m);
	unsigned int bit_flip = 0;

	while (xor > 0)
	{
		bit_flip += (xor & 1);
		xor >>= 1;
	}
	return (bit_flip);
}

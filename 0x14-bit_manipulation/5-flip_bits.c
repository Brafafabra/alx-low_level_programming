#include "main.h"

/**
 * flip_bits - Return the number of bits to flip to get from n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m; /* Perform XOR operation to get differing bits */
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1; /* Increment count if the last bit is 1 */
		diff >>= 1; /* Right-shift diff to check the next bit */
	}

	return (count);
}

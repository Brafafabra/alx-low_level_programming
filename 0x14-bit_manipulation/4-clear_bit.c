#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: Pointer to the number
 * @index: The index of the bit to clear (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is greater than the number of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Set the bit at the given index to 0 using bitwise AND operation with a mask */
	*n = *n & ~(1UL << index);

	return (1);
}

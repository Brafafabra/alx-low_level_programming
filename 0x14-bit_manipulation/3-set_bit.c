#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: Pointer to the number
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is greater than the number of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Set the bit at the given index to 1 using bitwise OR operation */
	*n = *n | (1UL << index);

	return (1);
}

#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: The number
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: The value of the bit at the given index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Declaration of mask at the beginning of the block */
    unsigned long int mask = 1UL << index;

    /* Check if the index is greater than the number of bits in unsigned long int */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    /* Check if the bit at the given index is 1 or 0 */
    return ((n & mask) ? 1 : 0);
}

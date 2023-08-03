#include "main.h"

/**
 * get_endianness - Check the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *)&num;

	if (*endian_check)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}

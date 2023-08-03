#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Convert binary number to unsigned int
 * @b: Pointer to the binary string (0s and 1s)
 *
 * Return: The converted number, or 0 if there is an invalid character in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
	}

	return (result);
}

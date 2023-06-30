#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* Find the length of the destination string */
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	/* Append the characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add null-terminating character */
	dest[dest_len] = '\0';

	return dest;
}

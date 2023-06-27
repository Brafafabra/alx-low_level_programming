#include <unistd.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		write(1, &str[start], 1);
		start++;
	}

	write(1, "\n", 1);
}

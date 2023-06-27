#include <unistd.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate over the characters of the string */
	while (str[i] != '\0')
	{
		/* Print the character */
		write(1, &str[i], 1);

		/* Move to the next character (every other character) */
		i += 2;
	}

	write(1, "\n", 1);
}

#include <stdio.h>

/**
 * _putchar - Custom function to print a single character
 * @c: The character to be printed
 *
 * Return: On success, return the character printed.
 *         On error, return EOF.
 */
int _putchar(char c);

/**
 * main - Entry point of the program
 *
 * Description: This function prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
}

/**
 * _putchar - Custom function to print a single character
 * @c: The character to be printed
 *
 * Description: This function prints a single character to the standard output.
 *
 * Return: On success, return the character printed.
 *         On error, return EOF.
 */
int _putchar(char c)
{
return putchar(c);
}


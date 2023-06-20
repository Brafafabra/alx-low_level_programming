#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function print the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet followed by a new line.
 *              
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}


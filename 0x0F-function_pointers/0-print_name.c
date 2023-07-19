#include <stdio.h>

/**
 * print_name - Prints a name using a specified printing function.
 * @name: Pointer to the name string.
 * @f: Pointer to the printing function.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
